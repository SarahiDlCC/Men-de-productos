#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "==== Menú ====\n";
        cout << "1) Torta\n";
        cout << "2) Palomitas\n";
        cout << "3) Agua\n";
        cout << "4) Salir\n";
        cout << "Selecciona el producto: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Torta: $25\n\n";
                break;
            case 2:
                cout << "Palomitas: $10\n\n";
                break;
            case 3:
                cout << "Agua: $8\n\n";
                break;
            case 4:
                cout << "Saliendo del menú...\n";
                break;
            default:
                cout << "Opción no válida, intenta nuevamente.\n\n";
        }

    } while (opcion != 4);

    return 0;
}
