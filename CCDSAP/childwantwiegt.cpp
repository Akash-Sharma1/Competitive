#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>> k;
        int arr[n],sum=0;
        for(int i=0;i<n;i++){cin>>arr[i];sum+=arr[i];}
        sort(arr,arr+n);
        if(n-k >= k){
             for(int i=0;i<k;i++){sum=sum-2*arr[i];}
        }
        else{
            for(int i=0;i<n-k;i++){sum=sum-2*arr[i];}
        }
        cout<< sum<<endl;
    }
}
