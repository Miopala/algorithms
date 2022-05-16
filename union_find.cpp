class Union_Find {
    public:
    int n; //size of container
    vector <int> p; // vector of parents
    Union_Find (int _n) {
        n = _n;
        p.resize(n+1);
        iota (p.begin(), p.end(), 0);
    }

    int Find (int u) {
        if (p[u] != u) p[u] = Find(p[u]);
        return p[u];
    }

    void Union(int u, int v) {
        if (Find(u) == Find(v)) return;
        p[Find(u)] = Find(v);
    }
};