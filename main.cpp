#include <iostream>
#include "Inventory.h"
using namespace std;

int main() {
    Inventory inventory;

    string nombre;
    int cantidad;
    int choice;

    do {
        // Mostrar el menú
        cout << "Inventario Nozama 2024" << endl;
        cout << "1.- Agregar un producto: " << endl;
        cout << "5.- Salir del inventario" << endl;
        cout << "Elige una opcion: ";
        cin >> choice;

        // Procesar la elección
        switch (choice) {
            case 1:
                cout << "Nombre del producto: ";
                cin >> nombre;
                cout << "Cantidad: ";
                cin >> cantidad;
                inventory.addProduct(nombre, cantidad);  // Usar el objeto inventory
                break;
            case 5:
                cout << "Saliendo del Inventario " << endl;
                break;
            default:
                cout << "Opción no válida, intenta nuevamente." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
