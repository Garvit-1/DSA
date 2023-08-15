class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        vector<vector<string>> ans;
        for(int i=1;i<searchWord.length()+1;i++){
            int j=0;
            string s=searchWord.substr(0,i);
            vector<string> temp;
            while(j<products.size() && temp.size()<3){
                if(products[j].substr(0,i)==s) temp.push_back(products[j]);
                j++;
            }
            ans.push_back(temp);
        }
        return ans;
    }

};