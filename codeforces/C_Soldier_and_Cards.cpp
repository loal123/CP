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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    deque<int> q1;
    deque<int> q2;
    int k1;
    cin >> k1;
    for (int i = 0; i < k1; i++)
    {
        int z;
        cin >> z;
        q1.push_front(z);
    }
    int k2;
    cin >> k2;
    for (int i = 0; i < k2; i++)
    {
        int z;
        cin >> z;
        q2.push_front(z);
    }
    bool finished = false;

    int t = 10000;
    int win;
    while (t--)
    {
        if (q1.size() == 0)
        {
            win = 2;
            finished = true;
            break;
        }
        if (q2.size() == 0)
        {
            win = 1;
            finished = true;
            break;
        }

        if (q1.back() > q2.back())
        {
            q1.push_front(q2.back());
            q1.push_front(q1.back());
        }
        else
        {
            q2.push_front(q1.back());
            q2.push_front(q2.back());
        }
        q1.pop_back();
        q2.pop_back();
    }
    if (finished)
    {
        cout << 9999 - t << " " << win;
    }
    else
        cout << -1;
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