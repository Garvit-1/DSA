class Solution {
public:

int fun(int x,int y,char ch){
    if(ch=='+') return x+y;
    else if(ch=='-') return x-y;
    else if(ch=='*') return x*y;
    return 0;
}
    vector<int> diffWaysToCompute(string ex) {
       vector<int> ans;
       int n=ex.length();
        for(int i=0;i<n;i++){
            if(ex[i]=='+' || ex[i]=='-' ||ex[i]=='*'){
                vector<int> left=diffWaysToCompute(ex.substr(0,i));
                vector<int> right=diffWaysToCompute(ex.substr(i+1,n-i));
            for(auto x:left){
                for(auto y:right){
                    ans.push_back(fun(x,y,ex[i]));
                }
            }
            }
        }

        if(ans.size()==0) ans.push_back(stoi(ex));
        return ans;


    

    }
};