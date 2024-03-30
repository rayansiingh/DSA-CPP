#include <iostream>
using namespace std;

// // bubble sort increasing order from the start
int main()
{
    int arr[1000];
    int n;
    cout << "enter no of elements: ";
    cin >> n;

    // for inserting elements
    cout << "enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // swapping
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }

    // for printing swapped array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// // bubble sort decreasing order from the start
// int main()
// {
//     int arr[1000];
//     int n;
//     cout << "enter no of elements: ";
//     cin >> n;

//     // for inserting elements
//     cout << "enter the elements in the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // swapping
//     for (int i = n - 2; i >= 0; i--)
//     {
//         bool swapped = 0;
//         for (int j = 0; j <= i; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 swapped = 1;
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//         if (swapped == 0)
//         {
//             break;
//         }
//     }

//     // for printing swapped array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// bubble sort increasing order from the end
// int main()
// {
//     int arr[1000];
//     int n;
//     cout << "enter no of elements: ";
//     cin >> n;

//     // for inserting elements
//     cout << "enter the elements in the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // swapping
//     for (int i = 1; i <= n - 1; i++)
//     {
//         bool swapped = 0;
//         for (int j = n - 1; j >= i; j--)
//         {
//             if (arr[j] < arr[j - 1])
//             {
//                 swapped = 1;
//                 swap(arr[j], arr[j - 1]);
//             }
//         }
//         if (swapped == 0)
//         {
//             break;
//         }
//     }

//     // for printing swapped array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }