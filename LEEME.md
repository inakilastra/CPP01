# CPP01

<h1>C++ - Module 01</h1>

<br />

> [!NOTE] 
> Otros Lenguajes: [English](https://github.com/inakilastra/CPP01/blob/main/README.md)

<br />

> [!IMPORTANT]  
> Al final de cada fichero tienes una explicación del código.

<br />

>
> - :white_check_mark: [Subject](#subject)
>
>   - :white_check_mark: [Exercise 00: BraiiiiiiinnnzzzZ](#exercise-00-braiiiiiiinnnzzzz)
>
>   - :white_check_mark: [Exercise 01 Moar brainz!](#exercise-01-moar-brainz!)
>
>   - :white_check_mark: [Exercise 02 HI THIS IS BRAIN](#exercise-02-hi-this-is-brain)

>
>   - :white_check_mark: [Exercise 03 Unnecessary violence](#exercise-03-unnecessary-violence)
>
>   - :white_check_mark: [Exercise 04 Sed is for losers](#exercise-04-sed-is-for-losers)
>
>   - :white_check_mark: [Exercise 05 Harl 2.0](#exercise-05-harl-2.0)
>
>   - :white_check_mark: [Exercise 06 Harl filter](#exercise-06-harl-filter)

<br /><br />

>
> - :white_check_mark: [Evaluation](#evaluation)
>
>   - :white_check_mark: [Ex00: BraiiiiiiinnnzzzZ](#ex00-braiiiiiiinnnzzzz)
>
>   - :white_check_mark: [Ex01 Moar brainz!](#ex01-moar-brainz!)
>
>   - :white_check_mark: [Ex02 HI THIS IS BRAIN](#ex02-hi-this-is-brain)
>
>   - :white_check_mark: [Ex03 Unnecessary violence](#ex03-unnecessary-violence)
>
>   - :white_check_mark: [Ex04 Sed is for losers](#ex04-sed-is-for-losers)
>
>   - :white_check_mark: [Ex05 Harl 2.0](#ex05-harl-2.0)
>
>   - :white_check_mark: [Ex06 Harl filter](#ex06-harl-filter)

<br /><br /><br /><br />

## <h2>Subject</h2>

<h3>Reglas generales</h3>

**Compilando**

- Compila tu código con c++ y los flags -Wall -Wextra -Werror

- Su código aún debería compilarse si agrega el flag -std=c++98

**Convenciones de formato y nomenclatura**

- Los directorios de ejercicios se denominarán de esta forma: ex00, ex01, ... , exn

- Nombra tus archivos, clases, funciones, funciones miembro y atributos según lo requerido en las pautas.

- Escribe nombres de clases en formato **UpperCamelCase**. Los archivos que contienen código de clase siempre se nombrarán según el nombre de la clase. Por ejemplo:
ClassName.hpp/ClassName.h, ClassName.cpp o ClassName.tpp. Luego, si tiene un archivo de encabezado que contiene la definición de una clase "BrickWall" que representa una pared de ladrillos, su nombre será BrickWall.hpp.

- A menos que se especifique lo contrario, todos los mensajes de salida deben finalizar con un carácter de nueva línea y mostrarse en la salida estándar.

- ¡Adiós Norminette! No se aplica ningún estilo de codificación en los módulos de C++. Puedes seguir tu favorito. Pero tenga en cuenta que un código que sus pares evaluadores no pueden entender es un código que no pueden calificar. Haga todo lo posible para escribir un código limpio y legible.

<br /><br />

**Permitido/Prohibido**

Ya no estás codificando en C. ¡Es hora de C++! Por lo tanto:

- Puedes utilizar casi todo lo que hay en la biblioteca estándar. Por lo tanto, en lugar de ceñirse a lo que ya sabe, sería inteligente utilizar tanto como sea posible las versiones tipo C++ de las funciones de C a las que está acostumbrado.

- Sin embargo, no puedes utilizar ninguna otra biblioteca externa. Significa que C++ 11 (y sus formas derivadas) y las bibliotecas Boost están prohibidas. Las siguientes funciones también están prohibidas: *printf(), *alloc() y free(). Si los usas tu nota será 0 y listo.

- Tenga en cuenta que, a menos que se indique explícitamente lo contrario, está prohibido utilizar el espacio de nombres <ns_name> y las palabras clave amigas. En caso contrario, tu nota será -42.

- **Puedes usar el STL solo en los Módulos 08 y 09**. Eso significa: no hay **Contenedores** (vector/lista/mapa/etc.) ni **Algoritmos** (cualquier cosa que requiera incluir el encabezado <algoritmo>) hasta entonces. En caso contrario, tu nota será -42.

<br /><br />

**Algunos requisitos de diseño**

- La pérdida de memoria también ocurre en C++. Cuando asigna memoria (usando la nueva palabra clave), debe evitar **pérdidas de memoria**.

- Desde el Módulo 02 al Módulo 09, tus clases deben estar diseñadas en la **Forma Canónica Ortodoxa, excepto cuando se indique explícitamente lo contrario**.

- Cualquier implementación de función colocada en un archivo de encabezado (excepto las plantillas de función) significa 0 para el ejercicio.

- Deberías poder utilizar cada uno de tus encabezados independientemente de los demás. Por tanto, deben incluir todas las dependencias que necesiten. Sin embargo, debes evitar el problema de la doble inclusión agregando **include guards**. En caso contrario su calificación será 0.

<br /><br />

**Léeme**

- Puede agregar algunos archivos adicionales si es necesario (es decir, dividir su código). Como estas asignaciones no están verificadas por un programa, no dude en hacerlo siempre que entregue los archivos obligatorios.

- A veces, las pautas de un ejercicio parecen breves pero los ejemplos pueden mostrar requisitos que no están escritos explícitamente en las instrucciones.

- ¡Lea cada módulo por completo antes de comenzar! De verdad, hazlo.

- ¡Por Odín, por Thor! ¡¡¡Usa tu cerebro!!!

```
Tendrás que implementar muchas clases.
Esto puede parecer tedioso, a menos que puedas programar tu editor de texto favorito.
```

```
Se le da cierta libertad para completar los ejercicios.
Sin embargo, sigue las reglas obligatorias y no seas holgazán.
¡Te perderías mucha información útil! No dudes en leer sobre conceptos teóricos.
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Exercise 00 BraiiiiiiinnnzzzZ</h3>

Turn-in directory : ex00/<br />
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp<br />
Forbidden functions : None<br />

Primero, implemente una clase **Zombie**. Tiene un nombre de atributo privado string.
Agregue una función miembro void anunciar (void); a la clase Zombi. Los zombis se anuncian de la siguiente manera:

<name>: BraiiiiiiinnnzzzZ...

No imprima los corchetes angulares (< y >). Para un zombie llamado Foo, el mensaje sería:

Foo: BraiiiiiiinnnzzzZ...

Luego, implemente las dos funciones siguientes:

- Zombie* nuevoZombie( std::string name );

Crea un zombie, le pone un nombre y lo devuelve para que puedas usarlo fuera de la función alcance.

- void randomChump( std::string name );

Crea un zombie, le pones un nombre y el zombie se anuncia.

Ahora bien, ¿cuál es el objetivo real del ejercicio? Tienes que determinar en qué caso es mejor asignar los zombies en la pila o en el montón.

Los zombis deben ser destruidos cuando ya no los necesites. El destructor debe imprimir un mensaje con el nombre del zombie para fines de depuración.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Exercise 01 Moar brainz!</h3>

Turn-in directory : ex01/<br />
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp <br />
Forbidden functions : None<br />

¡Es hora de crear una **horda de zombis**!

Implemente la siguiente función en el archivo apropiado:

> Zombie* zombieHorde( int N, std::string name );

Debe asignar N objetos Zombie en una única asignación. Luego, tiene que inicializar los zombies, dándole a cada uno de ellos el nombre pasado como parámetro. La función devuelve un puntero al primer zombie.

Implemente sus propias pruebas para garantizar que su función zombieHorde() funcione como se esperaba.

Intenta llamar a anunciar() para cada uno de los zombies.

No olvides eliminar todos los zombies y comprobar si hay **pérdidas de memoria**.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Exercise 02 HI THIS IS BRAIN</h3>

Turn-in directory : ex02/ <br />
Files to turn in : Makefile, main.cpp<br />
Forbidden functions : None<br />

Escribe un programa que contenga:

- Una variable string inicializada como "HI THIS IS BRAIN".

- stringPTR: un puntero al string.

- stringREF: una referencia al string.

Su programa tiene que imprimir:

- La dirección de memoria de la variable de string.

- La dirección de memoria mantenida por stringPTR.

- La dirección de memoria mantenida por stringREF.

Y luego:

- El valor de la variable de string.

- El valor señalado por stringPTR.

- El valor señalado por stringREF.

Eso es todo, sin trucos. El objetivo de este ejercicio es desmitificar referencias que pueden parecer completamente nuevas. Aunque existen algunas pequeñas diferencias, esta es otra sintaxis para algo que ya hace: manipulación de direcciones.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Exercise 03 Unnecessary violence</h3>

Turn-in directory : ex03/<br />
Files to turn in : Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h, hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp<br />
Forbidden functions : None<br />

Implemente una clase Weapon que tenga:

- Un tipo de atributo privado, que es un string.

- Una función miembro getType() que devuelve una referencia constante al tipo.

- Una función miembro setType() que establece el tipo usando el nuevo pasado como parámetro.

Ahora, crea dos clases: HumanA y HumanB. Ambos tienen un arma y un nombre. También tienen una función miembro attack() que muestra (por supuesto, sin los corchetes angulares):

<name> ataca con su <weapon type>

HumanA y HumanB son casi iguales excepto por estos dos pequeños detalles:

- Mientras HumanA toma el Arma en su constructor, HumanB no.

- Es posible que HumanB no siempre tenga un arma, mientras que HumanA siempre estará armado.

Si su implementación es correcta, ejecutar el siguiente código imprimirá un ataque con un "garrote con púas crudo" y luego un segundo ataque con "algún otro tipo de garrote" para ambos casos de prueba:

```c++
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return 0;
}
```

No olvides comprobar si hay **pérdidas de memoria**.

```
¿En qué caso crees que sería mejor utilizar un puntero a Weapon? ¿Y una referencia a Weapon? ¿Por qué? Piénselo antes de comenzar este ejercicio.
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Exercise 04 Sed is for losers</h3>

Turn-in directory : ex04/<br />
Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}<br />
Forbidden functions : std::string::replace<br />

Cree un programa que tome tres parámetros en el siguiente orden: un nombre de archivo y dos strings, s1 y s2.

Abrirá el archivo <filenameo> y copiará su contenido en un nuevo archivo <filename>.replace, reemplazando cada aparición de s1 con s2.

El uso de funciones de manipulación de archivos C está prohibido y se considerará trampa. Todas las funciones miembro de la clase std::string están permitidas, excepto reemplazar. ¡Utilízalos sabiamente!

Por supuesto, maneje entradas y errores inesperados. Debe crear y entregar sus propias pruebas para garantizar que su programa funcione como se espera.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Exercise 05 Harl 2.0</h3>

Turn-in directory : ex05/<br />
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp<br />
Forbidden functions : None<br />

¿Conoces a Harl? Todos lo hacemos, ¿verdad? En caso de que no lo sepas, encuentra a continuación el tipo de comentarios que hace Harl. Se clasifican por niveles:

- Nivel **"DEBUG"**: los mensajes de depuración contienen información contextual. Se utilizan principalmente para el diagnóstico de problemas.
Ejemplo: "Me encanta tener tocino extra para mi hamburguesa 7XL con doble queso, triple pepinillo y ketchup especial. ¡Realmente me encanta!"

- Nivel **"INFO"**: Estos mensajes contienen información extensa. Son útiles para rastrear la ejecución de programas en un entorno de producción.
Ejemplo: "No puedo creer que agregar tocino adicional cueste más dinero. ¡No pusiste suficiente tocino en mi hamburguesa! Si lo hicieras, ¡no estaría pidiendo más!".

- Nivel **"WARNING"**: los mensajes de advertencia indican un problema potencial en el sistema.
Sin embargo, se puede manejar o ignorar.
Ejemplo: "Creo que merezco tener un poco de tocino extra gratis. He estado viniendo durante años mientras que tú empezaste a trabajar aquí desde el mes pasado".

• Nivel **"ERROR"**: estos mensajes indican que se ha producido un error irrecuperable.
Este suele ser un problema crítico que requiere intervención manual.
Ejemplo: "¡Esto es inaceptable! Quiero hablar con el gerente ahora".

Vas a automatizar **Harl**. No será difícil ya que siempre dice las mismas cosas. Tienes que crear una clase Harl con las siguientes funciones de miembros privados:

- void debug( void );

- void info( void );

- void warning( void );

- void error( void );

**Harl** también tiene una función miembro pública que llama a las cuatro funciones miembro anteriores.
dependiendo del nivel pasado como parámetro:

> void complain( std::string level );

El objetivo de este ejercicio es utilizar **punteros a funciones miembro**. Esto no es una sugerencia. Harl tiene que quejarse sin usar un bosque de if/else if/else. ¡No lo piensa dos veces!

Cree y entregue pruebas para demostrar que Harl se queja mucho. Puede utilizar los ejemplos de comentarios enumerados anteriormente en el asunto o optar por utilizar sus propios comentarios.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Exercise 06 Harl filter</h3>

Turn-in directory : ex06/<br />
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp<br />
Forbidden functions : None<br />

A veces no quieres prestar atención a todo lo que dice Harl. Implementa un sistema para filtrar lo que dice Harl dependiendo de los niveles de registro que quieras escuchar.

Cree un programa que tome como parámetro uno de los cuatro niveles. Mostrará todos los mensajes de este nivel y superiores. Por ejemplo:

```
$> ./harlFilter "WARNING"
[ WARNING ]
Creo que merezco tener un poco de tocino extra gratis.
Llevo viniendo desde hace años mientras que tú empezaste a trabajar aquí desde el mes pasado.

[ ERROR ]
Esto es inaceptable, quiero hablar con el gerente ahora.

$> ./harlFilter "No estoy seguro de lo cansado que estoy hoy..."
[Probablemente quejándose de problemas insignificantes]
```

Aunque hay varias maneras de lidiar con Harl, una de las más efectivas es APAGARLO.

Asigne el nombre harlFilter a su ejecutable.

Debe utilizar, y tal vez descubrir, la declaración de cambio en este ejercicio.

```
Puedes aprobar este módulo sin realizar el ejercicio 06.
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br /><br /><br />

## <h2>Evaluation</h2>

<h3>Pautas</h3>

Debes compilar con clang++, con -Wall -Wextra -Werror
Como recordatorio, este proyecto está en C++98.
NO se esperan funciones de miembros o contenedores de C++ 11 (y posteriores).

Cualquiera de estos significa que no debes calificar el ejercicio en cuestión:

- Una función se implementa en un encabezado (excepto en una plantilla)

- Un Makefile se compila sin banderas y/o con algo distinto a clang++

Cualquiera de estos significa que debes marcar el proyecto como Función Prohibida:

- Uso de una función "C" (*alloc, *printf, gratis)

- Uso de una función no permitida en el tema.

- Uso de "usar espacio de nombres" o "amigo"

- Uso de una biblioteca externa o funciones de C++20

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Ex00 BraiiiiiiinnnzzzZ</h3>

El objetivo de este ejercicio es comprender cómo asignar memoria en C++.

<br /><br />

**Makefile y pruebas**

Hay un Makefile que se compila usando los flags apropiados.

Hay al menos un main para probar el ejercicio.

<br /><br />

**Zombie Class**

Hay una clase zombie.
Tiene un atributo de nombre privado.
Tiene al menos un constructor.
Tiene una función miembro anunciar (void) que imprime: ": BraiiiiiiinnnzzzZ..."
El destructor imprime un mensaje de depuración que incluye el nombre del zombie.

<br /><br />

**newZombie**

Hay una función newZombie() cuyo prototipo es: [ Zombie* newZombie( std::string name ); ]
Debería asignar un zombi al montón y devolverlo.
Idealmente, debería llamar al constructor que toma un string e inicializa el nombre.
El ejercicio debe marcarse como correcto si el Zombie puede anunciarse con el nombre pasado a la función.
Hay pruebas para demostrar que todo funciona.
El zombie se elimina correctamente antes de que finalice el programa.

<br /><br />

**randomChump**

Hay una función randomChump() cuyo prototipo es: [ void randomChump( std::string name ); ]
Debería crear un zombi en la pila y hacer que se anuncie.
Lo ideal sería que el zombie se ubicara en la pila (por lo que se eliminaría implícitamente al final de la función). También se puede asignar en el montón y luego eliminarlo explícitamente.
El estudiante debe justificar sus elecciones.
Hay pruebas para demostrar que todo funciona.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Ex01 Moar brainz!</h3>

El objetivo de este ejercicio es asignar varios objetos al mismo tiempo usando new[], inicializarlos y eliminarlos correctamente.

<br /><br />

**Makefile y pruebas**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**zombieHorde**

La clase Zombie tiene un constructor predeterminado.
Hay una función zombieHorde() cuyo prototipo es: [ Zombie* zombieHorde( int N, std::string name ); ]
Asigna N zombis en el montón explícitamente usando new[].
Después de la asignación, se produce una inicialización de los objetos para establecer su nombre.
Devuelve un puntero al primer zombi.
Hay suficientes pruebas en general para probar los puntos anteriores.
Ej: llamar a announce() en todos los zombies.
Por último, todos los zombies deben eliminarse al mismo tiempo en el archivo main.

<br /><br />

### <h3>Ex02 HI THIS IS BRAIN</h3>

¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias!

<br /><br />

**Makefile y pruebas**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**HI THIS IS BRAIN**

Hay un string que contiene "HI THIS IS BRAIN".
stringPTR es un puntero al string.
stringREF es una referencia al string.
La dirección del string se muestra utilizando la variable del string, stringPTR y stringREF.
EL string se muestra utilizando stringPTR y stringREF.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Ex03 Unnecessary violence</h3>

El objetivo de este ejercicio es comprender que los punteros y referencias presentan algunas pequeñas diferencias que los hacen más apropiados según el uso y el ciclo de vida del objeto utilizado.

<br /><br />

**Makefile and tests**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**Weapon**

Hay una clase Weapon que tiene un tipo string, un getType() y un setType().
La función getType() devuelve una referencia constante al tipo de string.

<br /><br />

**HumanA and HumanB**

HumanA puede tener una referencia o un puntero al Weapon.
Lo ideal sería implementarlo como referencia, ya que el Weapon existe desde la creación hasta la destrucción y nunca cambia.
HumanB debe tener un puntero a un Weapon ya que el campo no está configurado en el momento de la creación y el Weapon puede ser NULL.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Ex04 Sed is for losers</h3>

Gracias a este ejercicio, el alumno debería haberse familiarizado con ifstream y ofstream.

<br /><br />

**Makefile and tests**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**ex04**

Hay una función de reemplazo (u otro nombre) que funciona como se especifica en el asunto.
La gestión de errores es eficiente: intentar pasar un archivo que no existe, cambiar los permisos, pasarlo vacío, etc.
Si puede encontrar un error que no se soluciona y que no es completamente esotérico, no hay puntos para este ejercicio.
El programa debe leer el archivo usando ifstream o equivalente, y escribir usando ofstream o equivalente.
La implementación de la función debe realizarse utilizando funciones de std::string, no leyendo el string carácter por carácter.
¡Esto ya no es C!

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Ex05 Harl 2.0</h3>

El objetivo de este ejercicio es utilizar punteros a funciones de miembros de clase. Además, esta es la oportunidad de descubrir los diferentes niveles de registro.

<br /><br />

**Makefile and tests**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**Our beloved Harl**

Se cuenta con una clase Harl con al menos las 5 funciones requeridas en la subject.
La función complain() ejecuta las otras funciones usando un puntero hacia ellas.
Idealmente, el estudiante debería haber implementado una forma de hacer coincidir las diferentes strings correspondientes al nivel de registro con los punteros de la función miembro correspondiente.
Si la implementación es diferente pero el ejercicio funciona, debes marcarlo como válido. Lo único que no está permitido es tener un if/elseif/else.
El estudiante pudo haber elegido cambiar el mensaje que muestra Harl o mostrar los ejemplos dados en el tema, ambos son válidos.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

### <h3>Ex06 Harl-filter</h3>

Ahora que eres codificador experimentado, deberías utilizar nuevos tipos de instrucciones, sentencias, bucles, etc. El objetivo de este último ejercicio es hacerte descubrir la sentencia switch.

<br /><br />

**Makefile and tests**

Hay un Makefile que se compila usando los flags apropiados.
Hay al menos un main para probar el ejercicio.

<br /><br />

**Switching Harl Off**

El programa HarlFilter toma como argumento cualquiera de los niveles de registro ("DEBUG", "INFO", "WARNING" o "ERROR"). Luego debería mostrar solo los mensajes que están en el mismo nivel o superior (DEBUG <INFO <WARNING <ERROR). Esto debe implementarse mediante una declaración de cambio con un caso predeterminado.
Una vez más, ya no if/elseif/else, por favor.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br /><br /><br />
