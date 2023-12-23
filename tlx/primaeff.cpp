#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int x)
{
    if (x == 1)
    {
        return false;
    }
    for (int i = 2; i < sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int count = 0;
    int N;
    cin >> N;

    while (N--)
    {
        int x;
        cin >> x;

        while (count < x)
        {
            for (int i = 2; i < 77778; i++)
            {
                if (isPrime(i))
                {
                    count++;
                }
                if (count == x)
                    cout << i << endl;
            }
        }
    }
}