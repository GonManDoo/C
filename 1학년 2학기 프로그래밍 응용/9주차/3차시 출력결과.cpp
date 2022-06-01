#include<stdio.h>

int main(void){
	
	int i = 625;



    float f = 78.3456; 



    double d = -67.4538; 



    printf ("%d  %o  %x  %u\n", i, i, i, i); 



    printf ("%f  %e  %g\n", f, f, f); 



    printf ("%.3f  %.3e\n", f, f); 



    printf ("%08.3f  %08.3e\n", f, f); 



    printf ("%f  %e  %g\n", d, d, d); 



    printf ("%.*f\n", 3, d); 



    printf ("%0*.*f\n", 9, 3, d);

}
