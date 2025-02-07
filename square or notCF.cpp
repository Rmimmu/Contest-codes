/// https://codeforces.com/problemset/problem/2008/B

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
string str;
cin>>str;
int root = sqrt(n);
int count1=0,count0=0;
if(root*root!=n) cout<<"No";


else {
    for(int i=0;i<n;i++) {
        if(str[i]=='1') count1++;
        else count0++;
    }
    if((count1==4*root-4)&&(count0==n-count1)) cout<<"Yes";
    else cout<<"No";
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
