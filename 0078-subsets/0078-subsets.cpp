class Solution {
private:
    vector<vector<int>> ans;
    vector<int> path;

    void dfs(int start, vector<int>& nums){
        ans.push_back(path);
        for(int i = start; i < nums.size(); i++){
            path.push_back(nums[i]);
            dfs(i+1, nums);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(0, nums);
        return ans;
    }
};