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
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    int a = 1, b = 1000000;
    while (a != b)
    {
        int mid = (a + b + 1) / 2;
        cout << mid;
        cout << endl;

        string idk;
        cin >> idk;
        if (idk == ">=")
        {
            a = mid;
        }
        else
            b = mid - 1;
    }
    cout << "! " << a;
    cout << endl;
}