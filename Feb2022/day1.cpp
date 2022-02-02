class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int l = 0, r = 1, maxP = 0;
        while (r < prices.size())
        {
            if (prices[r] < prices[l])
            {
                l = r;
            }
            else
            {
                int temp = prices[r] - prices[l];
                if (temp > maxP)
                    maxP = temp;
            }
            r++;
        }
        return maxP;
    }
};