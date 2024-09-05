#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int maxn = 5007;

struct Point
{
    ll x, y, idx;
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(ll x, ll y, ll idx)
    {
        this->x = x;
        this->y = y;
        this->idx = idx;
    }
    bool operator<(Point Q) const
    {
        if (this->x < Q.x)
            return true;
        if (this->x > Q.x)
            return false;
        return this->y < Q.y;
    }
    bool operator==(Point Q) const
    {
        if (this->x == Q.x && this->y == Q.y)
            return true;
        return false;
    }
};
ll dist(Point P, Point Q)
{
    ll dx = P.x - Q.x, dy = P.y - Q.y;
    return dx * dx + dy * dy;
}

Point A[maxn];
Point chosen;
int n;
bool comp(Point P, Point Q)
{
    return dist(P, chosen) > dist(Q, chosen);
}

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        A[i] = Point(x, y, i);
    }

    while (n > 1)
    {
        chosen = A[1];
        sort(A + 1, A + n + 1, comp);

        cout << A[n].idx << " ";

        n--;
    }
    cout << A[n].idx;

    return 0;
}