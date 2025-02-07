///Rooms and Staircases
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define meme(a,b) memset(a,b,sizeof(a));

void solve(){
int n;
cin>>n;
string str;
cin>>str;


  int ans1=n,ans2=n;
for(int i=0;i<n;i++){

  if(str[i]=='1'){
    ans1=max(ans1,(i+1)*2);

  }

}
reverse(str.begin(),str.end());

for(int i=0;i<n;i++){

  if(str[i]=='1'){
    ans2=max(ans2,(i+1)*2);

  }

}


cout<<max(ans1,ans2);




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
