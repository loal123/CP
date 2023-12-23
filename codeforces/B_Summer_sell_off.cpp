#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<ll, ll>> v;
vector<pair<ll, ll>> supergirl;
vector<pair<ll, ll>> check;
void solve()
{
    int n, f;
    cin >> n >> f;
    for (int i = 0; i < n; i++)
    {
        ll k, l;
        cin >> k >> l;
        supergirl.push_back(make_pair(k, l));
        v.push_back(make_pair(min(k * 2, l) - min(k, l), i));
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < f; i++)
    {
        supergirl[v[i].second].first *= 2;
    }

    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        total += min(supergirl[i].first, supergirl[i].second);
    }
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}