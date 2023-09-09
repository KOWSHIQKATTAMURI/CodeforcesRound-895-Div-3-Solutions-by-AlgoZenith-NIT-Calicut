import math

def solve(n, x, y):
    # this is to store the number of indices which are common multiples of x and y
    # Remember the relation lcm(a, b)*gcd(a, b) = a*b.
    number_of_common_multiples = n // ((x * y) // math.gcd(x, y))
    
    # this is to store the number of indices which are multiples of x
    number_of_x_multiples = n // x
    
    # this is to store the number of indices which are multiples of y
    number_of_y_multiples = n // y
    
    # subtract common multiples as they cancel each other
    number_of_x_multiples -= number_of_common_multiples
    number_of_y_multiples -= number_of_common_multiples
    
    # this is to store total sum
    total_sum = n * (n + 1) // 2
    
    # this is to store the sum on y multiple indices. As we will start from putting numbers from 1 to number_of_y_multiples
    sum_on_y_multiple_indices = number_of_y_multiples * (number_of_y_multiples + 1) // 2
    
    # let us assume there are 3 indices that are multiples of x
    # so we will put n, n - 1, n - 2 on these 3 indices.
    # n + (n - 1) + (n - 2) = n(n + 1)/2 - (n - 3)(n - 2)/2.
    # in simple terms, sum of last three numbers is equal to (sum of first n numbers) - (sum of first (n - 3) numbers).
    sum_till_x_multiple_indices = (n - number_of_x_multiples) * (n - number_of_x_multiples + 1) // 2
    
    # this stores the difference of (x multiples indices sum) and (y multiples indices sum).
    ans = total_sum - sum_till_x_multiple_indices - sum_on_y_multiple_indices
    print(ans)

def main():
    t = int(input())
    while t:
        t -= 1
        n, x, y = map(int, input().split())
        if x == y:
            print(0)
            continue
        solve(n, x, y)

if __name__ == "__main__":
    main()
