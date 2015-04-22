import math
import os

pause = lambda: os.system("PAUSE")

def isPrime(num):
	prime = True
	checkTo = math.ceil(math.sqrt(num))
	factors = []

	for i in range(2, checkTo):
		if num % i == 0:
			prime = False
			factors.append([i, num / i])

	return (prime, factors)

n_prime, factors = isPrime(600851475143)

factor_set_one = []

for i in range(0, len(factors)):
	factor_set_one.append(factors[i][0])

factor_set_two = []

for i in range(0, len(factors)):
	factor_set_two.append(factors[i][1])

for i in range(0, len(factor_set_one)):
	set_one, factor_1 = isPrime(factor_set_one[i])
	factor_set_one[i] = [set_one, factor_1]

for i in range(0, len(factor_set_two)):
	set_two, factor_2 = isPrime(factor_set_two[i])
	factor_set_two[i] = [set_two, factor_2]

dispListOne = []

for i in range(0, len(factor_set_one)):
	dispListOne.append(factor_set_one[i])

dispListTwo = []

for i in range(0, len(factor_set_two)):
	dispListTwo.append(factor_set_two[i])

for i in range(0, len(dispListOne)):
	print(str(factors[i][0]) + " " + str(dispListOne[i]) + "\n")

for i in range(0, len(dispListTwo)):
	print(str(factors[i][1]) + " " + str(dispListTwo[i]) + "\n")

pause()