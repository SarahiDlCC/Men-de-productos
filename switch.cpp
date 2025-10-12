#include <iostream>
using namespace std;

int main() {
    int opcion = 0;
    do {

        // Mostrar menú
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
            opcion = 0;
        }

        switch (opcion) {
            case 1:
                cout << "Torta: $45" << endl;
                break;
            case 2:
                cout << "Palomitas: $10" << endl;
                break;
            case 3:
                cout << "Agua: $15" << endl;
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                if (opcion != 0) cout << "Opción no válida, selecciona una correcta." << endl;
        }

        cout << endl;

    } while (opcion != 4);

    return 0;
}
