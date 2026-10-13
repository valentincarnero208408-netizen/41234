// ============================================================
//  NEXUS TERMINAL - Menu de consola futurista
//  Desarrollado para Code::Blocks con compilador MinGW/GCC
//  Conceptos utilizados: cout, cin, while, switch, if, funciones
// ============================================================

#include <iostream>
using namespace std;

// ------------------------------------------------------------
//  CODIGOS DE COLOR ANSI
//  Funcionan en terminales modernas (Windows 10+, Linux, macOS)
//  Si ves caracteres raros en vez de colores, lee la nota
//  al final del archivo.
// ------------------------------------------------------------
const string RESET   = "\033[0m";
const string NEGRO   = "\033[40m";          // fondo negro
const string CIAN    = "\033[96m";          // texto cian brillante
const string AZUL    = "\033[94m";          // texto azul electrico
const string BLANCO  = "\033[97m";          // texto blanco
const string GRIS    = "\033[90m";          // texto gris
const string ROJO    = "\033[91m";          // texto rojo (errores)
const string VERDE   = "\033[92m";          // texto verde (exito)

// ------------------------------------------------------------
//  FUNCION: limpiar pantalla
// ------------------------------------------------------------
void limpiarPantalla() {
    // En Windows: system("cls");
    // En Linux/macOS: system("clear");
    // Usamos secuencia ANSI para mayor compatibilidad:
    cout << "\033[2J\033[H";
}

// ------------------------------------------------------------
//  FUNCION: dibujar linea separadora
// ------------------------------------------------------------
void dibujarLinea() {
    cout << AZUL
         << "+----------------------------------------------------------+"
         << RESET << endl;
}

// ------------------------------------------------------------
//  FUNCION: dibujar encabezado NEXUS TERMINAL
// ------------------------------------------------------------
void dibujarEncabezado() {
    dibujarLinea();
    cout << AZUL << "|" << RESET
         << CIAN  << "          _   _ _______  ___   _ _____                   " << RESET
         << AZUL << "|" << RESET << endl;
    cout << AZUL << "|" << RESET
         << CIAN  << "         | \\ | | ____\\ \\/ / | | / ____|                  " << RESET
         << AZUL << "|" << RESET << endl;
    cout << AZUL << "|" << RESET
         << CIAN  << "         |  \\| |  _|  \\  /| | | (___                    " << RESET
         << AZUL << "|" << RESET << endl;
    cout << AZUL << "|" << RESET
         << CIAN  << "         | |\\  | |___ /  \\| |_| \\___ \\                  " << RESET
         << AZUL << "|" << RESET << endl;
    cout << AZUL << "|" << RESET
         << CIAN  << "         |_| \\_|_____/_/\\_\\\\___/|____/                  " << RESET
         << AZUL << "|" << RESET << endl;
    cout << AZUL << "|" << RESET
         << GRIS  << "                   T  E  R  M  I  N  A  L                " << RESET
         << AZUL << "|" << RESET << endl;
    dibujarLinea();
}

// ------------------------------------------------------------
//  FUNCION: dibujar pie de pagina
// ------------------------------------------------------------
void dibujarPie() {
    dibujarLinea();
    cout << AZUL << "|" << RESET
         << GRIS << "         C++ CONSOLE INTERFACE  |  VERSION 1.0           " << RESET
         << AZUL << "|" << RESET << endl;
    dibujarLinea();
}

// ------------------------------------------------------------
//  FUNCION: mostrar el menu principal
// ------------------------------------------------------------
void mostrarMenu() {
    limpiarPantalla();
    dibujarEncabezado();

    cout << AZUL << "|" << RESET
         << BLANCO << "  MENU PRINCIPAL                                          " << RESET
         << AZUL << "|" << RESET << endl;
    dibujarLinea();

    cout << AZUL << "|" << RESET
         << "  " << CIAN << "[01]" << RESET << BLANCO << "  Iniciar programa                                   " << RESET
         << AZUL << "|" << RESET << endl;

    cout << AZUL << "|" << RESET
         << "  " << CIAN << "[02]" << RESET << BLANCO << "  Gestionar registros                                " << RESET
         << AZUL << "|" << RESET << endl;

    cout << AZUL << "|" << RESET
         << "  " << CIAN << "[03]" << RESET << BLANCO << "  Consultar informacion                              " << RESET
         << AZUL << "|" << RESET << endl;

    cout << AZUL << "|" << RESET
         << "  " << CIAN << "[04]" << RESET << BLANCO << "  Herramientas                                       " << RESET
         << AZUL << "|" << RESET << endl;

    cout << AZUL << "|" << RESET
         << "  " << CIAN << "[05]" << RESET << BLANCO << "  Configuracion                                      " << RESET
         << AZUL << "|" << RESET << endl;

    dibujarLinea();

    cout << AZUL << "|" << RESET
         << "  " << ROJO  << "[00]" << RESET << GRIS  << "  Salir del sistema                                  " << RESET
         << AZUL << "|" << RESET << endl;

    dibujarPie();

    cout << endl
         << CIAN << "  > " << RESET << BLANCO << "Ingrese una opcion: " << RESET;
}

// ------------------------------------------------------------
//  FUNCION: esperar que el usuario presione Enter
// ------------------------------------------------------------
void esperarEnter() {
    cout << endl;
    cout << GRIS << "  Presione Enter para volver al menu principal..." << RESET;
    cin.ignore();
    cin.get();
}

// ------------------------------------------------------------
//  FUNCION: pantalla de bienvenida - opcion 01
// ------------------------------------------------------------
void iniciarPrograma() {
    limpiarPantalla();
    dibujarLinea();
    cout << AZUL << "|" << RESET
         << CIAN << "  [01] INICIAR PROGRAMA                                   " << RESET
         << AZUL << "|" << RESET << endl;
    dibujarLinea();
    cout << endl;
    cout << VERDE << "  >> Sistema iniciado correctamente." << RESET << endl;
    cout << BLANCO << "     Esta seccion puede usarse para arrancar" << RESET << endl;
    cout << BLANCO << "     la logica principal de tu aplicacion." << RESET << endl;
    cout << endl;
    cout << GRIS << "     [ Modulo en construccion ]" << RESET << endl;
    esperarEnter();
}

// ------------------------------------------------------------
//  FUNCION: gestion de registros - opcion 02
// ------------------------------------------------------------
void gestionarRegistros() {
    limpiarPantalla();
    dibujarLinea();
    cout << AZUL << "|" << RESET
         << CIAN << "  [02] GESTIONAR REGISTROS                                " << RESET
         << AZUL << "|" << RESET << endl;
    dibujarLinea();
    cout << endl;
    cout << AZUL << "  >> Opciones disponibles:" << RESET << endl;
    cout << BLANCO << "     A - Agregar registro" << RESET << endl;
    cout << BLANCO << "     B - Ver registros" << RESET << endl;
    cout << BLANCO << "     C - Eliminar registro" << RESET << endl;
    cout << endl;
    cout << GRIS << "     [ Modulo en construccion ]" << RESET << endl;
    esperarEnter();
}

// ------------------------------------------------------------
//  FUNCION: consultar informacion - opcion 03
// ------------------------------------------------------------
void consultarInformacion() {
    limpiarPantalla();
    dibujarLinea();
    cout << AZUL << "|" << RESET
         << CIAN << "  [03] CONSULTAR INFORMACION                              " << RESET
         << AZUL << "|" << RESET << endl;
    dibujarLinea();
    cout << endl;
    cout << AZUL << "  >> Informacion del sistema:" << RESET << endl;
    cout << BLANCO << "     Nombre      : NEXUS TERMINAL" << RESET << endl;
    cout << BLANCO << "     Version     : 1.0" << RESET << endl;
    cout << BLANCO << "     Lenguaje    : C++" << RESET << endl;
    cout << BLANCO << "     Compilador  : MinGW / GCC (Code::Blocks)" << RESET << endl;
    cout << BLANCO << "     Autor       : Estudiante UTN Pacheco" << RESET << endl;
    cout << endl;
    esperarEnter();
}

// ------------------------------------------------------------
//  FUNCION: herramientas - opcion 04
// ------------------------------------------------------------
void herramientas() {
    limpiarPantalla();
    dibujarLinea();
    cout << AZUL << "|" << RESET
         << CIAN << "  [04] HERRAMIENTAS                                       " << RESET
         << AZUL << "|" << RESET << endl;
    dibujarLinea();
    cout << endl;
    cout << AZUL << "  >> Herramientas disponibles:" << RESET << endl;
    cout << BLANCO << "     1 - Calculadora basica" << RESET << endl;
    cout << BLANCO << "     2 - Conversor de unidades" << RESET << endl;
    cout << BLANCO << "     3 - Generador de reportes" << RESET << endl;
    cout << endl;
    cout << GRIS << "     [ Modulo en construccion ]" << RESET << endl;
    esperarEnter();
}

// ------------------------------------------------------------
//  FUNCION: configuracion - opcion 05
// ------------------------------------------------------------
void configuracion() {
    limpiarPantalla();
    dibujarLinea();
    cout << AZUL << "|" << RESET
         << CIAN << "  [05] CONFIGURACION                                      " << RESET
         << AZUL << "|" << RESET << endl;
    dibujarLinea();
    cout << endl;
    cout << AZUL << "  >> Parametros del sistema:" << RESET << endl;
    cout << BLANCO << "     - Idioma        : Espanol" << RESET << endl;
    cout << BLANCO << "     - Modo          : Consola" << RESET << endl;
    cout << BLANCO << "     - Colores ANSI  : Activados" << RESET << endl;
    cout << endl;
    cout << GRIS << "     [ Modulo en construccion ]" << RESET << endl;
    esperarEnter();
}

// ------------------------------------------------------------
//  FUNCION: pantalla de despedida - opcion 00
// ------------------------------------------------------------
void despedida() {
    limpiarPantalla();
    dibujarLinea();
    cout << AZUL << "|" << RESET
         << CIAN  << "  NEXUS TERMINAL - CERRANDO SESION                       " << RESET
         << AZUL << "|" << RESET << endl;
    dibujarLinea();
    cout << endl;
    cout << VERDE << "  >> Sesion finalizada correctamente." << RESET << endl;
    cout << GRIS  << "     Hasta la proxima, operador." << RESET << endl;
    cout << endl;
    dibujarLinea();
    cout << endl;
}

// ============================================================
//  PROGRAMA PRINCIPAL
// ============================================================
int main() {

    // Activar colores ANSI en Windows 10+ (modo consola virtual)
    // En Linux y macOS esto no es necesario pero no causa errores.
    #ifdef _WIN32
        system("chcp 65001 > nul");   // UTF-8 en Windows
        system(""); // Activa el procesamiento de secuencias ANSI
    #endif

    int opcion = -1;    // Guarda la opcion que escribe el usuario

    // El menu sigue mostrándose hasta que el usuario elige 0
    while (opcion != 0) {

        mostrarMenu();
        cin >> opcion;

        // Si cin falla (por ejemplo, el usuario escribe letras)
        // limpiamos el error para que el programa no se trabe.
        if (cin.fail()) {
            cin.clear();            // limpia el flag de error
            cin.ignore(1000, '\n'); // descarta lo que queda en el buffer
            opcion = -1;            // valor invalido: mostrara error
        }

        // Procesamos la opcion elegida
        switch (opcion) {
            case 1:
                iniciarPrograma();
                break;
            case 2:
                gestionarRegistros();
                break;
            case 3:
                consultarInformacion();
                break;
            case 4:
                herramientas();
                break;
            case 5:
                configuracion();
                break;
            case 0:
                despedida();
                break;
            default:
                // Opcion inexistente
                limpiarPantalla();
                dibujarLinea();
                cout << AZUL << "|" << RESET
                     << ROJO << "  ERROR: Opcion no reconocida. Intente nuevamente.       " << RESET
                     << AZUL << "|" << RESET << endl;
                dibujarLinea();
                esperarEnter();
                break;
        }
    }

    return 0;
}

// ============================================================
//  NOTA SOBRE COLORES EN WINDOWS
//  Si ves cosas como "^[[96m" en vez de colores:
//  - Asegurate de ejecutar el programa desde la terminal de
//    Windows (CMD o PowerShell), no desde la consola interna
//    de Code::Blocks.
//  - En Code::Blocks: Menu Build > Run (F9) abre una ventana
//    CMD separada donde los colores si funcionan.
//  - Otra opcion: usar Windows Terminal (disponible en la
//    Microsoft Store, gratis) que soporta ANSI completamente.
// ============================================================
