#include<stdio.h>
#include<stdlib.h>
#include<math.h>
   int main(int argc, char *argv[])
{
//Algo(derivee d'une fonction)
// derivee de 3x3+4x+5=9x2+4+0
//derivee de ax3+bx+c=3ax2+b+0
 int a, b, c, Der, T1, T2, T3, Continuer;
 
 printf("Hello !\n");
 printf(".-,; = ''; _), -. \ _ \ (), () / _ / (, ___,) , - / `~` \ -, ___ / /).:.('--._) {_ [(_, _) | Y | snd / | \ "" "" ""\n\n");
 do{
 printf("La derivee d'une fonction ax^3+bx+c se presente sous la forme de\n: 3ax^2+b\n");
 printf("Entrer a:\n");
 scanf("%d", &a);
 printf("Entrer b:\n");
 scanf("%d", &b);
 printf("Entrer c:\n");
 scanf("%d", &c);
 printf("Donc, la fonction devient:%dx^3+%dx+%d\n", a, b, c);
 T1=3*a;
 T2=b;
 T3=0;
 Der=T1+T2+T3;
 printf("La derivee de cette fonction est:\n %dx^2+%d+%d\n\n", T1, T2, T3);
 printf("Appuyer sur 0 pour continuer et un nombre quelconque pour fermer :\n\n");
 scanf("%d", &Continuer);
 }while(Continuer==0);
 printf("MERCI, A LA PROCHAINE !\n");
 return 0;
}
 