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
void print_forward(std::deque<int> const &deque)
{
    for (int const &i : deque)
    {
        std::cout << i << '\n';
    }
}
void solve()
{
    deque<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "push_back")
        {
            int x;
            cin >> x;
            v.pb(x);
        }
        if (s == "push_front")
        {
            int x;
            cin >> x;
            v.push_front(x);
        }
        if (s == "pop_back")
            v.pop_back();
        else
            v.pop_front();
    }
    print_forward(v);
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