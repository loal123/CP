#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
vector<int> v;
bool a[55];

void sieve()
{
    for (int i = 2; i <= 55; i++)
    {
        if (a[i] == 1)
        {

            continue;
        }
        v.push_back(i);

        for (int j = i + i; j <= 55; j += i)
            a[j] = 1;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    sieve();
    int x = 0;
    for (int i = 0; i <= 55; i++)
    {
        if (v[i] == n)
        {
            break;
        }
        x++;
    }
    if (v[x + 1] == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
