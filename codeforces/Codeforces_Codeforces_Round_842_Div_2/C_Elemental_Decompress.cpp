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
    vi v(n);
    vi cnt(n + 1, 0);
    vi pos[n + 1];
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
        pos[v[i]].pb(i);
    }
    vector<bool> has(n + 1, 0);
    priority_queue<int> pq;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] > 2)
        {
            cout << "NO\n";
            return;
        }
        for (int j = cnt[i]; j < 2; j++)
        {
            pq.push(i);
        }
    }
    for (int i = n; i >= 1; i--)
    {
        bool ab = true;
        for (auto j : pos[i])
        {
            if (pq.top() > i)
            {
                cout << "NO\n";
                return;
            }

            a[j] = i;
            b[j] = pq.top();
            

            if (has[b[j]] && ab)
                swap(a[j], b[j]);

            ab = !ab;
            pq.pop();

            has[i] = 1;
        }
    }
    cout << "YES\n";
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto i : b)
    {
        cout << i << ' ';
    }

    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}

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
//     vi v(n);
//     vi cnt(n + 1, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         cnt[v[i]]++;
//     }
//     map<int, queue<pii>> m;

//     vector<bool> have(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         if (cnt[i] >= 3)
//         {
//             cout << "NO\n";
//             return;
//         }
//         else if (cnt[i] == 2)
//         {
//             int can = 0;

//             for (int j = i - 1; j > 0; j--)
//             {
//                 if (cnt[j] == 0)
//                 {
//                     cnt[j] = 2;
//                     can += 2;

//                     m[i].push({j, i});
//                     m[i].push({i, j});
//                 }
//                 else if (cnt[j] == 1)
//                 {
//                     cnt[j]++;
//                     can++;
//                     m[i].push({i, j});
//                 }
//                 if (can == 2)
//                     break;
//             }
//             if (can < 2)
//             {
//                 cout << "NO\n";
//                 return;
//             }
//         }
//         else if (cnt[i] == 1)
//         {
//             bool can = false;
//             for (int j = i; j > 0; j--)
//             {
//                 if (cnt[j] == 0)
//                 {
//                     cnt[j]++;
//                     can = true;

//                     m[i].push({j, i});

//                     break;
//                 }
//                 else if (cnt[j] == 1)
//                 {
//                     cnt[j]++;
//                     can = true;
//                     m[i].push({i, j});
//                     break;
//                 }
//             }
//             if (!can)
//                 break;
//         }
//     }
//     vi a;
//     vi b;
//     for (auto i : v)
//     {
//         a.pb(m[i].front().fi);
//         b.pb(m[i].front().se);
//         m[i].pop();
//     }
//     cout << "YES\n";
//     for (auto i : a)
//         cout << i << " ";

//     cout << '\n';

//     for (auto i : b)
//         cout << i << " ";

//     cout << '\n';

//     // for every number thats appears twice, find if a few numbers exxist under it idk
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
// }