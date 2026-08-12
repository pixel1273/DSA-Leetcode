class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
           int ci=nums[i];
           if(ci==i || nums[i]==n) i++;
           else swap(nums[i],nums[ci]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i)
            return i;
        }
        return n;
    }
};
