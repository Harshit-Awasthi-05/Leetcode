class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>result;
        if (s1==s2){
            return result;
        }
        int i=0,j=0;
        string first_str="",sec_str="";
        int n=s1.size();
        while(i<n){
            if (s1[i]==s2[j]){
                if (!first_str.empty()) {
                    result.push_back({first_str, sec_str});
                    first_str = "";
                    sec_str = "";
                }
            }else{
                first_str+=s1[i];
                sec_str+=s2[j];
            }
            i++;
            j++;
        }
         if (!first_str.empty()) {
                    result.push_back({first_str, sec_str});
            }
        return result;
    }
};