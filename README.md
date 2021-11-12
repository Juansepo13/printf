# _printf Function

## this is a README.md for Repository 0x11. C - print

```
For Holberton School.
Cohort 16.
```
   By Julien Barbier, co-founder & CEO
   Project to be done in teams of 2 people (your team: Daniel Rivera, Juan Sebastian Posada Garzon
   Ongoing project - started 11-05-2021, must end by 11-10-2021 (in 4 days) - you're done with 0% of tasks.
   Checker will be released at 11-08-2021 03:00 AM
   Manual QA review must be done (request it when you are done with the project)
   QA review fully automated.
```

## Concepts
For this project, students are expected to look at these concepts:

```
Group Projects
Pair Programming - How To
Flowcharts
Approaching a Project
```
## Files included

| File                 | Details                                    |
|--------------------- | ------------------------------------------ |
| [task_printf.c](./a.out) | prints any string according to format  |
| [main.h](./main.h)   | containts all the prototypes               |
| [misc.c](./misc.c)   | putchar function and strlen                |
| [codes.c](./strings.c) | functions for printing strings           |
| [enteros.c](./numbers.c) | functions for print integer numbers    |


# Ejecutando las pruebas
```
	int len;
	int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
```

# Background Context

```
Write your own printf function.
```

## Author
```
* **Juan Posada @JuanSeb35904130** - [JuanPosada](https://github.com/Juansepo13)
* **Daniel Ruiz @ruizdani301** - [DanielRuiz](https://github.com/ruizdani301)
```
