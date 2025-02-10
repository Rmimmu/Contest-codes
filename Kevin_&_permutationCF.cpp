/*
Name of the problem: B. Kevin and Permutation

In the kth index , put min value there start with 1 and the rest is your choice.



*/


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;                  
typedef unsigned long long ull;      
typedef double dl;                     

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;


#define MOD 1000000007
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define meme(a,b) memset(a,b,sizeof(a));
#define isVowel(c) (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / __gcd(a, b) * (b))
#define sqr(a) ((a) * (a))

bool cmp(const pair<int,int>&p1, const pair<int,int>&p2){
if(p1.first>p2.first) return 1;
else if(p1.first==p2.first) return (p1.second<p2.second);
else return 0;
}

ll factorial(ll n) {
    if (n == 0) return 1;              
    return n * factorial(n - 1);      
}

int  binarySearch(int  arr[], int  sz, int  key ){
    int  left=0;
    int  right=sz;
    while(left<=right){
        int  mid = (left+right)/2;

        if(arr[mid]==key) return mid;

        if(arr[mid]>key) {
            right = mid-1;
        }
        else left = mid+1;
    }

    return -1;
}


template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}
 
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}
 
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}
 
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
 
void faltu () {
            cerr << endl;
}
 
template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}
 
template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}
 
 


void solve() {
    int n, k;
    cin >> n >> k;
    int x=1;
    int y=n;

   
 for(int i=1;i<=n;i++) {

   
        if(i%k==0){
            
               
                cout<<x<<" ";
               
                x++;
            
        
    }
        else {
            
                cout<<y<<" ";
                
                y--;

            }

        }
    

 }
 




int main()
{
    optimize();
    
    int t;
    cin>>t;
    while(t--) {
    
    solve();

        cout<<endl;
    }

    return 0;
}
