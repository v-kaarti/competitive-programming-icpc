#pragma once
#include <bits/stdc++.h>

// Types
using ll = long long;
using db = double;

// Pairs
using pi = std::pair<int,int>;
using pl = std::pair<ll,ll>;
using pd = std::pair<db,db>;

// Vectors
using vi = std::vector<int>;
using vb = std::vector<bool>;
using vl = std::vector<ll>;
using vd = std::vector<db>;

// Vectors
using vvi = std::vector<vi>;
using vvb = std::vector<vb>;
using vvl = std::vector<vl>;
using vvd = std::vector<vd>;

// Vectors of Pairs
using vpi = std::vector<pi>;
using vpl = std::vector<pl>;
using vpd = std::vector<pd>;

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

// Matrix
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
bool ok(int x, int y, int n, int m) { return x >= 0 && y >= 0 && x < n && y < m; }

// FastIO
inline void fast_cin() {std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);}

// String operations
std::string to_upper(std::string a) { transform(a.begin(), a.end(), a.begin(), ::toupper); return a; }
std::string to_lower(std::string a) { transform(a.begin(), a.end(), a.begin(), ::tolower); return a; }

// Print / Debug

template<typename T> 
void print_iterable(const T &arr) {
    std::cout << "{";
    for (const auto &element: arr) {
        std::cout << element << ", ";
    }
    std::cout << "\b\b}\n";
}

template<typename K, typename V> 
void print_map(const std::map<K, V> &m) { 
    for (const auto &[k, v] : m) { 
        std::cout << "{" << k << " : " << v << "} "; 
    } 
    std::cout << "\b\b}\n"; 
}

template<typename K, typename V> 
void print_unordered_map(const std::unordered_map<K, V> &m) { 
    for (const auto &[k, v] : m) { 
        std::cout << "{" << k << " : " << v << "} "; 
    } 
    std::cout << "\b\b}\n"; 
}
