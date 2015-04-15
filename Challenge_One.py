# Project Euler Problem One
# Obviously Over-complicated :P

import math

mults = {
	"three" : [3],
	"five" : [5]
}

# Multiplier variable
inc = 2

while mults["three"][len(mults["three"]) - 1] * (inc + 1) < 100:
	mults["three"].append(mults["three"][0] * inc)
	inc += 1
