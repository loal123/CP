#include <iostream>
using namespace std;
int n;
int catat[105];
bool pernah[105];
void pass(int kedalaman)
{
    if (kedalaman >= n)
    {
        bool zigzag = true;
        for (int i = 1; i < n - 1; i++)
        {
            bool con1 = catat[i] < catat[i - 1] && catat[i] < catat[i + 1];

            bool con2 = catat[i] > catat[i - 1] && catat[i] > catat[i + 1];

            if (!(con1 || con2))
            {
                zigzag = false;
            }
        }
        if (zigzag)
        {
            for (int i = 0; i < n; i++)
            {
                cout << catat[i];
            }
            cout << endl;
        }
    }
    else

    {
        for (int i = 1; i <= n; i++)
        {
            if (!pernah[i])
            {
                pernah[i] = true;

                catat[kedalaman] = i;
                pass(kedalaman + 1);
                pernah[i] = false;
            }
        }
    }
}

int main()
{

    cin >> n;
    pass(0);
}
