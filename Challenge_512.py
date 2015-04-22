# Challenge 512
# From http://www.projecteuler.net/

import math
import os

pause = lambda: os.system("PAUSE")

# Check if a number is prime
def isPrime(n):
	prime = True
	num_check = math.ceil(math.sqrt(n))

	for i in range(2, num_check):
		if n % i == 0 and not(i == 2):
			prime = False
	return prime

# Generate all primes less than but not equal to n
def genPrimes(n):
	output = []
	for i in range(2, n):
		if isPrime(i):
			output.append(i)
	if output[len(output) - 1] > n:
		output.pop(len(output) - 1)
	return output

# phi(n)=n*prod(primes <= n, (1 - (1 / p)))
# Create Euler's Totient Function
def phi(n):
	n = abs(n)
	output = (n - 1)
	n_prime = isPrime(n)
	if n_prime:
		return (n - 1)
	else:
		primes = genPrimes(n)
		output = 1
		# Productcation
		for i in range(0, len(primes)):
			output *= (1 - 1 / primes[i])
		output *= n
	return output

def f(n):
	# Summation
	sum_1 = 0
	for i in range(1, n):
		sum_1 += phi(n**i)
	# Modulus
	sum_1 = sum_1 % (n + 1)
	return sum_1

def g(n):
	# Summation (Really!?)
	output = 0
	for i in range(1, n):
		output += f(i)
	return output
print(str(g(100)) + "\n" + "Should be 2007")
pause()