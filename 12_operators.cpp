#include <iostream>
using namespace std;

// post and pre increment

int main()
{
    int a = 10, b = 10, c = 10, d = 10;
    cout << a++;
    cout << endl;
    cout << ++b;
    cout << endl;
    cout << c--;
    cout << endl;
    cout << --d;
};

// comparison operator <, >, <=, >=, == and !=
// precedence {>, <, >=, <=} >{==, !=}

// logical operator {&&, ||, !}

// int main()
// {
//     cout << (2 && 3) << endl;
//     cout << (0 && 5) << endl;
//     cout << (0 && 0) << endl;

//     cout << (3 || 5) << endl;
//     cout << (3 || 0) << endl;
//     cout << (0 || 0) << endl;

//     cout << !10;
//     cout << !0;
// };

// bitwise operator {&, |, ^, ~, <<, >>}

// int main()
// {
//     int a = 2 & 3;
//     cout << a << endl;

//     int b = 2 | 3;
//     cout << b << endl;

//     int c = 2 ^ 3; // if we are same then 0 otherwise 1
//     cout << c << endl;

//     int d = 4 >> 2; // num divided by 2 power x
//     cout << d << endl;

//     int e = 4 << 2; // num multiplied by 2 power x
//     cout << e << endl;

//     int f = ~3; // -(num + 1)
//     cout << f << endl;
// }
