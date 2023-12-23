#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.find('_') != -1)
    {

        while (s.find('_') != -1)
        {
            s[s.find('_') + 1] -= 'a' - 'A';
            s.erase(s.find('_'), 1);
        }
    }
    else
    {
        int lens = s.length();
        for (int i = 0; i < lens; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {

                s[i] += 'a' - 'A';
                s.insert(i, "_");
                lens++;
            }
        }
    }

    cout << s;
}