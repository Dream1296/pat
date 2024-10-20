#include <iostream>
#include <map>
#include <vector>

using namespace std;
using ll = long long;
const int N = 1e5 + 9;

void solve()
{
    map<string, int> mp;
    vector<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp.count(s))
        {
            mp[s]++;
        }
        else
        {
            v.push_back(s);
            mp[s] = 1;
        }
    }

    for (auto &i : v)
    {
        cout << i << ' ' << mp[i] << '\n';
    }
}

int main()
{
    int n ;
    cin >> n;
    while (n--)
    {
        solve();
    }
    

    return 0;
}