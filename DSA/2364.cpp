class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        // int count=0;
        // int n=nums.size(); 

        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if((j-i)!=(nums[j]-nums[i])) count++;
        //     }
        // }
        // return count;
        // above code is too slow(brute force)

        // rewrite the equation: nums[i]-i != nums[j]-j;
        
        int n=nums.size();
        int count=0; 
        // vector<int>res;  
        // for(int i=0; i<n; i++){
        //    res.push_back(nums[i]-i); 
        // }  

        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(res[i]!=res[j]) count++;
        //     }
        // }
        // return count; 
        
        // above have TLE 
        long long res=0;
        unordered_map<int,int> mp; 
        for(int i=0; i<n; i++){
            nums[i]=nums[i]-i; 
        } 

        mp[nums[0]]=1; 

        for(int j=1; j<n; j++){
            int countofNumsj= mp[nums[j]]; 

            int totalnumsbeforej= j; 

            int badpairs=totalnumsbeforej-countofNumsj;

            res+=badpairs;

            mp[nums[j]]++;
        }

        return res; 

    }
};