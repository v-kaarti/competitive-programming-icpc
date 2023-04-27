#include <bits/stdc++.h>
using namespace std;

// Types
using ll = long long;
using db = double;

// Pairs
using pi = pair<int,int>;
using pl = pair<ll,ll>;
using pd = pair<db,db>;

// Vectors
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<db>;

// Vectors
using vvi = vector<vi>;
using vvb = vector<vb>;
using vvl = vector<vl>;
using vvd = vector<vd>;

// Vectors of Pairs
using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;

// Vector operations 
#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front

// Pair operations
#define mp make_pair
#define f first
#define s second

// Constant table
const int M = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

// FastIO
inline void fast_cin() {ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);}

// String operations
string to_upper(string a) { transform(a.begin(), a.end(), a.begin(), ::toupper); return a; }
string to_lower(string a) { transform(a.begin(), a.end(), a.begin(), ::tolower); return a; }

// Print / Debug
template<typename T> void print_i(const T& arr) {cout << "{"; for (const auto& element: arr) {cout << element << ", ";} cout << "\b\b}\n";}
template<typename K, typename V> void print_m(const map<K, V>& m) { for (const auto& [k, v] : m) { cout << "{" << k << " : " << v << "} "; } cout << '\n'; }
template<typename K, typename V> void print_m(const unordered_map<K, V>& m) { for (const auto& [k, v] : m) { cout << "{" << k << " : " << v << "} "; } cout << '\n'; }

int main() {
    fast_cin();
    return 0;
}
