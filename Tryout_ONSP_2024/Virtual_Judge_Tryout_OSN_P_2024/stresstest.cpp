#include <bits/stdc++.h>
using namespace std;
int strtodec(int x)
{
    string xd = to_string(x);

    int ans = 0;
    for (auto i : xd)
    {
        ans += i - '0';
    }
    if (ans <= 9)
        return ans;
    else
        return strtodec(ans);
}
int main()
{
    long long l, r;
    cin >> l >> r;
    long long ans = 0;
    for (int i = l; i <= r; i++)
    {
        ans += strtodec(i);
    }
    cout << ans;
}