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
    bool automaton = true;
    bool array = true;
    int a[27] = {0};
    int b[27] = {0};
    string super, girl;
    cin >> super >> girl;
    for (int i = 0; i < super.size(); i++)
    {
        a[super[i] - 'a']++;
    }
    for (int i = 0; i < girl.size(); i++)
    {
        b[girl[i] - 'a']++;
    }
    if (super.size() < girl.size())
    {
        cout << "need tree";
    }
    else
    {
        bool idk = true;
        int prev = 0;
        for (int i = 0; i < girl.size(); i++)
        {
            bool have = false;
            for (int j = prev; j < super.size(); j++)
            {
                if (super[j] == girl[i])
                {
                    have = true;
                    prev = j + 1;
                    break;
                }
            }
            if (!have)
            {
                idk = false;
                break;
            }
        }
        if (idk)
        {
            cout << "automaton";
        }
        else
        {
            bool both = false;
            for (int i = 0; i < 27; i++)
            {
                if (b[i] > a[i])
                    automaton = false;
                if (b[i] != a[i])
                    both = true;
            }
            if (!both && automaton)
                cout << "array";
            else if (both && automaton)
                cout << "both";

            else
                cout << "need tree";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}