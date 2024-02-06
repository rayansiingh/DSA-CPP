// I dump my doubts here

// doubt no 1
// this is a code to check if the no is armstrong or not and return a boolean value
// when i'm running this code on my vs code it gives wrong output
// ex - when i input 153 which is an armstrong no it return 0 instead of 1
// but when i run the same code in an online cpp compiler with the same input i.e. 153 it return 1 why
/*
#include <iostream>
#include <math.h>
using namespace std;

float countdigit(int n)
{
    float count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }

    return count;
}

bool Armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
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

    float digit = countdigit(num);

    cout << Armstrong(num, digit);

    return 0;
}
*/
