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
const int TMAX = 1e6 + 5;
// Super is a cute girl
vi v;
bool prima[TMAX];
void sieve()
{
    for (int i = 2; i < TMAX; i++)
    {
        if (prima[i] == 1)
            continue;

        v.pb(i);
        for (int j = i + i; j < TMAX; j += i)
        {
            prima[j] = 1;
        }
    }
}
void solve()
{
    int primes[15]{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    sieve();

    ll supercutegirl;
    cin >> supercutegirl;
    bool idkk = true;
    int yes = supercutegirl;
    int counts = 0;
    bool stupid = true;
    int prev = supercutegirl;
    bool primecheck = true;
    int lastone;
    bool prime2check = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (supercutegirl - v[i] <= 0)
            break;
        bool can = true;
        for (int j = 2; j <= sqrt(supercutegirl - v[i]); j++)
        {
            if ((supercutegirl - v[i]) % j == 0)
            {
                can = false;
                break;
            }
        }
        if (can)
        {
            prime2check = true;
            break;
        }
    }

    for (int i = 2; i <= sqrt(supercutegirl); i++)
    {
        if (supercutegirl % i == 0)
            primecheck = false;
    }

    if (primecheck)
        cout << 1;
    else if (prime2check)
        cout << 2;

    else
    {
        int giveup = 0;
        while (stupid)
        {
            bool have = false;
            for (int i = yes - 2; i >= 2; i--)
            {

                bool prime = true;

                for (int j = 2; j <= sqrt(i); j++)
                {
                    if (i % j == 0)
                    {
                        prime = false;
                        break;
                    }
                }
                if (prime)
                {
                    if (!have)
                    {
                        have = true;
                        yes = i;
                        lastone = i;
                    }
                    else
                    {
                        lastone = i;
                    }

                    bool scuffed = false;
                    for (int k = 0; k < v.size(); k++)
                    {
                        if (v[k] == prev - lastone)
                        {
                            scuffed = true;
                            break;
                        }
                        if (v[k] > prev - lastone)
                            break;
                    }
                    if (scuffed)
                    {
                        yes = i;
                        break;
                    }
                    giveup++;
                    if (giveup == 1000)
                        break;
                }
            }
            yes = prev - yes;
            counts++;

            for (int i = 0; i < v.size(); i++)
            {
                if (yes == v[i])
                    stupid = false;
            }

            prev = yes;
        }
        cout << counts + 1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}