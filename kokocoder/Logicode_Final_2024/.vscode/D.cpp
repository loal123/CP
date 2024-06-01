#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define pb push_back
const int INF = 1e9 + 5;
int main()
{
    int n, x;
    cin >> n >> x;
    int need = 0;
    vector<bool> needed(32, 0);
    for (int i = 0; (1 << i) <= x; i++)
    {
        if ((1 << i) & x)
        {
            needed[i] = 1;
            need++;
        }
    }
    vi v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    vi xd(32, 0);
    int curr = 0;
    int r = 0;
    vi has;
    vi segments[n + 2];
    // vector<vi> pref(n + 1, vi(32, 0));
    for (int i = 0; i < n; i++)
    {
        while (curr <= x && r < n)
        {
            for (int j = 0; (1 << j) <= v[r]; j++)
            {

                if (v[r] & (1 << j))
                {
                    if (xd[j]++ == 0)
                    {
                        curr |= (1 << j);
                    }
                }
            }
            if (curr == x)
            {
                segments[i].pb(r);
                has.pb(i);
            }
            r++;
        }
        for (int j = 0; (1 << j) <= v[i]; j++)
        {

            if (v[i] & (1 << j))
            {
                if (xd[j]++ == 0)
                {
                    curr ^= (1 << j);
                }
            }
        }
        if (curr == x)
        {
            segments[i + 1].pb(r - 1);
            has.pb(i + 1);
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; (1 << j) <= v[i]; j++)
    //     {
    //         pref[i][j] = pref[i - 1][j];
    //         if (v[i] & (1 << j))
    //             pref[i][j]++;
    //     }
    // }

    while (q--)
    {
        int left, right;
        cin >> left >> right;
        left--;
        right--;

        int position = lower_bound(has.begin(), has.end(), left) - has.begin();

        if (position == has.size())
            cout << -1 << endl;
        else if (position > right)
            cout << -1 << endl;
        else
        {
            int mini = INF;
            for (int i = position; has[i] <= right; i++)
            {
                mini = min(mini, segments[has[i]][0] - has[i] + 1);
            }
            cout << mini << endl;
        }
    }
}