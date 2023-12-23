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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    string s;
    cin >> s;
    int slwfc = 1;
    int total = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {

        if (s[i] != s[i + 1] || total >= 4)
        {
            slwfc++;
            total = 0;
        }
        else
        {
            total++;
        }
    }
    cout << slwfc;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}