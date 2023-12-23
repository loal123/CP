#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int a[105][105];
int teman(int x1, int x2, int y1, int y2, int d)
{
    int dx = pow(abs(x2 - x1), d); // absolute difference to the d power
    int dy = pow(abs(y2 - y1), d);
    return dx + dy; 
}

int main()
{
    int n, d;
    int mi = 1e9;
    int ma = 0;

    cin >> n >> d;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            mi = (min(mi, teman(x[i], x[j], y[i], y[j], d)));
            ma = (max(ma, teman(x[i], x[j], y[i], y[j], d)));
        }
    }
    cout << mi << ' ' << ma << endl;
}