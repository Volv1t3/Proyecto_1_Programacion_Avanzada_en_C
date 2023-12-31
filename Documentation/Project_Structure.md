<h1 
style="text-align: center; align-content: center; font-size: 14pt; color: floralwhite; 
font-family:'Calibri Light''">
Universidad San Francisco de Quito <br>
</h1>
<h2 style="text-align: center; align-content: center; font-size: 12pt; color: floralwhite; font-family: 'Calibri Light'">
Programacion Avanzada en C++</h2>
<h6 style="text-align: center; align-content: center; font-size: 10pt; color: palevioletred; 
font-family:'Calibri Light''">
Proyecto 1 -  Taquillera de un Teatro <br>
</h6>

* **
<p style="color: floralwhite; text-align: justify; align-content: space-between">
Datos Generales: <br>
</p>
<ul>
<li style="list-style: upper-roman; color: aquamarine">
Integrantes del Grupo: <span style="color: floralwhite"> Leonardo Olmedo (327960); Santiago Arellano (328370) </span>
</li>
<li style="list-style: upper-roman; color: aquamarine">
Fecha de Inicio: <span style="color: floralwhite">26 de septiembre de 2023</span> <br>
</li>
<li style="list-style: upper-roman; color: aquamarine">
Descripcion del Proyecto: <span style="color: floralwhite">Se solicita la creacion de un sistema de taquillera para un teatro, donde se conoce 
la cantidad de filas disponibles y asientos. Para estas se calculan los valores de precios, se permiten registros y cambios de
asientos, se almacena estructuradamente los nombres de los registrados y los asientos solictados, etc.
<br> Ademas se solicita que se pueda imprimir en pantalla un diagrama referencial con los asientos reservados y libres, asi como una
tabla que muestre a aquellas personas y sus sillas que ya han sido reservadas..
</span> <br>
</li>
</ul>

* **
<p style="color: cornflowerblue; text-align: justify; align-content: space-between">
Consideraciones e Instrucciones <br>
</p>

El siguiente proyecto tiene como objetivo demostrar el conocimiento práctico sobre los temas de ciencias de la computacion 
estudiados durante los primeros meses del curso de Programación Avanzada en C++. Por este modo se ha visto muy necesario la 
creacion de una archivo de formato markdown que pueda servir como registro para las buenas practicas a tomar durante el 
desarrollo de este proyecto.

<p style="color: cornflowerblue; text-align: justify; align-content: space-between">
Key Takeaways: <br>
</p>
<ul style=" list-style: upper-alpha">
<li id="1">
Estructura y Control de Versiones:
    <ul>
        <li>Para la organización de los archivos enviados en este trabajo se trabajará con Git para Windows y un repositorio
        online  en donde se podrá revisar los cambios y se tendrá un registro del trabajo realizado por cada miembro.
        </li>
        <li>
            De no contar con la capacidad para utilizar un sistema como Git, los archivos cambiados seran enviados a una 
            dirección de correo electrónico para su revision manual y posterior modificación en el sistema general
        </li>
        <li>
            Si bien se trabajara con una sola branch, se utilizara también pull requests como UNICO metodo para solicitar 
            revisiones o cambios en el código, el comando <span style="font-family: Consolas; font-weight: bold; text-align: center; 
                    align-content: center; align-self: center; display: flex; justify-content: center; -ms-flex-align: center"> git --commit -am o git --push </span> <br> solo se ejecutará luego de una revision del codigo.
        </li>
        <li>
        El trabajo se realizará dentro del ambiente de desarrollo de Clion de JetBrains por lo que si se utiliza otro 
        entorno es normal la presencia de archivos "inconsistentes" como la carpeta .idea
        </li>
    </ul>
</li>
<li>
    Escritura de Código y Coherencia Semántica 
<ul>
    <li>
    Dentro de todo el código del programa se mantendran dos condiciones inherentes y muy importantes para mantener la coherencia
    sintactica del proyecto. Se trabajará sin utilizar <br> <span style="font-family: Consolas; font-weight: bold; text-align: center; 
                    align-content: center; align-self: center; display: flex; justify-content: center; -ms-flex-align: center"> using namespace std;</span> <br> Por tanto
siempre se trabajará utilizando el namespace de donde proviene el código y función externa que se este utilizando. De esta forma evitamos errores al hacer un debloating de
<span style="font-family: Consolas; font-weight: bold; text-align: center; 
                    align-content: center; align-self: center; display: flex; justify-content: center; -ms-flex-align: center"> #include ... </span> <br>
En este sentido, el código tiene que ser legible, limpio y conciso con los includes y los namespaces que en realidad necesita. Asi evitamos un archivo compilado muy
grande. <br> <br>
</li>
<li>
Con respecto a la escritura de nombres de funciones y variables, se trabajara con el conocido snake case, a modo de ejemplo
<span style="font-family: Consolas; font-weight: bold; text-align: center; 
                    align-content: center; align-self: center; display: flex; justify-content: center; -ms-flex-align: center"> unsigned int int_var_with_snake_case{0};</span> <br>
Asi, aunque los nombres parezcan largos, se puede leer mucho más fácil que un nombre utilizando el Camel Case. </li>
<li>
    Las revisiones de escritura y claridad del codigo seran cuasi diarias, y rigurosas por tanto se solicita un poco de empeño en mantener el orden y asi evitar reviews innecesarias 
</li>
</ul>
</li>
</ul>


* **

<p style="color: cornflowerblue; text-align: justify; align-content: space-between">
Indicaciones Generales para el desarrollo del proyecto en consola:
<br>
</p>

<ul style="list-style-type: upper-alpha">
<li>
Para las dimensionalidad de la consola, y lograr una estructura visual agradable aun cuando existen
limitaciones de la consola se utiliza un screen size de 120 pixeles,
<ul>
<li>
Cada espacio de texto tiene que tener maximo 120 caracteres horizontales de extension, para que no se salga
de los limites de la pagina de consola y se vea correctamete,
</li>
<li>
Las lineas de separacion entre objetos de consola se construyen con el simbolo "="
</li>
</ul>
</li>
</ul>

* **
<p style="color: cornflowerblue; text-align: justify; align-content: space-between">
Puntos Importantes sobre Implementacion: <br>
</p>

<ul style="list-style: upper-alpha"> 
<li>
Para la representaciond de butacas reservadas o libres, podemos utilizar indicadores booleanos true or false, si una 
butaca fue reservada pues cambiamos de True a False, por ende podemos trabajar con 0 o 1 en la impresion, o con las palabras
"Reservado" o "Libre" dependiendo del indicador booleano que tengamos


```
for(size_t index = 0; index < 9; index +=1) 
{ 
    arreglo_con_dimension_filas[index] = new bool[arreglo_valores_butacas[index]];
    for (size_t jindex =0; jindex < arreglo_valores_butacas[index]; jindex +=1)
    {
        arreglo_con_dimension_filas[index][jindex] = true;
    }
}
```
De esta forma lograremos crear un codigo recursivo con una complejidad minima para la cantidad de datos que nos permite
asignar a cada una de las sillas un valor de True y asi facilmente conocer cuales estan libres durante ejecucion, sin entrar 
en problemas como tener un sistema de aliases para reservado o libre.
</li>
<li>
Al trabajar con piezas de codigo que manejen datos externos, siempre tenemos que tener en cuenta que puede entrar un dato
mal, y saber que hacer con estos datos es muy importante. En un caso muy especifico veamos el caso de retornar el numero de 
columnas por fila en el teatro

```c++
unsigned int retornar_numero_de_asientos_basado_en_numero_de_fila(unsigned int numero_de_fila)
{
    try
    {
        if (numero_de_fila > 0 && numero_de_fila < 9)
            {
            return this->numero_de_columnas_por_fila[numero_de_fila];
            }
        else 
            {
            throw std::invalid_argument("Error code 0x001 - Parametros "
                                        "Ingresados Incorrectos - Numero de Fila Invalido");
            }
    }
    catch (std::invalid_argument &error)
    {
        std::cerr << "Error en la Funcion retornar_numero_de_asientos_"
                     "basado_en_numero_de_fila(unsigned int numero_de_fila)\n";
        std::cerr << error.what() << std::endl;
    }
}
```
La pieza de codigo anterior es una de las cosas mas importantes de este documento, ya que demuestra como se trabajara 
en el caso de que existan errores al ingreso de datos, el programa no debe fallar, no debe detenerse, debe defenderse de 
cada intento de abuso por el usuario y por eso usamos un bloque try-catch. <br>
La excepcion que alzamos, std::invalid_argument() es una excepcion externa en C++ que nos permite inidicar con 
mayor claridad que ha habido un error por los parametros sin necesidad de escribir nosotros todo el mensaje.

<br> Asimismo dentro de este programa se trabajaran con diferentes estandares de error: <br>
<ul style=" list-style: lower-roman">
<li>
 <span style="font-weight: bolder"> Error Code 0x001 [Raised] - ... : </span> representan errores de argumentos, errores criticos que no permiten el correcto 
funcionamiento del programa</li>
<li>
 <span style="font-weight: bolder"> Error Code 0x002 [Raised] - ... : </span> repesentan errores en funciones que dependen de otras
si se espera que pueda haber errores con el retorno de alguna otra funcion interdependiente, marcar aquel error con este nombre</li>
<li>
 <span style="font-weight: bolder"> Error Code 0x003 [Raised ] - ... : </span> representan errores en constructores, si se espera que pueda haber errores en constructores, alzar 0x001
y 0x003 juntos con su respectivo mensaje de error</li>
</ul>


</li>
</ul>