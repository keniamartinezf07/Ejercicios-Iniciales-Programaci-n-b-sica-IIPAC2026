#include <iostream>
#include <string>
 
using namespace std;
// DEFINIR E INICIALIZAR VARIABLES
string nombreEmpleado;
int edadEmpleado;
int tipoEmpleado;    // 1. Tiempo completo, 2. Medio tiempo, 3. Por contrato
char generoEmpleado; // M. Masculino, F. Femenino
double sueldoMensualEmpleado;
 
int main()
{
 
    cout << "PILLOFON S.A. DE C.V." << endl;
    cout << "Bienvenido al sistema de calculo de sueldo por hora" << endl;
    // DATOS GENERALES DEL EMPLEADO
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, nombreEmpleado); // Leer el nombre completo del empleado
    cout << "Ingrese la edad del empleado: ";
    cin >> edadEmpleado; // Leer la edad del empleado
    // validar la edad del empleado (18 a 70 años)
    while (edadEmpleado < 18 || edadEmpleado > 70)
    {
        cout << "Edad no valida. Por favor, ingrese una edad entre 18 y 70 años." << endl;
        cout << "Ingrese la edad del empleado: ";
        cin >> edadEmpleado;
    }
 
    cout << "Ingrese el genero del empleado (M. Masculino, F. Femenino): ";
    cin >> generoEmpleado; // Leer el genero del empleado
    // validar el genero del empleado (M o F)
    while (generoEmpleado != 'M' && generoEmpleado != 'm' && generoEmpleado != 'F' && generoEmpleado != 'f')
    {
        cout << "Genero no valido. Por favor, ingrese M o F." << endl;
        cout << "Ingrese el genero del empleado (M. Masculino, F. Femenino): ";
        cin >> generoEmpleado;
    }
 
    // ingresar el sueldo mensual del empleado
    cout << "Ingrese el sueldo mensual del empleado: ";
    cin >> sueldoMensualEmpleado; // Leer el sueldo mensual del empleado
                                  // validar que sea mayor a 16,0000.00
    while (sueldoMensualEmpleado < 16000.00)
    {
        cout << "Sueldo mensual no valido. Por favor, ingrese un sueldo mayor a 16,000.00." << endl;
        cout << "Ingrese el sueldo mensual del empleado: ";
        cin >> sueldoMensualEmpleado;
    }
 
    cout << "Ingrese el tipo de empleado (1. Empleado de Planta, 2. Medio tiempo, 3. Por contrato): ";
    cin >> tipoEmpleado; // Leer el tipo de empleado
    // validar el tipo de empleado (1, 2 o 3)
    while (tipoEmpleado < 1 || tipoEmpleado > 3)
    {
        cout << "Tipo de empleado no valido. Por favor, ingrese 1, 2 o 3." << endl;
        cout << "Ingrese el tipo de empleado (1. Empleado de Planta, 2. Medio tiempo, 3. Por contrato): ";
        cin >> tipoEmpleado;
    }
 
    switch (tipoEmpleado)
    {
    case 1: // Empleado de Planta   
        double horasPlantaLV;
        horasPlantaLV = 9.5;
        cout << "Empleado de Planta" << endl;
        cout << "Horas planta 9.5" << endl;
        
 
        break;
    case 2: // Medio tiempo
        cout << "Empleado de Medio Tiempo" << endl;
 
        break;
    case 3: // Por contrato
        cout << "Empleado por Contrato" << endl;
 
        break;
    default:
        cout << "Tipo de empleado no valido." << endl;
 
        break;
        
    }
 
    return 0;
}