array = [0] * (5)

i = 0
print("Enter the array elements")
for i in range(0, 4 + 1, 1):
    array[i] = int(input())
max = array[0]
for i in range(1, 4 + 1, 1):
    if array[i] > max:
        max = array[i]
print("The largest element in the array is")
print(max)
