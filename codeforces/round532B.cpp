#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int arr[n];
    for(int i=0;i<n;i++){cin >> arr[i];}
    map<int,int> mape;
    int sum=0;
    for(int i=0;i<n;i++){
        if(mape[arr[i]]==0){
            sum++;
        }
        mape[arr[i]]++;
        if(sum==m){
            arr[i]=1;
            for(int j=1;j<=m;j++){
                mape[j]--;
                if(mape[j]==0){sum--;}
            }
        }
        else{arr[i]=0;}
    }
    for(int i=0;i<n;i++){
        cout<< arr[i];
    }
}