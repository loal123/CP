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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    ll count1 = 0;
    ll count2 = 0;
    string s1 = "";
    string s2 = "";
    string last;
    vl l1;
    vl l2;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;

        if (a > 0)
        {
            count1 += a;
            last = "first";
            s1 += to_string(a);
            l1.pb(a);
        }
        else
        {
            count2 += -a;
            last = "second";
            s2 += to_string(-a);
            l2.pb(-a);
        }
    }
    if (count1 > count2)
        cout << "first";
    else if (count1 < count2)
        cout << "second";
    else
    {
        bool equal = true;
        int x = 0;
        while (x < l1.size() && x < l2.size())
        {
            if (l1[x] > l2[x])
            {
                cout << "first";
                equal = false;
                break;
            }
            else if (l2[x] > l1[x])
            {
                cout << "second";
                equal = false;
                break;
            }
            x++;
        }
        if (equal)
        {
            if (l1.size() > l2.size())
                cout << "first";
            else if (l2.size() < l1.size())
                cout << "second";
            else
                cout << last;
        }
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