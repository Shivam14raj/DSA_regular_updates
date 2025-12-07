class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(), changed.end()); 
        int n=changed.size(); 
        if(n%2==0==false) return {}; 

        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            int val=changed[i];
            mp[val]++;
        } 
        vector<int>res; 

        for(int i=0; i<n; i++){
            int x=changed[i]; 
            if(mp[x]==0) continue; // iska double ho skta hai

            if(mp[x*2]==0) return {}; // we need pair

            res.push_back(x);
            mp[x]--;
            mp[2*x]--; 

        }
        return res;  
    } 
};