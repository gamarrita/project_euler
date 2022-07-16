def test_palindromi(num):
    num_list = list()
    for x in str(num):
        num_list.append(x)

    for n in range(len(num_list)//2):
        if((num_list[n]) != (num_list[-n-1])):
            return False

    return True

MIN_NUMBER = 99
MAX_NUMBER = 999
max = 0;

for n in range(MAX_NUMBER, MIN_NUMBER, -1):
    for m in range(MAX_NUMBER, MIN_NUMBER, -1):
        if(test_palindromi(n*m)):
            if n*m > max:
                max = n*m

print(f"Answer = {max}")


