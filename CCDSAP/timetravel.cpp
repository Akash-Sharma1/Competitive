#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,x,y;
        cin >> n >>x >>y;
        int P[n],D[n];
        for(int i=0;i<n;i++){cin >> P[i];}
        for(int i=0;i<n;i++){cin >> D[i];}
        int req[n];// remaing task
        int sum=0;
        for(int i=0;i<n;i++){req[i]=P[i]-D[i];sum+=req[i];}
        int arr[x+y];//task reducer
        for(int i=0;i<x+y;i++){cin >>arr[i];}
        sort(arr,arr+x+y);
        sort(req,req+n);
        for(int i=n-1,j=x+y-1;i>=0 && j>=0;){
            if(req[i]>=arr[j]){
                j--;
                i--;
                sum-=arr[j+1];
            }
            else{j--;}
        }
        cout<<sum<<endl;
    }
}