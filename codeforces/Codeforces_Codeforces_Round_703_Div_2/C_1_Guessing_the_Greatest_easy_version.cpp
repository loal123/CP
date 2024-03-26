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
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;

    int idx;
    cout << "? 1 " << n << endl;
    cin >> idx;
    bool left = true;
    if (idx == 1)
    {
        left = false;
    }
    else if (idx == n)
        left = true;
    else
    {
        cout << "? 1 " << idx << endl;
        int x;
        cin >> x;
        if (x != idx)
            left = false;
    }
    if (left)
    {
        int a = 1;
        int b = idx - 1;
        while (b - a > 1)
        {
            int mid = (a + b) / 2;
            cout << "? " << mid << " " << idx << endl;
            int x;
            cin >> x;
            if (x != idx)
            {
                b = mid - 1;
            }
            else
                a = mid;
        }
        cout << "? " << b << " " << idx << endl;
        int x;
        cin >> x;
        if (x != idx)
        {
            cout << "! " << a << endl;
        }
        else
            cout << "! " << b << endl;
    }
    else
    {
        int a = idx + 1;
        int b = n;
        while (b - a > 1)
        {
            int mid = (a + b) / 2;
            cout << "? " << idx << " " << mid << endl;
            int x;
            cin >> x;
            if (x != idx)
                a = mid + 1;
            else
                b = mid;
        }
        cout << "? " << idx << " " << a << endl;
        int x;
        cin >> x;
        if (x != idx)
            cout << "! " << b << endl;
        else
            cout << "! " << a << endl;
        return;
    }
    // 1 2 4 5 3
    // 2 4 5 9 1 10 8 7 3 6
    // 6 3 7 8 10 1 9 5 4 2
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