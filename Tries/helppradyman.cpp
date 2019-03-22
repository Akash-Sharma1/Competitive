#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define pb push_back
#define en end()
//memset(dp,1000000,sizeof(int)*1000001);
#define le length()
#define mp make_pair
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;
struct trie{
    bool isend;
    struct trie *child[26];
};
struct trie* newnode(){
    struct trie *node=new struct trie;
    rep(i,0,26){node->child[i]=NULL;}
    node->isend=false;
    return node;
}
struct trie* insert(struct trie *root,string str){
    int i=0,n=str.length();
    struct trie *node=root;
    while(i<n){
        int x=(int)str[i];
        if(x<92){x-=65;}
        else{x-=97;}
        if(node->child[x]==NULL){
            node->child[x]=newnode();
        }
        node=node->child[x];
        i++;
    }
    node->isend=true;
    return root;
}
void dfs(struct trie * root,string str){
    struct trie * node=root;
    if(node->isend)cout<<str<<endl;
    rep(i,0,26){
        if(node->child[i])
            dfs(node->child[i],str+(char)(i+97));
    }
}
void search(struct trie*root,string str){
    int i=0,n=str.length();
    struct trie *node=root;
    while(i<n){
        int x=(int)str[i];
        if(x<92){x-=65;}
        else{x-=97;}
        if(node->child[x]==NULL){cout <<"No suggestions"<<endl;return;}
        node=node->child[x];
        i++;
    }
    
    dfs(node,str);
}
int main(){
    fastIO
    int t;
    cin >> t;
    struct trie *dict=newnode();
    while(t--){
        string str;
         cin >> str;
        dict=insert(dict,str);
    }
    cin >> t;
    while(t--){
        string str;
         cin >> str;
        search(dict,str);
    }
}