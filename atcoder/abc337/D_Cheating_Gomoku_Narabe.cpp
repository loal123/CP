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
// Super is a cute girl
int smallestSubarraySumK(vector<int> &arr, int k)
{

    // Use map here to store the prefixSum ending
    // at ith index.
    unordered_map<long long, int> unmap;
    int n = arr.size();

    // Store the current Prefix sum till ith index;
    long long currPrefixSum = 0;

    // Store the minimum size subarray whose sum is K
    long long result = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        currPrefixSum += arr[i];

        // Check if the current prefix sum is equals to K
        if (currPrefixSum == k)
        {
            long long currLen = i + 1;
            result = min(result, currLen);
        }

        // Required PrefixSum
        long long requirePrefixSum = currPrefixSum - k;

        // Check if there exist any required
        // Prefix Sum or not
        if (unmap.count(requirePrefixSum))
        {
            long long foundIdx =
                unmap[requirePrefixSum];
            long long currIdx = i;

            result = min(result,
                         currIdx - foundIdx);
        }

        // Store the current prefix sum ending
        // at i
        unmap[currPrefixSum] = i;
    }

    if (result >= INT_MAX)
        return -1;
    // return the result
    return result;
}

// Driver code

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int mini = INF;
    for (int i = 0; i < n; i++)
    {
        int rn = 0;

        vi v;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 'x')
            {
                int small = smallestSubarraySumK(v, k);
                if (small != -1)
                    mini = min(small - 1, mini);

                rn = 0;
                v.clear();
            }

            else if (a[i][j] == 'o')
                rn++;
            else
            {
                v.pb(rn);
                rn = 0;
            }
        }
    }
    cout << mini;
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