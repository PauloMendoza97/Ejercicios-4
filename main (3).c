#include <stdio.h>
#include <stdlib.h>
/*Escriba  la  función  htoi(s),  que  convierte  una  cadena  de  dígitos
hexadecimales (incluyendo Ox ó OX en forma optativa) en su valor entero equiva­
lente. Los dígitos permitidos son del 0 al 9, de la a a la f, y de la A a la F*/
int atoi(char s[]);
int main()
{

}
int atoi(char s[])
{
int i, n;
n = 0;
for (i = 0; s[i] > = '0' && s[i] < = '9'; + +i)
n = 10* n + (s[i] — '0');
return n;
