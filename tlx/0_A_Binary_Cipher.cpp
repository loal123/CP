#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 100005;
int arr[40];

void solve()
{

    ll q, k;
    cin >> q >> k;
    int siz = 0;
    int arr[40], i = 0;

    while (k != 0)
    {
        arr[i] = k % 2;
        i++;
        k /= 2;
        siz = i;
    }
    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        int b[40], j = 0;
        int c[40];

        while (x != 0)
        {
            b[j] = x % 2;
            j++;
            x /= 2;
        }
        int z = 0;
        for (int i = j - 1; i >= 0; i--)
        {
            if (arr[i] == 1 && b[i] == 0)
            {
                c[z] = 1;
            }
            else if (arr[i] == 0 && b[i] == 1)
            {
                c[z] = 1;
            }
            else
            {
                c[z] = 0;
            }
            z++;
        }
        z--;
        ll total = 0;
        for (int i = z; i >= 0; i--)
        {
            if (c[i] == 1)
            {
                total += pow(2, z - i);
            }
        }
        cout << total << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}