
/*
 * The following program is supposed to take 2 double values from the user (10 and 15), assign them to v1 and v2 variables,
 * make pointers p1 and p2 be pointing to v1 and v2 respectively (p1 points to v1, p2 points to v2). 
 * The program prints values of variables, which are pointed by p1 and p2.
 * Then, the program makes p1 to point to v2 and p2 to point to v1.
 * At the end, the program prints values of variables pointed by p1 and p2 once again.
 * Sample run:
 * v1 = 10
 * v2 = 15
 
 * p1 -> 10
 * p2 -> 15

 * p1 -> 15
 * p2 -> 10
*/

#include <stdio.h>

int main()
{
	double  v1, v2;
	double* p1, p2;

	//Scanning
	printf("v1 = %d", v1);
	scanf("%d", &v1);

	printf("v2 = %d", v2);
	scanf("%d", &v2);

	//Connecting pointers to variables and printing
	p1 = &v1;
	p2 = &v2;
	printf("p1 -> %d\n", &p1);
	printf("p2 -> %d\n\n", &p2);

	//Swapping connections and printing
	p1 = &v2;
	p2 = &v1;
	printf("p1 -> %d\n", &p1);
	printf("p2 -> %d\n\n", &p2);

	return 0;
}
