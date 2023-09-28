/**------------------------------------------------------------------------------------------------
 * ?                                           ABOUT
 * @authors        :  Leonardo Olmedo (327960); Santiago Arellano (328370)
 * @clase          :  Programacion Avanzada en C++
 * @createdOn      :  27-09-23
 * @description    :  Archivo de Definicion para la clase Cliente
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

#ifndef PROYECTO_1_PROGRAMACION_AVANZADA_EN_C_PUNO_CLASE_CLIENTE_H
#define PROYECTO_1_PROGRAMACION_AVANZADA_EN_C_PUNO_CLASE_CLIENTE_H

class Cliente_Teatro
{
private:
    //! Paso 1: Definimos los atributos privados, no estaticos que requiere cada cliente,
    std::string nombre_del_cliente;
    std::string apellido_del_cliente;
    unsigned int numero_de_butacas_reservadas{0};

    //! Paso 2: Definimos las variables que contendran la informacion del usuario con respecto a las butacas reservadas,
    bool* arreglo_referencial_con_punteros_a_las_columnas[9];
    double precio_total_reserva{0};
public:
    //! Paso 1: Definimos Constructores especificos para esta clase

    Cliente_Teatro(std::string nombre_del_cliente = "Nombre Inicial", std::string apellido_del_cliente = "Apellido Inicial");

    //! Paso 2: Definimos los metodos publicos get y set para cada dato interno que el usuario puede cambiar
    std::string get_nombre_del_cliente() const ;
    Cliente_Teatro& set_nombre_del_cliente(std::string nombre_del_cliente_nuevo);
    std::string get_apellido_del_cliente() const ;
    Cliente_Teatro& set_apellido_del_cliente(std::string apellido_del_cliente_nuevo);

    //! Paso 3: Para la poblacion de los arreglos se utilizaran una simple funcion que tome como argumentos la fila y la c
    //! columan de la reserva
    void reservar_butaca(unsigned int fila_a_reservar, unsigned int columna_a_reservar);
    void cancelar_reserva(unsigned int fila_a_cancelar, unsigned int columna_a_cancelar);

    //! Paso 4: Definimos el desturctor para la clase
    ~Cliente_Teatro();
protected:
    //! Adicional, definimos clases protected para ser usadas dentro del public pero sin riesgo de accesso indeseado
    void rellenar_arreglo_referencial_con_punteros_a_las_columnas();

};
#endif //PROYECTO_1_PROGRAMACION_AVANZADA_EN_C_PUNO_CLASE_CLIENTE_H
