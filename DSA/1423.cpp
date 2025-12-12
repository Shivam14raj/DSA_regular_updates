class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
    int n=cardPoints.size(); 
    int leftsum=0; 
    for(int i=0; i<k; i++){
        leftsum+=cardPoints[i];
    } 

    int i=k-1;
    int ans=leftsum;
    int rightsum=0;
    int j=n-1;
    while(i>=0){
       leftsum=leftsum-cardPoints[i];
       rightsum+=cardPoints[j];
       i--;
       j--; 

       ans=max(ans, leftsum+rightsum); 
    }
    
    return ans; 
         
    }
};