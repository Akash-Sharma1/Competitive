#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    stack<int> st;
    for(int i=0;i<str.length();i++){
        if((int)str[i]>=49&& (int)str[i]<=48+10){
            int sum=0;
            sum=st.top();
            sum*=(str[i]-48);
            st.pop();
            st.push(sum);
        }
        else if(str[i]==')'){
            int sum=0;
            while(st.top()!=-1){//'('
                sum+=st.top();
                st.pop();
            }
            st.pop();
            st.push(sum);
        }
        else{
            int x=0;
            if(str[i]=='H'){x=1;}
            else if(str[i]=='C'){x=12;}
            else if(str[i]=='O'){x=16;}
            else{x=-1;}
            st.push(x);
        }
    }
    int sum=0;
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    cout<<sum;
}