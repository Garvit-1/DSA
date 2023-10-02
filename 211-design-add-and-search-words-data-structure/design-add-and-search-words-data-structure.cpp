class TrieNode {
public:
    TrieNode* links[26];
    bool isLeaf = false;
};
class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root=new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* temp = root;
        for(char c : word) {
            if(!temp -> links[c - 'a']) {
                temp -> links[c - 'a'] = new TrieNode();
            }
            temp = temp -> links[c - 'a'];
        }
        temp -> isLeaf = true;
    }
    
    bool search(string word) {
        TrieNode* temp = root;
        return searchRec(word,temp,0);
    }

    bool searchRec(string &word,TrieNode* curr,int i){
        if(!curr) return 0;
        if(i==word.size()) return curr->isLeaf;
        if(word[i]!='.') return searchRec(word,curr->links[word[i]-'a'],i+1);
        for(char ch='a';ch<='z';ch++){
            if(searchRec(word,curr->links[ch-'a'],i+1)) return true;
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */