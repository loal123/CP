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
    int flandre[100] = {0};
    int scarlet[100] = {0};
    bool itmocaits = true;
    string super, cute, girl;
    cin >> super >> cute >> girl;
    for (int i = 0; i < super.size(); i++)
    {
        flandre[super[i]]++;
    }
    for (int i = 0; i < cute.size(); i++)
    {
        flandre[cute[i]]++;
    }
    for (int i = 0; i < girl.size(); i++)
    {
        scarlet[girl[i]]++;
    }
    for (int i = 51; i < 100; i++)
    {
        if (flandre[i] != scarlet[i])
        {
            itmocaits = false;
            break;
        }
    }
    if (itmocaits)
        cout << "YES";
    else
    {
        cout << "NO";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}