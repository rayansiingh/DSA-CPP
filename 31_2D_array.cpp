#include <iostream>
#include <limits.h>
using namespace std;

/*
passing col is imp here cause
index = base_address + (row_index * col +col_index) * size of element
here we need the col
*/
void printcol(int arr[][4], int row, int col)
{
    // for col wise
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][j] << endl;
        }
    }
}

void printrowmax(int arr[][4], int row, int col)
{
    int index = -1;
    int sum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];

            if (total > sum)
            {
                sum = total;
                index = i;
            }
        }
    }
    cout << index;
}

void printsumdig(int matrix[][3], int row, int col)
{
    int first = 0;
    int second = 0;

    // first diangonal sum
    int i = 0;
    while (i < row)
    {
        first += matrix[i][i];
        i++;
    }

    // second diagonal sum
    i = 0;
    int j = col - 1;
    while (j >= 0)
    {
        second += matrix[i][j];
        i++, j--;
    }

    cout << first << " " << second;
}

int main()
{
    // create 2 d array
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // printing the array row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << endl;
        }
    }

    // printing the array col wise using function
    printcol(arr, 3, 4);

    // Adding two 2d matrix

    /*
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int ans[3][4];

    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
        {
            ans[row][col] = arr1[row][col] + arr2[row][col];
        }

    // printing
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
        {
            cout << ans[row][col] << " ";
        }
        */

    // print row index with max sum
    /*
    int arr[3][4] = {100, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printrowmax(arr, 3, 4);
    */

    // print sum of diagonal
    /*
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printsumdig(matrix, 3, 3);
    */

    // revrse each row of matrix
    /*
    int matrix[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int row = 2, col = 4;
    for (int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1;

        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }

    // printing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
    */
};