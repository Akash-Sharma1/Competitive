#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    while(true){
        string str;
        cin >> str;
        if(str[0]=='-'){break;}
        stack<char> st;
        for(int i=0;i<str.length();i++){
            if(str[i]=='{'){st.push(str[i]);}
            else{
                if(!st.empty() && st.top()=='{'){st.pop();}
                else{st.push(str[i]);}
            }
        }
        int count=0;
        while(!st.empty()){
            if(st.top()=='{'){
                st.pop();
                if(st.top()=='{'){
                    // {{
                    count++;
                    st.pop();
                }
                else{
                    // }{
                    count+=2;
                    st.pop();
                }
            }
            else if(st.top()=='}'){
                st.pop();
                if(st.top()=='}'){
                    // }} 
                    count++;
                    st.pop();
                }
            }
        }
        cout <<t<<". "<<count<<endl;
        t++;
    }
}