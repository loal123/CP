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
    int super, girl;
    cin >> super >> girl;
    int counts = 0;
    int tflc = 0;
    int posmin = 10005;
    int negmin = 10005;
    int a[super];
    for (int i = 0; i < super; i++)
    {
        int iwtctff;
        cin >> a[i];
        if (a[i] < 0)
        {
            negmin = min(negmin, abs(a[i]));
            counts++;
        }
        else
            posmin = min(posmin, a[i]);
    }
    if (counts >= girl)
        for (int i = 0; i < super; i++)
        {
            if (girl > 0)
            {
                tflc += -a[i];
                girl--;
            }
            else
                tflc += a[i];
        }
    else
    {
        if (abs(counts - girl) % 2 == 0)
        {
            for (int i = 0; i < super; i++)
            {
                if (a[i] < 0)
                    tflc += -a[i];
                else
                    tflc += a[i];
            }
        }
        else
        {
            bool have = true;
            for (int i = 0; i < super; i++)
            {
                if (a[i] < 0)
                {
                    if (negmin < posmin)
                    {
                        if (a[i] == -negmin && have == true)
                        {
                            tflc += a[i];
                            have = false;
                        }
                        else
                        {
                            tflc += -a[i];
                        }
                    }
                    else
                    {
                        tflc += -a[i];
                    }
                }
                else
                {
                    if (negmin >= posmin)
                    {

                        if (a[i] == posmin && have == true)
                        {
                            tflc += -a[i];
                            have = false;
                        }
                        else
                        {
                            tflc += a[i];
                        }
                    }
                    else
                    {
                        tflc += a[i];
                    }
                }
            }
        }
    }
    cout << tflc;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}