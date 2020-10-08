#include <iostream>

const short       VAL_1 { 3 },
                  VAL_2 { 5 },
                  VAL_3 { 15 },
                  MIN   { 0 },
                  MAX   { 100 };

const std::string FIZ   { "Fizz" },
                  BUZ   { "Buzz" };


void fizzBuzzer(short x, short y, short z);


int main (void) {
	fizzBuzzer(VAL_1, VAL_2, VAL_3);
	
	return EXIT_SUCCESS;
}


void fizzBuzzer(short x, short y, short z) {
	for (short cnt = MIN; cnt <= MAX; cnt++) {
		if (cnt % z == MIN)
			std::cout << FIZ << BUZ << std::endl;
		
		else if (cnt % y == MIN)
			std::cout << BUZ << std::endl;
		
		else if (cnt % x == MIN)
			std::cout << FIZ << std::endl;
		
		else std::cout << cnt << std::endl;
	}
}
