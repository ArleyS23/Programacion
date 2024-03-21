#include <iostream>
#include <string>
#include <vector>

using namespace std;

void lucharContraMonstruos() {
    cout << "Selecciona el personaje con el que quieres pelear: " << endl;
    cout << "1. Hulk" << endl;
    cout << "2. Superman" << endl;
    cout << "3. Batman" << endl;
    cout << "4. Alien" << endl;

    int opcion;
    cin >> opcion;

    // Realizar la lucha contra los monstruos con el personaje seleccionado

    int danioTotal = 100;  // Cantidad total de daño a los monstruos
    int danioActual = 0;  // Cantidad de daño realizada hasta el momento

    while (danioActual < danioTotal) {
        int danioRestante = danioTotal - danioActual;
        cout << "Ingresa la cantidad de daño que deseas realizar (0-" << danioRestante << "): ";
        int danio;
        cin >> danio;

        if (danio < 0 || danio > danioRestante) {
            cout << "Cantidad inválida. Por favor, ingresa un valor válido." << endl;
            continue;
        }

        danioActual += danio;
        cout << "Realizaste " << danio << " de daño. Daño total: " << danioActual << "/" << danioTotal << endl;
    }

    // Has llegado al daño total de los monstruos
    cout << "¡Has derrotado a los monstruos!" << endl;

    // Regresar al menú principal del juego
    void menuPrincipal();
}

void explorarCastillos() {
    cout << "Selecciona un castillo para explorar: " << endl;
    cout << "1. Castillo Embrujado" << endl;
    cout << "2. Castillo de Criaturas Fantásticas" << endl;

    int opcion;
cin >> opcion;

if (opcion == 1) {
    cout << "Has elegido explorar el Castillo Embrujado." << endl;
    // Mostrar características del castillo embrujado
    cout << "Características del Castillo Embrujado:" << endl;
    cout << "- Presencia de brujas y monstruos" << endl;
    cout << "- Pasillos oscuros y laberínticos" << endl;
    cout << "- Ruidos y susurros misteriosos" << endl;
    cout << "- Paredes cubiertas de telarañas" << endl;
    cout << "- Apariciones fantasmales" << endl;
    cout << "- Habitaciones secretas y trampas ocultas" << endl;
    // Agrega más características si es necesario
} else if (opcion == 2) {
    cout << "Has elegido explorar el Castillo de Criaturas Fantásticas." << endl;
    // Mostrar características del castillo de criaturas fantásticas
    cout << "Características del Castillo de Criaturas Fantásticas:" << endl;
    cout << "- Habitado por seres mágicos como hadas y dragones" << endl;
    cout << "- Salas encantadas y tesoros ocultos" << endl;
    cout << "- Jardines exuberantes y coloridos" << endl;
    cout << "- Puentes suspendidos y pasadizos secretos" << endl;
    cout << "- Fuente de agua mágica con poderes curativos" << endl;
    cout << "- Biblioteca de hechizos antiguos" << endl;
    // Agrega más características si es necesario
} else {
    cout << "Opción inválida. Por favor, selecciona una opción válida." << endl;
}

// Regresar al menú principal del juego
void menuPrincipal();
}

	void buscarPistasYAliados() {
   
   

    cout << "Has ingresado a la sección de búsqueda de pistas y aliados." << endl;
    cout << "Aquí tienes una lista de superhéroes adicionales:" << endl;

   

    cout << "Selecciona un número para obtener una pista sobre cómo terminar el juego: " << endl;
    cout << "1. Encuentra la llave mágica en el Bosque Encantado." << endl;
    cout << "2. Resuelve el acertijo en la Sala de los Espejos en el Castillo de las Sombras." << endl;
    cout << "3. Consigue la espada legendaria en el Templo Antiguo." << endl;
    cout << "4. Encuentra el amuleto perdido en la Cueva de los Secretos." << endl;
    cout << "5. Descubre el mapa oculto en la Biblioteca Real." << endl;
    cout << "6. Derrota al jefe final en la Fortaleza Prohibida." << endl;
    cout << "7. Reúne los tres artefactos ancestrales en el Valle Olvidado." << endl;
    cout << "8. Encuentra el portal secreto en el Pasaje Subterráneo." << endl;

    int opcion;
    cin >> opcion;

    if (opcion < 1 || opcion > 8) {
        cout << "Opción inválida. Por favor, selecciona una opción válida." << endl;
    } else {
        string pista = "";
        switch (opcion) {
            case 1:
                pista = "La llave mágica se encuentra escondida en un árbol antiguo en el Bosque Encantado.";
                break;
            case 2:
                pista = "El acertijo en la Sala de los Espejos se resuelve combinando los símbolos del zodiaco en el orden correcto.";
                break;
            case 3:
                pista = "La espada legendaria se encuentra protegida por un guardián ancestral en el Templo Antiguo.";
                break;
            case 4:
                pista = "El amuleto perdido se encuentra en una pequeña grieta en la pared de la Cueva de los Secretos.";
                break;
            case 5:
                pista = "El mapa oculto en la Biblioteca Real revela la ubicación de un tesoro oculto.";
                break;
            case 6:
                pista = "El jefe final en la Fortaleza Prohibida posee una debilidad en su armadura que puedes explotar.";
                break;
            case 7:
                pista = "Los tres artefactos ancestrales están dispersos por el Valle Olvidado. Encuéntralos y úsalos juntos para desbloquear un poder oculto.";
                break;
            case 8:
                pista = "El pasaje subterráneo te llevará a un portal secreto que te permitirá avanzar a una nueva y misteriosa dimensión, donde encontrarás desafíos aún más grandes y aliados poderosos.";
                break;
        
        }

        cout << "Has seleccionado la opción " << opcion << ". Aquí tienes una pista: " << endl;
        cout << pista << endl;
    }
    
    // Regresar al menú principal del juego
   void  menuPrincipal();
}



void menuPrincipal() {
    cout << "Bienvenido al juego de aventuras en el reino medieval." << endl;
    cout << "Ingresa el nombre de tu personaje: ";
    string nombre;
    cin >> nombre;

    cout << "¿Qué deseas hacer?" << endl;
    cout << "1. Luchar contra los monstruos" << endl;
    cout << "2. Explorar los castillos" << endl;
    cout << "3. Buscar pistas y aliados" << endl;
    cout << "4. Salir del juego" << endl;

    int opcion;
    cin >> opcion;

    switch (opcion) {
        case 1:
            lucharContraMonstruos();
            break;
        case 2:
            explorarCastillos();
            break;
        case 3:
            buscarPistasYAliados();
            break;
        case 4:
            cout << "¡Hasta luego, " << nombre << "!" << endl;
            // Salir del juego
            break;
        default:
            cout << "Opción inválida. Por favor, selecciona una opción válida." << endl;
            // Regresar al menú principal
            menuPrincipal();
            break;
    }
}

int main() {
    menuPrincipal();

    return 0;
}