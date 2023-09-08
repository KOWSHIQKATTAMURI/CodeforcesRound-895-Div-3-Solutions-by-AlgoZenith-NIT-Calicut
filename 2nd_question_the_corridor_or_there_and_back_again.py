import sys
t = int(input())
while t > 0:
    number_of_traps = int(input())
    ans = sys.maxsize
    for i in range(number_of_traps):
        room_number, time_limit = map(int, input().split())
        #As we are looking for the ceil value, we need to add 1 to time_limit and then divide the whole by 2.
        ans = min(ans, (room_number + (time_limit + 1) // 2 - 1))
    print(ans)
    t -= 1
