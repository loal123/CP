#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> kombinasi;
void print()
{
    for (int i = 0; i < kombinasi.size(); i++)
    {
        cout << kombinasi[i] << ' ';
    }
    cout << endl;
}

void brank(int start, int kedalaman)
{
    if (kedalaman == k)

    {
        kombinasi.push_back(0);
        for (int i = start; i <= n; i++)
        {
            kombinasi[kombinasi.size() - 1] = i;
            print();
        }
        kombinasi.pop_back();
    }
    else
    {
        kombinasi.push_back(0);
        for (int i = start; i <= n; i++)
        {
            kombinasi[kombinasi.size() - 1] = i;
            brank(i + 1, kedalaman + 1);
        }
        kombinasi.pop_back();
    }
}

int main()
{

    cin >> n >> k;
    brank(1, 1);
}