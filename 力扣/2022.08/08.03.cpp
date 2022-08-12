#include <string>
class Solution {
public:
    string func(string s){
        string a;
        for(int i = 1;i < s.size();i++){
            a.push_back(s[i]);
        }
        a.push_back(s[0]);
        return a;
    }
    string orderlyQueue(string s, int k) {
        if(k > 1){
           sort(s.begin(),s.end()); 
        }
        else if(k == 1 && s.size() > 1){
            string tem = s;
            for(int i = 0;i < s.size();i++){
                tem = func(tem);
                if(s > tem){
                    s = tem;
                }
            }
        }
        return s;
    }
};