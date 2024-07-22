class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        for(int j=0;j<n;j++){
        for(int i=0;i<n-j-1;i++){
            if(heights[i+1]>heights[i]){
                string t1=names[i+1];
                names[i+1]=names[i];
                names[i]=t1;
                int t2=heights[i];
                heights[i]=heights[i+1];
                heights[i+1]=t2;
            }
        }
        
        }
    return names;
    }
};