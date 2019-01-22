#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,b,t;
        cin >> n >> k >> b >> t;
        int arr[n],speed;
        for(int i=0;i<n;i++){cin >> arr[i];arr[i]=b-arr[i];}
        for(int i=0;i<n;i++){cin >> speed;arr[i]=ceil(arr[i]/speed);}
        for(int i=n-1;i>=0;i--){
            
        }
    }
}