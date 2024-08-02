# CPP01

<h1>C++ - Module 01</h1>

<br />

> Other Languages
>
> - [Castellano](https://github.com/inakilastra/CPP01/blob/main/LEEME.md)

<br /><br />

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

<h3>General rules</h3>

**Compiling**

- Compile your code with c++ and the flags -Wall -Wextra -Werror

- Your code should still compile if you add the flag -std=c++98

<br /><br />

**Formatting and naming conventions**

- The exercise directories will be named this way: ex00, ex01, ... , exn

- Name your files, classes, functions, member functions and attributes as required in the guidelines.

- Write class names in **UpperCamelCase** format. Files containing class code will always be named according to the class name. For instance:
ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you have a header file containing the definition of a class "BrickWall" standing for a brick wall, its name will be BrickWall.hpp.

- Unless specified otherwise, every output messages must be ended by a new-line character and displayed to the standard output.

- Goodbye Norminette! No coding style is enforced in the C++ modules. You can follow your favorite one. But keep in mind that a code your peer-evaluators can’t understand is a code they can’t grade. Do your best to write a clean and readable code.

<br /><br />

**Allowed/Forbidden**

You are not coding in C anymore. Time to C++! Therefore:

- You are allowed to use almost everything from the standard library. Thus, instead of sticking to what you already know, it would be smart to use as much as possible the C++-ish versions of the C functions you are used to.

- However, you can’t use any other external library. It means C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and that’s it.

- Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden. Otherwise, your grade will be -42.

- **You are allowed to use the STL in the Module 08 and 09 only**. That means: no **Containers** (vector/list/map/and so forth) and no **Algorithms** (anything that requires to include the <algorithm> header) until then. Otherwise, your grade will be -42.

<br /><br />

**A few design requirements**

- Memory leakage occurs in C++ too. When you allocate memory (by using the new keyword), you must avoid **memory leaks**.

- From Module 02 to Module 09, your classes must be designed in the **Orthodox Canonical Form, except when explicitely stated otherwise**.

- Any function implementation put in a header file (except for function templates) means 0 to the exercise.

- You should be able to use each of your headers independently from others. Thus, they must include all the dependencies they need. However, you must avoid the problem of double inclusion by adding **include guards**. Otherwise, your grade will be 0.

<br /><br />

**Read me**

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

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Exercise 00: BraiiiiiiinnnzzzZ</h3>

Turn-in directory : ex00/<br />
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp<br />
Forbidden functions : None<br />

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

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Exercise 01: Moar brainz!</h3>

Turn-in directory : ex01/<br />
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp <br />
Forbidden functions : None<br />

Time to create a **horde of Zombies**!

Implement the following function in the appropriate file:

> Zombie* zombieHorde( int N, std::string name );

It must allocate N Zombie objects in a single allocation. Then, it has to initialize the zombies, giving each one of them the name passed as parameter. The function returns a pointer to the first zombie.

Implement your own tests to ensure your zombieHorde() function works as expected.

Try to call announce() for each one of the zombies.

Don’t forget to delete all the zombies and check for **memory leaks**.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Exercise 02: HI THIS IS BRAIN</h3>

Turn-in directory : ex02/ <br />
Files to turn in : Makefile, main.cpp<br />
Forbidden functions : None<br />

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

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Exercise 03: Unnecessary violence</h3>

Turn-in directory : ex03/<br />
Files to turn in : Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h, hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp<br />
Forbidden functions : None<br />

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

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Exercise 04: Sed is for losers</h3>

Turn-in directory : ex04/<br />
Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}<br />
Forbidden functions : std::string::replace<br />

Create a program that takes three parameters in the following order: a filename and two strings, s1 and s2.

It will open the file <filename> and copies its content into a new file <filename>.replace, replacing every occurrence of s1 with s2.

Using C file manipulation functions is forbidden and will be considered cheating. All the member functions of the class std::string are allowed, except replace. Use them wisely!

Of course, handle unexpected inputs and errors. You have to create and turn in your own tests to ensure your program works as expected.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Exercise 05:  Harl 2.0</h3>

Turn-in directory : ex05/<br />
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp<br />
Forbidden functions : None<br />

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

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Exercise 06: Harl filter</h3>

Turn-in directory : ex06/<br />
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp<br />
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

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br /><br /><br />

## <h2>Evaluation</h2>

<h3>Guidelines</h3>

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

<h3>Ex00: BraiiiiiiinnnzzzZ</h3>

The goal of this exercise is to understand how to allocate memory in C++.

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.

There is at least a main to test the exercise.

<br /><br />

**Zombie Class**

There is a Zombie Class.
It has a private name attribute.
It has at least a constructor.
It has a member function announce( void ) that prints: ": BraiiiiiiinnnzzzZ..."
The destructor prints a debug message that includes the name of the zombie.

<br /><br />

**newZombie**

There is a newZombie() function prototyped as: [ Zombie* newZombie( std::string name ); ]
It should allocate a Zombie on the heap and return it.
Ideally, it should call the constructor that takes a string and initializes the name.
The exercise should be marked as correct if the Zombie can announce itself with the name passed to the function.
There are tests to prove everything works.
The zombie is deleted correctly before the end of the program.

<br /><br />

**randomChump**

There is a randomChump() function prototyped as: [ void randomChump( std::string name ); ]
It should create a Zombie on the stack, and make it announce itself.
Ideally the zombie should be allocated on the stack (so implicitly deleted at the end of the function). It can also be allocated on the heap and then explicitly deleted.
The student must justify their choices.
There are tests to prove everything works.

<br /><br />

<h3>Ex01: Moar brainz!</h3>

The goal of this exercise is to allocate a number of objects at the same time using new[], initialize them, and to properly delete them.

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**zombieHorde**

The Zombie Class has a default constructor.
There is a zombieHorde() function prototyped as: [ Zombie* zombieHorde( int N, std::string name ); ]
It allocates N zombies on the heap explicitly using new[].
After the allocation, there is an initialization of the objects to set their name.
It returns a pointer to the first zombie.
There are enough tests in the main to prove the previous points.
Ex: calling announce() on all the zombies.
Last, all the zombies should be deleted at the same time in the main.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Ex02: HI THIS IS BRAIN</h3>

Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references! Demystify references!

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**HI THIS IS BRAIN**

There is a string containing "HI THIS IS BRAIN".
stringPTR is a pointer to the string.
stringREF is a reference to the string.
The address of the string is displayed using the string variable, the stringPTR and the stringREF.
The string is displayed using the stringPTR and the stringREF.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Ex03: Unnecessary violence</h3>

The objective of this exercise is to understand that pointers and references present some small differences that make them be more appropriated depending on the use and the lifecycle of the object used.

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**Weapon**

There is a Weapon class that has a type string, a getType() and a setType().
The getType() function returns a const reference to the type string.

<br /><br />

**HumanA and HumanB**

HumanA can have a reference or a pointer to the Weapon.
Ideally, it should be implemented as a reference, since the Weapon exists from creation until destruction, and never changes.
HumanB must have a pointer to a Weapon since the field is not set at creation time, and the weapon can be NULL.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Ex04: Sed is for losers</h3>

Thanks to this exercise, the student should have gotten familiar with ifstream and ofstream.

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**ex04**

There is a function replace (or other name) that works as specified in the subject.
The error management is efficient: try to pass a file that does not exist, change the permissions, pass it empty, etc.
If you can find an error that isn't handled, and isn't completely esoteric, no points for this exercise.
The program must read from the file using an ifstream or equivalent, and write using an ofstream or equivalent.
The implementation of the function should be done using functions from std::string, no by reading the string character by character.
This is not C anymore!

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Ex05: Karen 2.0</h3>

The goal of this exercise is to use pointers to class member functions. Also, this is the opportunity to discover to the different log levels.

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**Our beloved Karen**

There is a class Karen with at least the 5 functions required in the subject.
The function complain() executes the other functions using a pointer to them.
Ideally, the student should have implemented a way of matching the different strings corresponding to the log level to the pointers of the corresponding member function.
If the implementation is different but the exercise works you should mark it as valid. The only thing that is not allowed is to have a if/elseif/else.
The student could have chosen to change the message Karen displays or to display the examples given in the subject, both are valid.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br />

<h3>Ex06: Karen-filter</h3>

Now that you are experienced coders, you should use new instruction types, statements, loops, etc. The goal of this last exercise is to make you discover the switch statement.

<br /><br />

**Makefile and tests**

There is a Makefile that compiles using the appropriate flags.
There is at least a main to test the exercise.

<br /><br />

**Switching Karen Off**

The program karenFilter takes as argument any of the log levels ("DEBUG", "INFO",  "WARNING" or "ERROR"). It should then display just the messages that are at the same level or above (DEBUG < INFO < WARNING < ERROR). This must be implemented using a switch statement with a default case.
Once again, no if/elseif/else anymore please.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp01)
<br /><br /><br /><br />
