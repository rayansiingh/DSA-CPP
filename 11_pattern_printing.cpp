#include <iostream>
using namespace std;

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

int main()
{
    int row, col, n;
    cout << "Enter number: ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // space print

        for (col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }

        // star print

        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
};

//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

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

//         // no print increasing
//         for (col = 1; col <= row; col++)
//             cout << col << " ";

//         // no print decreasing
//         for (col = row - 1; col >= 1; col--)
//             cout << col << " ";

//         cout << endl;
//     }
// };

// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

// int main()
// {
//     int row, col, n;
//     cout << "Enter number: ";
//     cin >> n;

//     for (row = 5; row >= 1; row--)
//     {
//         // space print
//         for (col = 1; col <= n - row; col++)
//             cout << "  ";

//         // star print
//         for (col = 1; col <= 2 * row - 1; col++)
//             cout << "* ";

//         cout << endl;
//     }
// };

// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *

// int main()
// {
//     int row, col, n;
//     cout << "Enter no: ";
//     cin >> n;

//     for (row = n; row >= 1; row--)
//     {
//         // *print
//         for (col = 1; col <= row; col++)
//             cout << "* ";

//         // space print
//         for (col = 1; col <= 2 * (n - row); col++)
//             cout << "  ";

//         // *print
//         for (col = 1; col <= row; col++)
//             cout << "* ";

//         cout << endl;
//     }

//     for (row = 1; row <= n; row++)
//     {
//         // *print
//         for (col = 1; col <= row; col++)
//             cout << "* ";

//         // space print
//         for (col = 1; col <= 2 * (n - row); col++)
//             cout << "  ";

//         // *print
//         for (col = 1; col <= row; col++)
//             cout << "* ";

//         cout << endl;
//     }
// };

// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

// int main()
// {
//     int row, col, n;
//     cout << "Enter no: ";
//     cin >> n;

//     for (row = 1; row <= n; row++)
//     {
//         // print *
//         for (col = 1; col <= row; col++)
//             cout << "* ";

//         // space print
//         for (col = 1; col <= 2 * (n - row); col++)
//             cout << "  ";

//         // print *
//         for (col = 1; col <= row; col++)
//             cout << "* ";

//         cout << endl;
//     }

//     for (row = n - 1; row >= 1; row--)
//     {
//         // print *
//         for (col = 1; col <= row; col++)
//             cout << "* ";

//         // space print
//         for (col = 1; col <= 2 * (n - row); col++)
//             cout << "  ";

//         // print *
//         for (col = 1; col <= row; col++)
//             cout << "* ";

//         cout << endl;
//     }
// }

//    *
//   * *
//  * * *
// * * * *
// * * * *
//  * * *
//   * *
//    *

// int main()
// {
//     int row, col, n;
//     cout << "Enter number: ";
//     cin >> n;
//     for (row = 1; row <= n; row++)
//     {
//         // space print

//         for (col = 1; col <= n - row; col++)
//             cout << " "; // this is the main part here!!
//         // star print

//         for (col = 1; col <= row; col++)
//             cout << "* ";
//         cout << endl;
//     }

//     for (row = n; row >= 1; row--)
//     {
//         // space print

//         for (col = 1; col <= n - row; col++)
//             cout << " "; // this is the main part here!!
//         // star print

//         for (col = 1; col <= row; col++)
//             cout << "* ";
//         cout << endl;
//     }
// };
