#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); // REMBEMBER TO COMMENT THIS BEFORE SUBMITTING
    int q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll difference = r - l + 1;
        ll lmod = l % 9;
        ll rmod = r % 9;
        ll ans = 0;
        if (lmod == 0)
            lmod = 9;
        if (rmod == 0)
            rmod = 9;
        if (difference <= 9)
        {
            while (l <= r)
            {
                ans += lmod;
                lmod++;
                lmod %= 9;
                l++;
            }
        }
        else
        {

            while (lmod != (rmod + 1) % 9)
            {
                ans += lmod;
                if (lmod == 0)
                    ans += 9;
                lmod++;
                lmod %= 9;
                l++;
            }

            ans += (ll)(r - l + 1) / 9 * 45;
        }
        cout << ans << endl;
    }
}