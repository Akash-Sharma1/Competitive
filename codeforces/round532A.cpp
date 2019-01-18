#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int arr[n+1];
    int totalsum=0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        totalsum+=arr[i];}
    int maxx=INT_MIN;
    for(int b=1;b<=k;b++){
        int c=b;
        int sum=totalsum;
        int i=0;
        while((c+i*k)<=n){
            if(arr[c+i*k]==-1){sum++;}
            else{sum--;}
            i++;
        }
        i=-1;
        while((c+i*k)>0){
            if(arr[c+i*k]==-1){sum++;}
            else{sum--;}
            i--;
        }
        if(sum<0){sum=-sum;}
        maxx=max(maxx,sum);
    }
    cout << maxx;
}