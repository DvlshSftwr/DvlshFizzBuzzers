#include <stdio.h>

#define VAL_1 3
#define VAL_2 5
#define VAL_3 15
#define MIN   0
#define MAX   100

#define FIZ   "Fizz"
#define BUZ   "Buzz"


void fizzBuzzer(short x, short y, short z);


int main (void) {
	
	fizzBuzzer(VAL_1, VAL_2, VAL_3);
	
	return 0;
}


void fizzBuzzer(short x, short y, short z) {
	for (short cnt = MIN; cnt <= MAX; cnt++) {
		if (cnt % z == MIN)
			fprintf(stdout, "%s%s\n", FIZ, BUZ);
			
		else if (cnt % y == MIN)
			fprintf(stdout, "%s\n", BUZ);
		
		else if (cnt % x == MIN)
			fprintf(stdout, "%s\n", FIZ);
		
		else fprintf(stdout, "%hi\n", cnt);
	}
}
