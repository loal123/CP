#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
const int INF = 1e9 + 5;
const ll mod = 1e9 + 7;
const int maxn = 1e5 + 5;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)

    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> v(n);
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    if (s.size() == 1)
    {
        ll xd = v[0];

        ll answer = 0;
        ll curr = 0;
        for (ll i = 0; i < n; i++)
        {
            curr += xd;
            answer += (ll)curr * xd * (n - i);
            answer %= mod;
            answer += answer;
            answer %= mod;
        }

        cout << (answer + mod) % mod;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            ll maxi = -INF;
            ll currsum = 0;
            for (ll j = i; j < n; j++)
            {
                currsum += v[j];
                maxi = max(maxi, v[j]);

                ans += (ll)currsum * maxi;
                currsum %= mod;
                ans %= mod;
            }
        }
        cout << ans;
    }

    cout << endl;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vi vector<int>
// const int INF = 1e9 + 5;
// const ll mod = 1e9 + 7;
// const int maxn = 1e5 + 5;
// ll t[maxn * 4];
// void build(int a[], int v, int tl, int tr)
// {
//     if (tl == tr)
//         t[v] = a[tl];

//     else
//     {
//         int tm = (tl + tr) / 2;
//         build(a, v * 2, tl, tm);
//         build(a, v * 2 + 1, tm + 1, tr);

//         t[v] = max(t[v * 2], t[v * 2 + 1]);
//     }
// }
// void update(int v, int tl, int tr, int pos, int val)
// {
//     if (tl == tr)
//     {
//         t[v] =
//     }
//     int tm = (tl + tr) / 2;
// }
// ll find_max(int v, int tl, int tr, int l, int r)
// {
//     if (l > r)
//         return -INF;
//     if (tl == l && tr == r)
//         return t[v];
//     int tm = (tl + tr) / 2;
//     return max(find_max(v * 2, tl, tm, l, min(r, tm)), find_max(v * 2 + 1, tm + 1, tr, max(l, tm + 1), tr));
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int st[26][n + 1];
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= 25; i++)
//     {
//         for (int j = 0; j + (1 << i) < n; j++)
//         {
//             st[i][j] = max(st[i][j], st[i - 1][j + (1 << (i - 1))]);
//         }
//     }
// }
