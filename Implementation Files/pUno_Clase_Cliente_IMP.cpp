/**------------------------------------------------------------------------------------------------
 * ?                                           ABOUT
 * @authors        :  Leonardo Olmedo (327960); Santiago Arellano (328370)
 * @clase          :  Programacion Avanzada en C++
 * @createdOn      :  27-09-23
 * @description    :  Archivo de implementacion de la clase Cliente Teatro
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
#include "./../Header Files/pUno_Clase_Cliente.h"
/**-------------------------------------------
 * ? Main Program
-------------------------------------------**/

//! Implementacion de los metodos principales, constructor y destructor.

Cliente_Teatro::Cliente_Teatro(std::string nombre_del_cliente, std::string apellido_del_cliente)
{
    try {
        if (nombre_del_cliente.length() > 0 && apellido_del_cliente.length() > 0) {
            this->nombre_del_cliente = nombre_del_cliente;
            this->apellido_del_cliente = apellido_del_cliente;
        } else { throw std::invalid_argument("Error Code 0x001 [Raised] - El/Los parametros ingresados para "
                                             "@nombre_del_cliente@/@apellido_del_cliente@ no pueden ser vacios.\n "
                                             "Error Code 0x003 [Raised] - Error en el constructor de la clase @Cliente_Teatro@.\n"); }
    }
    catch (std::invalid_argument &error)
    {
        std::cerr << "Error en el @Constructor@ de la Clase Cliente.\n";
        std::cerr << error.what() << std::endl;
    }
}

Cliente_Teatro::~Cliente_Teatro()
{
    for (size_t index = 0; index < 9; index++)
    {
        delete [] this->arreglo_referencial_con_punteros_a_las_columnas[index];
    }
}

//! Implementacion de los metodos de acceso.

std::string Cliente_Teatro::get_nombre_del_cliente() const
{
    return this->nombre_del_cliente;
}

Cliente_Teatro& Cliente_Teatro::set_nombre_del_cliente(std::string nombre_del_cliente_nuevo)
{
    try {
        if (nombre_del_cliente_nuevo.length() > 0)
        {
            this->nombre_del_cliente = nombre_del_cliente_nuevo;
        }
        else { throw std::invalid_argument("Error Code 0x001 [Raised] - "
                                           "El parametro ingresado para @nombre_del_cliente_nuevo@ no puede ser vacio");}
    }
    catch (std::invalid_argument &error)
    {
        std::cerr << "Error en el metodo @set_nombre_del_cliente@.\n";
        std::cerr << error.what() << std::endl;
    }
    return *this;
}

std::string Cliente_Teatro::get_apellido_del_cliente() const
{
    return this->apellido_del_cliente;
}

Cliente_Teatro& Cliente_Teatro::set_apellido_del_cliente(std::string apellido_del_cliente_nuevo)
{
    try
    {
        if (apellido_del_cliente_nuevo.size() > 0)
        {
            this->apellido_del_cliente = apellido_del_cliente_nuevo;
        }
        else { throw std::invalid_argument("Error Code 0x001 [Raised] - "
                                           "El parametro ingresado para @apellido_del_cliente_nuevo@ no puede ser vacio");}
    }
    catch (std::invalid_argument &error)
    {
        std::cerr << "Error en el metodo @set_apellido_del_cliente@.\n";
        std::cerr << error.what() << std::endl;
    }
    return *this;
}

//! Implementacion de metodos para reserva y liberacion de una butaca

void Cliente_Teatro::reservar_butaca(unsigned int fila_a_reservar, unsigned int columna_a_reservar)
{
    try
    {
        //? Paso 1: revisar si los indices son correctos
        if ((fila_a_reservar > 0 && fila_a_reservar < 9))
        {
            if ()
        }
        else { throw std::invalid_argument("Error Code 0x001 [Raised] - EL parametro ingresado para @fila_a_reservar@ no puede ser mayor o igual  a nueve (9).\n");}
    }
    catch(std::invalid_argument &error)
    {
        std::cerr << "Error en el metodo @reservar_butaca@.\n";
        std::cerr << error.what() << std::endl;
    }
}