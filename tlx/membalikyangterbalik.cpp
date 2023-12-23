#include <bits/stdc++.h>
using namespace std;
int reverses(int x)
{
    int temp = x;
    int ret = 0;

    while (temp > 0)
    {
        ret = (ret * 10) + (temp % 10);
        temp /= 10;
    }
    return ret;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int c = reverses(a) + reverses(b);
    cout << reverses(c);
}