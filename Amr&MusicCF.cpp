https://codeforces.com/contest/507/problem/A
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;



#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define meme(a,b) memset(a,b,sizeof(a));

void solve(){
   int n,k;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++){cin>>arr[i];}
   vector<pair<int,int>>v;
   for(int i=0;i<n;i++){
    pair<int,int>p;
  p.first=arr[i];
  p.second=i+1;
  v.push_back(p);

   }
   sort(v.begin(),v.end());
   int counter=0;
   vector<int>indices;
   for(int i=0;i<n;i++){
    if(v[i].first<=k){
    counter++;
    indices.push_back(v[i].second);
    k-=v[i].first;

    }

   }
   cout<<counter<<endl;
   for(auto u:indices){cout<<u<<" ";}

}


int main()
{
    optimize();

      solve();



    return 0;
}
