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
