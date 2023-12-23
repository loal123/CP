/*
ID: ruperth1
TASK: gymnastics
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
    ofstream fout("gymnastics.out");
    ifstream fin("gymnastics.in");
    //  freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);
    //  int t; cin >> t; while(t--)

    int k, n;

    fin >> k >> n;
    bool a[n + 1][n + 1];
    int b[n];
    memset(a, false, sizeof(a));
    for (int i = 0; i < n; i++)
    {
        fin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            a[b[i]][b[j]] = true;
        }
    }
    for (int i = 0; i < k - 1; i++)
    {
        int k[n];
        for (int j = 0; j < n; j++)
        {

            fin >> k[j];
            for (int z = 0; z < j; z++)
            {
                if (a[k[j]][k[z]])
                    a[k[j]][k[z]] = false;
            }
        }
    }
    int counts = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j])
                counts++;
        }
    }
    fout << counts;
}