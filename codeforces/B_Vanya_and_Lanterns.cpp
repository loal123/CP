#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<long long>
#define fi first
#define se second
#define pb push_back
int n;
ll l;

// Super is a cute girl
void solve()
{
    vl v;
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    sort(v.begin(), v.end());
    double longest = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] > longest)
        {
            longest = v[i + 1] - v[i];
        }
    }
    longest /= 2;
    if (v[0] > longest)
    {
        longest = v[0];
    }
    if (l - v[n - 1] > longest)
    {
        longest = l - v[n - 1];
    }
    cout << setprecision(10) << longest;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}