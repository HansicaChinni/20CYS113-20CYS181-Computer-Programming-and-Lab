def fact(n):
    factorial = 1
    for i in range(1, n + 1, 1):
        factorial = factorial * i
    
    return factorial

# Main
print("enter the number to compute the factorial")
n = int(input())
factnew = fact(n)
print(factnew)
