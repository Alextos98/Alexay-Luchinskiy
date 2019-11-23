/* 20.c Programma ar datu izvadi ( data out )
Programmas autors : Aleksejs Luchinskis
Prg . veidota 2019 gada 23 movembrii
Versija : 0.0.1
Programma mani iztaujaa un veic apreekjinus lietojot user - funkctions */

#include <stdio.h>

void f61()

{
 printf("Sveiks, kaa Tevi saus? \t");
}
void f62()
{
 printf("Kaads ir Tavs vecums? \v");
}
void f63()
{
 printf("Cik lielis Tu esi augumaa \n\t? (Augums metros): ");
}

int main()
{
 char vards[20];
 int vecums;
 float augums;

 f61();
 scanf("%s", vards);
 f62();
 scanf("%d", &vecums);
 f63();
 scanf("%f", &augums);
 printf("Mans Vards ir: %s \n", vards);
 printf("Esmu: %d gadus jauns %d. gada produkts\n", vecums , 2019-vecums);
 printf("Garumaa esmu padevies: %f cm \n", augums *100 );
 
}
