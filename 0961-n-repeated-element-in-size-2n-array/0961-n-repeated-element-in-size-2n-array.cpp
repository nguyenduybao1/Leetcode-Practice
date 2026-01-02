/*Time Complexity: O(n)
  Space Complexity: O(n)
*/
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       unordered_set<int> hs;
        for(int n : nums){
            if(hs.count(n)){
                return n;
            }
            hs.insert(n);
        }
       return -1;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        for (int i = 0; i + 1 < nums.size(); i++) {
            if (nums[i] == nums[i + 1]) return nums[i];
            if (i + 2 < nums.size() && nums[i] == nums[i + 2]) return nums[i];
        }
        return -1;
    }
};
*/