MAX = 4_000_000

def fibo(n):
    a = 0
    b = 1
    sum = 0

    if(n < 1):
        return -1

    for i in range(1, n+1):
        print(f"{i} ", end='')
        c = a + b
        if c > MAX:
            break
        a = b
        b = c
        if c % 2 == 0:
            sum = sum + c

    return sum


r = fibo(MAX)
print(f"\nAnswer = {r}")

