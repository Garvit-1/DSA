class Solution {
public:
    vector<int> constructRectangle(int area) {
        int a=sqrt(area);
        int b=a;
        // cout<<a<<b;
        while((b>1 && a>1) || a<area){
            if(a*b==area) break;

            if(area%a==0){
                b=area/a;
                break;
            }
            if(area%b==0){
                a=area/b;
                break;
            }
            if(a<area)
            a++;
            if(b>1)
            b--;
        }
        if(a>b)
        return {a,b};

        return {b,a};
    }
};