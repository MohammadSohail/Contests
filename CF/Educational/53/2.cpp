#include <bits/stdc++.h>
#define ABS(x)                                      ((x)<0?-(x):(x))
#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MOD(x,y)                                     (((x)*(y))%mod)
#define MIN(a,b)                                   ((a)<(b)?(a):(b))
#define MAX(a,b)                                   ((a)>(b)?(a):(b))
#define NUMDIGIT(x,y)              (((ll)(log10((x))/log10((y))))+1)
#define ODD(x)                                  (((x)&1)==0?(0):(1))
#define Unique(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
#define valid(i,j)         (i >= 0 && j>= 0 && i < 1001 && j < 1001)
#define check(i, j)         ((i >= 0 && i < R) && (j >= 0 && j < C))

using namespace std;
typedef long long               ll;
const double            eps = 1e-9;
typedef unsigned long long     ull;
typedef         pair < ll, ll> pll;
typedef        pair < int,int> pii;
typedef             vector<pll> pv;
typedef              vector<ll> vl;
typedef            vector <int> vi;
const int         inf = (int) 10e9;
const ll          INF = (ll) 10e18;
const double PI = 2 * acos ( 0.0 );

int dx[] = {+1,-1,0,0};
int dy[] = {0,0,+1,-1};
int hx[] = {+1,-1,-1,+1,-2,-2,+2,+2};
int hy[] = {+2,+2,-2,-2,+1,-1,+1,-1};
int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1};
int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1};
int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

template < typename T> inline T LCM(T x, T y) {T g = GCD(x,y); return x*(y/g); }
template < typename T> inline T GCD(T a, T b) {a=ABS(a), b=ABS(b); return !b ? a : GCD(b,a%b); }
template < typename T> inline T power(T b,T p) { T res = 1, x = b; while ( p ) { if ( p & 1 ) res = ( res * x ); x = ( x * x ); p >>= 1;}return res;}
template < typename T> inline T bigmod (T b, T p, T m) { T res = 1 % m, x = b % m; while ( p ) { if ( p & 1 ) res = ( res * x ) % m; x = ( x * x ) % m; p >>= 1; }return res; }

ll a[200000+5];
ll b[200000+5];
ll c[200000+5];

int main(){

    FasterIO;
    //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
   int n;
   cin >> n;

    memset(a,-1,sizeof a);
    memset(b,-1,sizeof b);
    memset(c,-1,sizeof c);

   for(int i = 0; i < n; i++ ){
        cin >> a[i];
        c[a[i]] = i+1;
   }

   for(int i = 0; i < n; i++){
        cin >> b[i];
   }

   ll cnt = 0,fof = 0;

   for(int i = 0; i < n; i++){

        cnt  = c[b[i]];

        if(cnt > fof){
            cout << cnt - fof << " ";
            fof  = cnt;
        }
        else cout << 0 << " ";

   }
   cout << endl;

return 0;
}

// isalpha
//isdigit
