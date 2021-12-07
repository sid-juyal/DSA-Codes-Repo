#include<bits/stdc++.h>
using namespace std;
bool canPlace(int mat[][9],int i, int j,int n, int number)
{
    for(int x=0;x<n;x++)
    {
        //Row and Column Check
        if(mat[x][j]==number || mat[i][x]==number)
        {
            return false;
        }
    }
    int root=sqrt(n);
    //sx,sy is the first cell of corresponding sub-grid of 3*3 cells
    int sx=(i/root)*root;
    int sy=(j/root)*root;
    for(int x=sx;x<sx+root;x++)
    {
        for(int y=sy;y<sy+root;y++)
        {
            if(mat[x][y]==number)
            {
                return false;
            }
        }
    }
    return true;
}
bool Solve_Sudoko(int mat[][9],int i,int j,int n)
{
    //Base Case
    if(i==n)
    {
        //Print the matrix
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    //Case: if row ends then proceed to first element of next row
    if(j==n)
    {
        return Solve_Sudoko(mat,i+1,0,n);
    }
    //Case: Skip the Pre-filled cells
    if(mat[i][j]!=0)
    {
        return Solve_Sudoko(mat,i,j+1,n);
    }
    //Recursive Case
    //Fill the current cell with possible options from 1 to 9.
    for(int number=1;number<=n;number++)
    {
        if(canPlace(mat,i,j,n,number))
        {
            //Assume we can place the number correctly
            mat[i][j]=number;
            bool could_we_solve=Solve_Sudoko(mat,i,j+1,n);
            if(could_we_solve==true)
            {
                return true;
            }
        }
    }
    //Backtrack
    mat[i][j]=0;
    return false;
}

int main()
{
    int mat[9][9]=
        {
            {5,3,0,0,7,0,0,0,0},
            {6,0,0,1,9,5,0,0,0},
            {0,9,8,0,0,0,0,6,0},
            {8,0,0,0,6,0,0,0,3},
            {4,0,0,8,0,3,0,0,1},
            {7,0,0,0,2,0,0,0,6},
            {0,6,0,0,0,0,2,8,0},
            {0,0,0,4,1,9,0,0,5},
            {0,0,0,0,8,0,0,7,9}
        };
    Solve_Sudoko(mat,0,0,9);
    return 0;
}
