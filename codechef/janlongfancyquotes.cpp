#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        string str;
        getline(cin, str); 
        while (str.length()==0 ) 
            getline(cin, str); 
  
        string pat="not";
        stringstream ss(str);
        string temp;
        int flag=0;
        while(ss >> temp){
            if(temp==pat){
                flag=1;
                break;
            }
        }
        if(flag==1){cout<<"Real Fancy"<<endl;}
        else{cout<<"regularly fancy"<<endl;}
    }
}