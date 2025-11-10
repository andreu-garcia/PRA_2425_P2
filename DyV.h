#include <iostream>
#include <vector>
#include <utility>
using namespace std;

template <typename T> 
int BusquedaBinaria(T x, vector<T>& v, int ini, int fin) {
    if (ini > fin) {
        cout << "El valor no es troba en l'array\n";
        return -1;
    }

    int mig = (ini + fin) / 2;

    if (v[mig] == x) return mig;
    else if (v[mig] > x) return BusquedaBinaria(x, v, ini, mig - 1);
    else return BusquedaBinaria(x, v, mig + 1, fin);
}

template <typename T>
int Particio(vector<T>& v, int ini, int fin) {
    T x = v[fin];
    int i = ini;

    for (int j = ini; j < fin; j++) {
        if (v[j] <= x) {
            swap(v[i], v[j]);
            i++;
        }
    }

    swap(v[i], v[fin]);
    return i;
}

template <typename T>
void QuickSort(vector<T>& v, int ini, int fin) {
    if (ini < fin) {
        int pivot = Particio(v, ini, fin);
        QuickSort(v, ini, pivot - 1);
        QuickSort(v, pivot + 1, fin);
    }
}