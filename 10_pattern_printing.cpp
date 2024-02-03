#include <iostream>
using namespace std;

//         *
//       * *
//     * * *
//   * * * *
// * * * * *

int main()
{
    int row, col, n;
    cout << "Enter number: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        // space print

        for (col = 1; col <= n - row; col++)
            cout << "  ";
        // star print

        for (col = 1; col <= row; col++)
            cout << "* ";
        cout << endl;
    }
};

//         1
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5

// int main()
// {
//     int row, col, n;
//     cout << "Enter number: ";
//     cin >> n;
//     for (row = 1; row <= n; row++)
//     {
//         // space print

//         for (col = 1; col <= n - row; col++)
//             cout << "  ";
//         //  print

//         for (col = 1; col <= row; col++)
//             cout << row << " ";
//         cout << endl;
//     }
// };

//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

// int main()
// {
//     int row, col, n;
//     cout << "Enter number: ";
//     cin >> n;
//     for (row = 1; row <= n; row++)
//     {
//         // space print

//         for (col = 1; col <= n - row; col++)
//             cout << "  ";
//         //  print

//         for (col = 1; col <= row; col++)
//             cout << col << " ";
//         cout << endl;
//     }
// };

//         A
//       A B
//     A B C
//   A B C D
// A B C D E

// int main()
// {
//     int row, col, n;
//     cout << "Enter number: ";
//     cin >> n;
//     for (row = 1; row <= n; row++)
//     {
//         // space print

//         for (col = 1; col <= n - row; col++)
//             cout << "  ";
//         //  print

//         for (char name = 'A'; name <= 'A' + row - 1; name++)
//             cout << name << " ";
//         cout << endl;
//     }
// };

//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

// int main()
// {
//     int row, col, n;
//     cout << "Enter number: ";
//     cin >> n;
//     for (row = 1; row <= n; row++)
//     {
//         // space print
//         for (col = 1; col <= n - row; col++)
//         {
//             cout << "  ";
//         }

//         // print no
//         for (col = row; col >= 1; col--)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }
