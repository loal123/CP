#include <bits/stdc++.h>
using namespace std;
// in fla je kosong tujuh i trust
uint64_t target_sum;
vector<string> dp;
vector<vector<uint64_t>> dp_coins;
set<uint64_t> chosen;
vector<uint64_t> chosen_coins;

void calculate(vector<uint64_t> coins, string choices)
{
    chosen_coins.clear();
    if (choices.size() > coins.size())
    {
        return;
    }

    uint64_t sum = 0;

    for (int i = 0; i < choices.size(); i++)
    {
        sum += coins[i] * (choices[i] == '1');
        if (choices[i] == '1')
        {
            chosen_coins.push_back(coins[i]);
        }
    }

    if (sum == target_sum)
    {
        dp_coins.push_back(chosen_coins);
        for (int i = choices.size(); i < coins.size(); i++)
        {
            choices += "0";
        }
        dp.push_back(choices);
        for (int i = 0; i < choices.size(); ++i)
        {
            if (choices[i] == '1')
            {
                chosen.insert(coins[i]);
            }
        }
        return;
    }

    if (sum > target_sum)
    {
        return;
    }

    calculate(coins, choices + "0");
    calculate(coins, choices + "1");
}

set<uint64_t> sums;

void calculate_sum(vector<uint64_t> chosen, string choice)
{
    if (choice.size() > chosen.size())
    {
        return;
    }

    if (choice.size() == chosen.size())
    {
        uint64_t sum = 0;
        for (int i = 0; i < choice.size(); i++)
        {
            sum += chosen[i] * (choice[i] == '1');
        }

        if (sum > target_sum)
        {
            return;
        }

        sums.insert(sum);
        return;
    }

    calculate_sum(chosen, choice + "0");
    calculate_sum(chosen, choice + "1");
}

int main(int, char **)
{
    uint64_t coin_count;
    cin >> coin_count >> target_sum;

    vector<uint64_t> coins;
    coins.reserve(coin_count);

    for (int i = 0; i < coin_count; i++)
    {
        uint64_t coin;
        cin >> coin;
        coins.push_back(coin);
    }

    calculate(coins, "");

    for (auto elem : dp_coins)
    {
        calculate_sum(elem, "");
    }

    cout << sums.size() << "\n";

    for (auto i : sums)
    {
        cout << i << " ";
    }

    cout << "\n";
}