#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        
        if(n!=m){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
int main(){
    string s = "anagram";
    string t = "nagaram";
    cout<<isAnagram(s,t);
    
    return 0;
}
