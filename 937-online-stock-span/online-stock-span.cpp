class StockSpanner {
public:
    vector<int> v;
    StockSpanner()  {
        
    }
    
    int next(int price) {
        int a=1;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]<=price) a++;
            else break;
        }
        v.push_back(price);
        return a;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */