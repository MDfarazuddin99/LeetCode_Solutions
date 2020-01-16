#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool check(char a, vector<char> vec){
        if(!vec.empty()){
            for(char c: vec){
                if(c == a){
                    return false;
                }else{
                    continue;
                }
            }
            return true;
        }else{
            return true;
        }
    }

    int lengthOfLongestSubstring(string s) {
        vector<char> rest;
        int max_length = 0;
        int temp =0;
        for(int i=0; i<s.length(); i++){
            if(check(s[i],rest) ){
                rest.push_back(s[i]);
                if(max_length < rest.size()){
                    max_length = rest.size();
                }
            }else{
                for(int j=temp; j<i;j++){
                    if(s[i] == s[j]){
                      i = j+1;
                    }
                }
                rest.clear();
                temp = i;
            }
            // cout<<i<<endl;
        }
        return max_length;
    }
};

int main(){
  Solution a;
  string s ;
  cin>>s;
  cout<<a.lengthOfLongestSubstring(s)<<endl;;
  return 0;
}
