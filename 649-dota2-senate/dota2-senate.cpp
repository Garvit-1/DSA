class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rad,dir;
        int n=senate.length();
        for(int i=0;i<n;i++){
            if(senate[i]=='R') rad.push(i);
            else dir.push(i);
        }
        while(!rad.empty() && !dir.empty() ){
            int a=rad.front();
            rad.pop();
            int b=dir.front();
            dir.pop();
            if(a<b){
                rad.push(n++);
            }
            else dir.push(n++);
        } 
        if(!rad.empty()) return "Radiant";
        else return "Dire";
    }
};