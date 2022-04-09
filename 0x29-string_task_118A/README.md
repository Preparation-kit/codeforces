# String Task

## Some interest snippets

Similarly, it adds a value of 32 to the ASCII value of uppercase letter by Bitwise ORing (|) with 32 converting the letter to lowercase.

```c++
const int x = 32;

/**
 * Converts a string to lowercase
 * @a: string to convert to lowercase
*/
char *toLowerCase(char *a)
{
    for (int i = 0; a[i] != '\0'; i++)
        a[i] = a[i] | x;

    return (a);
}
```
![logic OR](https://github.com/Preparation-kit/codeforces/blob/main/0x29-string_task_118A/Captura1.JPG)

## Run application

```bash
$ ./mapper 1
. . .
```