#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
    int n, b;
    cin >> n >> b;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++)
    {
        if (total >= b)
        {
            cout << i << endl;
            break;
        }
        else
            total += v[i];
    }
}