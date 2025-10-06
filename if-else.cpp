#include <iostream>
using namespace std;

int main() {
    int opcion;
    bool continuar = true;

    while (continuar) {
        cout << "==== Menú ====\n";
        cout << "1) Torta\n";
        cout << "2) Palomitas\n";
        cout << "3) Agua\n";
        cout << "4) Salir\n";
        cout << "Selecciona el producto: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Torta: $25\n\n";
        } else if (opcion == 2) {
            cout << "Palomitas: $10\n\n";
        } else if (opcion == 3) {
            cout << "Agua: $8\n\n";
        } else if (opcion == 4) {
            cout << "Saliendo del menú...\n";
            continuar = false;
        } else {
            cout << "Opción no válida, intenta nuevamente.\n\n";
        }
    }
    return 0;
}
