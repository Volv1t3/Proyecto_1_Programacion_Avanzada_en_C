/**------------------------------------------------------------------------------------------------
 * ?                                           ABOUT
 * @authors        :  Leonardo Olmedo (327960); Santiago Arellano (328370)
 * @clase          :  Programacion Avanzada en C++
 * @createdOn      :  27-09-23
 * @description    :  Archivo Definicion de la Clase Usuario Teatro.
------------------------------------------------------------------------------------------------**/


/**-------------------------------------------
 * ? Preprocessing Directives
-------------------------------------------**/
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <vector>
#include <array>

/**-------------------------------------------
 * ? Main Program
-------------------------------------------**/

#ifndef PROYECTO_1_PROGRAMACION_AVANZADA_EN_C_PUNO_CLASE_USUARIO_TEATRO_H
#define PROYECTO_1_PROGRAMACION_AVANZADA_EN_C_PUNO_CLASE_USUARIO_TEATRO_H

class Clase_Teatro
{
    private:
    //? Variables constantes que requiere el teatro para conocer sus propias dimensiones
    static const unsigned int numero_de_filas{9};
    static const unsigned int[9] numero_de_butacas_per_fila{8,10,10,12,12,13,13,14,14};
    static const unsined int [9] precio_por_fila{125,125,125,90,90,70,70,45,45};
    //? Arreglo Dinamico para direccionar a un arreglo que contiene los valores de cada butaca.
    unsigned int* arreglo_direccional_a_butacas[9];

public:

protected:

}

#endif //PROYECTO_1_PROGRAMACION_AVANZADA_EN_C_PUNO_CLASE_USUARIO_TEATRO_H
