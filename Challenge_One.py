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
	mults["three"].append(3 * inc)
	inc += 1

# Reset incrementor
inc = 2

while mults["five"][len(mults["five"]) - 1] < 995:
	mults["five"].append(3 * inc)
	inc += 1

answer = 0

threes = mults["three"]
fives = mults["five"]

answer += sum([threes, fives])

fives = sum(fives)
threes = sum(threes)

print(mults["three"])
print()
print(mults["five"])
print()
print(answer)
