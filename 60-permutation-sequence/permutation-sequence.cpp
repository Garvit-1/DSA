class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> vec;
        for(int i=0;i<n;i++) 
        vec.push_back(i+1);
        
        for(int i=0;i<k-1;i++) 
        next_permutation(vec.begin(),vec.end());

        string s="";
        for(int i=0;i<n;i++) s+='0'+vec[i];
        return s;
    }
};


// class Solution {
// public:
// //TLE
// vector<vector<int>> vec;
// void help(int ind,vector<int> v){
//         if(ind==v.size()){
//             vec.push_back(v);
//         }

//         for(int i=ind;i<v.size();i++){
//             swap(v[i],v[ind]);
//             help(ind+1,v);
//             swap(v[i],v[ind]);
//         }
//     }
//     string getPermutation(int n, int k) {
//         vector<int> v;
//         for(int i=1;i<=n;i++){
//             v.push_back(i);
//         }
//         help(0,v);
//         string s="";
//         k--;
//         for(int i=0;i<vec[k].size();i++){
//             s+=to_string(vec[k][i]);
//             cout<<vec[k][i];
//         }
//         return s;
//     }
// };