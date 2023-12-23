#include <bits/stdc++.h>
#include <limits>

std::string a[100];
int main()
{
    std::string s1, s2, s3;

    for (int i = 0; i < 100; i++)
    {
        std::cin >> s1 >> s2 >> s3;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    sort(a, a + 100);
    for (int i = 0; i < 100; i++)
    {
        std::cout << a[i];
    }
    return 0;
}