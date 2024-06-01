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
    int n, k;
    cin >> n >> k;
    map<int, int> m;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maxi, maxj;
    int maxin = 0;
    int j = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < n )
        {
            if (m[v[j]]++ == 0)
                curr++;
            if (curr > k)
            {
                m[v[j]]--;
                if (m[v[j]] == 0) curr--; 
                break;
            }

            
        
            j++;
        }
        
                if (j - i + 1 > maxin)
                {
                    maxin = j - i + 1;
                    maxi = i;
                    maxj = j;
                }
        if (m[v[i]]-- == 1)
        {
            curr--;
        }

    }
    assert(maxi != -1);
    cout << maxi + 1 << ' ' << maxj;
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