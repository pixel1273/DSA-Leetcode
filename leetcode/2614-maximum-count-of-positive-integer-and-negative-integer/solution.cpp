class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int pos=0,neg=0;
        int n=arr.size();
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]<=0) lo=mid+1;
            else{
                if(mid>0 && arr[mid-1]>0) hi=mid-1;
                else{
                    pos=n-mid;
                    break;
                }
            }
        }
         lo=0;
         hi=n-1;
         while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]>=0) hi=mid-1;
            else{
                if(mid<n-1 && arr[mid+1]<0) lo=mid+1;
                else{
                    neg=mid+1;
                    break;
                }
            }
         }
         return max(pos,neg);

    }
};
