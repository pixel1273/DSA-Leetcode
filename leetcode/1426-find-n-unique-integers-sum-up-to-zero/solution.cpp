class Solution {
public:
    vector<int> sumZero(int n) {
        int num=n/2;
        vector<int> v(n,0);
        if(n%2==0){
            int i=num-1;
            int j=num;
            for(int k=1;k<=num;k++){
                v[i--]= -k;
                v[j++]= k;
            }
        }
        else{
            int i=num-1;
            int j=num+1;
            for(int k=1;k<=num;k++){
                v[i--]= -k;
                v[j++]=k;
            }
        }
        return v;
    }
};
