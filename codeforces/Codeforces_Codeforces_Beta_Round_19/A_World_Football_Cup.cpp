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
#define char string
map<char, int> m1;
map<char, int> m2;
map<char, int> m3;
pii scoresplit;
bool compare(char a, char b)
{
    if (m1[a] < m1[b])
        return true;
    else if (m1[a] > m1[b])
        return false;

    if (m2[a] < m2[b])
        return true;
    else if (m2[a] > m2[b])
        return false;
    if (m3[a] < m3[b])
        return true;

    return false;
}
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        v.pb(x);
        m1[x] = 0;
        m2[x] = 0;
        m3[x] = 0;
    }

    for (int i = 0; i < n * (n - 1) / 2; i++)
    {
        string a, b;
        cin >> a >> b;
        int asz = a.size();
        string l = "", r = "";
        int ls, rs;
        bool has = false;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != '-')
            {
                if (!has)
                    l += a[i];

                else
                    r += a[i];
            }
            if (a[i] == '-')
            {
                has = 1;
            }
        }
        string lx = "", rx = "";
        has = 0;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] != ':')
            {
                if (!has)
                    lx += b[i];
                else
                    rx += b[i];
            }
            if (b[i] == ':')
                has = 1;
        }
        ls = stoi(lx);
        rs = stoi(rx);

        if (ls == rs)
        {
            m1[l]++;
            m1[r]++;
            m3[l] += ls;
            m3[r] += rs;
        }
        else if (ls > rs)
        {
            m1[l] += 3;
            m2[l] += ls - rs;
            m2[r] += rs - ls;
            m3[l] += ls;
            m3[r] += rs;
        }
        else
        {
            m1[r] += 3;
            m2[r] += rs - ls;
            m2[l] += ls - rs;
            m3[r] += rs;
            m3[l] += ls;
        }
    }

    bool sortedalr = true;
    while (1)
    {
        sortedalr = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (compare(v[i], v[i + 1]))
            {
                swap(v[i], v[i + 1]);
                sortedalr = false;
            }
        }
        if (sortedalr)
            break;
    }

    vector<char> ans;
    for (int i = 0; i < n / 2; i++)
    {
        ans.pb(v[i]);
    }
    sort(all(ans));
    for (auto i : ans)
        cout << i << endl;
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