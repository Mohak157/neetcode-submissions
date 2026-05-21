class Solution {
public:

    int maxProfit(vector<int>& prices) {
        
            int l=0,r=l+1,profit,maxp=0;
            while(r<prices.size()){
                if(prices[r]<prices[l]){
                    l=r;
                    r++;
                }
                else{
                     profit=prices[r]-prices[l];
                    maxp = max(profit,maxp);
                    r++;
                }
            }
           
           return maxp;
           

         
    
    }
};
