#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaración de variables
    int opcion;
    double precio;
    string producto;

    // Menú de opciones
    cout << "Bienvenido a la tienda\n\n";
    cout << "1. Comprar leche\n";
    cout << "2. Comprar pan\n";
    cout << "3. Comprar huevos\n";
    cout << "4. Comprar queso\n";
    cout << "5. Salir\n\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    // Control de flujo para opciones
    switch (opcion) {
        case 1:
            precio = 2500;
            producto = "leche";
            break;
        case 2:
            precio = 300;
            producto = "pan";
            break;
        case 3:
            precio = 700;
            producto = "huevos";
            break;
        case 4:
            precio = 3000;
            producto = "queso";
            break;
        case 5:
            cout << "Gracias por su visita\n";
            return 0;
        default:
            cout << "Opción inválida\n";
            return 1;
    }

    // Cálculo de precio final
    double cantidad;
    cout << "Ingrese la cantidad de " << producto << " que desea comprar: ";
    cin >> cantidad;
    double total = precio * cantidad;
    cout << "El total a pagar por " << cantidad << " " << producto << " es de $" << total << "\n";

    // Descuento adicional por cantidad
    if (cantidad > 10) {
        double descuento = total * 0.10;
        total -= descuento;
        cout << "Obtuvo un descuento adicional del 10%\n";
        cout << "El total a pagar con descuento es de $" << total << "\n";
    }

    return 0;
}
