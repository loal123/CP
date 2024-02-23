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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    char c;
    cin >> n >> c;
    vector<string> C, D, H, S;
    for (int i = 0; i < 2 * n; i++)
    {
        string s;
        cin >> s;
        if (s[1] == 'C')
            C.pb(s);
        if (s[1] == 'D')
            D.pb(s);
        if (s[1] == 'H')
            H.pb(s);
        if (s[1] == 'S')
            S.pb(s);
    }
    int counts = 0;
    vector<string> scuff;
    vector<pair<string, string>> ans;
    if (c == 'C')
    {

        for (int i = 0; i < SZ(S) - 1; i += 2)
        {
            if (S[i][0] > S[i + 1][0])
                swap(S[i], S[i + 1]);
            ans.pb(mp(S[i], S[i + 1]));
        }
        if (SZ(S) & 1)
            scuff.pb(S[SZ(S) - 1]);

        for (int i = 0; i < SZ(D) - 1; i += 2)
        {
            if (D[i][0] > D[i + 1][0])
                swap(D[i], D[i + 1]);
            ans.pb(mp(D[i], D[i + 1]));
        }
        if (SZ(D) & 1)
            scuff.pb(D[SZ(D) - 1]);

        for (int i = 0; i < SZ(H) - 1; i += 2)
        {
            if (H[i][0] > H[i + 1][0])
                swap(H[i], H[i + 1]);
            ans.pb(mp(H[i], H[i + 1]));
        }
        if (SZ(H) & 1)
            scuff.pb(H[SZ(H) - 1]);

        if (C.size() < scuff.size())
        {
            cout << "IMPOSSIBLE\n";
            return;
        }
        int i = 0;
        for (i; i < SZ(scuff); i++)
        {
            ans.pb(mp(scuff[i], C[i]));
        }
        for (i; i < SZ(C) - 1; i += 2)
        {
            if (C[i][0] > C[i + 1][0])
                swap(C[i], C[i + 1]);
            ans.pb(mp(C[i], C[i + 1]));
        }
    }
    else if (c == 'S')
    {
        for (int i = 0; i < SZ(C) - 1; i += 2)
        {
            if (C[i][0] > C[i + 1][0])
                swap(C[i], C[i + 1]);
            ans.pb(mp(C[i], C[i + 1]));
        }
        if (SZ(C) & 1)
            scuff.pb(C[SZ(C) - 1]);

        for (int i = 0; i < SZ(D) - 1; i += 2)
        {
            if (D[i][0] > D[i + 1][0])
                swap(D[i], D[i + 1]);
            ans.pb(mp(D[i], D[i + 1]));
        }
        if (SZ(D) & 1)
            scuff.pb(D[SZ(D) - 1]);

        for (int i = 0; i < SZ(H) - 1; i += 2)
        {
            if (H[i][0] > H[i + 1][0])
                swap(H[i], H[i + 1]);
            ans.pb(mp(H[i], H[i + 1]));
        }
        if (SZ(H) & 1)
            scuff.pb(H[SZ(H) - 1]);

        if (S.size() < scuff.size())
        {
            cout << "IMPOSSIBLE\n";
            return;
        }
        int i = 0;
        for (i; i < SZ(scuff); i++)
        {
            ans.pb(mp(scuff[i], S[i]));
        }
        for (i; i < SZ(S) - 1; i += 2)
        {
            if (S[i][0] > S[i + 1][0])
                swap(S[i], S[i + 1]);
            ans.pb(mp(S[i], S[i + 1]));
        }
    }
    else if (c == 'H')
    {
        for (int i = 0; i < SZ(C) - 1; i += 2)
        {
            if (C[i][0] > C[i + 1][0])
                swap(C[i], C[i + 1]);
            ans.pb(mp(C[i], C[i + 1]));
        }
        if (SZ(C) & 1)
            scuff.pb(C[SZ(C) - 1]);

        for (int i = 0; i < SZ(D) - 1; i += 2)
        {
            if (D[i][0] > D[i + 1][0])
                swap(D[i], D[i + 1]);
            ans.pb(mp(D[i], D[i + 1]));
        }
        if (SZ(D) & 1)
            scuff.pb(D[SZ(D) - 1]);

        for (int i = 0; i < SZ(S) - 1; i += 2)
        {
            if (S[i][0] > S[i + 1][0])
                swap(S[i], S[i + 1]);
            ans.pb(mp(S[i], S[i + 1]));
        }
        if (SZ(S) & 1)
            scuff.pb(S[SZ(S) - 1]);

        if (H.size() < scuff.size())
        {
            cout << "IMPOSSIBLE\n";
            return;
        }
        int i = 0;
        for (i; i < SZ(scuff); i++)
        {
            ans.pb(mp(scuff[i], H[i]));
        }
        for (i; i < SZ(H) - 1; i += 2)
        {
            if (H[i][0] > H[i + 1][0])
                swap(H[i], H[i + 1]);
            ans.pb(mp(H[i], H[i + 1]));
        }
    }
    else
    {
        for (int i = 0; i < SZ(C) - 1; i += 2)
        {
            if (C[i][0] > C[i + 1][0])
                swap(C[i], C[i + 1]);
            ans.pb(mp(C[i], C[i + 1]));
        }
        if (SZ(C) & 1)
            scuff.pb(C[SZ(C) - 1]);

        for (int i = 0; i < SZ(S) - 1; i += 2)
        {
            if (S[i][0] > S[i + 1][0])
                swap(S[i], S[i + 1]);
            ans.pb(mp(S[i], S[i + 1]));
        }
        if (SZ(S) & 1)
            scuff.pb(S[SZ(S) - 1]);

        for (int i = 0; i < SZ(H) - 1; i += 2)
        {
            if (H[i][0] > H[i + 1][0])
                swap(H[i], H[i + 1]);
            ans.pb(mp(H[i], H[i + 1]));
        }
        if (SZ(H) & 1)
            scuff.pb(H[SZ(H) - 1]);

        if (D.size() < scuff.size())
        {
            cout << "IMPOSSIBLE\n";
            return;
        }
        int i = 0;
        for (i; i < SZ(scuff); i++)
        {

            ans.pb(mp(scuff[i], D[i]));
        }
        for (i; i < SZ(D) - 1; i += 2)
        {
            if (D[i][0] > D[i + 1][0])
                swap(D[i], D[i + 1]);
            ans.pb(mp(D[i], D[i + 1]));
        }
    }
    for (auto i : ans)
        cout << i.fi << " " << i.se << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}