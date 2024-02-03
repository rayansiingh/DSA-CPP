#include <iostream>
using namespace std;

// printing a to z using loop

int main()
{
    char name;
    for(name = 'a'; name<='z'; name++)
    {
        cout<<name<<" ";
    }
};

// printing num form 10 to 1

// int main()
// {
//     int num;
//     cout << "Enter num: ";
//     cin >> num;

//     for (num; num >= 1; num--)
//     {
//         cout << num << " ";
//     }
// };

// int main()
// {
//     int num;
//     // cout << "Enter num: ";
//     // cin >> num;

//     for (num = 1; num <= 100; num = num + 3)
//     {
//         cout << num << endl;
//     }
// };

// power of a number

// int main()
// {
//     int n, pow, i, num;
//     cout << "Enter num: ";
//     cin >> n;
//     cout << "Enter pow: ";
//     cin >> pow;

//     num = n;
//     for(i=1; i<pow; i++)
//     {
//         num = num*n;
//     }

//     cout<<num;
// };

// factorial

// int main()
// {
//     int n, i, fact = 1;
//     cout << "Enter the number: ";
//     cin >> n;

//     for (i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     cout << fact;
// };

// check whether prime number

// int main()
// {
//     int n, i;
//     cout << "Enter number: ";
//     cin >> n;

//     if (n < 2)
//     {
//         cout << "Not prime";
//         return 0;
//     }
//     else
//     {
//         for (i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 cout << "Not prime";
//                 return 0;
//             }
//         }
//         cout << "Prime";
//         return 0;
//     }
//     return 0; // here return zero isn't necessary
// };

// fibonacci series
// 0 1 1 2 3 5 8 13 21.......

// int main()
// {
//     int curr, prev, next, i, n;
//     cout << "Enter till how much you wanna print: ";
//     cin >> n;
//     prev = -1;
//     curr = 1;
//     for (i = 1; i <= n; i++)
//     {
//         next = curr + prev;
//         cout << next << endl; // if you want full series
//         prev = curr;
//         curr = next;
//     }
//     // cout << next; // if you want to print the nth no.
//     return 0;
// };
