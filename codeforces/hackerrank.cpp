#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    int a[1005][1005];
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    while (q--)
    {
        int k, l;
        cin >> k >> l;
        cout << a[k][l] << endl;
        ;
    }

    return 0;
}
