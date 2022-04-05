# Sale

## Run

```bash
$ ./mapper 100
. . .
```

this also works
```bash
$ ./brute_executable < testcase.txt
-----------------------------------1
4 - 1
-15
15
-----------------------------------2
7 - 5
0 0 0 0 0
0
-----------------------------------3
9 - 1
-11
11
-----------------------------------4
5 - 2
-9 -19
28
-----------------------------------5
9 - 2
-17 -13
30
-----------------------------------6
10 - 6
-10 -13 -12 -14 0 0
49
. . .
```

## Explained

* Considerar solo los valores negativos
* Llenamos el array con la cantidad de elementos que Bob puede llevar
* Cuando se llena el array
    ordenamos de menor a mayor (pero nosotros necesitamos los números más menores)
    cada vez que se encuentra un número menor que el ultimo número `maximum_values[m - 1]` restamos la suma que llevamos y luego le sumamos el nuevo valor


