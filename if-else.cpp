#include <iostream>
using namespace std;

int main() {
    int opcion;
    bool continuar = true;

    while (continuar) {
        // Mostrar el menú
        cout << "==== Menú ====\n";
        cout << "1) Torta" << endl;
        cout << "2) Palomitas" << endl;
        cout << "3) Agua" << endl;
        cout << "4) Salir" << endl;
        cout << "Opción: ";

        if (!(cin >> opcion)) {
            cout << "Entrada inválida. Por favor ingresa un número." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue; 
        }

        if (opcion == 4) {
            cout << "Saliendo..." << endl;
            continuar = false;
        } else if (opcion == 1) {
            cout << "Torta: $45" << endl;
        } else if (opcion == 2) {
            cout << "Palomitas: $10" << endl;
        } else if (opcion == 3) {
            cout << "Agua: $15" << endl;
        } else {
            cout << "Opción no válida, selecciona una correcta." << endl;
        }

        cout << endl; 
    }

    return 0;
}
