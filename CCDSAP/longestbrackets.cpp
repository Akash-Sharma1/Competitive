#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    stack<int> st;
    for(int i=0;i<str.length();i++){
        if(st.empty()){
            if(str[i]=='('){st.push(-1);}
            else{st.push(-2);}
        }
        else if(str[i]=='('){
            st.push(-1);
        }
        else{
            int sum=0;
            while(!st.empty() && st.top()>0){
                sum+=st.top();
                st.pop();
            }
            if(!st.empty() && st.top()==-1){
                st.pop();
                sum+=2;
                if(!st.empty()&& st.top()>0){
                    sum+=st.top();
                    st.pop();
                }
                st.push(sum);
            }
            else{
                if(sum>0){st.push(sum);}
                st.push(-2);
            }
        }
    }
    int maxx=0,count=1;
    while(!st.empty()){
        if(st.top()==maxx){count++;}
        else if(maxx < st.top()){count=1;maxx=st.top();}
        st.pop();
    }
    cout << maxx <<" "<< count;
}
/*
(()())()(())()()())())()((()(()(())()()())((()(())()(()()()()))()(())()(((()())()(()((())()(())(()))
*/
