#include<bits/stdc++.h>
using namespace std;
int binarysearch(int* arr,int n){
    int low=0,high=11;
    int a=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(n < arr[mid]){high=mid-1;}
        else{a=arr[mid];low=mid+1;}
    }
    return a;
}
int main(){
    int t;
    cin >> t;
    int arr[12];
    int prod=1;
    for(int i=0;i<12;i++){  arr[i]=prod;    prod*=2;}
    while(t--){
        int n;
        cin >> n;
        int count=0;
        while(n!=0){
            int x=binarysearch(arr,n);
            n-=x;
            count++;
        }
        cout << count<<endl;
    }
}
