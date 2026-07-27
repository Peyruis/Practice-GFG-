
#include <iostream>   // Para cin y cout
#include <vector>     // Para usar vectores dinámicos
#include <string>     // Para manipulación de texto
#include <algorithm>  // Para sort, lower_bound, upper_bound, min, max
#include <map>         // Para mapas (árboles balanceados)
#include <set>         // Para conjuntos de elementos únicos
#include <unordered_map>
#include <unordered_set>

using namespace std;


bool solve(vector<int>& a, vector<int>& b) {

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
}


bool checkEqual(vector<int>& a, vector<int>& b) {
    auto n =a.size();

    unordered_map<int,int> mp;
    unordered_map<int,int> mps;

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
        mps[b[i]]++;
    }


    return mp == mps;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



}