#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n=0,steps=0;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++){cin >>arr[i];}
        int sum=0,minn=INT_MAX;
        for(int i=0;i<n;i++){
            minn=min(arr[i],minn);
            sum+=arr[i];
        }
        cout << sum-n*minn<<endl;
    }
}
