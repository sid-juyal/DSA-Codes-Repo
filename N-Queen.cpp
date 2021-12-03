#include<bits/stdc++.h>
using namespace std;
int cnt=0;
bool isSafe(int board[][10],int i,int j, int n)
{
    //You can check for column
    for(int row=0;row<i;row++)
    {
        if(board[row][j]==1)
        {
            return false;
        }
    }
    //You can check for the Left diagonal
    int x=i;
    int y=j;
    while(x>=0 && y>=0)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x--;
        y--;
    }
    //You can check for the Right diagonal
    x=i;
    y=j;
    while(x>=0 && y<n)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x--;
        y++;
    }
    return true;
}
bool solveNqueen(int board[][10],int i, int n)
{
    //Base case
    if(i==n)
    {
        //You have successfully placed queens in n rows (0,...n-1)
        //print the board
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==1)
                {
                    cout<<"Q ";
                }
                else
                {
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        cnt++;
        return false;   //If this is true then it prints a single valid answer. (With false it prints all possible answers).
    }
    //Recursive code
    //Try to place the queen in the current row and call on the remaining part which will be sorted by recursion
    for(int j=0;j<n;j++)
    {
        if(isSafe(board,i,j,n))
        {
            //place the Queen assuming i,j as correct position
            board[i][j]=1;
            bool NextQueenRakhPaaye=solveNqueen(board,i+1,n);
            if(NextQueenRakhPaaye)
            {
                return true;
            }
            // Means i,j are not the correct position (it means assumption was wrong)
            board[i][j]=0; // Backtrack
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int board[10][10]={0};
    solveNqueen(board,0,n);
    cout<<endl<<cnt<<endl;
    return 0;
}
