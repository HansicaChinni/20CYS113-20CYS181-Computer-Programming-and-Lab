print("Enter the value of number of steels to be graded")
n = int(input())
h = [0] * (n)
ts = [0] * (n)
cc = [0] * (n)
grade = [0] * (n)

for i in range(0, n - 1 + 1, 1):
    h[i] = float(input())
    ts[i] = float(input())
    cc[i] = float(input())
    if h[i] > 50 and cc[i] < 0.7 and ts[i] > 5600:
        grade[i] = 10
    else:
        if h[i] > 50 and cc[i] < 0.7:
            grade[i] = 9
        else:
            if cc[i] < 0.7 and ts[i] > 5600:
                grade[i] = 8
            else:
                if h[i] > 50 and ts[i] > 5600:
                    grade[i] = 7
                else:
                    if h[i] > 50 or cc[i] < 0.7 or ts[i] > 5600:
                        grade[i] = 6
                    else:
                        grade[i] = 5
    print("grade is " + str(grade[i]))
