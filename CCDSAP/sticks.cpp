#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    int arr[n];
    map<int,int> mape;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mape[arr[i]]++;
    }
    sort(arr,arr+n);
    int prod=1,count=0;
    for(int i=n-1;i>=0&& count<2;i--){
        if(mape[arr[i]]>=2){
            prod*=arr[i];
            count++;
            i--;
            mape[arr[i]]-=2;
        }
    }
    if(count<2){cout<<-1<<endl;}
    else{cout<<prod<<endl;}
    }
}
