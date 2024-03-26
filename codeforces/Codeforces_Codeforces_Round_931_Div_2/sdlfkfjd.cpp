#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(),v.end()
#define SZ(x) ((int)((x).size()))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool less = true;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] < s[s.size() - 1 - i]) break;
        if (s[i] > s[s.size() - 1 - i]) less = false;
    }
    if (less) {

        cout << s << endl;



    }
    else {
        string yeah = s;

        reverse(all(s));
        cout << s << yeah << endl;



    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
        solve();
}