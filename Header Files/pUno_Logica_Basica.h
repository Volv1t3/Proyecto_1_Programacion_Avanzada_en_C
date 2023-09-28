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
    struct fila_y_butaca_basado_en_string
    {
        unsigned int fila{0}, butaca{0};
    };
    //? Datos Generales Utiles para la Expansion de metodos de control y calculo de precios
    static const unsigned int numero_de_filas{9};
    const unsigned int numero_de_butacas_per_fila[9]{8,10,10,12,12,13,13,14,14};
    const double precio_por_fila[9]{125.0,125.0,125.0,90.0,90.0,70.0,70.0,45.0,45.0};
    static const size_t tamano_de_string_por_fila{3};
public:
    //! Paso 1: Definicion de Metodos para el accesso a datos de columnas por fila y filas totales, asi como precio
    unsigned int get_numero_de_butacas_por_fila(unsigned int numero_de_fila_a_evaluar);
    unsigned int get_numero_de_filas() const;
    double get_precio_por_fila(unsigned int numero_de_fila_a_evaluar);

    //? Metodo general para evaluar la fila y el numero de butuca segun string ingresada
    fila_y_butaca_basado_en_string retornar_fila_y_butaca_en_base_a_string(std::string texto_asiento);
    //? Metodo general para obtener el precio por una sola butaca
    double retornar_precio_con_fila_y_asiento(unsigned int fila_general);
protected:
    int get_numero_de_fila_basado_en_character_de_numeracion( char character_de_numeracion);

};
#endif //PROYECTO_1_PROGRAMACION_AVANZADA_EN_C_PUNO_LOGICA_BASICA_H
