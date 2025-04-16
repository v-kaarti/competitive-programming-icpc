#include <bits/stdc++.h>
using namespace std;

#define SIZE INT_MAX
vector<int> parent(SIZE);
vector<int> s(SIZE, 1);

void make_set() {
    for (int i = 0; i < SIZE; ++i) {
        parent[i] = i;
    }
}

int find(int v) {
    if (v != parent[v]) parent[v] = find(parent[v]);
    return parent[v];
}

bool unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (s[a] < s[b]) swap(a, b);
        parent[b] = a;
        s[a] += s[b];
    }
}
