#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lens = s.length();
    for (int i = 0; i < lens; i++)
    {
        if (s[i] >= 96 && s[i] <= 122)
        {
            s[i] -= 'a' - 'A';
        }
        else
        {
            s[i] += 'a' - 'A';
        }
    }
    cout << s;
}