#include <iostream>
using namespace std;
// * * * * *
// * * * * *
// * * * * *
// * * * * *

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
};

// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << row << " ";
//         }
//         cout << endl;
//     }
// }

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// };

// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 5; col >= 1; col--)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// };

// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << col * col << " ";
//         }
//         cout << endl;
//     }
// }

// 1 8 27 64 125
// 1 8 27 64 125
// 1 8 27 64 125
// 1 8 27 64 125
// 1 8 27 64 125

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << col * col * col << " ";
//         }
//         cout << endl;
//     }
// }

// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e

// int main()
// {
//     char row, col;

//     for (row = 1; row <= 5; row++)
//     {
//         char name = 'a' + (row - 1);
//         for (col = 1; col <= 5; col++)
//         {
//             cout << name << " ";
//         }
//         cout << endl;
//     }
// }

// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e

// int main()
// {
//     int row;
//     char col;

//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 'a'; col <= 'e'; col++)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

// int main()
// {
//     int row, col;
//     int count = 1;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }
// }

// another method

// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << (row - 1) * 5 + col << " ";
//         }
//         cout << endl;
//     }
// }
