#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'a', 'p', 'p', 'l', 'e'};
    cout << arr;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    /*
    string s;
    // cin >> s; // give anything with space as input
    getline(cin, s);
    cout << s << endl;
    cout << s.size();
    */

    /*
    string s1 = "Rayan";
    string s2 = "Singh";
    // string s3 = s1 + s2;
    string s3 = s1.append(s2);
    cout << s3;
    cout << endl;
    s1.push_back('p');
    s2.pop_back();
    */

    // string s = "rayan is a \"student\"";
    // cout << s;

    /*
    // reverse the string
    string s = "rayan";

    int start = 0, end = s.size() - 1;

    while (start < end)
    {
        swap(s[start], s[end]);
        start++, end--;
    }
    cout << s << endl;

    // calculating length without using function

    int size = 0;
    while (s[size] != '\0')
    {
        size++;
    }
    cout << size << endl;

    // pallindrome or not
    string ss = "naman";
    start = 0, end = ss.size() - 1;

    while (start < end)
    {
        if (ss[start] != ss[end])
        {
            cout << "not a pallindrome";
            return 0;
        }
        start++, end--;
    }
    cout << "it is a pallindrome";
    */
}