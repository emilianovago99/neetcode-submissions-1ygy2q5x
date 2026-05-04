class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimo = prices[0];
        int profit = 0;

        for(int p : prices)
        {
            if(p < minimo)
                minimo = p;
            else if(p - minimo > profit)
                profit = p - minimo;
        }

        return profit;
    }
};
