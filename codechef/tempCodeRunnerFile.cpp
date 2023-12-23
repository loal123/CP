#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(v) (v.begin(),v.end())
#define isvowel(x) (x) == 'A' || (x) == 'I' || (x) == 'U' || (x) == 'E' || (x) == 'O'
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    
    string s;
    cin >> s;
    int n = s.size();
    string idk = "CODETOWN";
    bool can = true;
    for(int i = 0; i < n; i++)
    {
        char bruh = idk[i];
        char z = s[i];
        if (isvowel(bruh))
        {
            if (!isvowel(z))
            {
                can = false; 
            }
        }
        else 
        {
            if (isvowel(z)) can = false;
        }
    }
    cout << (can ? "YES":"NO") << '\n';
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 // freopen("input.txt","r",stdin); 
 // freopen("output.txt","w",stdout); 
  int t; cin >> t; while(t--)
  solve();
}