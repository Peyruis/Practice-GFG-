
#include <iostream>   // Para cin y cout
#include <vector>     // Para usar vectores dinámicos
#include <string>     // Para manipulación de texto
#include <algorithm>  // Para sort, lower_bound, upper_bound, min, max
#include <map>         // Para mapas (árboles balanceados)
#include <set>         // Para conjuntos de elementos únicos
#include <unordered_map>
#include <unordered_set>


using namespace std;

long long solve(vector<int>& arr) {

    nth_element(arr.begin(),arr.begin() + 1,arr.end(),greater<int>());
    return arr[0]*arr[1];

}

int maxProduct(vector<int>& arr) {
    // code here

    auto n = arr.size();

    sort(arr.begin(), arr.end());

    return arr[n-1]*arr[n-2];

}


void compile(vector<int>& arr) {
    for (auto a : arr) {
        cout << a << " ";
    }
}


long long mustGreather(vector<int>& arr) {

    nth_element(
        arr.begin(),
        arr.begin() + 3,
        arr.end(),
        greater<int>());

    return arr[0];
}


long long mayor(vector<int>& arr) {

    auto max = max_element(
        arr.begin(),
        arr.end()
    );

    return *max;
}




int main() {
    // OPTIMIZACIÓN CRÍTICA DE ENTRADA/SALIDA
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);




    vector<int> arr = {12, 3, 45, 7, 92, 21, 5, 80};

    cout << mayor(arr)<< endl;
    compile(arr);

    cout<<endl;

    cout<<"Segundo elemento mas grande en la posicion"<<endl;
    nth_element(arr.begin(),arr.begin(), arr.end(),greater<int>());
    compile(arr);

    cout<<endl;

    cout << "COMPILE PARTIAL SORT" << endl;
    partial_sort(arr.begin(), arr.begin() + 1, arr.end(), greater<int>());
    compile(arr);

    /*
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    */

    return 0;
}
