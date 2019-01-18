#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){cin >>arr[i];}
    stack<int> stf,stb;
    int mf[n],mb[n];
    for(int i=0;i<n;i++){
        if(stf.empty()){
            stf.push(arr[i]);
            mf[i]=-1;
        }
        else if(arr[i] < stf.top()){
            mf[i]=stf.top();
            stf.push(arr[i]);
        }
        else{
            while(!stf.empty() && arr[i] > stf.top()){
                stf.pop();
            }
            if(stf.empty()){
                stf.push(arr[i]);
                mf[i]=-1;
            }
            else{
                mf[i]=stf.top();
                stf.push(arr[i]);
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        if(stb.empty()){
            stb.push(arr[i]);
            mb[i]=-1;
        }
        else if(arr[i] < stb.top()){
            mb[i]=stb.top();
            stb.push(arr[i]);
        }
        else{
            while(!stb.empty() && arr[i] > stb.top()){
                stb.pop();
            }
            if(stb.empty()){
                stb.push(arr[i]);
                mb[i]=-1;
            }
            else{
                mb[i]=stb.top();
                stb.push(arr[i]);
            }
        }
    }
    int maxx=0;
    for(int i=0;i<n;i++){
        int temp=max(mb[i]^arr[i],mf[i]^arr[i]);
        maxx=max(maxx,temp);
    }
    cout << maxx;

}
