#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
vector<int> k;
void solve()
{

    ll n;
    cin >> n;
    if (n < 10)
    {
        cout << n << endl;
    }
    else
    {
        while (n > 0)
        {
            k.push_back(n % 10);
            if (n % 10 >= 5)
            {
                v.push_back(9 - n % 10);
            }
            else
            {
                v.push_back(n % 10);
            }
            n /= 10;
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (v[v.size() - 1] == 0)
            {
                if (i == v.size() - 1)
                    cout << k[i];
                else
                {
                    cout << v[i];
                }
            }
            else
            {
                cout << v[i];
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}