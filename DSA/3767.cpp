class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        int n=technique1.size();
        vector<pair<int,int>> v; 
        for(int i=0; i<n; i++){
            v.push_back({technique1[i], technique2[i]});
        }

        long long t=0;

        // min-heap
        priority_queue<long long, vector<long long>, greater<long long>> pq; 

        int m=0; 

        for(int i=0; i<n; i++){
            long long l=(long long)technique2[i]-technique1[i];

            if(l<0){
                t+=technique1[i];
                m++;  
            } else{
                t+=technique2[i];
                pq.push(l);
            }
        } 

        while(m<k){
            int p=pq.top();
            t-=p;
            pq.pop();
            m++;
        } 

        return t; 
        
    }
};