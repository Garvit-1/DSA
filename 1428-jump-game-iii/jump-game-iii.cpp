class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if (start < 0 || start >= arr.size() || arr[start] == -1) {
            return false;
        }

        if (arr[start] == 0) {
            return true;
        }

        // Mark the current index as visited
        int jump = arr[start];
        arr[start] = -1;

        return canReach(arr, start + jump) || canReach(arr, start - jump);
    }
};
