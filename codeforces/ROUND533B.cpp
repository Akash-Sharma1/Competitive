#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
     string str;
     cin >> str;
     int arr[n]={0};
     int count=0;
    for(int i=0;i<n;){
         char rep=str[i];
         while(str[i]==rep){
             arr[i]=count%k+1;
             count++;
             i++;
         }
         count=0;
    }
    int mape[26]={0};
    for(int i=k-1;i<=n-1;){
        if(arr[i]==k){
            mape[str[i]-97]++;
            i+=k;
        }
        else {i++;}
    }
    int maxx=INT_MIN;
    for(int i=0;i<26;i++){maxx=max(mape[i],maxx);}
    cout << maxx;
}