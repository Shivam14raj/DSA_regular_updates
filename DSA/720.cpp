class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string &a, const string &b){
            if(a.size()==b.size()){
                return a<b; // lexicographically 
            }
            return a.size()<b.size(); // sort on the basis of size 
        }); 

        unordered_map<string,int> mp;
        for(int i=0; i<words.size(); i++){
            string s=words[i]; 
            mp[s]++;  
        }  

        string ans="";

        for(int i=words.size()-1; i>=0; i--){
           string s=words[i];
           bool ok=true; 

           for(int j=1; j<s.size(); j++){
              string prefix= s.substr(0,j); 
              if(mp.find(prefix)==mp.end()){
                ok=false;
                break; 
              }  
           } 
           if(ok){
             if(s.size() > ans.size() || (s.size() == ans.size() && s < ans)){
            ans = s;
           }
        }    
           
             
        }
        return ans; 
    }
};