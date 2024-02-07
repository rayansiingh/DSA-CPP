#include <iostream>
using namespace std;

// reverse array
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int start = 0, end = 5;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    // printing reversed array
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// // fibonacci series using array
// int main()
// {
//     int n;
//     cout << "enter the number: ";
//     cin >> n;
//     int arr[1000];

//     // initialize first and second
//     arr[0] = 0;
//     arr[1] = 1;

//     for (int i = 2; i <= n - 1; i++)
//         arr[i] = arr[i - 1] + arr[i - 2];

//     cout << arr[n - 1]; // printing the last digit

//     return 0;
// }

// // passing array in a function
// void fun(int a[], int n)
// {
//     cout << sizeof(a) << endl; // shows a[] isn't an array it's a pointer
//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";
// }

// int main()
// {
//     int arr[5] = {1, 33, 2, 4, 3};
//     cout << sizeof(arr) << endl; // will print size of array
//     fun(arr, 5);
// }