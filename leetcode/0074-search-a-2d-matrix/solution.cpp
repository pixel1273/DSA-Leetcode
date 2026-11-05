class Solution {
public:
    bool searchinRow(vector<vector<int>>& matrix, int target,int row){
         int n=matrix[0].size();
         int st=0,end=n-1;
         while(st<=end){
            int mid=st+(end-st)/2;
            if(matrix[row][mid]==target) return true;
            else if(matrix[row][mid]>target) end=mid-1;
            else st=mid+1;
         }
         return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int minr=0,maxr=m-1;
        while(minr<=maxr){
            int midr=minr+(maxr-minr)/2;
            if(matrix[midr][0]<= target && matrix[midr][n-1]>=target){
                return searchinRow(matrix,target,midr);
            }
            else if(target>=matrix[midr][n-1]) minr=midr+1;
            else maxr=midr-1;
        }
        return false;
    }
};
