#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using pi = pair<int, int>;
using pll = pair<ll, ll>;

const int M = 1e9+7;
const double PI = 3.1415926535897932384626433832795;

inline void fast_cin() {ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);}
string to_upper(string a) { transform(a.begin(), a.end(), a.begin(), ::toupper); return a; }
string to_lower(string a) { transform(a.begin(), a.end(), a.begin(), ::tolower); return a; }
template<typename T> void print_i(const T& arr) {cout << "{"; for (const auto& element: arr) {cout << element << ", ";} cout << "\b\b}\n";}
template<typename K, typename V> void print_m(const map<K, V>& m) { for (const auto& [k, v] : m) { cout << "{" << k << " : " << v << "} "; } cout << '\n'; }
template<typename K, typename V> void print_m(const unordered_map<K, V>& m) { for (const auto& [k, v] : m) { cout << "{" << k << " : " << v << "} "; } cout << '\n'; }

int main() {
    fast_cin();
    return 0;
}
