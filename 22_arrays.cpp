#include <iostream>
#include <climits>
#include <limits.h>
using namespace std;

int main()
{
    // not declaring size of array isn't a good practice
    // size of array is 5 and if you're trying to access the 6th element then be ready for garbage value
    // diff ways to input values in array

    int a[5] = {11, 22, 33, 44, 55};
    int b[] = {11, 22}; // will automatically create an array of size 2
    // taking inputs from user;
    int c[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> c[i];
    }
    int d[5] = {11, 22}; // on other location there'll 0
    int e[5] = {0};      // 0 in all 5 locations and only valid for 0

    // size of array
    int arr[5] = {11, 23, 1, 7, 5};
    cout << sizeof(arr) << endl; // no of elements * size of one element

    // no of elements in an array
    int num[5] = {1, 4, 2, 4, 3};
    cout << sizeof(num) / sizeof(num[0]) << endl;

    return 0;
}

// min and max element in an array

// int main()
// {
//     int arr[5] = {2, -333, 1, 3, 8};

//     // for min value
//     int minimum = arr[1];
//     // int minimum = INT_MAX; // or you can use this

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < minimum)
//             minimum = arr[i];
//     }
//     cout << "min value: " << minimum << endl;

//     // for max value
//     int maximum = arr[1];
//     // int maximum = INT_MIN; // or you can use this
//     for (int j = 0; j < 5; j++)
//     {
//         if (arr[j] > maximum)
//             maximum = arr[j];
//     }
//     cout << "max value: " << maximum << endl;

//     return 0;
// }

// sum of elements of an array

// int main()
// {
//     int arr[5];
//     cout << "enter: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     // sum
//     int sum = 0;
//     for (int j = 0; j < 5; j++)
//     {
//         sum = sum + arr[j];
//     }
//     cout << "sum is: " << sum;

//     return 0;
// }