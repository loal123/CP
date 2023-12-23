#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, i, jem = 0;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        jem += (m + (i % 5)) / 5;
    cout << jem;
}