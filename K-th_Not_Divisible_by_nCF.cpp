/*
          ##########################################################################
          #                                                                        #
                                   بِسْمِ اللَّهِ الرَّحْمَٰنِ الرَّحِيمِ                        
          #                                                                        #
          ##########################################################################



Solution description (if needed):



*/


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;                  
typedef unsigned long long ull;      
typedef double dl; 
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;


#define MOD 1000000007
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define meme(a,b) memset(a,b,sizeof(a));
#define isVowel(c) (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / __gcd(a, b) * (b))
#define sqr(a) ((a) * (a))
#define YES cout<<"YES"
#define NO cout<<"NO"
#define Yes cout<<"Yes"
#define No cout<<"No"
#define yes cout<<"yes"
#define no cout<<"no"


bool cmp(const pair<int,int>&p1, const pair<int,int>&p2){
if(p1.first>p2.first) return 1;
else if(p1.first==p2.first) return (p1.second<p2.second);
else return 0;
}

ll factorial(ll n) {
    if (n == 0) return 1;              
    return n * factorial(n - 1);      
}

ll nCr(ll n, ll r){
    if(r>n) return 0;
    if(r==0 || r==n) return 1;
    return nCr(n-1,r-1)+nCr(n-1,r);
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

bool isPrime(int n) {

    if(n==0||n==1) return false;
    if(n==2) return true;

    int limit = sqrt(n);

    for(int i=2;i<=limit;i++) {
        if(n%i==0) return false;
    }
    return true;

}

long long findpow(long long a,long long b){

    if(b==0) return 1;
    
    if(b==1) return a;
    
    long long x = findpow(a,b/2);
    long long ans =0;
    
    (b%2==0) ? ans=x*x : ans= x*x*a;
    
    return ans;
    
    /// complexity 0(logn)
    
    }

long long findpowMOD(long long a,long long b, long long m){
 
    if(b==0) return 1;
    
    if(b==1) return a;
    
    long long x = findpowMOD(a,b/2,m)%m;
    long long ans =0;
    
    (b%2==0) ? ans=x*x : ans= (x%m*x%m*a%m)%m;
    
    return ans;
    
    /// complexity 0(logn)
    
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
 
 
// const int LIM = 1e4;

// ll cube[LIM + 10];


ll ans;

void solve(){
ll n , k;
cin >> n >> k;

ll l = 1 , r = 1e18;

while(l <= r){

    ll mid = (l + r) / 2;

    ll d = mid - (mid / n);

    if(d >= k){
        ans = mid;
        r = mid -1;
    }
    else l = mid + 1;

}

cout << ans;
   
    
}

signed main()
{
    optimize();
    
    int t;
    cin>>t;

   // for(ll i =1 ; i <= LIM; i++) cube[i] = i * i * i;
    while(t--){
    
    solve();
        cout<<nl;
    }
    return 0;
}
