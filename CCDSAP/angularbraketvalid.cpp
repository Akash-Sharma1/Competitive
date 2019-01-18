#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        stack<char> st;
        int sum=0,finale=0;
        int flag=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='<'){
                st.push(str[i]);
            }
            else if(str[i]=='>' && st.empty()){break; }
            else if(str[i]=='>' && st.top()=='<'){
                sum+=2;
                st.pop();
                if(st.empty()){
                    flag=1;
                    finale+=sum;
                    sum=0;}
            }
        }      
        if(flag==1){cout << finale<<endl;}
        else{cout <<"0\n";}
    }
}
