#include <iostream>
using namespace std;

// while loop

// initialize
// break condition
// update

int main()
{
    int n, i;
    cout << "Enter number: ";
    cin >> n;
    i = 1;

    while (i <= 10)
    {
        cout << n * i << endl;
        i++;
    }
};

// do while loop

// initialize
// update
// break condition

// int main()
// {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     int i = 1;
//     do
//     {
//         cout << i * n << endl;
//         i++;
//     } while (i <= 10);
// };

// break

// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i == 7)
//             break;

//         cout << i << " ";
//     }
// }

// continue with for loop

// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i % 4 == 0)
//             continue;

//         cout << i << endl;
//     }
//     cout << "print this line";
// }

// continue with while loop

// yaha par continue ke baad yeh
// infinite loop me phas gya haii
// because iteration nhi badh rahi

// int main()
// {
//     int i = 1;
//     while (i <= 10)
//     {
//         if (i % 4 == 0)
//             continue;
//         cout << i << endl;
//         i++;
//     }
//     cout << "print this line";
// }

// solution of above code

// int main()
// {
//     int i = 0;
//     while (i < 10)
//     {
//         i++;
//         if (i % 4 == 0)
//             continue;
//         cout << i << endl;
//     }
//     cout << "print this line";
// }

// switch case

// int main()
// {
//     int i;
//     cout << "Enter number: ";
//     cin >> i;

//     // i can be char also
//     switch (i)
//     {
//     case 1:
//         cout << "Mohit";
//         // agar break hata diya toh neeche ke sabhi values print ho jayenge
//         break;
//     case 2:
//         cout << "Sohit";
//         break;

//     default:
//         cout << "Rohit";
//         break;
//     }
// }

// scope of a variable

// int main()
// {
//     int num = 10;
//     cout << num;
//     // the below statement isn't allowed cause
//     // you can't delcare same var more than once in the same block of code
//     int num;
// }

// but this is allowed

// int main()
// {
//     int n = 10;
//     if (n == 10)
//     {
//         // here allowed cause diff block
//         int num = 20;
//         cout << num;
//     }
//     return 0;
// }
