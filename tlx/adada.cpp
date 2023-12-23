#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = 'a';
    }
    cout << s << strlen(s);
}