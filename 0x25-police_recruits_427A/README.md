# Police Recruits

Almacenamos en un array de dos posiciones los eventos

* arr[0]:  almacenamos los crimenes que no fueron tomados por que un policia no estaba disponible
* arr[1]:  agregamos un policia nuevo (numero entero positivo)
           si tenemos acumulado al menos un policia y el siguiente es un crimen el lo tomará y luego lo restara.
           puede ir acumulando tantos policias nuevos e ir restando cada crimen

## Run

```bash
$ ./mapper.sh 100
. . .

```

## View stack brute solution

```bash
$ cat testcase.txt
3
-----------------------------------1
3
-1 -1 1
-----------------------------------2
8
1 -1 1 -1 -1 1 1 1

$ ./brute_executable < testcase.txt
-----------------------------------1
-1
-1 0

-1
-2 0

1
-2 1

2
-----------------------------------2
1
0 1

-1
0 0

1
0 1

-1
0 0

-1
-1 0

1
-1 1

1
-1 2

1
-1 3

1
```
