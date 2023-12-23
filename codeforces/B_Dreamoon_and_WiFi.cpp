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
const ll mod = 1e9 + 7;
// Super is a cute girl
int factorial(int x)
{
    int aaa = 1;
    for (int i = 1; i <= x; i++)
    {
        aaa *= i;
    }
    return aaa;
}
void solve()
{
    string super, girl;
    cin >> super >> girl;
    int n = super.size();
    int count1 = 0;
    int count2 = 0;
    int countq = 0;
    int test1 = 0;
    int test2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (super[i] == '+')
        {
            count1++;
            test1++;
        }
        else
            count1--;
        if (girl[i] == '+')
        {
            count2++;
            test2++;
        }
        else if (girl[i] == '-')
            count2--;
        else
            countq++;
    }
    int diff = count1 - count2;
    if ((diff + countq) % 2 != 0 || abs(diff) > countq)
        cout << 0;
    else
    {
        int wow = countq - (((countq - diff) + 1) / 2);
        double ncr = factorial(countq) / (factorial(wow) * (factorial((countq - wow))));
        cout << setprecision(11) << ncr / pow(2, countq);
        // ++- +-+ -++ +++ --- --+ -+- +-- || ++++ ---- 4 4  ++-- --++ +-+- -++- +--+ -+-+ || +++++ ----- 5 5 +++--
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}