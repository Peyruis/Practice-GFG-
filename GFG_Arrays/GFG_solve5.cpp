#include <iostream>   // Para cin y cout
#include <vector>     // Para usar vectores dinámicos
#include <string>     // Para manipulación de texto
#include <algorithm>  // Para sort, lower_bound, upper_bound, min, max
#include <map>         // Para mapas (árboles balanceados)
#include <set>         // Para conjuntos de elementos únicos
#include <unordered_map>
#include <unordered_set>


using namespace std;


vector<int> solve5(vector<int> &arr) {

    size_t n = arr.size();

    vector<int> result;

    result.push_back(arr[n-1]);

    int top = arr[n-1];

    for (int i = n-2; i >= 0; --i) {

        if (arr[i] >= top) {
            result.push_back(arr[i]);
            top = arr[i];
        }
    }

    reverse(result.begin(), result.end());

    return result;

}


vector<int> leaders(vector<int> &arr) {

    long long n = arr.size();

    vector<int> result;

    result.push_back(arr[n-1]);

    long top = arr[n-1];

    for (int i = n-2; i >= 0; --i) {

        if (arr[i] >= top) {
            result.push_back(arr[i]);
            top = arr[i];
        }
    }


    int len = result.size();

    for (int i = 0, j = len - 1; i < j; ++i,--j) {
            auto item = result[i];
            result[i] = result[j];
            result[j] = item;
    }

    return result;

}


void compile5(vector<int> &arr) {
    for (auto a: arr) {
        cout << a << " ";
    }
}

