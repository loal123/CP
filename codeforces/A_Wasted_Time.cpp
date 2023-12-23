#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<int, int>> v;
void solve()
{
    int n, k;
    double total;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    for (int i = 0; i < n - 1; i++)
    {
        total += sqrt(pow(abs(v[i].first - v[i + 1].first), 2) + pow(abs(v[i].second - v[i + 1].second), 2));
    }
    long double m = total / 50 * k;
    cout << setprecision(10) << m;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}