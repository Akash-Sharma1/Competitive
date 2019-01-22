#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >>str;
    int n=str.length();
    stack<char> st;
    int count=0; 
    for(int i=0;i<n;i++){
        if(!st.empty() && st.top()==str[i]){
            st.pop();
            count++;
        }
        else{
        st.push(str[i]);
        }
    }
    if(count%2==0){cout << "NO\n";}
    else{cout << "YES\n";}
}