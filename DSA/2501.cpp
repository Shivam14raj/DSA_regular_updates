class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
       int n=nums.size(); 
       int ans=0;
       unordered_set<long long> st(nums.begin(), nums.end()); 

       for(int i=0; i<n; i++){
        long long num=nums[i];
        int len=1; 
        
        while(true){
            long long square= num*num; 
            if(square>1e10) break; // overflow condition
            if(st.count(square)){
                len++;
                num=square; 
            }else{
                break; 
            }
        }
        ans=max(ans, len); 
        
       }
       
       return ans>=2 ? ans : -1;  
        
    }
};