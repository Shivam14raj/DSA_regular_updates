class Solution {
public:
    bool isPrime( int x){
        if(x<2) return false; 
        for(int i=2; i*i<=x; i++){
            if(x%i==0) return false;
        } 
        return true; 
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        } 

        for(auto &it: mp){
            if(isPrime(it.second)){
                return true;
            }
        } 
        return false;
    }
};
/*
why i*i<=x???? 

36 = 2 × 18
36 = 3 × 12
36 = 4 × 9
36 = 6 × 6

👉 One number goes up
👉 One number goes down

They move like this:

2   × 18
3   × 12
4   × 9
6   × 6


At some point they meet or cross.

That “meeting point” is square root.

For 36 → they meet at 6 (since 6×6 = 36)

*/