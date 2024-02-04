#include <iostream>
using namespace std;

// added default parameters here
int Sum(int m = 100, int n = 200) // Function declare
{
    int ans = m + n; // Function define
    return ans;
}

void fun() // declaring a void function
{
    cout << "Hello bachoooooo!!!!\n"; // in Alakh Pandey's voice lol
}

int main()
{
    int a, b;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;

    // Function call
    cout << Sum(a, b) << endl;

    fun(); // calling void function

    cout << Sum() << endl; // here the function used default parameters

    return 0;
}

// // Using pass by value to swap two numbers
// void swap(int x, int y)
// {
//     int z;
//     z = x;
//     x = y;
//     y = z;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     swap(a, b);
//     cout << a << " " << b << endl;
//     cout << "The values aren't swapped";

//     return 0;
// }

// // Using pass by reference to swap two numbers
// void swap(int &x, int &y)
// {
//     int z;
//     z = x;
//     x = y;
//     y = z;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     swap(a, b);
//     cout << a << " " << b << endl;
//     cout << "The values are swapped now";

//     return 0;
// }

// // Function overloading is a feature of object-oriented programming where
// // two or more functions can have the same name but different parameters.
// // When a function name is overloaded with different jobs it is called Function Overloading.

// // same name function but different data type
// void swap(int &x, int &y)
// {
//     int z;
//     z = x;
//     x = y;
//     y = z;
// }

// // function overloading
// void swap(float &p, float &q)
// {
//     float r;
//     r = p;
//     p = q;
//     q = r;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     swap(a, b);
//     cout << a << " " << b << endl;
//     cout << "The values are swapped now" << endl;

//     float i = 2.2, j = 3.3;
//     swap(i, j); // they'll to go float swap function
//     cout << i << " " << j << endl;
//     cout << "both float values are swapped";

//     return 0;
// }
