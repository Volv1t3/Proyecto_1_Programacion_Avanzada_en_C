/**------------------------------------------------------------------------------------------------
 * ?                                           ABOUT
 * @authors        :  Leonardo Olmedo (327960); Santiago Arellano (328370)
 * @clase          :  Programacion Avanzada en C++
 * @createdOn      :  27-09-23
 * @description    :  Archivo de Logica Basica para la clase Teatro
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

#ifndef PROYECTO_1_PROGRAMACION_AVANZADA_EN_C_PUNO_LOGICA_BASICA_H
#define PROYECTO_1_PROGRAMACION_AVANZADA_EN_C_PUNO_LOGICA_BASICA_H

class Logica_Basica
{
private:
    //? Datos Generales Utiles para la Expansion de metodos de control y calculo de precios
    static const size_t tamano_de_string_por_fila{3};
public:
    //? Metodo general para evaluar la fila y el numero de butuca segun string ingresada
    unsigned int[] retornar_fila_y_butaca_en_base_a_string(std::string texto_asiento);
    //? Metodo general para obtener el precio por una sola butaca
    double retornar_precio_con_fila_y_asiento(unsigned int fila_general, unsigned butaca_en_fila);
    double retornar_precio_con_fila_y_asiento( unsigned int filas_reservadas[],unsigned int butacas_reservadas[]);
protected:

};
#endif //PROYECTO_1_PROGRAMACION_AVANZADA_EN_C_PUNO_LOGICA_BASICA_H
