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
#include <regex>
#include "./../Header Files/pUno_Logica_Basica.h"

/**-------------------------------------------
 * ? Main Program
-------------------------------------------**/

//! Paso 1: Implementacion de los metodos de access para los valores generales de la logica del teatro
unsigned int Logica_Basica::get_numero_de_butacas_por_fila(unsigned int numero_de_fila_a_evaluar)
{
    try {
        if (numero_de_fila_a_evaluar > 0 && numero_de_fila_a_evaluar < numero_de_filas)
        {
            return this->numero_de_butacas_per_fila[numero_de_fila_a_evaluar];
        }
        else {throw std::invalid_argument("Error Code 0x001 [Raised] - Los parametros ingresados para "
                                          "@numero_de_fila_a_evaluar@ no pueden ser mayores o iguales que nueve (9).\n");}
    }
    catch (std::invalid_argument &error)
    {
        std::cerr << "Error en el metodo @get_numero_de_butacas_por_fila@.\n";
        std::cerr << error.what() << std::endl;
    }
}

unsigned int Logica_Basica::get_numero_de_filas() const
{
    return this->numero_de_filas;
}

double Logica_Basica::get_precio_por_fila(unsigned int numero_de_fila_a_evaluar)
{
    try {
        if (numero_de_fila_a_evaluar > 0 && numero_de_fila_a_evaluar < numero_de_filas)
        {
            return this->precio_por_fila[numero_de_fila_a_evaluar];
        }
        else {throw std::invalid_argument("Error Code 0x001 [Raised] - Los parametros ingresados para "
                                          "@numero_de_fila_a_evaluar@ no pueden ser mayores o iguales que nueve (9).\n");}
    }
    catch (std::invalid_argument &error)
    {
        std::cerr << "Error en el metodo @get_precio_por_fila@.\n";
        std::cerr << error.what() << std::endl;
    }
}

//! Paso 2: Implementacion del metodo de strings para retornar un arreglo de enteros

Logica_Basica::fila_y_butaca_basado_en_string Logica_Basica::retornar_fila_y_butaca_en_base_a_string(std::string string_a_evaluar)
{
    //? Paso 1: Definimos regex para valida que sea una letra con un dos numeros
    std::regex regex_fila_y_butaca("[A-Ia-I][0-1][1-9]");
    std::smatch resultado_de_lectura_regex;
    fila_y_butaca_basado_en_string fila_y_butaca_retorno;
    //? Paso 2: Logica del Programa buscador
    try
    {

        if (string_a_evaluar.length() == 3){
            if (std::regex_match(string_a_evaluar, resultado_de_lectura_regex, regex_fila_y_butaca)) {
                std::cout << resultado_de_lectura_regex.str()[0] << std::endl; //! Debug
                fila_y_butaca_retorno.fila = get_numero_de_fila_basado_en_character_de_numeracion(
                        resultado_de_lectura_regex.str()[0]);

                std::cout << resultado_de_lectura_regex.str().substr(1, 2) << std::endl; //! Debug
                fila_y_butaca_retorno.butaca = std::stoi(resultado_de_lectura_regex.str().substr(1, 2));

                return fila_y_butaca_retorno;
            } else {
                throw std::invalid_argument(
                        "Error Code 0x001 [Raised] - El paraemtro ingresado para @string_a_evaluar@ es "
                        "incorrecto, favor asegurese que siga el siguiente formato A01.\n"
                        "Error COde 0x002 [Raised] - Evaluacion en Regex fallida, asegurese de que el parametro"
                        "ingresado para @string_a_evaluar@ sea correcto.\n");
            }
        }
        else {throw std::invalid_argument("Error Code 0x001 [Raised] - Los parametros ingresados para "
                                          "@string_a_evaluar@ son incorectos");}
    }
    catch (std::invalid_argument &error)
    {
        std::cerr << "Error en el metodo @retornar_fila_y_butaca_en_base_a_string@.\n";
        std::cerr << error.what() << std::endl;
    }
    return fila_y_butaca_retorno;
}
double Logica_Basica::retornar_precio_con_fila_y_asiento(unsigned int fila_general)
{
    try {
        if (fila_general > 0 && fila_general < numero_de_filas)
        {
            return this->precio_por_fila[fila_general];
        }
        else {throw std::invalid_argument("Error Code 0x001 [Raised] - Los parametros ingresados para @fila_general@ "
                                          "son incorrectos, las filas no pueden ser mayores o iguales que nueve (9).\n");}
    }
    catch (std::invalid_argument &error)
    {
        std::cerr << "Error en el metodo @retornar_precio_con_fila_y_asiento@.\n";
        std::cerr << error.what() << std::endl;
    }
    //! When error has happend, messaged with will be printed and return type will be of -1 so it can be handled by dependent
    //! functions
    return -1;
}

int Logica_Basica::get_numero_de_fila_basado_en_character_de_numeracion( char character_de_numeracion)
{
    switch(std::toupper(character_de_numeracion))
    {
        case 'A': {return 0;}
        case 'B': {return 1;}
        case 'C': {return 2;}
        case 'D': {return 3;}
        case 'E': {return 4;}
        case 'F': {return 5;}
        case 'G': {return 6;}
        case 'H': {return 7;}
        case 'I': {return 8;}
        default: {return -1;}
    }
}