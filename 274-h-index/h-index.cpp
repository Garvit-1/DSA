class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        // int mid;
        int l=0,h=citations.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(citations[mid]==citations.size()-mid)
                return citations.size()-mid;
            
            else if(citations[mid]<citations.size()-mid)
                l = mid+1;
            
            else if(citations[mid]>citations.size()-mid)
                h = mid-1;
        }

        return citations.size()-l;
        
    }
};