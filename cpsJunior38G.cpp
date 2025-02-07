///https://vjudge.net/contest/683231#problem/G
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;





#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
        int t;
        cin>>t;
        while(t--){
          ll a,b,c,sum=0;
            cin>>a>>b>>c;


            if(c%2==0){
                cout<<(c/2)*(a-b)<<endl;
            }
            else cout<<((c/2)*(a-b))+a<<endl;






        }





    return 0;
}

