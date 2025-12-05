class Solution {
public:
    int minDeletion(vector<int>& nums) { 
       // no need to erase coz index will be shifted and point to wrong index hence just count it and return
       int len=nums.size(); 
       int ans=0;
       
       for(int i=0; i<nums.size()-1; i++){
           int effcIndex=i-ans; // this is important 
           if(effcIndex%2==0 && nums[i]==nums[i+1]){
               ans++;
               len--;  
           } 
        //    if(len%2!=0) // phir 1 remove krna padega for making even
       } 
       
       // 1 2 2 3 3 
       if(len%2!=0) ans++; // after for loop if we get odd len then we need to delete one more
       return ans; 

 
    }
};