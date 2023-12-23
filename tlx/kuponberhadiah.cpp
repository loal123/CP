#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
void solve()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    int pos;
    sort(v.begin(), v.end());
    auto m = lower_bound(v.begin(), v.end(), x);
    if (abs(*m - x) < abs(*m - 1 - x))
    {
        cout << *m << endl;
    }
    else
    {
        cout << *m + 1 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}