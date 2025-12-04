class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>st(candyType.begin(), candyType.end()); 
        int n=candyType.size();
        int limit=n/2; 
        
         if(st.size()>=limit){
            return limit;
         } else if(st.size()<limit){
            return st.size();
         } else {
            return 0; 
         }
    }
};