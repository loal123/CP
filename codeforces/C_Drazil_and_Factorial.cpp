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
// Super is a cute girl
int factorial(int x)
{
    if (x == 1)
        return 1;
    else
    {
        return x * factorial(x - 1);
    }
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int total = 1;
    sort(s.rbegin(), s.rend());
    int a[10] = {0};
    for (auto i : s)
    {
        if (i == '4')
        {
            a[3]++;
            a[2] += 2;
        }
        else if (i == '6')
        {
            a[3]++;
            a[5]++;
        }
        else if (i == '8')
        {
            a[7]++;
            a[2] += 3;
        }
        else if (i == '9')
        {
            a[7]++;
            a[2]++;
            a[3] += 2;
        }
        else
        {
            a[i - '0']++;
        }
    }
    for (int i = 9; i >= 2; i--)
    {
        for (int j = 0; j < a[i]; j++)
        {
            cout << i;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}