// I dump test codes here

#include <iostream>
using namespace std;

int main()
{
    int base = 2, power = 3, ans = 1;
    for(int i = 0; i < 3; i++)
    {
        ans = ans * base;
    }
    cout << ans;
    return 0;
}