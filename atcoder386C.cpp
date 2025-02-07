https://atcoder.jp/contests/abc386/submissions/me
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    int n;
    string s,t;
    cin>>n>>s>>t;
    if(s==t){cout<<"Yes"<<endl;
    return 0;
    }
    int s1=s.size();
    int t1=t.size();

    if(s1==t1){
        int c=0;
        for(int i=0; i<s1;i++){
            if(s[i]!=t[i]) c++;

        }
        if(c<=1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else if (s1+1==t1){
        int i=0, j=0;
        while(i<s1&&s[i]==t[j]) i++,j++;
        j++;
        while(i<s1&&s[i]==t[j]) i++,j++;

        if(i==s1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;



    }
    else if(s1-1==t1) {
        int i=0, j=0;
        while(i<t1&&s[i]==t[j]) i++,j++;
        i++;
        while(j<t1&&s[i]==t[j]) i++,j++;

        if(j==t1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }
    else cout<<"No"<<endl;


    return 0;
}
