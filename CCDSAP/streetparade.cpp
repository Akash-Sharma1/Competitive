#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    while(true){
        long long n;
        cin >> n;
        if(n==0){break;}
        int arr[n];
        for(int i=0;i<n;i++){cin >>arr[i];}
        stack<int> st;
        int j=1;
        for(int i=0;i<n;){
            if(arr[i]==j){j++;i++;}
            else if(!st.empty() && st.top()==j){j++;st.pop();}
            else{st.push(arr[i]);i++;}
        }
        int flag=1;
        while(j<n){
            if(st.top()==j){
                st.pop();
                j++;
            }
            else {flag=0;break;}
        }
        if(flag==1){cout<<"yes\n";}
        else{cout<<"no\n";}
    }
}
