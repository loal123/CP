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
char lists[9] = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
void solve()
{

    int n, m;
    char r;
    vector<string> me;
    string opp[1005];
    cin >> n >> m >> r;
    string meee[n];
    string opppp[m];
    int can = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> meee[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> opp[i];
    }
    for (int i = 0; i < 9; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (meee[j][0] == lists[i])
            {
                me.pb(meee[j]);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (can == m)
            break;
        for (int j = 0; j < n; j++)
        {
            int valueso, valuesme;
            char mes = me[j][0];
            char opps = opp[i][0];
            if (can == m)
                break;
            for (int i = 0; i < 9; i++)
            {
                if (mes == lists[i])
                {

                    valuesme = i;
                }
                if (opps == lists[i])
                {
                    valueso = i;
                }
            }
            if (opp[i][1] == r && me[j][1] == r)
            {
                if (valuesme > valueso)
                {
                    can++;
                    me[j] = " ";
                    break;
                }
            }
            else if (opp[i][1] != r && me[j][1] == r)
            {
                can++;
            }
            else
            {
                if (opp[i][1] == me[j][1])
                {
                    if (valuesme > valueso)
                    {
                        can++;
                        me[j] = "6P";
                        break;
                    }
                }
            }
        }
    }
    if (n < m)
    {
        cout << "TIDAK" << endl;
    }
    else if (can == m)
    {
        cout << "YA" << endl;
    }
    else
    {
        cout << "TIDAK" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    srand(time(0));
    while (t--)

        solve();
}