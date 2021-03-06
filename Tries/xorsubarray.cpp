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
    struct trie * left,*right;
};
struct trie * newnode(){
    struct trie *node=new struct trie;
    node->left=NULL;
    node->right=NULL;
    return node;
}
struct trie* insert(struct trie *root,int data){
    struct trie* node=root;
    repd(i,20,0){
        int bit= (data >> i)& 1;
        if(bit){
            if(!node->right)node->right=newnode();
            node=node->right;
        }
        else{
            if(!node->left)node->left=newnode();
            node=node->left;
        }
    }
    return root;
}
int search(struct trie *root,int data){
    struct trie* node=root;
    int sum=0;
    repd(i,20,0){
        int bit= (data >> i)& 1;
        if(bit){
            if(node->left!=NULL){node=node->left;}
            else{node=node->right;sum+=pow(2,i);}
        }
        else{
            if(node->right!=NULL){
                node=node->right;
                sum+=pow(2,i);}
            else{node=node->left;}
        }
    }
    return sum;
}
void xorsub(int prefix[],int n,struct trie * root){
    root=insert(root,0);
    struct trie * node=root;
    int maxxor=INT_MIN;
    int prexor=0;
    rep(i,0,n){
        prexor=prexor^prefix[i];
        node=insert(node,prexor);
        maxxor=max(maxxor,prexor^search(node,prexor));
    }
    cout<<maxxor;
}

int main(){
    fastIO
    int n;
    cin >> n ;
    int arr[n];
    rep(i,0,n){cin >>arr[i];}
    struct trie *root=newnode();
    xorsub(arr,n,root);
}
