class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minprice = INT_MAX;
        int secondMin = INT_MAX;
        int n = prices.size();

        for(auto &price : prices){
            if(price < minprice){
                secondMin = minprice;
                minprice = price;
            }else{
                secondMin = min(secondMin,price);
            }
        }
        if(minprice + secondMin > money){
            return money;
        }
        return money - (minprice + secondMin);
    }
};