#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long arr[n];
        stack<long long> st;
        stack<long long> rev;
        long long index=-1,num=-1;
        for(long long i=0;i<n;i++){cin >> arr[i];}
        for(long long i=n-1;i>=0;i--){
            if(st.empty()){
                st.push(arr[i]);
            }
            else if(st.top() > arr[i]){
                index=i;
                while(!st.empty() && st.top() > arr[i]){
                    long long x=st.top();
                    st.pop();
                    rev.push(x);
                }
                num=rev.top();
                rev.pop();
                rev.push(arr[i]);
                break;
            }
            else{
                st.push(arr[i]);
            }
        }
        if(index==-1){cout <<"-1"<<endl;continue;}
        for(long long i=0;i<index;i++){cout << arr[i];}
        cout << num;
        while(!st.empty()){
            long long x=st.top();
            st.pop();
            rev.push(x);
        }
        while(!rev.empty()){cout << rev.top();rev.pop();}
        cout<<endl;
    }

}
