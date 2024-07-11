# CPP01

> [!NOTE] 
> Subjects
> - :white_check_mark: [English](#subjects-english)
> - :white_check_mark: [Castellano](#subjects-castellano)

> [!NOTE] 
> Evaluation     
> - :white_check_mark: [English](#evaluation) 
> - :white_check_mark: [Castellano](#evaluación)

## Subjects English

### General rules

#### Compiling

- Compile your code with c++ and the flags -Wall -Wextra -Werror

- Your code should still compile if you add the flag -std=c++98

##### Formatting and naming conventions

- The exercise directories will be named this way: ex00, ex01, ... , exn

- Name your files, classes, functions, member functions and attributes as required in the guidelines.

- Write class names in **UpperCamelCase** format. Files containing class code will always be named according to the class name. For instance:
ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you have a header file containing the definition of a class "BrickWall" standing for a brick wall, its name will be BrickWall.hpp.

- Unless specified otherwise, every output messages must be ended by a new-line character and displayed to the standard output.

- Goodbye Norminette! No coding style is enforced in the C++ modules. You can follow your favorite one. But keep in mind that a code your peer-evaluators can’t understand is a code they can’t grade. Do your best to write a clean and readable code.

##### Allowed/Forbidden

You are not coding in C anymore. Time to C++! Therefore:

- You are allowed to use almost everything from the standard library. Thus, instead of sticking to what you already know, it would be smart to use as much as possible the C++-ish versions of the C functions you are used to.

- However, you can’t use any other external library. It means C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and that’s it.

- Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden. Otherwise, your grade will be -42.

- **You are allowed to use the STL in the Module 08 and 09 only**. That means: no **Containers** (vector/list/map/and so forth) and no **Algorithms** (anything that requires to include the <algorithm> header) until then. Otherwise, your grade will be -42.

##### A few design requirements

- Memory leakage occurs in C++ too. When you allocate memory (by using the new keyword), you must avoid **memory leaks**.

- From Module 02 to Module 09, your classes must be designed in the **Orthodox Canonical Form, except when explicitely stated otherwise**.

- Any function implementation put in a header file (except for function templates) means 0 to the exercise.

- You should be able to use each of your headers independently from others. Thus, they must include all the dependencies they need. However, you must avoid the problem of double inclusion by adding **include guards**. Otherwise, your grade will be 0.

##### Read me

- You can add some additional files if you need to (i.e., to split your code). As these assignments are not verified by a program, feel free to do so as long as you turn in the mandatory files.

- Sometimes, the guidelines of an exercise look short but the examples can show requirements that are not explicitly written in the instructions.

- Read each module completely before starting! Really, do it.

- By Odin, by Thor! Use your brain!!!

```
You will have to implement a lot of classes. 
This can seem tedious, unless you’re able to script your favorite text editor.
```

```
You are given a certain amount of freedom to complete the exercises.
However, follow the mandatory rules and don’t be lazy. 
You would miss a lot of useful information! Do not hesitate to read about
theoretical concepts.
```

### Exercise 00: BraiiiiiiinnnzzzZ

Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp
Forbidden functions : None

First, implement a **Zombie** class. It has a string private attribute name.
Add a member function void announce( void ); to the Zombie class. Zombies announce themselves as follows:

<name>: BraiiiiiiinnnzzzZ...

Don’t print the angle brackets (< and >). For a zombie named Foo, the message would be:

Foo: BraiiiiiiinnnzzzZ...

Then, implement the two following functions:
- Zombie* newZombie( std::string name );
It creates a zombie, name it, and return it so you can use it outside of the function
scope.

- void randomChump( std::string name );
It creates a zombie, name it, and the zombie announces itself.

Now, what is the actual point of the exercise? You have to determine in what case it’s better to allocate the zombies on the stack or heap.

Zombies must be destroyed when you don’t need them anymore. The destructor must print a message with the name of the zombie for debugging purposes.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 01: Moar brainz!

Turn-in directory : ex01/
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp 
Forbidden functions : None

Time to create a **horde of Zombies**!

Implement the following function in the appropriate file:

> Zombie* zombieHorde( int N, std::string name );

It must allocate N Zombie objects in a single allocation. Then, it has to initialize the zombies, giving each one of them the name passed as parameter. The function returns a pointer to the first zombie.

Implement your own tests to ensure your zombieHorde() function works as expected.

Try to call announce() for each one of the zombies.

Don’t forget to delete all the zombies and check for **memory leaks**.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 02: HI THIS IS BRAIN

Turn-in directory : ex02/ 
Files to turn in : Makefile, main.cpp
Forbidden functions : None

Write a program that contains:

- A string variable initialized to "HI THIS IS BRAIN".

- stringPTR: A pointer to the string.

- stringREF: A reference to the string.

Your program has to print:

- The memory address of the string variable.

- The memory address held by stringPTR.

- The memory address held by stringREF.

And then:

- The value of the string variable.

- The value pointed to by stringPTR.

- The value pointed to by stringREF.

That’s all, no tricks. The goal of this exercise is to demystify references which can seem completely new. Although there are some little differences, this is another syntax for something you already do: address manipulation.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 03: Unnecessary violence

Turn-in directory : ex03/
Files to turn in : Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h, hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp
Forbidden functions : None

Implement a Weapon class that has:

- A private attribute type, which is a string.

- A getType() member function that returns a const reference to type.

- A setType() member function that sets type using the new one passed as parameter.

Now, create two classes: HumanA and HumanB. They both have a Weapon and a name. They also have a member function attack() that displays (of course, without the angle brackets):

<name> attacks with their <weapon type>

HumanA and HumanB are almost the same except for these two tiny details:

- While HumanA takes the Weapon in its constructor, HumanB doesn’t.

- HumanB may not always have a Weapon, whereas HumanA will always be armed.

If your implementation is correct, executing the following code will print an attack with "crude spiked club" then a second attack with "some other type of club" for both test cases:

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

Don’t forget to check for **memory leaks**.

```
In which case do you think it would be best to use a pointer to Weapon? And a reference to Weapon? Why? Think about it before starting this exercise.
```

[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 04: Sed is for losers

Turn-in directory : ex04/
Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}
Forbidden functions : std::string::replace

Create a program that takes three parameters in the following order: a filename and two strings, s1 and s2.

It will open the file <filename> and copies its content into a new file <filename>.replace, replacing every occurrence of s1 with s2.

Using C file manipulation functions is forbidden and will be considered cheating. All the member functions of the class std::string are allowed, except replace. Use them wisely!

Of course, handle unexpected inputs and errors. You have to create and turn in your own tests to ensure your program works as expected.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 05:  Harl 2.0

Turn-in directory : ex05/
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp
Forbidden functions : None

Do you know Harl? We all do, do we? In case you don’t, find below the kind of comments Harl makes. They are classified by levels:

- **"DEBUG"** level: Debug messages contain contextual information. They are mostly used for problem diagnosis.
Example: "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"

- **"INFO"** level: These messages contain extensive information. They are helpful for tracing program execution in a production environment.
Example: "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"

- **"WARNING"** level: Warning messages indicate a potential issue in the system.
However, it can be handled or ignored.
Example: "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."

• **"ERROR"** level: These messages indicate an unrecoverable error has occurred.
This is usually a critical issue that requires manual intervention.
Example: "This is unacceptable! I want to speak to the manager now."

You are going to automate **Harl**. It won’t be difficult since it always says the same things. You have to create a Harl class with the following private member functions:

- void debug( void );

- void info( void );

- void warning( void );

- void error( void );

**Harl** also has a public member function that calls the four member functions above
depending on the level passed as parameter:

> void complain( std::string level );

The goal of this exercise is to use **pointers to member functions**. This is not a suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think twice!

Create and turn in tests to show that Harl complains a lot. You can use the examples of comments listed above in the subject or choose to use comments of your own.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 06: Harl filter

Turn-in directory : ex06/
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp
Forbidden functions : None

Sometimes you don’t want to pay attention to everything Harl says. Implement a system to filter what Harl says depending on the log levels you want to listen to.

Create a program that takes as parameter one of the four levels. It will display all messages from this level and above. For example:

```
$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years whereas you started working here since last month.

[ ERROR ]
This is unacceptable, I want to speak to the manager now.

$> ./harlFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
```

Although there are several ways to deal with Harl, one of the most effective is to SWITCH it off.

Give the name harlFilter to your executable.

You must use, and maybe discover, the switch statement in this exercise.

```
You can pass this module without doing exercise 06.
```


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


## Subjects Castellano

### Reglas generales

#### Compilando

- Compila tu código con c++ y los flags -Wall -Wextra -Werror

- Su código aún debería compilarse si agrega el flag -std=c++98

##### Convenciones de formato y nomenclatura

- Los directorios de ejercicios se denominarán de esta forma: ex00, ex01, ... , exn

- Nombra tus archivos, clases, funciones, funciones miembro y atributos según lo requerido en las pautas.

- Escribe nombres de clases en formato **UpperCamelCase**. Los archivos que contienen código de clase siempre se nombrarán según el nombre de la clase. Por ejemplo:
ClassName.hpp/ClassName.h, ClassName.cpp o ClassName.tpp. Luego, si tiene un archivo de encabezado que contiene la definición de una clase "BrickWall" que representa una pared de ladrillos, su nombre será BrickWall.hpp.

- A menos que se especifique lo contrario, todos los mensajes de salida deben finalizar con un carácter de nueva línea y mostrarse en la salida estándar.

- ¡Adiós Norminette! No se aplica ningún estilo de codificación en los módulos de C++. Puedes seguir tu favorito. Pero tenga en cuenta que un código que sus pares evaluadores no pueden entender es un código que no pueden calificar. Haga todo lo posible para escribir un código limpio y legible.

##### Permitido/Prohibido

Ya no estás codificando en C. ¡Es hora de C++! Por lo tanto:

- Puedes utilizar casi todo lo que hay en la biblioteca estándar. Por lo tanto, en lugar de ceñirse a lo que ya sabe, sería inteligente utilizar tanto como sea posible las versiones tipo C++ de las funciones de C a las que está acostumbrado.

- Sin embargo, no puedes utilizar ninguna otra biblioteca externa. Significa que C++ 11 (y sus formas derivadas) y las bibliotecas Boost están prohibidas. Las siguientes funciones también están prohibidas: *printf(), *alloc() y free(). Si los usas tu nota será 0 y listo.

- Tenga en cuenta que, a menos que se indique explícitamente lo contrario, está prohibido utilizar el espacio de nombres <ns_name> y las palabras clave amigas. En caso contrario, tu nota será -42.

- **Puedes usar el STL solo en los Módulos 08 y 09**. Eso significa: no hay **Contenedores** (vector/lista/mapa/etc.) ni **Algoritmos** (cualquier cosa que requiera incluir el encabezado <algoritmo>) hasta entonces. En caso contrario, tu nota será -42.

##### Algunos requisitos de diseño

- La pérdida de memoria también ocurre en C++. Cuando asigna memoria (usando la nueva palabra clave), debe evitar **pérdidas de memoria**.

- Desde el Módulo 02 al Módulo 09, tus clases deben estar diseñadas en la **Forma Canónica Ortodoxa, excepto cuando se indique explícitamente lo contrario**.

- Cualquier implementación de función colocada en un archivo de encabezado (excepto las plantillas de función) significa 0 para el ejercicio.

- Deberías poder utilizar cada uno de tus encabezados independientemente de los demás. Por tanto, deben incluir todas las dependencias que necesiten. Sin embargo, debes evitar el problema de la doble inclusión agregando **include guards**. En caso contrario su calificación será 0.

##### Léeme

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


### Exercise 00: BraiiiiiiinnnzzzZ

Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp
Forbidden functions : None

Primero, implemente una clase **Zombie**. Tiene un nombre de atributo privado de cadena.
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


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 01: Moar brainz!

Turn-in directory : ex01/
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp 
Forbidden functions : None

¡Es hora de crear una **horda de zombis**!

Implemente la siguiente función en el archivo apropiado:

> Zombie* zombieHorde( int N, std::string name );

Debe asignar N objetos Zombie en una única asignación. Luego, tiene que inicializar los zombies, dándole a cada uno de ellos el nombre pasado como parámetro. La función devuelve un puntero al primer zombie.

Implemente sus propias pruebas para garantizar que su función zombieHorde() funcione como se esperaba.

Intenta llamar a anunciar() para cada uno de los zombies.

No olvides eliminar todos los zombies y comprobar si hay **pérdidas de memoria**.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 02: HI THIS IS BRAIN

Turn-in directory : ex02/ 
Files to turn in : Makefile, main.cpp
Forbidden functions : None

Escribe un programa que contenga:

- Una variable de cadena inicializada como "HI THIS IS BRAIN".

- stringPTR: un puntero a la cadena.

- stringREF: una referencia a la cadena.

Su programa tiene que imprimir:

- La dirección de memoria de la variable de cadena.

- La dirección de memoria mantenida por stringPTR.

- La dirección de memoria mantenida por stringREF.

Y luego:

- El valor de la variable de cadena.

- El valor señalado por stringPTR.

- El valor señalado por stringREF.

Eso es todo, sin trucos. El objetivo de este ejercicio es desmitificar referencias que pueden parecer completamente nuevas. Aunque existen algunas pequeñas diferencias, esta es otra sintaxis para algo que ya hace: manipulación de direcciones.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 03: Unnecessary violence

Turn-in directory : ex03/
Files to turn in : Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h, hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp
Forbidden functions : None

Implemente una clase Weapon que tenga:

- Un tipo de atributo privado, que es una cadena.

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

[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 04: Sed is for losers

Turn-in directory : ex04/
Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}
Forbidden functions : std::string::replace

Cree un programa que tome tres parámetros en el siguiente orden: un nombre de archivo y dos strings, s1 y s2.

Abrirá el archivo <filenameo> y copiará su contenido en un nuevo archivo <filename>.replace, reemplazando cada aparición de s1 con s2.

El uso de funciones de manipulación de archivos C está prohibido y se considerará trampa. Todas las funciones miembro de la clase std::string están permitidas, excepto reemplazar. ¡Utilízalos sabiamente!

Por supuesto, maneje entradas y errores inesperados. Debe crear y entregar sus propias pruebas para garantizar que su programa funcione como se espera.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 05:  Harl 2.0

Turn-in directory : ex05/
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp
Forbidden functions : None

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


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


### Exercise 06: Harl filter

Turn-in directory : ex06/
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp
Forbidden functions : None

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


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


## Evaluation

### Guidelines

You must compile with clang++, with -Wall -Wextra -Werror 
As a reminder, this project is in C++98.
C++11 (and later) members functions or containers are NOT expected.

Any of these means you must not grade the exercise in question:

- A function is implemented in a header (except in a template)

- A Makefile compiles without flags and/or with something other than clang++

Any of these means that you must flag the project as Forbidden Function:

- Use of a "C" function (*alloc, *printf, free)

- Use of a function not allowed in the subject

- Use of "using namespace" or "friend"

- Use of an external library, or C++20 features

### Ex00: BraiiiiiiinnnzzzZ

The goal of this exercise is to understand how to allocate memory in C++.

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.

There is at least a main to test the exercise.

#### Zombie Class

There is a Zombie Class.
It has a private name attribute.
It has at least a constructor.
It has a member function announce( void ) that prints: ": BraiiiiiiinnnzzzZ..."
The destructor prints a debug message that includes the name of the zombie.

#### newZombie

There is a newZombie() function prototyped as: [ Zombie* newZombie( std::string name ); ]
It should allocate a Zombie on the heap and return it.
Ideally, it should call the constructor that takes a string and initializes the name.
The exercise should be marked as correct if the Zombie can announce itself with the name passed to the function.
There are tests to prove everything works.
The zombie is deleted correctly before the end of the program.

#### randomChump

There is a randomChump() function prototyped as: [ void randomChump( std::string name ); ]
It should create a Zombie on the stack, and make it announce itself.
Ideally the zombie should be allocated on the stack (so implicitly deleted at the end of the function). It can also be allocated on the heap and then explicitly deleted.
The student must justify their choices.
There are tests to prove everything works.

### Ex01: Moar brainz!

The goal of this exercise is to allocate a number of objects at the same time using new[], initialize them, and to properly delete them.

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

#### zombieHorde

The Zombie Class has a default constructor.
There is a zombieHorde() function prototyped as: [ Zombie* zombieHorde( int N, std::string name ); ]
It allocates N zombies on the heap explicitly using new[].
After the allocation, there is an initialization of the objects to set their name.
It returns a pointer to the first zombie.
There are enough tests in the main to prove the previous points.
Ex: calling announce() on all the zombies.
Last, all the zombies should be deleted at the same time in the main.

### Ex02: HI THIS IS BRAIN

Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references!

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.


#### HI THIS IS BRAIN

There is a string containing "HI THIS IS BRAIN".
stringPTR is a pointer to the string.
stringREF is a reference to the string.
The address of the string is displayed using the string variable, the stringPTR and the stringREF.
The string is displayed using the stringPTR and the stringREF.

### Ex03: Unnecessary violence

The objective of this exercise is to understand that pointers and references present some small differences that make them be more appropriated depending on the use and the lifecycle of the object used.

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

#### Weapon

There is a Weapon class that has a type string, a getType() and a setType().
The getType() function returns a const reference to the type string.

#### HumanA and HumanB

HumanA can have a reference or a pointer to the Weapon.
Ideally, it should be implemented as a reference, since the Weapon exists from creation until destruction, and never changes.
HumanB must have a pointer to a Weapon since the field is not set at creation time, and the weapon can be NULL.

### Ex04: Sed is for losers

Thanks to this exercise, the student should have gotten familiar with ifstream and ofstream.

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.


#### ex04

There is a function replace (or other name) that works as specified in the subject.
The error management is efficient: try to pass a file that does not exist, change the permissions, pass it empty, etc.
If you can find an error that isn't handled, and isn't completely esoteric, no points for this exercise.
The program must read from the file using an ifstream or equivalent, and write using an ofstream or equivalent.
The implementation of the function should be done using functions from std::string, no by reading the string character by character.
This is not C anymore!


### Ex05: Karen 2.0

The goal of this exercise is to use pointers to class member functions. Also, this is the opportunity to discover to the different log levels.

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

#### Our beloved Karen

There is a class Karen with at least the 5 functions required in the subject.
The function complain() executes the other functions using a pointer to them.
Ideally, the student should have implemented a way of matching the different strings corresponding to the log level to the pointers of the corresponding member function.
If the implementation is different but the exercise works you should mark it as valid. The only thing that is not allowed is to have a if/elseif/else.
The student could have chosen to change the message Karen displays or to display the examples given in the subject, both are valid.

### Ex06: Karen-filter

Now that you are experienced coders, you should use new instruction types, statements, loops, etc. The goal of this last exercise is to make you discover the switch statement.

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

#### Switching Karen Off

The program karenFilter takes as argument any of the log levels ("DEBUG", "INFO",  "WARNING" or "ERROR"). It should then display just the messages that are at the same level or above (DEBUG < INFO < WARNING < ERROR). This must be implemented using a switch statement with a default case.
Once again, no if/elseif/else anymore please.


[**⬆⬆⬆⬆⬆⬆ top ⬆⬆⬆⬆⬆⬆**](#cpp00)


## Evaluación

### Pautas

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

### Ex00: BraiiiiiiinnnzzzZ

El objetivo de este ejercicio es comprender cómo asignar memoria en C++.

#### Makefile y pruebas

Hay un Makefile que se compila usando los flags apropiados.

Hay al menos un principal para probar el ejercicio.

#### Zombie Class

Hay una clase zombie.
Tiene un atributo de nombre privado.
Tiene al menos un constructor.
Tiene una función miembro anunciar (void) que imprime: ": BraiiiiiiinnnzzzZ..."
El destructor imprime un mensaje de depuración que incluye el nombre del zombie.

#### newZombie

Hay una función newZombie() cuyo prototipo es: [ Zombie* newZombie( std::string name ); ]
Debería asignar un zombi al montón y devolverlo.
Idealmente, debería llamar al constructor que toma una cadena e inicializa el nombre.
El ejercicio debe marcarse como correcto si el Zombie puede anunciarse con el nombre pasado a la función.
Hay pruebas para demostrar que todo funciona.
El zombie se elimina correctamente antes de que finalice el programa.

#### randomChump

Hay una función randomChump() cuyo prototipo es: [ void randomChump( std::string name ); ]
Debería crear un zombi en la pila y hacer que se anuncie.
Lo ideal sería que el zombie se ubicara en la pila (por lo que se eliminaría implícitamente al final de la función). También se puede asignar en el montón y luego eliminarlo explícitamente.
El estudiante debe justificar sus elecciones.
Hay pruebas para demostrar que todo funciona.

### Ex01: Moar brainz!

El objetivo de este ejercicio es asignar varios objetos al mismo tiempo usando new[], inicializarlos y eliminarlos correctamente.

#### Makefile y pruebas

Hay un Makefile que se compila usando los indicadores apropiados.
Hay al menos un principal para probar el ejercicio.

#### zombieHorde

La clase Zombie tiene un constructor predeterminado.
Hay una función zombieHorde() cuyo prototipo es: [ Zombie* zombieHorde( int N, std::string name ); ]
Asigna N zombis en el montón explícitamente usando new[].
Después de la asignación, se produce una inicialización de los objetos para establecer su nombre.
Devuelve un puntero al primer zombi.
Hay suficientes pruebas en general para probar los puntos anteriores.
Ej: llamar a announce() en todos los zombies.
Por último, todos los zombies deben eliminarse al mismo tiempo en el archivo principal.

### Ex02: HI THIS IS BRAIN

¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias! ¡Desmitifica las referencias!

#### Makefile y pruebas

Hay un Makefile que se compila usando los indicadores apropiados.
Hay al menos un principal para probar el ejercicio.


#### HI THIS IS BRAIN

There is a string containing "HI THIS IS BRAIN".
stringPTR is a pointer to the string.
stringREF is a reference to the string.
The address of the string is displayed using the string variable, the stringPTR and the stringREF.
The string is displayed using the stringPTR and the stringREF.

### Ex03: Unnecessary violence

The objective of this exercise is to understand that pointers and references present some small differences that make them be more appropriated depending on the use and the lifecycle of the object used.

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

#### Weapon

There is a Weapon class that has a type string, a getType() and a setType().
The getType() function returns a const reference to the type string.

#### HumanA and HumanB

HumanA can have a reference or a pointer to the Weapon.
Ideally, it should be implemented as a reference, since the Weapon exists from creation until destruction, and never changes.
HumanB must have a pointer to a Weapon since the field is not set at creation time, and the weapon can be NULL.

### Ex04: Sed is for losers

Thanks to this exercise, the student should have gotten familiar with ifstream and ofstream.

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.


#### ex04

There is a function replace (or other name) that works as specified in the subject.
The error management is efficient: try to pass a file that does not exist, change the permissions, pass it empty, etc.
If you can find an error that isn't handled, and isn't completely esoteric, no points for this exercise.
The program must read from the file using an ifstream or equivalent, and write using an ofstream or equivalent.
The implementation of the function should be done using functions from std::string, no by reading the string character by character.
This is not C anymore!


### Ex05: Karen 2.0

The goal of this exercise is to use pointers to class member functions. Also, this is the opportunity to discover to the different log levels.

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

#### Our beloved Karen

There is a class Karen with at least the 5 functions required in the subject.
The function complain() executes the other functions using a pointer to them.
Ideally, the student should have implemented a way of matching the different strings corresponding to the log level to the pointers of the corresponding member function.
If the implementation is different but the exercise works you should mark it as valid. The only thing that is not allowed is to have a if/elseif/else.
The student could have chosen to change the message Karen displays or to display the examples given in the subject, both are valid.

### Ex06: Karen-filter

Now that you are experienced coders, you should use new instruction types, statements, loops, etc. The goal of this last exercise is to make you discover the switch statement.

#### Makefile and tests

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

#### Switching Karen Off

The program karenFilter takes as argument any of the log levels ("DEBUG", "INFO",  "WARNING" or "ERROR"). It should then display just the messages that are at the same level or above (DEBUG < INFO < WARNING < ERROR). This must be implemented using a switch statement with a default case.
Once again, no if/elseif/else anymore please.


[**⬆⬆⬆⬆⬆⬆ subir ⬆⬆⬆⬆⬆⬆**](#cpp00)