#include <iostream>
#include <math.h>
using namespace std;

// Armstrong number check
int countdigit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

bool Armstrong(int num, float digit)
{
    int n = num, ans = 0;
    float rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = (ans + pow(rem, digit));
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

    // count digit
    float digit = countdigit(num);
    // armstrong
    cout << Armstrong(num, digit);
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
