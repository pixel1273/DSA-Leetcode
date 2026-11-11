class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        if(n==1) return deck;
        sort(deck.begin(),deck.end());
        queue<int> q;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            q.push(i);
        }
        int j=0;
        while(q.size()>0){
            v[q.front()]=deck[j];
            q.pop();
            if(q.size()==0) break;
            int idx=q.front();
            q.pop();
            q.push(idx);
            j++;
        }
    return v;
    }
};
