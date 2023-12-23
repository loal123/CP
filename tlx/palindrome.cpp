#include <iostream>
#include <string>

using namespace std;
bool palindrome(string s)
{
    int length = s.length();
    string subs = s;
    subs.erase(length - 1, 1);
    subs.erase(0, 1);
    length = subs.length();
    if (length <= 1)
    {
        return true;
    }

    else if (subs[0] == subs[length - 1])
    {
        return palindrome(subs);
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    if (palindrome(s))
    {
        cout << "YA";
    }
    else
    {
        cout << "BUKAN";
    }
}
