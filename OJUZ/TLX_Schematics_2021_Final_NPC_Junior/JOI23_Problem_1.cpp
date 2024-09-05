// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define vi vector<int>
// #define vl vector<ll>
// #define fi first
// #define se second
// #define pb push_back
// #define mp make_pair
// #define all(v) v.begin(), v.end()
// #define SZ(x) ((int)((x).size()))
// #define pow2(x) ((ll)(x) * (x))
// const ll mod = 1e9 + 7;
// const int INF = 1e9 + 5; // 998244353
// const ll INFF = 1e18 + 5;
// // Super is the cutest girl
// void solve()
// {
//     int n;
//     cin >> n;
//     map<int, bool> has;
//     stack<pii> st;
//     vector<pair<int, pii>> ranges;
//     vi v(n);
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v[i] = x;
//         if (has[x])
//         {
//             while (st.top().fi != x && !st.empty())
//             {
//                 has[st.top().fi] = 0;
//                 st.pop();
//             }
//             ranges.pb({st.top().fi, {st.top().se, i}});
//         }
//         else
//         {
//             has[x] = 1;
//             st.push({x, i});
//         }
//     }
//     int answer[n];
//     memset(answer, -1, sizeof(answer));
//     for (auto i : ranges)
//     {
//         for (int j = i.se.fi; j <= i.se.se; j++)
//             answer[j] = i.fi;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << (answer[i] == -1 ? v[i] : answer[i]) << '\n';
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt","w",stdout);
//     // int t; cin >> t; while(t--)
//     solve();
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    vi v(n + 1);
    map<int, vi> f;
    map<int, int> l;
    int maxi = 0;
    vector<pair<int, pii>> ranges;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        f[v[i]].pb(i);
        l[v[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        int pos = 0;

        if (i <= maxi)
            continue;
        if (i == l[v[i]])
            continue;
        maxi = l[v[i]];
        ranges.pb({v[i], {i, l[v[i]]}});
    }
    int answer[n + 1];
    memset(answer, -1, sizeof(answer));
    for (auto i : ranges)
    {
        for (int j = i.se.fi; j <= i.se.se; j++)
            answer[j] = i.fi;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << (answer[i] == -1 ? v[i] : answer[i]) << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}