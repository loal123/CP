#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout); // REMBEMBER TO COMMENT THIS BEFORE SUBMITTING

    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int ans = 0;
    int m;
    cin >> m;
    vector<vi> b(m);
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int z;
            cin >> z;
            b[i].pb(z);
        }
    }
    for (auto i : b)
    {
        bool can = true;
        for (auto j : i)
        {
            if (s.count(j))
                can = 0;
        }
        ans += can;
    }
    cout << ans;
}