class OrderedStream {
public:
    vector<string> a;
    int ptr;
    OrderedStream(int n) {
        a = vector<string>(n);
        ptr=1;
    }
    
    vector<string> insert(int idKey, string value) {
        a[idKey-1]=value;
        vector<string> ans;
        if(ptr==idKey){
            int i=ptr-1;
            for(i;i<a.size();i++){
                if(a[i]=="") break;
                ans.push_back(a[i]);
            }
            ptr=i+1;
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */