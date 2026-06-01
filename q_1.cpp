#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        string str = to_string(x);
        int size =str.length();
        int check=0;
       
            for(int i = 0; i < size/2; ++i){
                if(str[i]==str[size-1-i]){
                    check=1;
                }
                else{
                    return false;
                }
            }
            return true;
        }
int main(){
    cout<<isPalindrome(122);

    return 0;
}