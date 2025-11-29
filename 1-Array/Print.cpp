#include <bits/stdc++.h>
using namespace std;

// ========= Advanced Debug Macro =========
#ifndef ONLINE_JUDGE
void __print(int x){cerr<<x;} void __print(long x){cerr<<x;} void __print(long long x){cerr<<x;}
void __print(unsigned x){cerr<<x;} void __print(unsigned long x){cerr<<x;} void __print(unsigned long long x){cerr<<x;}
void __print(float x){cerr<<x;} void __print(double x){cerr<<x;} void __print(long double x){cerr<<x;}
void __print(char x){cerr<<'\''<<x<<'\'';} void __print(const char *x){cerr<<'"'<<x<<'"';}
void __print(const string &x){cerr<<'"'<<x<<'"';} void __print(bool x){cerr<<(x?"true":"false");}
template<typename T,typename V> void __print(const pair<T,V>&x){cerr<<'{';__print(x.first);cerr<<', ';__print(x.second);cerr<<'}';}
template<typename T> void __print(const T&x){int f=0;cerr<<'{';for(auto&i:x)cerr<<(f++?',':' '),__print(i);cerr<<'}';}
void _print(){cerr<<"]\n";} template<typename T,typename... V>
void _print(T t,V...v){__print(t);if(sizeof...(v))cerr<<", ";_print(v...);}
#define dbg(x...) cerr<<"["<<#x<<"] = [",_print(x)
#else
#define dbg(x...)
#endif
// =========================================

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    if (freopen("input.txt", "r", stdin)) {
        freopen("output.txt", "w", stdout);
    }
#endif
}

int main() {
    fast_io();

    int t = 1;
    // cin >> t;  // uncomment for multiple testcases
    while (t--) {
        
    }

    return 0;
}