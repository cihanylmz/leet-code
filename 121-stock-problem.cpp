//We need to find the best spots to buy and sell stock in a given list of integers.

#include <climits>
#include <vector>
using namespace std;

// We need to maintain two variables. Smallest number and max profit.
int maxProfit(vector<int>& prices) {
    int min_price = INT_MAX;
    int profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if(prices[i] < min_price)
            min_price = prices[i];
        else if (prices[i] - min_price > profit)
            profit = prices[i] - min_price;

    }
    return profit;
}

