def prime_test(num):
    if num < 2:
        return 0
    
    for n in  range(2, int(num/2)):
        if num % n == 0:
            return 0
    return num

def prime_next(num):

    num += 1;
    while not prime_test(num) :
        num += 1;
    return num
   
def prime_factors(num):
    prime_max = 2
    prime = 2
    while (num != 1):
        if num % prime == 0:
            num /= prime
            prime_next(prime)
            print(prime)
            if prime > prime_max:
                prime = prime_max
            prime = 2
        else:
            prime = prime_next(prime)
    return prime_max
      

r = prime_factors(600851475143)
print(f"Amser = {r}")



    
