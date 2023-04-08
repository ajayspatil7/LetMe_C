
 #include <stdio.h>

 typedef struct {
     int numE, denO;
 } Fractions;

 int main() {
     Fractions fract1, fract2, fract3;
     printf("Enter three fractions (num den): ");
     scanf("%d %d %d %d %d %d", &fract1.numE, &fract1.denO, &fract2.numE, &fract2.denO, &fract3.numE, &fract3.denO);

     Fractions smallest = fract1;
     if (((double)fract2.numE/fract2.denO) < ((double)smallest.numE/smallest.denO)) {
         smallest = fract2;
     }
     if (((double)fract3.numE/fract3.denO) < ((double)smallest.numE/smallest.denO)) {
         smallest = fract3;
     }

     printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d\n", fract1.numE, fract1.denO, fract2.numE, fract2.denO, fract3.numE, fract3.denO, smallest.numE, smallest.denO);

     return 0;
 }