#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair

    // pair<int, int> p = {8, 2};
    // cout << p.second << " " << p.first;
    // cout << endl;
    // pair<int, pair<int, int>> c = {4, {5, 6}};
    // cout << c.second.second << " " << c.first << " " << c.second.first;
    // cout << endl;
    // pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}}; // 0 , 1, 2
    // cout << arr[2].first;

    // vector
    vector<int> v;
    v.push_back(1);
    v.emplace_back(8);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}