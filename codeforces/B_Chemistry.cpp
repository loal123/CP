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
    int super, girl;
    cin >> super >> girl;
    string cute;
    cin >> cute;
    int a[26] = {0};
    for (int i = 0; i < cute.size(); i++)
    {
        a[cute[i] - 'a']++;
    }
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 1)
            count1++;
        else if (a[i] % 2 == 0)
            count2++;
        else if (a[i] % 2 == 1)
            count3++;
    }
    if (count1 + count3 - girl <= 1)
        cout << "YES";
    else
        cout << "NO";

    cout << '\n';
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