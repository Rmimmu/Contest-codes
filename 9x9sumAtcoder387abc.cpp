///https://atcoder.jp/contests/abc387/tasks/abc387_b
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2); cout.setf(ios::fixed,ios::floatfield);

int main()
{
  int a,counter=0;
  cin>>a;

  for(int i=1;i<=9;i++){
    if(a%i==0){
        if((a/i)<=9)
            counter++;


    }


  }
  cout<<2025-(counter*a)<<endl;





    return 0;
}
