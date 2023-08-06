class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        int a = INT_MIN, b = INT_MIN, c1 = 0, c2 = 0;

        for (int i = 0; i < n; i++) {
            if (c1 == 0 && nums[i] != b) {
                c1 = 1;
                a = nums[i];
            } else if (c2 == 0 && nums[i] != a) {
                c2 = 1;
                b = nums[i];
            } else if (nums[i] == a) {
                c1++;
            } else if (nums[i] == b) {
                c2++;
            } else {
                c1--;
                c2--;
            }
        }

        c1 = 0;
        c2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == a) c1++;
            if (nums[i] == b) c2++;
        }

        int mini = int(n / 3) + 1;
        if (c1 >= mini) v.push_back(a);
        if (c2 >= mini) v.push_back(b);

        return v;
    }
};
