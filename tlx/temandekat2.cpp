#include <iostream>
#include <cmath>
using namespace std;

int a[105][105];
int c[105];
void teman(int (*a)[105], int n, int d)
{

    int min = 200000;
    int max = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j += 2)
        {
            c[i] = a[i][j] + a[i][j + 1];
        }
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {

            temp = abs(c[i] - c[k]);
            if (temp > max)
            {
                max = temp;
            }
            if (temp < min)
            {
                min = temp;
            }
        }
    }
    cout << min << ' ' << max;
}

int main()
{
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    teman(a, n, d);
}