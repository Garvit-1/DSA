class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> x(26);
        int ans=0;
        for(auto a:chars) x[a-'a']++;
        for(auto a:words){
            vector<int> v=x;
            bool f=true;
            for(auto b:a){
                if(v[b-'a']<=0) {
                    f=false;break;
                }else{
                    v[b-'a']--;
                }
            }
            if(f) ans+=a.size();
        }

        return ans;
    }
};