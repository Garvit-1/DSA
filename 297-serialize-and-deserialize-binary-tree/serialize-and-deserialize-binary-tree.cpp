/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    void help(TreeNode* root,string& s){
        queue<int> q;
        

    }
    string serialize(TreeNode* root) {
        if(!root) return "";
        string s="";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();q.pop();
                if(curr==NULL) {s+="ba";continue;}
                s+=to_string(curr->val+1000);
                s+='a';
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        // cout<<s;
        return s;      
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.length()==0) return NULL;
        vector<int> v;
        for(int i=0;i<data.length();i++){
            int x=0;
            while(data[i]!='a'){
                if(data[i]=='b') {x=-1;i++;break;}
                else x=x*10+(data[i]-'0');
                i++;
            }
            v.push_back(x);
        }
        for(auto a:v) cout<<a<<" ";
        int i = 1;
        queue<TreeNode*> q;
        TreeNode* root=new TreeNode(v[0]-1000);
        q.push(root);

        while (!q.empty() && i < v.size()) {
            TreeNode* curr = q.front();
            q.pop();

            if (i < v.size() && v[i]!=-1) {
                curr->left =new TreeNode(v[i]-1000);
                q.push(curr->left);
            }
            i++;

            if (i < v.size() && v[i]!=-1) {
                curr->right =new TreeNode(v[i]-1000);
                q.push(curr->right);
            }
            i++;
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));