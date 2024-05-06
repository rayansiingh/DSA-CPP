#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // create vector and declare
    vector<int> v;
    vector<int> v1(5, 1);

    // size and capacity
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    // update value
    v[1] = 5;

    // for v1
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;

    // now if add in v1 size and capacity will change
    v1.push_back(3);
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;

    vector<int> v3 = {1, 2, 3, 4, 5};
    cout << v3.size() << endl;

    // deleting elements
    vector<int> vnew;
    vnew.push_back(3);
    vnew.push_back(1);
    vnew.push_back(5);
    vnew.push_back(33);
    vnew.push_back(30);
    vnew.pop_back();

    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;

    vnew.erase(vnew.begin() + 1); // will earse element at index 1
    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;

    // printing
    for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << " ";
    }
    cout << endl;
    // inserting
    vnew.insert(vnew.begin() + 1, 50); // insert 50 at index 1
    // printing
    for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << " ";
    }
    cout << endl;

    vnew.clear(); // all elements deleted but memory isn't free yet
    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(22);
    arr.push_back(28);
    arr.push_back(15);
    arr.push_back(0);

    cout << arr.front() << endl;
    cout << arr[0] << endl;
    cout << arr.back() << endl;
    cout << arr[arr.size() - 1] << endl;

    // copying values of one vector to another
    vector<int> a;
    a = arr;
    cout << a.size() << endl;

    // to print whole array
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // to print whole array
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // sorting
    vector<int> ans;
    ans.push_back(021);
    ans.push_back(232);
    ans.push_back(23);
    ans.push_back(2005);
    ans.push_back(6);

    // decreasing order
    // sort(ans.begin(), ans.end(), greater<int>());
    sort(ans.rbegin(), ans.rend());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    // increasing order
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    // binary search
    cout << binary_search(ans.begin(), ans.end(), 2005) << endl;

    // finding index
    // minus cause it will only give an iterator
    cout << find(ans.begin(), ans.end(), 2005) - ans.begin() << endl;

    // upper and lowe bound

    vector<int> vec = {1, 2, 2, 3, 3, 3, 4, 5};

    // Find lower bound of 3
    auto lower = lower_bound(vec.begin(), vec.end(), 3);
    cout << "Lower bound of 3 is at index: " << distance(vec.begin(), lower) << endl;

    // Find upper bound of 3
    auto upper = upper_bound(vec.begin(), vec.end(), 3);
    cout << "Upper bound of 3 is at index: " << distance(vec.begin(), upper) << endl;

    return 0;
}