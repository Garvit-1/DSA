class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int rounds=minutesToTest/minutesToDie;

        for(int i=0;i<buckets;i++){
            if(pow((rounds+1),i) >= buckets) return i;
        }

        return -1;
    }
};