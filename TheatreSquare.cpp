
///https://codeforces.com/contest/1/problem/A

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
ll n,m,a;
cin>>n>>m>>a;
ll x,y;
if(n%a!=0) x = n/a +1;
else x = n/a;

if(m%a!=0) y = m/a +1;
else y = m/a;

cout<<x*y;

}

int main()
{
    optimize();

    solve();

    return 0;
}
