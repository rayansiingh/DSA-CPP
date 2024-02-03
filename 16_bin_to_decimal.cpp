#include <iostream>
using namespace std;

// code to convert decimal to binary

int main()
{
    int num, rem, ans = 0, mul = 1;
    cout << "Enter num: ";
    cin >> num;

    while (num > 0)
    {
        // remainder
        rem = num % 2;
        // rem = num & 1; // can also use bitwise operator
        // num
        num /= 2;
        // num = num >> 1; // can also use bitwise operator
        // ans
        // ans += rem * mul; // similar to below line
        ans = rem * mul + ans;
        // mul update
        mul *= 10;
    }
    cout << ans << endl;
};

// binary to decimal

// int main()
// {
//     int num, rem, ans = 0, mul = 1;
//     cout << "Enter num: ";
//     cin >> num;

//     // while (num > 0)
//     while (num)
//     {
//         // remainder
//         rem = num % 10;
//         // num
//         num /= 10;
//         // ans
//         // ans += rem * mul;
//         ans = rem * mul + ans;
//         // mul update
//         mul *= 2;
//     }
//     cout << ans << endl;
// };

// decimal to octal

// int main()
// {
//     int num, rem, ans = 0, mul = 1;
//     cout << "Enter num: ";
//     cin >> num;

//     while (num > 0)
//     {
//         // remainder
//         rem = num % 8;
//         // num
//         num /= 8;
//         // ans
//         ans = rem * mul + ans;
//         // mul update
//         mul *= 10;
//     }
//     cout << ans << endl;
// };

// octal to decimal

// int main()
// {
//     int num, rem, ans = 0, mul = 1;
//     cout << "Enter num: ";
//     cin >> num;

//     // while (num > 0)
//     while (num)
//     {
//         // remainder
//         rem = num % 10;
//         // num
//         num /= 10;
//         // ans
//         // ans += rem * mul;
//         ans = rem * mul + ans;
//         // mul update
//         mul *= 8;
//     }
//     cout << ans << endl;
// };
