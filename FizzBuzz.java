import java.io.*;

class FizzBuzz {
	static final short  VAL_1 = 3,
			    VAL_2 = 5,
		            VAL_3 = 15,
			    MIN   = 0,
			    MAX   = 100;
					    
	static final String FIZ   = "Fizz",
			    BUZ   = "Buzz";
	 
	
	private static void fizzBuzz(short x, short y, short z) {
		for (short cnt = MIN; cnt < MAX; cnt++) {
			if (cnt % z == MIN)
				System.out.println(FIZ + BUZ);
			
			else if (cnt % y == MIN)
				System.out.println(BUZ);
			
			else if (cnt % x == MIN)
				System.out.println(FIZ);
			
			else System.out.println(cnt);
		}
	}
	
	
	public static void main(String[] args) {
		fizzBuzz(VAL_1, VAL_2, VAL_3);
	}
}

