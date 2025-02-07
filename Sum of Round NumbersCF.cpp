#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

const int mx = 1e4+123;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define meme(a,b) memset(a,b,sizeof(a));

void solve(){

int n;
cin>>n;

vector<int>v;
vector<int>v1={10,100,1000,10000,100000};
for(auto u : v1){
    if(n%u!=0){
        v.push_back(n%u);
        n-=(n%u);

    }

}
cout<<v.size()<<endl;
for(auto u: v){

    cout<<u<<" ";
}


}


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
      solve();
      cout<<endl;
    }

    return 0;
}
