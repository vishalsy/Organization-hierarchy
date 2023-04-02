#include <bits/stdc++.h>
using namespace std;

class Organization {
private:
    vector<int> par;
    vector<vector<int>> adj;
    vector<int> sub_tree;

    int no_of_levels = 0;
    int zerolevelsallary = 100000;
    vector<int> level_salary;

public:
    Organization(vector<int> parent) {
        par = parent;
        Datatiding();
    }

    void Datatiding() {
        for (int i = 0; i < 10; i++) {
            level_salary.push_back(zerolevelsallary);
            zerolevelsallary -= 8000;
        }

        adj.resize(par.size());
        sub_tree.resize(par.size());

        for (int i = 0; i < par.size(); i++) {
            if (par[i] == -1) continue;
            adj[i].push_back(par[i]);
            adj[par[i]].push_back(i);
        }

        for (int i = 0; i < par.size(); i++) {
            if (par[i] == -1) {
                dfs(i, 0, -1);
                break;
            }
        }
    }

    int dfs(int node, int num, int parent) {
        int size = 1;
        no_of_levels = max(no_of_levels, num);
        for (auto k : adj[node]) {
            if (k != parent) size += dfs(k, num + 1, node);
        }
        return sub_tree[node] = size;
    }

    int Commonboss(int a, int b) {
        map<int, int> mp;
        int st = a;
        while (a != -1) {
            mp[a]++;
            a = par[a];
        }
        st = b;
        while (mp.find(b) == mp.end()) b = par[b];
        return b;
    }

    int justboss(int c) { return par[c]; }

    int Numofempunder(int d) { return sub_tree[d] - 1; }

    int level() { return no_of_levels; }

    int levelsalary(int e) { return level_salary[e]; }
};

int main() {
    int number_of_nodes;
    cin >> number_of_nodes;
    vector<int> parent(number_of_nodes);
    for (int i = 0; i <= number_of_nodes; i++) {
        cin >> parent[i];
    }
    // this is the test case
    // 11
    // 10
    // 2
    // -1
    // 2
    // 3
    // 3
    // 3
    // 5
    // 5
    // 1
    // 1
    // 7
    // Organization org(parent);
    // cout << org.level() << endl;
    // cout << org.levelsalary(3) << endl;
    // cout << org.Numofempunder(5) << endl;
    // cout << org.justboss(2) << endl;
    // cout << org.Commonboss(1, 6) << endl;
    // cout << org.levelsalary(0) << endl;
    // cout << org.Commonboss(9, 8) << endl;
    // cout << org.Numofempunder(11) << endl;
    // cout << org.justboss(10) << endl;
    // cout << org.Numofempunder(10);
    return 0;
}