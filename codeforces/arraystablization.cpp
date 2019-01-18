#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){cin >> arr[i];}
    int minx=INT_MAX,maxx=INT_MIN;
    int indexmin=-1,indexmax=-1;
    for(int i=0;i<n;i++){
        if(arr[i] < minx){minx=arr[i];indexmin=i;}
        if(arr[i] > maxx){maxx=arr[i];indexmax=i;}
    }
    //2nd max and 2nd min
    int max2=INT_MIN,min2=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < min2 && i!=indexmin){min2=arr[i];}
        if(arr[i] > max2 && i!=indexmax){max2=arr[i];}
    }
    (maxx-min2 < max2-minx) ? cout << maxx-min2 : cout << max2-minx;
    return 0;
}
