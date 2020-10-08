import sys


def modulo(num_1, num_2):
	return num_1 % num_2


def fizz_buzz(X, Y, Z):
	fiz = "Fizz"
	buz = "Buzz"
	MIN = 0
	MAX = 100
	
	for number in range(MIN, MAX):
		if modulo(number, Z) is MIN:
			print(fiz + buz)
		
		elif modulo(number, Y) is MIN:
			print(buz)
		
		elif modulo(number, X) is MIN:
			print(fiz)
		
		else:
			print(number)


def fb_main():
	exit_code = 0
	val_1 = int(input("enter a NUMERIC value between 0 and 100 (ex 3) : "))
	val_2 = int(input("And another                             (ex 5) : "))
	val_3 = int(input("One more                               (ex 15) : "))
	
	fizz_buzz(val_1, val_2, val_3)
	
	return exit_code


sys.exit(fb_main())
