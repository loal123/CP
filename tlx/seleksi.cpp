#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<string> ss;
    for (int i = 0; i < n; i++)
    {
        string l;
        cin >> l;
        ss.push_back(l);
        vector<int> aa;
        for (int j = 0; j < 3; j++)
        {
            int a;
            cin >> a;
            aa.push_back(a);
        }
    }
    for (int j = 2; j >= 0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}