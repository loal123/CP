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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
vi v;

void solve()
{
    string a[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<pair<string, string>> three = {{"one", "1"}, {"two", "2"}, {"six", "6"}};
    vector<pair<string, string>> four = {{"four", "4"}, {"five", "5"}, {"nine", "9"}};
    vector<pair<string, string>> five = {{"three", "3"}, {"seven", "7"}, {"eight", "8"}};

    int counts = 0;
    while (1)
    {
        string n;
        cin >> n;

        char s1;
        char s2;
        string ss = "";
        if (cin.eof())
        {
            break;
        }
        string another = "";
        for (int i = 0; i < n.size(); i++)
        {
            if (i + 2 < n.size())
            {
                for (auto j : three)
                {

                    if (n.substr(i, 3).find(j.fi) != -1)
                        another += j.se;
                }
            }
            if (i + 3 < n.size())
            {
                for (auto j : four)
                {

                    if (n.substr(i, 4).find(j.fi) != -1)
                        another += j.se;
                }
            }
            if (i + 4 < n.size())
            {
                for (auto j : five)
                {

                    if (n.substr(i, 5).find(j.fi) != -1)
                        another += j.se;
                }
            }
            if (n[i] >= 48 && n[i] <= 57)
            {
                another += n[i];
            }
        }

        for (int i = 0; i < another.size(); i++)
        {
            if (another[i] >= 48 && another[i] <= 57)
            {
                ss += another[i];
                break;
            }
        }
        for (int j = another.size() - 1; j >= 0; j--)
        {
            if (another[j] >= 48 && another[j] <= 57)
            {
                ss += another[j];
                break;
            }
        }

        counts += stoi(ss);
    }
    cout << counts;
    // cout << n;
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