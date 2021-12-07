#include<bits/stdc++.h>
using namespace std;
bool rat_in_maze(char maze[10][10],int sol [10][10],int i,int j,int m, int n)
{
    if(i==m && j==n)
    {
        sol[m][n]=1;
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    //Inside the grid
    if(i>m || j>n)
    {
        return false;
    }
    if(maze[i][j]=='X')
    {
        return false;
    }
    //Assume solution exists through current cell
    sol[i][j]=1;
    bool rightSuccess=rat_in_maze(maze,sol,i,j+1,m,n);
    bool downSuccess=rat_in_maze(maze,sol,i+1,j,m,n);
    //Backtrack
    sol[i][j]=0;
    if(rightSuccess || downSuccess)
    {
        return true;
    }
    return false;
}
int main()
{
    char maze[10][10]={
                        "0000",
                        "00X0",
                        "000X",
                        "0X00",
    };
    int sol[10][10]={0};
    bool yes=rat_in_maze(maze,sol,0,0,3,3);
    if(yes==false)
    {
        cout<<"No path exists!";
    }
    return 0;
}
