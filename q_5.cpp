#include<bits/stdc++.h>
using namespace std;void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> c(n);
        for(int i = 0; i < n; ++i){
            c[i] = s[n-i-1];
        }
        s=c;
        
    }

int main(){
        vector<char> s={'h','e','l','l','o'};
        reverseString(s);
        for(char i : s){
            cout<<i<<" ";
        }
    return 0;
}