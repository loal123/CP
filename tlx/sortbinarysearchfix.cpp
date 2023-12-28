#include <bits/stdc++.h>

using namespace std;

int numList[100000];
int search(int right, int x)
{

    int left = 0;

    while (left != right)
    {
        int mid = (left + right) / 2;
        if (x >= numList[mid])
        {
            left = mid + 1;
        }
        else
            right = mid;
    }
    return left;
}

int main()
{
    int cases;
    cout << "case : ";
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int listSize;
        cout << "list size : ";
        cin >> listSize;
        cout << "list : ";
        for (int j = 0; j < listSize; j++)
        {
            cin >> numList[j];
        }
        int find;
        cout << "find : ";
        cin >> find;
        cout << "id : " << search(listSize, find) << endl;
    }
}