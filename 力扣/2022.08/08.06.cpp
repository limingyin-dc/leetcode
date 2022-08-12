#include <vector>
#include <string>
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        map<string,int>m;
        vector<string>ans;
        for(int i = 0;i < words.size();i++){
            for(int j = 0;j < words.size();j++){
                if(i != j && words[i].find(words[j]) != -1){
                    if(!m[words[j]]){
                        ans.push_back(words[j]);
                        m[words[j]]++;
                    }
                    printf("%d",words[i].find(words[j]));
                }
            }
        }
        return ans;
    }
};