/// https://codeforces.com/contest/2056/problem/A
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define meme(a,b) memset(a,b,sizeof(a));
void solve(){
int n,m;
cin>>n>>m;

int x,y;
cin>>x,y;
int x1=x, y1=y;
int counter1=x,counter2=y;
for(int i=1;i<n;i++){
  cin>>x>>y;
  counter1+=x;
  counter2+=y;

}
int perimeter=2*((counter1-x1)+(counter2-y1));

cout<<perimeter;





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
