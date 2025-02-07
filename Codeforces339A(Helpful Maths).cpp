#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int count1=0,count2=0,count3=0;
    cin>>str;
    for(int i=0; i<str.length(); i++) {

        if(str[i]=='1'){count1++;}
        if(str[i]=='2'){count2++;}
        if(str[i]=='3'){count3++;}


    }
    string res="";
    for(int i=0; i<count1; i++) res+="1+";
    for(int i=0; i<count2; i++) res+="2+";
    for(int i=0; i<count3; i++) res+="3+";

   res.pop_back();
    cout<<res;

    return 0;
}
