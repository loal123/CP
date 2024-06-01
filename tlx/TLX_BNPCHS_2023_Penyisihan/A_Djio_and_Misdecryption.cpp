#include <iostream>
using namespace std;

int main()
{
    short n;
    cin >> n;
    string s;

    cin >> s;
    bool rn = false;
    for (auto i : s)
    {
        if (i == '*')
            rn = !rn;
        else if (!rn)
            cout << i;
    }
}