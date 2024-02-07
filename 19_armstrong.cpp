#include <iostream>
using namespace std;

// Armstrong number check
int countdigit(int num) // to count number of digits in the input
{
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }

    return count;
}

int pow(int rem, int digit) // to calculate power
{
    int val = 1;
    for (int x = 0; x < digit; x++)
    {
        val = val * rem;
    }
    return val;
}

bool Armstrong(int num, int digit) // actual code to check armstrong no.
{
    int temp = num, ans = 0, rem;
    while (temp)
    {
        rem = temp % 10;
        temp /= 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cout << "enter: ";
    cin >> num;

    int digit = countdigit(num);

    cout << Armstrong(num, digit);

    return 0;
}

// // small letters to capital letters conversion
// int main()
// {
//     for (char input = 'a'; input <= 'z'; input++)
//     {
//         char ans = (int)input - 32;
//         // char ans = input - 'a' + 'A'; // another way
//         cout << ans << endl;
//     }

//     return 0;
// }
