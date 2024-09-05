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
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
ifstream fin;
ofstream fout;
struct Point
{
    int x, y, r;
};
void tc3()
{
    vector<Point> v;
    for (int i = 1; i <= 542 - 8; i += 4)
    {
        for (int j = 1; j <= 542 - 8; j += 4)
        {

            v.pb({i + 1, j, 4});
            v.pb({i, j + 2, 1});
            v.pb({i + 4, j + 1, 3});
            v.pb({i + 3, j + 3, 2});
        }
    }
    fout << SZ(v) << '\n';
    for (auto i : v)
    {
        fout << i.x << " " << i.y << " " << i.r << '\n';
    }
}
void solve()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 1 || i == 2)
            continue;
        fin.open("./input/tetris_" + to_string(i) + ".in");
        fout.open("./output/tetris_" + to_string(i) + ".out");

        if (i == 3)
        {
            tc3();
        }
        else
            break;

        fin.close();
        fout.close();
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