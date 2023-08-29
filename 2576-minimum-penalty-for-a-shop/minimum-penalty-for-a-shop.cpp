class Solution {
public:
    int bestClosingTime(string customers) {
        int count = 0;
        int min = count,index = 0;
        for(int i=1;i<=customers.length();i++){
            if(customers[i-1]=='Y') count++;
            else count--;
            if(count>min){
                min = count;
                index = i;
            }
        }
        return index;
    }
};