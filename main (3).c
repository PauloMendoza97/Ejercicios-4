#include <stdio.h>
#include <stdlib.h>
/*Escriba  la  funci�n  htoi(s),  que  convierte  una  cadena  de  d�gitos
hexadecimales (incluyendo Ox � OX en forma optativa) en su valor entero equiva�
lente. Los d�gitos permitidos son del 0 al 9, de la a a la f, y de la A a la F*/
int atoi(char s[]);
int main()
{

}
int atoi(char s[])
{
int i, n;
n = 0;
for (i = 0; s[i] > = '0' && s[i] < = '9'; + +i)
n = 10* n + (s[i] � '0');
return n;
