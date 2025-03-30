class Solution {
    public:
        void helper(int i, vector<int> output, vector<int> &nums, 
        vector<vector<int>> &ans){
            if(i >= nums.size()){
                ans.push_back(output);
                return;
            }
    
            vector<int> o1 = output;
            vector<int> o2 = output;
            o1.push_back(nums[i]);
    
            helper(i+1, o1, nums, ans);
            helper(i+1, o2, nums, ans);
        }
    
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<int> output;
            vector<vector<int>> ans;
            int ind = 0;
            helper(ind, output, nums, ans);
            return ans;
        }
    };