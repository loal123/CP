#include <bits/stdc++.h>
using namespace std;

// loal is the cutest girl

#define ll long long
#define ld long double
#define pow2(x) (x) * (x)
#define le left
#define ri right
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define pll pair<long long, long long>
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    bool onesupremacy = false;
    bool zerosupremacy = false;
    int correct1 = 1e9;
    int correct0 = 1e9;
    int amount = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int amount1 = 0;
        int amount0 = 0;
        for (auto i : s)
        {
            if (i == '1')
                amount1++;
            else
                amount0++;
        }
        // min1val = max((pii){amount1, 1e9-amount0}, min1val);
        if (correct1 > amount1 - amount0)
        {
            correct1 = amount1 - amount0;
        }
        // min0val = max((pii){amount0, 1e9-amount1}, min0val);
        if (correct0 > amount0 - amount1)
        {
            correct0 = amount0 - amount1;
        }
        amount += min(amount1, amount0);
        if (amount1 == amount0)
        {
        }
        else if (amount1 < amount0)
        {
            zerosupremacy = true;
        }
        else
        {
            onesupremacy = true;
        }
    }
    if (!onesupremacy)
    {
        amount += correct0;
    }
    if (!zerosupremacy)
    {
        amount += correct1;
    }
    cout << amount;
    return 0;
}