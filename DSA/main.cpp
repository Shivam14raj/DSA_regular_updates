// 532. K-diff Pairs in an Array
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp; 

        for(int i=0; i<nums.size(); i++){  
            mp[nums[i]]++;
        } 

        int count=0; 
        for(auto const& [num, key]: mp){
            if(k==0){
                if(key>=2){
                    count++;
                }
            } else if(k>0){
                int diff=num+k; 
                if(mp.count(diff)){
                    count++;
                }
            }  
        }
        return count;  
    }
}; 