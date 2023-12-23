#include <iostream>
using namespace std;
void helpme(int n)
{
    if (n >= 2)
    {
        helpme(n - 1);
        }
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
    if (n >= 2)
    {
        helpme(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    helpme(n);
}