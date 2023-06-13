#define SZ
vector<int> parent(SZ);
vector<int> size(SZ, 1);

void make_set() {
    for (int i = 0; i < SZ; ++i) {
        parent[i] = i;
    }
}

int find(int v) {
    if (v != parent[v]) parent[v] = find(parent[v]);
    return parent[v];
}

bool union(int a, b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (size[a] < size[b]) swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}
