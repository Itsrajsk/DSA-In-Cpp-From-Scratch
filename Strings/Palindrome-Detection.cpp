// Palindrome Detection

#include<bits/stdc++.h>
using namespace std;
bool isPali(string s){
    int low = 0;
    int high = s.length()-1;

    while(low<=high){
        if(s[low]!=s[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}
int main(){
    string  s = "NAMAN";
    cout<<isPali(s);
    return 0;
}