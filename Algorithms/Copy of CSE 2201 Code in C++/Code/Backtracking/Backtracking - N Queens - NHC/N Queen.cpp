#include<bits/stdc++.h>
using namespace std;

#define N 4

int board[N][N];

void printBoard()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }

    cout << endl;
}

bool isSafe(int row, int column)
{
    int i, j;

    //Check row on left side
    for(i=0; i<column; i++)
        if(board[row][i])
            return false;

    //Check upper diagonal on left side
    for(i=row, j=column; i>=0 && j>=0; i--, j--)
        if(board[i][j])
            return false;

    //Check lower diagonal on left side
    for(i=row, j=column; i<N && j>=0; i++, j--)
        if(board[i][j])
            return false;

    return true;
}

void nqueen(int column)
{
    int i, j;
    //If N = 4 then column will be 0 1 2 3
    //If column == 4 then we are in base case. Able to put queens in all column.
    if(column == N)
    {
        printBoard();
        return;
    }

    //Try to put queen in every row of a column if necessary.
    for(int row = 0; row < N; row++)
    {
        if(isSafe(row, column))
        {
            board[row][column] = 1;
            //Now find the position for next column
            nqueen(column+1);
            //Backtracking.
            board[row][column] = 0;
        }
    }

}

int main()
{
    int i, j;

    //Initialization. There is no queen.
    for(i=0; i<N; i++)
        for(j=0; j<N; j++)
            board[i][j] = 0;

    nqueen(0);

    return 0;
}
