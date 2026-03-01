#include<bits/stdc++.h>
using namespace std;

#define NAME "main"
#define MULTI_TEST 0 // 1 for multi-test cases, 0 for single test case
#define FAST_IO ios::sync_with_stdio(0); cin.tie(nullptr);

using lint = long long; //suits my workflow better than ll

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb(x) push_back(x)

template<class T1, class T2>
    bool maximize(T1 &a, T2 b){
        if(a < b){
            a = b;
            return true;
        }
        return false;
    }

template<class T1, class T2>
    bool minimize(T1 &a, T2 b){
        if(a > b){
            a = b;
            return true;
        }
        return false;
    }

const lint INF = 0x3f3f3f3f; // 1,061,109,567

void solve(){

}

int main() {
    FAST_IO
    #ifdef LOCAL
        freopen(NAME".inp", "r", stdin);
        freopen(NAME".out", "w", stdout);
        freopen(NAME".err", "w", stderr);
    #endif
    lint t = 1;
    if(MULTI_TEST) cin >> t;
    while(t-->0){
        solve();
    }
    cerr << 1000.0 * clock() / CLOCKS_PER_SEC << " ms\n";
    return 0;
}

// Sample In

// Sample Out
