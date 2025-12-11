class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size(); 
        
        // first count consecutive ones, if it exist no more
        int i=0; 
        int len=0;
        int ans=0;
        while(i<n){
            if(blocks[i]=='W'){
                i++;
                len=0; // reset len
                continue;   
            }  
            int j=i; // mtlb ab j 'B' pe hai 
            while(j<n && blocks[j]=='B'){
                len++;
                j++;
            }  
            ans=max(ans, len); 
            if(ans>=k) return 0;  
            
            // agr len k nhi hua and bich mein 'W' mil gya phir wapas se 
            i=j;
            len=0;  
        }   

        // now 
        int ans2=INT_MAX;
        for(int i=0; i<=n-k; i++){
           int noOfWhite=0;
            for(int j=i; j<i+k; j++){
                if(blocks[j]=='W') noOfWhite++;
            }
            ans2= min(ans2, noOfWhite); 
        }      
    
        return ans2;

    }
};