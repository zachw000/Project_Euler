import math

fib = [0, 1]
iterator = 0

while fib[len(fib) - 1] < 4000000:
	fib.append(fib[iterator] + fib[iterator + 1])
	iterator += 1

evens = []

for i in range(0, len(fib)):
	if fib[i] % 2 == 0:
		evens.append(fib[i])

answer = sum(evens)

print(answer)