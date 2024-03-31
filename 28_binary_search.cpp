#include <iostream>
using namespace std;

// for acending order array
int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2; // mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            start = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n;
    cout << "enter size of array: ";
    cin >> n;

    // getting elements from the user
    cout << "enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the element you want to find: ";
    int key;
    cin >> key;

    cout << BinarySearch(arr, n, key);

    return 0;
}


// // for descending order array
// int BinarySearch(int arr[], int n, int key)
// {
//     int start = 0, end = n - 1, mid;

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2; // mid = (start + end) / 2;

//         if (arr[mid] == key)
//             return mid;

//         else if (arr[mid] < key)
//             end = mid - 1;

//         else
//             start = mid + 1;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[1000];
//     int n;
//     cout << "enter size of array: ";
//     cin >> n;

//     // getting elements from the user
//     cout << "enter the elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "enter the element you want to find: ";
//     int key;
//     cin >> key;

//     cout << BinarySearch(arr, n, key);

//     return 0;
// }