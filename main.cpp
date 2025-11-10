#include "DyV.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Tamany del vector: ";
    int n;
    cin >> n;

    vector<int> v1(n);
    cout << "Introdueix els números per al vector v1:\n";
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    int a;
    cout << "Introdueix el número que vols buscar: ";
    cin >> a;
    cout << "\n";

    int res = BusquedaBinaria(a, v1, 0, n - 1);
    if (res != -1)
        cout << "El número es troba en la posició: " << res << endl;

    cout << "\nTamany del segon vector: ";
    int z;
    cin >> z;

    vector<float> v2(z);
    cout << "Introdueix els números per al vector v2:\n";
    for (int i = 0; i < z; i++) {
        cin >> v2[i];
    }

    float resF = BusquedaBinaria(2.0f, v2, 0, z - 1);
    if (resF != -1)
        cout << "El número 2.0 es troba en la posició: " << resF << endl;

    cout << "\nTamany del tercer vector: ";
    int m;
    cin >> m;

    vector<int> v3(m);
    cout << "Introdueix els números per al vector v3:\n";
    for (int i = 0; i < m; i++) {
        cin >> v3[i];
    }

    QuickSort(v3, 0, m - 1);

    cout << "Vector ordenat:\n";
    for (int i = 0; i < m; i++) {
        cout << v3[i] << " ";
    }
    cout << "\n";

    return 0;
}