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
void solve()
{
    string a[14] = {"zero",
                    "one",
                    "two",
                    "three",
                    "four",
                    "five",
                    "six",
                    "seven",
                    "eight",
                    "nine",
                    "ten",
                    "eleven",
                    "twelve",
                    "thirteen"};
    string b[9] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int n;
    cin >> n;
    if (n < 14)
    {
        cout << a[n];
    }
    else if (n >= 14 && n <= 19)
    {
        if (n == 15)
        {
            cout << "fifteen";
        }
        else if (n == 18)
            cout << "eighteen";
        else
            cout << a[n % 10] << "teen";
    }
    else
    {
        if (n % 10 == 0)
        {
            cout << b[n / 10 - 2];
        }
        else
        {
            cout << b[n / 10 - 2] << "-" << a[n % 10];
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}