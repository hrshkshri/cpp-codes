class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int flg=0;
        for(int i=(nums.size()-1);i>=1;i--){
            if(nums[i]>nums[i-1]){
                swap(nums[i],nums[i-1]);
                flg=1;
            }
            if(flg)
                break;
        }
        if(flg==0)
            reverse(nums.begin(),nums.end());
    }
};
