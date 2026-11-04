class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int minr=0,minc=0;
        int maxr=m-1,maxc=n-1;
        int tne=n*m,count=0;
        vector<int> v;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc && count<tne;j++){
                v.push_back(mat[minr][j]);
                count++;
            }
            minr++;
            for(int i=minr;i<=maxr && count<tne;i++){
                v.push_back(mat[i][maxc]);
                count++;
            }
            maxc--;
            for(int j=maxc;j>=minc && count<tne;j--){
                v.push_back(mat[maxr][j]);
                count++;
            }
            maxr--;
            for(int i=maxr;i>=minr && count<tne;i--){
                v.push_back(mat[i][minc]);
                count++;
            }
            minc++;           
        }
        return v;       
    }
};
