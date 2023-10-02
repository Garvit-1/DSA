class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0,b=0;
        for(int i=0;i<colors.size();i++){
            if(colors[i]==colors[i+1] and colors[i+1]==colors[i+2]){
                if(colors[i]=='A') a++;
                else b++;
            }
        }

        if(a>b) return true;

        return false;
    }
};