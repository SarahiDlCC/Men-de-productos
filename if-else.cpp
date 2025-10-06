#include <iostream>
using namespace std;

int main() {
    int opcion;
    bool continuar = true;

    while (continuar) {
        cout << "==== Menú ====" << endl;
        cout << "1) Torta" << endl;
        cout << "2) Palomitas" << endl;
        cout << "3) Agua" << endl;
        cout << "4) Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Torta: $45" << endl;
        } else if (opcion == 2) {
            cout << "Palomitas: $10" << endl;
        } else if (opcion == 3) {
            cout << "Agua 600ml: $15" << endl;
        } else {
            cout << "Opción no válida, selecciona una correcta." << endl;
        }
    }
    return 0;
}
