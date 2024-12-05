#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k=3,count0=0,len=0,maxlen=0;
    for(int i=0;i<arr.size();i++){
        len=0;
        for(int j=i;j<arr.size();j++){
            len++;
            if(count0>k){
                
            }
            if(arr[i]==0){
                count0++;
            }
        }
    }
    cout<<maxlen;
}