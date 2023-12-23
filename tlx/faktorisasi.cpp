#include <iostream>
#include <cmath>
using namespace std;

void faktor(int x)
{
    for (int i = 2; x > 1; i++)
    {
        int count = 0;
        while (x % i == 0)
        {

            x /= i;
            count++;
        }

        if (count != 0)
        {
            cout << i;
            if (count > 1)
            {
                cout << "^" << count;
            }
            if (x > 1)
            {
                cout << ' ' << 'x' << ' ';
            }
        }
    }
}

int main()
{
    {
        int n;
        cin >> n;
        faktor(n);
    }
}