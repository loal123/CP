#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
ll f[30005];
ll s[30005];
vector<ll> j;
void solve()
{
    int n;
    cin >> n;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> f[i] >> s[i];
        j.push_back(s[i]);
    }
    sort(j.rbegin(), j.rend());
    ll best1 = j[0];
    int best_location;

    int m = 1;
    for (int i = 0; i < n; i++)
    {
        if (best1 == s[i])
        {
            best_location = i;
        }
    }
    for (int i = 0; i < n; i++)
        for (int i = 0; i < n; i++)
        {
            // if (f[i] == idk)
            if (j[m] == s[i])
            {
                if (f[i] == f[best_location]  ) {
                    
                }
                
            }
        }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}