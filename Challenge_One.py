# Project Euler Problem One
# Obviously Over-complicated :P

import math

mults = {
	"three" : [3],
	"five" : [5]
}

# Multiplier variable
inc = 2

while mults["three"][len(mults["three"]) - 1] < 999:
	mults["three"].append(mults["three"][0] * inc)
	inc += 1

# Reset incrementor
inc = 2

while mults["five"][len(mults["five"]) - 1] < 995:
	mults["five"].append(mults["five"][0] * inc)
	inc += 1

answer = 0

threes = mults["three"]
fives = mults["five"]

for i in threes:
	answer += i

#print(answer)

#for i in fives:
#	answer += i

print(mults["three"])
print()
print(mults["five"])
print()
print(answer)