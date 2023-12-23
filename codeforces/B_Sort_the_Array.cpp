#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100005];
void solve()
{
    int n;
    cin >> n;
    int reverse = 0;
    int starts = 0;
    int start = 0, enddd = 0, endds = 0;
    bool reverses = false;
    int reversecount = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n - 1; i++)
    {

        if (!reverses)
        {
            if (a[i + 1] - a[i] <= -1)
            {
                reverses = true;
                start = i;
                starts = a[i];
            }
        }

        if (reverses)
        {
            if (a[i + 1] - a[i] > 0)
            {
                if (a[i + 1] - starts > 0)
                {
                    reverses = false;
                    enddd = i;
                    endds = a[i];
                    reverse++;
                }
                else
                {
                    reverse = 10;
                    break;
                }
            }
        }
    }
    if (start != 0)
    {
        if (enddd == 0)
        {
            enddd = n;
            endds = a[n];
            reverse++;
        }
        if (a[start - 1] > endds)
        {
            reverse = 10;
        }
    }
    if (enddd < start)
    {
        reverse = 10;
    }

    if (reverse == 0)
    {
        cout << "yes" << endl
             << 1 << " " << 1;
    }

    else if (reverse == 1)
    {
        cout << "yes" << endl
             << start << " " << enddd;
    }
    else
    {
        cout << "no";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}