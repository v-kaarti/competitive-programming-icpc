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
const double pi = 3.1415926535897932384626433832795;

inline void fast_cin() {ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);}
string to_upper(string a) { transform(a.begin(), a.end(), a.begin(), ::toupper); return a; }
string to_lower(string a) { transform(a.begin(), a.end(), a.begin(), ::tolower); return a; }
template<typename T> void print(T arr) { for(auto element: arr) {cout << element << " ";} cout << '\n';}
template <typename T> void print_v(const vector<T>& v) {cout << "{"; for (const auto& x : v) {cout << x << ",";} cout << "}";}
template<typename K, typename V, typename Compare = less<K>> void print_m(const map<K, V, Compare>& m) { for (const auto& [k, v] : m) { cout << k << " : " << v << " "; } cout << '\n'; }
template<typename K, typename V, typename Hash = hash<K>, typename KeyEqual = equal_to<K>> void print_m(const unordered_map<K, V, Hash, KeyEqual>& m) { for (const auto& [k, v] : m) { cout << k << " : " << v << " "; } cout << '\n'; }

int main() {
    return 0;
}
