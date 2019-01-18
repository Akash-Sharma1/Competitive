#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        int arr[n];
        for(int i=0;i<n;i++){cin >>arr[i];}
        int flag=1;
        int curr=1;
        if(arr[0]!=1){cout<<"no\n";return 0;}
        if(arr[n/2]!=7){cout<<"no\n";return 0;}
        for(int i=0;i<=ceil(n/2);i++){
            if(arr[i]<=0 && arr[i]>7){flag=0;break;}
            if(arr[i]!=arr[n-1-i]){flag=0;break;}
            if(arr[i]!=curr && arr[i]==curr+1){curr=arr[i];}
            if(arr[i]!=curr && arr[i]!=curr+1){flag=0;break;}
        }
        if(flag==1){cout<<"yes\n";}
        else{cout<<"no\n";}
    }   
}