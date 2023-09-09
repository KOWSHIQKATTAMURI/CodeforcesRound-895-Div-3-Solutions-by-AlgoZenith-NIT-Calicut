def solve(a, b):
    #checking for a prime divisor (useful when b is odd)
    i = 2
    while i * i <= b:
        if b % i == 0:
            first_number = i
            second_number = b - i
            print(first_number, second_number)
            return
        i += 1
    #if a prime divisor is not found, then definitely b is odd, so b - 1 is even which means b - 3 is also even
    #so GCD(2, b - 3) = 2 and b - 3 + 2 = b - 1 which is less than b. (Both the conditions are satisfied)
    #a must not be equal to b (left as a task to think upon).
    if a != b and b - 3 > 0:
        print(2, b - 3)
    else:
        print(-1)
t = int(input())
while t > 0:
    a, b = map(int, input().split())
    solve(a, b)
    t -= 1
