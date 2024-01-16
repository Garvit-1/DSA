class RandomizedSet {
public:
        unordered_set<int> s;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(s.count(val)==1) return false;
        s.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(s.count(val)==1){
        s.erase(val);
        return true;
        }
        return false;
        
    }
    
    int getRandom() {
        int x=rand()%s.size();
        auto it = s.begin();
        for (int i = 0; i < x; i++)
        {
            it++;
        }
        return *it;
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */