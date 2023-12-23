#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<int, int> work[n];
    for (int i = 0; i < n; i++)
    {
        int m, d;
        cin >> m >> d;
        work[i] = make_pair(m + d, m);
    }
    sort(work, work + n);
    int cur = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (cur <= work[i].second)
        {
            cnt++;
            cur = work[i].first;
        }
    }
    cout << cnt << endl;
}
