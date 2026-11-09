class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       int cs=0;
       int ss=0;
       int n=students.size();
       for(int i=0;i<n;i++){
        if(students[i]==0) cs++;
        else ss++;
       }
    for(int j=0;j<n;j++){
        if(sandwiches[j]==0){
            if(cs==0) break;
            cs--;
        }
        else{
            if(ss==0) break;
            ss--;
        }
    }

       return cs+ss;
    }
};
