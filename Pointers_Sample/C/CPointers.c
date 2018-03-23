//Kevin Nguyen
//Basic program in C (C files) to experiment with pointers.

/*
How to run (linux):
	1.) open command line and cd into directory folder of where this code is
	2.) type in "gcc *.c" to compile c files
	3.) type in "a.out" to run out file
*/

//include statements
#include <stdio.h>

//function definitions
void swapFirstLast(int*, int*, int*); //TODO


//struct definitions
typedef struct {
	int cx, cy, cz;
	int *cxp, *cyp, *czp;
} contain;

//main driver
int main() {
	//local declarations
	int x = 0, y = 1, z = 2, temp = 0;
	int *xp, *yp, *zp;

	//initial values
	printf("::INITIAL::\n");
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of z is %d\n\n", z);

	//increment actual values with pointers only
	xp = &x; yp = &y; zp = &z;
	*xp = *xp + 1; *yp = *yp + 2; *zp = *zp + 3;
	printf("::INCREMENTED::\n");
	printf("The value of x+1 is %d\n", x);
	printf("The value of y+2 is %d\n", y);
	printf("The value of z+3 is %d\n\n", z);


	contain sx, sy, sz;
	sx.cx = *xp, sy.cy = *yp, sz.cz = *zp;
	sx.cxp = &sx.cx, sy.cyp = &sy.cy, sz.czp = &sz.cz;
	*sx.cxp = *sx.cxp * *sx.cxp; *sy.cyp = *sy.cyp * *sy.cyp; *sz.czp = *sz.czp * *sz.czp;
	printf("::STRUCT SHENANIGANS::\n");
	printf("Struct: The value of x+x is %d\n", sx.cx);
	printf("Struct: The value of y*y is %d\n", sy.cy);
	printf("Struct: The value of z*z is %d\n", sz.cz);
	printf("Original: The value of x is %d\n", x);
	printf("Original: The value of y is %d\n", y);
	printf("Original: The value of z is %d\n\n", z);


  	return 0;
}

//Functions implementations goes below