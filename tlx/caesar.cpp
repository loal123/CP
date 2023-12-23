#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int k;
    cin >> s >> k;
    int lens = s.length();
    for (int i = 0; i < lens; i++)
    {
        if (s[i] + k > 122)
        {
            s[i] += k - 26;
        }
        else
        {
            s[i] += k;
        }
    }
    cout << s;
}