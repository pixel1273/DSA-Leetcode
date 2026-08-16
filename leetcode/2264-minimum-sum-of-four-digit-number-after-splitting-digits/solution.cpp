class Solution {
public:
    int minimumSum(int num) {
       int ones=num%10;
       num/=10;
       int tens =num%10;
       num/=10;
       int huns=num%10;
       num/=10;
       int thous =num%10;
       num/=10;
       int smallest=min(min(ones,tens),min(huns,thous));
       vector<int> v(4);
       v[0]=ones;
       v[1]=tens;
       v[2]=huns;
       v[3]=thous;
       sort(v.begin(),v.end());

       int new1=v[0];
       new1*=10;
       new1+=v[2];
       int new2=v[1];
       new2*=10;
       new2+=v[3];
       return new1+new2;

    }
};
