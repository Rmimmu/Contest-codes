#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define meme(a,b) memset(a,b,sizeof(a));

bool cmp(const pair<int,int>&p1, const pair<int,int>&p2){
if(p1.first>p2.first) return 1;
else if(p1.first==p2.first) return (p1.second<p2.second);
else return 0;
}


void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i=0;i<n;i++) cin>>arr[i];
bool condition = true;
  for(ll i=0;i<n;i++){
    if(arr[i]<=2*max(i,n-1-i)){
        condition= false;
        break;
    }
  }
  if(condition) cout<<"YES";
  else cout<<"NO";
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

