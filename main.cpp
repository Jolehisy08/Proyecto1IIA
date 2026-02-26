#include <iostream> 
extern "C" {
    #include "Controlador.h"
    P_Controlador_T Controlador_P;
}

int main() {
    // 1. Inicializar el controlador
    Controlador_initialize();

    // 2. Configurar los mismos valores que tienes en Simulink
    // IMPORTANTE: Cambia el 1 por 0.2 para que coincida con tu modelo
    Controlador_P.Controlador_K_p = 1; 
    Controlador_U.Ref = 1.0;
    
    // Aquí pon el valor "con ruido" que capturaste en el Data Inspector
    Controlador_U.NivelMedido = 1.2; 

    // 3. Ejecutar un paso de cálculo
    Controlador_step();

    // 4. Mostrar el resultado por pantalla
    std::cout << "--- Validacion del Controlador ---" << std::endl;
    std::cout << "Salida (Accion de Control): " << Controlador_Y.Accindecontrol << std::endl;

    return 0;
}