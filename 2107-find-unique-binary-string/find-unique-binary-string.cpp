class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string sb ="";

        for(int i=0;i<nums.size();i++)
        {
            
            sb+=(nums[i][i] == '0' ? "1": "0" );
            // sb.append(nums[i].charAt(i) == '0'? "1": "0");
        }
        // return new String(sb);
        return sb;
    
    }
};
