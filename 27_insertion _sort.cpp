#include <iostream>
using namespace std;

// increasing order shifting left
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
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

    // for printing swapped array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// inserting sort decreasing order shifting left
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
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = i; j > 0; j--)
//         {
//             if (arr[j] > arr[j - 1])
//             {
//                 swap(arr[j], arr[j - 1]);
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }

//     // for printing swapped array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// inserting sort increasing but shifting right
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
//         for (int j = i; j < n - 1; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }

//     // for printing swapped array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
