import numpy as np

nums = range(1000)
sum = 0

for num in nums:
    if (num % 3 == 0) or  (num % 5 == 0):
        sum = sum + num
        print(num)

print(f"Answer = {sum}")