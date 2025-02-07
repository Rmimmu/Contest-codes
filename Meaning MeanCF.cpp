///https://codeforces.com/problemset/problem/2021/A
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define meme(a,b) memset(a,b,sizeof(a));
#define isVowel(c) (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')

bool cmp(const pair<int,int>&p1, const pair<int,int>&p2){
if(p1.first>p2.first) return 1;
else if(p1.first==p2.first) return (p1.second<p2.second);
else return 0;
}


void solve(){
int n;
cin>>n;
vector<ll>v(n);

for(int i=0;i<n;i++) cin>>v[i];


sort(v.begin(), v.end());

ll ans =(v[0]+v[1])/2;
for(int i=2;i<n;i++) {

ans=(ans+v[i])/2;

}

cout<<ans;



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
