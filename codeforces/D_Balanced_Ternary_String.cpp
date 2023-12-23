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
    int supergirl;
    cin >> supergirl;
    string rich;
    cin >> rich;
    int counts0 = 0, counts1 = 0, counts2 = 0;
    for (int i = 0; i < supergirl; i++)
    {
        if (rich[i] == '0')
            counts0++;
        else if (rich[i] == '1')
            counts1++;
        else
            counts2++;
    }
    int a[3] = {counts0, counts1, counts2};
    sort(a, a + 3);
    char b[3];
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == counts0)
            b[i] = '0';
        else if (a[i] == counts1)
            b[i] = '1';
        else
            b[i] = '2';
    }
    int i = 0;
    while (a[2] != a[1])
    {
        string idk = "";
        idk += b[i];
        if (rich[i] == b[2])
            rich.replace(i, i, idk);
        a[2]--;
        a[0]++;
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