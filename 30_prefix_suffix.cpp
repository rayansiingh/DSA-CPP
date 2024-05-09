#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// prfix
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> prefix(5);
    int n = prefix.size();
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
    cout << endl;

    // suffix
    int prr[5] = {1, 2, 3, 4, 5};
    vector<int> suffix(5);
    int m = suffix.size();
    suffix[m - 1] = prr[m - 1];

    for (int i = m - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + prr[i];
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << suffix[i] << " ";
    }
}

// sub array
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
2
2 3
2 3 4
2 3 4 5
3
3 4
3 4 5
4
4 5
5
*/

/*
int main()
{
    int arr[5] = {5, 32, 55, 4, 1};

    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
*/

// Array into 2 equal Sum Subarray
/*
bool divide(vector<int> arr)
{
    int total_sum = 0, prefix = 0, n = arr.size();
    // total sum
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];

        if (total_sum == 2 * prefix)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "enter size of vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << divide(v);
}
*/

// Maximum difference between two elements
/*
int main()
{
    int n;
    int arr[500];
    cout << "enter the size of array: ";
    cin >> n;
    cout << "enter elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int suffix = arr[n - 1];
    int ans = INT_MIN;
    for (int i = n; i > 0; i--)
    {
        ans = suffix - arr[i - 1];
        suffix = max(suffix, arr[i - 1]);
    }
    cout << "answer is: " << ans;
}
*/