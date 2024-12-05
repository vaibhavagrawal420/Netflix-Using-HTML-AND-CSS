#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="cabdzabcd";
    int count=0,shount=0;
    int hash[256]={0},maxlen=0,len=0;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            if(int(hash[int(s[j])])==1)break;
            len=j-i+1;
            maxlen=max(len,maxlen);
            hash[int(s[j])]=1;
        }
    }
    cout<<maxlen;
    return 0;
}