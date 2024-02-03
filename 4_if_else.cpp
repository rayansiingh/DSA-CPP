#include <iostream>
using namespace std;

int main()
{
    // taking inputs
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Sum of numbers is " << a + b << endl;

    // typecasting
    int x = 10;
    char y = 'a';
    x = y;
    cout << x << endl;

    int p = 65;
    char q = 'd';
    cout << q << endl;
    q = p;
    cout << q;
};

// if else statement
/*
int main()
{
    int package;
    cout << "Enter the package amount: ";
    cin >> package;

    if (package > 10)
    {
        cout << "Offer accepted";
    }
    else if (package == 10)
    {
        cout << "I'll think";
    }
    else
    {
        cout << "Offer rejected";
    }
};
*/

// for loops

// int main()
// {
//     int num;
//     cout << "Enter number: ";
//     cin >> num;

//     for (int i = 1; i <= num; i = i + 2)
//     {
//         cout << i << endl;
//     }
// };
