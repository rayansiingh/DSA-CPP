#include <iostream>
using namespace std;

// sort in increasing order
// in this smallest comes to first
int main()
{
    int arr[1000];
    int n;
    cout << "enter no of elements: ";
    cin >> n;
    cout << "enter the elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) // number of rounds
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
    // for printing ordered array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// // now greatest will go to last

// int main()
// {
//     int arr[5] = {10, 4, 3, 2, 8};
//     for (int i = 5 - 1; i > 0; i--)
//     {
//         int index = i;
//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (arr[j] > arr[index])
//                 index = j;
//         }

//         swap(arr[i], arr[index]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// now greatest will go to last but loop will start from the beginnign
// int main()
// {
//     // for inserting elements
//     int arr[1000];
//     int n;
//     cout << "enter no of elements: ";
//     cin >> n;
//     cout << "enter the elements: ";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // main part
//     for (int i = 0; i < n - 1; i++)
//     {
//         int index = 0;
//         for (int j = 0; j < n - i; j++)
//         {
//             if (arr[j] > arr[index])
//             {
//                 index = j;
//             }
//         }
//         swap(arr[index], arr[(n - 1) - i]);
//     }

//     // for printing ordered array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// for array of characters
// int main()
// {
//     char arr[1000];
//     int n;
//     cout << "enter no of elements: ";
//     cin >> n;
//     cout << "enter the elements: ";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++) // number of rounds
//     {
//         int index = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[index])
//             {
//                 index = j;
//             }
//         }
//         swap(arr[index], arr[i]);
//     }
//     // for printing ordered array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }