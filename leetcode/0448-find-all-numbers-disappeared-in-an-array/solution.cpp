class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        int i=0;
        while(i<n){
            int ci=nums[i]-1;
            if(ci==i || nums[i]==nums[ci]) i++;         
            else swap(nums[i],nums[ci]);
        }
        for(int i=0;i<n;i++){
            if(nums[i] != (i+1)) 
                v.push_back(i+1);
        }
        return v;
    }
};
