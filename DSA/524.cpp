class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        vector<string> res; 

        for(int i=0; i<dictionary.size(); i++){
            string str=dictionary[i]; 
            int m=0;
            int n=0;
            while(m<str.size() && n<s.size()){
                if(str[m]==s[n]){
                    m++;
                } 
                n++; 
            } 

            if(m==str.size()){
                res.push_back(str);
            }
        } 

        // now need lexicographicaly
        string ans=""; 
        sort(res.begin(), res.end(), [](const string &a, const string &b){
            if(a.size()==b.size()){ // lexicographically 
                return a<b; 
            } 
            return a.size()>b.size(); // bigger first 
        }); 

        if(!res.empty()) ans = res[0];
        return ans; 
    }
};