#include <iostream>   // Para cin y cout
#include <vector>     // Para usar vectores dinámicos
#include <string>     // Para manipulación de texto
#include <algorithm>  // Para sort, lower_bound, upper_bound, min, max
#include <map>         // Para mapas (árboles balanceados)
#include <set>         // Para conjuntos de elementos únicos
#include <unordered_map>
#include <unordered_set>


using namespace std;




// vector<int> solve6(vector<int> &arr) {
//
// }

vector<int> findDuplicates(vector<int>& arr) {


    unordered_map<int, int> mp;
    vector<int> ans;
    long n = arr.size();

    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }



    for (auto a : mp) {
        cout << a.first << " " << a.second << endl;
    }

    for (auto val : mp) {
        if (val.second > 1) {
            ans.push_back(val.first);
        }
    }


    return ans;


}


void compile6(vector<int> arr) {
    for (auto a: arr) {
        cout << a << " ";
    }
}


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//
//
//     vector<int> arr = {2, 3, 1, 2, 3};
//
//
//
//
//     return 0;
// }
