#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int counter);
int main(void) {
	
	int i=10;
	printf("before i=%d\n", i);
	inc(i);
	printf("after i=%d\n", i);
	
	return 0;
	
}

int inc(int counter)
{
	counter++;
	return counter;
}
