#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int m,x,y;
        cin >> m >> x >> y;
        int k=x*y;
        int arr[m];
        for(int i=0;i<m;i++){cin >> arr[i];}
        int prev=0;
        sort(arr,arr+m);
        int sum=0; 
        for(int i=0;i<m && prev<=100;i++){
            int low=arr[i]-k;
            int high=arr[i]+k;
            if(prev < low){sum+=low-prev-1;}
            prev=high;
        }
        if(prev < 100){sum+=100-prev;}
        cout <<sum<<endl;
    }
}