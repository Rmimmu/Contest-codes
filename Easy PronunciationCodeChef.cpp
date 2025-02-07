///https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK?tab=statement
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define meme(a,b) memset(a,b,sizeof(a));

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}


void solve(){
int n;
cin>>n;
string str;
cin>>str;
if(n<4) {cout<<"YES";
return;
}
for(int i=0;i<=n-4;i++){
    if(!isVowel(str[i])&&!isVowel(str[i+1])&&!isVowel(str[i+2])&&!isVowel(str[i+3])) {
    cout<<"NO";
    return;
    };
}
cout<<"YES";
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

