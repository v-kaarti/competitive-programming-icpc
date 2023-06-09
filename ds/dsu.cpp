#define SZ
vector<int> parent(SZ + 1, -1);

void make_set(int v) {
    parent[v] = v;
    size[v] = 1;
}

int find(int v) {
    if (v == parent[v]) {
        return v;
    } 
    return parent[v] = find(parent[v]);
}

int union(int a, b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (size[a] < size[b]) swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}
