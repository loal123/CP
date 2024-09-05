#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(v) v.begin(), v.end()
#define pb push_back
#define pf push_front
vi maxsub(vector<int> &nums, int k)
{
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        while (dq.size() && dq.back() < nums[i])
        { // element in dq is smaller than curr
            // so we dont need it
            dq.pop_back();
        }
        dq.push_back(nums[i]);
    }
    vector<int> ans;
    ans.push_back(dq.front());
    for (int i = k; i < nums.size(); i++)
    {
        while (dq.size() && dq.back() < nums[i])
        { // element in dq is smaller than curr
            // so we dont need it
            dq.pop_back();
        }
        dq.push_back(nums[i]);
        // delete left element
        if (dq.front() == nums[i - k])
        { // if left element is in dq
            dq.pop_front();
        }
        ans.push_back(dq.front());
    }
    return ans;
}
vector<int> minsub(vector<int> &nums, int k)
{
    deque<int> dq;
    for (int i = 1; i < k + 1; i++)
    {
        while (dq.size() && dq.back() > nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(nums[i]);
    }
    vector<int> ans;
    ans.push_back(dq.front());
    for (int i = k + 1; i < nums.size(); i++)
    {
        while (dq.size() && dq.back() > nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(nums[i]);

        if (dq.front() == nums[i - k])

            dq.pop_front();
        ans.push_back(dq.front());
    }

    return ans;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);

    for (int i = 0; i < n; i++)

        scanf("%d", v.begin() + i);

    int prevmaxi = 1e9 + 5;
    bool previnside = 1;
    bool hassorted = 0;
    deque<int> dq;
    vi biggest = maxsub(v, k);
    vi smallest = minsub(v, k - 1);
    // for (auto i : biggest)
    //     cout << i << ' ';
    // cout << '\n';
    // for (auto i : smallest)
    //     cout << i << ' ';
    // cout << '\n';
    vector<bool> issorted(n - k + 1);

    queue<int> st;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] < v[i])
            st.push(i + 1);
    }
    for (int i = 0; i <= n - k; i++)
    {
        if (st.empty())
        {
            issorted[i] = 1;
            continue;
        }
        while (st.front() <= i)
        {
            st.pop();
            if (st.empty())
            {
                break;
            }
        }
        if (st.empty())
        {
            issorted[i] = 1;
            continue;
        }

        if (st.front() > i && st.front() <= i + k - 1)
            issorted[i] = 0;
        else
            issorted[i] = 1;
    }
    // for (auto i : issorted)
    //     cout << i << ' ';

    int ans = 1;
    for (int i = 0; i <= n - k; i++)
    {

        if (i == 0)
        {

            if (issorted[i])
                hassorted = 1;
            continue;
        }
        if (!(v[i + k - 1] >= biggest[i - 1] && v[i - 1] <= smallest[i - 1]))
        {
            if (issorted[i])
            {
                if (!hassorted)
                    ans++;
            }
            else
                ans++;
        }
        if (issorted[i])
            hassorted = 1;
    }

    // for (int i = 0; i <= n - k; i++)
    // {
    //     bool inside = 0;
    //     int curr = 0;
    //     for (int j = i; j < i + k; j++)
    //     {
    //         if (v[j] < v[i])
    //             inside = 1;
    //         curr = max(curr, v[j]);
    //     }
    //     if (!(v[i + k - 1] >= prevmaxi && !previnside))
    //     {
    //         if (is_sorted(v.begin() + i, v.begin() + i + k))
    //         {
    //             if (!hassorted)
    //                 ans++;
    //         }
    //         else
    //             ans++;
    //         // for (int j = i; j < i + k; j++)
    //         // {
    //         //     cout << v[j] << ' ';
    //         // }
    //         // cout << '\n';
    //     }
    //     if (is_sorted(v.begin() + i, v.begin() + i + k))
    //         hassorted = 1;

    //     prevmaxi = curr;
    //     previnside = inside;
    // }
    printf("%d", ans);
}
void altsolve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int &i : v)
        cin >> i;
    set<vi> s;
    for (int i = 0; i <= n - k; i++)
    {
        vi xd = v;
        sort(xd.begin() + i, xd.begin() + i + k);
        s.insert(xd);
    }
    cout << s.size() << '\n';
}
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t = 5040;
    // while (t--)

    solve();
}
