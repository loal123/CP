#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> s[i];
    }
    bool ab = false;
    bool ba = false;
    bool bc = false;
    bool cb = false;
    bool ac = false;
    bool ca = false;
    int i = 0;
    while (true)
    {
        if (i > 2)
        {
            break;
        }

        if (s[i] == "A>B" || s[i] == "B<A")
        {
            ab = true;

            i++;
            continue;
        }
        else if (s[i] == "A<B" || s[i] == "B>A")
        {
            ba = true;

            i++;
            continue;
        }
        else if (s[i] == "B>C" || s[i] == "C<B")
        {
            bc = true;

            i++;
            continue;
        }
        else if (s[i] == "B<C" || s[i] == "C>B")
        {
            cb = true;

            i++;
            continue;
        }
        else if (s[i] == "A>C" || s[i] == "C<A")
        {
            ac = true;

            i++;
            continue;
        }
        else if (s[i] == "A<C" || s[i] == "C>A")
        {
            ca = true;

            i++;
            continue;
        }
    }

    if (ab && bc && ac)
    {
        cout << "CBA";
    }
    else if (ba && bc && ca)
    {
        cout << "ACB";
    }
    else if (ab && cb && ac)
    {
        cout << "BCA";
    }
    else if (ba && bc && ac)
    {
        cout << "CAB";
    }
    else if (ba && cb && ca)
    {
        cout << "ABC";
    }
    else if (ab && cb && ca)
    {
        cout << "BAC";
    }
    else
    {
        cout << "Impossible";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}