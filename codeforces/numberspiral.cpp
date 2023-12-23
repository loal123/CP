#include <bits/stdc++.h>
using namespace std;

const int TMAX = 1e7 + 1;
bool prima[TMAX];
vector<int> v;
void sieve()
{
	for (int i = 2; i < TMAX; i++)
	{
		if (prima[i] == 1)
			continue;
		v.push_back(i);
		for (int j = i + i; j < TMAX; j += i)
		{
			prima[j] = 1;
		}
	}
}
int main()

{

	ios::sync_with_stdio(false);
	cin.tie(0);

	sieve();
	int t;
	cin >> t;
	while (t--)
	{
		int x;
		cin >> x;
		cout << v[x - 1] << endl;
	}
}
