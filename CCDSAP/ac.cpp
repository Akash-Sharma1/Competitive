#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    stack<char> st;
    for(int i=0;i<str.length();i++){
        if(st.empty()){st.push(str[i]);}
        else{
            if(st.top()==str[i]){
                st.pop();
            }
            else{
                st.push(str[i]);
            }
        }
    }
    if(st.empty()){cout<<"Yes";}
    else{cout<<"No";}
}