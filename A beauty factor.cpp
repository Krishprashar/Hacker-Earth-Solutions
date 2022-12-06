
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define GEEKBLOWER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define TEST_CASES create(t);while(t--)
#define SOLUTION solve(); return 0;
#define display(n) cout<<n<<endl;
#define VI vector<int>
#define PB push_back
#define ALL(a) a.begin(),a.end()
#define SORT(a) sort(ALL(a))
#define loop(i,a,b,c) for(int i=a;i<b;i+=c)
#define revloop(i,a,b,c) for(int i=a;i>=b;i-=c)
#define start_loop loop(i,0,n,1)
#define start_revloop revloop(i,n,0,1)
#define create(n) int n;cin>>n;
#define def(a,n) int a[n];start_loop cin>>a[i];
#define print(a) for(auto i : a){cout<<i<<" ";}cout<<endl;
#define vector(a,n) VI a;loop(i,0,n,1){int x;cin>>x;a.PB(x);}
inline int GCD(int a,int b){return !b?a:GCD(b,a%b);}
const int MOD = 1000000007;

int generateMin(int n, int sum, int power) {
    return (n==0) ? sum : generateMin(n - 1, sum + n * pow(10, power), power + 1);
}

int generateMax(int n, int sum, int power, int k) {
    return (n==0) ? sum : generateMax(n - 1, sum + (k)*pow(10, power), power + 1, k - 1);
}

bool checkDistinctAndZero(int n) {
    int p[10] = {0};
    
    while(n) {
        int rem = n % 10;
        
        if(!rem)
            return false;
        else if(p[rem] == 0)
            p[rem]++;
        else
            return false;
        
        n /= 10;
    }
    
    return true;
}

void solve() {
    create(b)
    create(length)
    
    int min = generateMin(length, 0, 0);
    int max = generateMax(length, 0, 0, 9);
    int i;
    
    for(i=min; i<=max; i++) {
        if(checkDistinctAndZero(i)==true && (((i % 9 == 0) ? 9 : (i % 9))==b)) {
            display(i)
            break;
        }
    }
    
    if(i == max+1)
        display("-1")
}

int32_t main() {
    GEEKBLOWER
    SOLUTION
}