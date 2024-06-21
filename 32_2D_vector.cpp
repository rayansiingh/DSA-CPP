#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // create 2D vector
    vector<vector<int>> matrix(3, vector<int>(4, 1));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }

    cout << endl;
    cout << matrix.size(); // printing number of rows
    cout << endl;
    cout << matrix[0].size(); // printting number of columns

    // printing wave form

    /*
    // taking rows and cols from the user
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of cols: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    // taking elements form the user
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // printing the vector
    for (int j = 0; j < cols; j++)
    {
        if (j % 2 == 0)
        {
            // if col is even then print from top to bottom
            for (int i = 0; i < rows; i++)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
        {
            // if col is odd then print from bottom to top
            for (int i = rows - 1; i >= 0; i--)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
    */
}