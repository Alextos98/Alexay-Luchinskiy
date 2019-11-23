/* 21.c
 Programmas autors : Aleksejs Luchinskis
 Prg . veidota 2019 gada 23 novembrii
 Versija : 0.0.1
 Programma paraada iespeejamo datu tipa paarpluudi */

#include <stdio.h>
#include <limits.h>
int main()
{
int a = 50000;
int b = 1000000;
int c = a*b;

printf("int datu tipa izmers ir: %ld baiti \n", sizeof(int));
printf("preekjinam a un b reizinaajumu :\n");
printf("a = %d, b = %d \n", a, b);
printf("c = %d \n", c);
return 0;
}
