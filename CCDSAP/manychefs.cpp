#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int n=str.length();
             for(int i=n-4;i>=0;i--){
      if(!(str[i  ]=='C' || str[i  ]=='?')) continue;
      if(!(str[i+1]=='H' || str[i+1]=='?')) continue;
      if(!(str[i+2]=='E' || str[i+2]=='?')) continue;
      if(!(str[i+3]=='F' || str[i+3]=='?')) continue;
      str[i  ] = 'C';
      str[i+1] = 'H';
      str[i+2] = 'E';
      str[i+3] = 'F';
    }
     for(int i=n;i>=0;i--){if(str[i]=='?')str[i]='A';}
        cout<<str<<endl;
    }
}