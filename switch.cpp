#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {

        cout << "==== Menú ====" << endl;
        cout << "1) Torta" << endl;
        cout << "2) Palomitas" << endl;
        cout << "3) Agua" << endl;
        cout << "4) Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Torta: $45" << endl;
                break;
            case 2:
                cout << "Palomitas: $10" << endl;
                break;
            case 3:
                cout << "Agua 600ml: $15" << endl;
                break;
            default:
                cout << "Opción no válida, selecciona una correcta." << endl;
        }

    } while (opcion != 4);

    return 0;
}
