/*
ID: ruperth1
TASK: ride
LANG: C++
*/
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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ofstream fout("breedflip.out");
    ifstream fin("breedflip.in");
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)'
    int n;
    fin >> n;
    string s1, s2;
    fin >> s1 >> s2;
    int counts = 0;
    bool rn = false;
    char real;
    for (int i = 0; i < n; i++)
    {

        if (s1[i] != s2[i])
        {
            if (!rn)
            {
                rn = true;
                counts++;
            }
        }
        else
        {
            rn = false;
        }
    }

    fout << counts;
}