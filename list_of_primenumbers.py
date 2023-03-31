# to obtain the list of prime numbers in a certain range of numbers
print("Enter the number")
n = int(input())
for a in range(2, n + 1, 1):
    
    # condition for a prime number
    prime = True
    for i in range(2, a - 1 + 1, 1):
        
        # since the remainder should not be zero
        if a % i == 0:
            prime = False
    if prime == True:
        print(a)
