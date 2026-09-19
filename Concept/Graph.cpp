//
// Created by Christian R. Apaza Turpo on 6/09/26.
//



#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#define ll long long

using namespace std;

class Graph {
private:
    unordered_map<int , vector<int>> listAdjacent;


public:

    void agregarArista(int origen, int destino, bool esDirigido = false) {
        listAdjacent[origen].push_back(destino);
        if (!esDirigido) {
            listAdjacent[destino].push_back(origen);
        }
    }
    // 1. BFS (Breadth-First Search) - Usa una Cola (FIFO)
    void bfs(int nodoInicio) {
        std::unordered_set<int> visitados;
        std::queue<int> cola;

        visitados.insert(nodoInicio);
        cola.push(nodoInicio);

        std::cout << "Recorrido BFS desde " << nodoInicio << ": ";

        while (!cola.empty()) {
            int actual = cola.front();
            cola.pop();
            std::cout << actual << " ";

            for (int vecino : listAdjacent[actual]) {
                if (visitados.find(vecino) == visitados.end()) {
                    visitados.insert(vecino);
                    cola.push(vecino);
                }
            }
        }
        std::cout << "\n";
    }

    // Auxiliar recursivo para DFS
    void dfsAuxiliar(int nodoActual, std::unordered_set<int>& visitados) {
        visitados.insert(nodoActual);
        std::cout << nodoActual << " ";

        for (int vecino : listAdjacent[nodoActual]) {
            if (visitados.find(vecino) == visitados.end()) {
                dfsAuxiliar(vecino, visitados);
            }
        }
    }
    void dfs(int nodoInicio) {
        std::unordered_set<int> visitados;
        std::cout << "Recorrido DFS desde " << nodoInicio << ": ";
        dfsAuxiliar(nodoInicio, visitados);
        std::cout << "\n";
    }
};

//
// int main() {
//     Graph g;
//
//     // Construcción del grafo:
//     //      0
//     //     / \
//     //    1   2
//     //   / \   \
//     //  3   4   5
//     g.agregarArista(0, 1);
//     g.agregarArista(0, 2);
//     g.agregarArista(1, 3);
//     g.agregarArista(1, 4);
//     g.agregarArista(2, 5);
//
//     g.bfs(0); // Salida esperada: 0 1 2 3 4 5
//     g.dfs(0); // Salida esperada: 0 1 3 4 2 5
//
//
//
//     return 0;
// }
