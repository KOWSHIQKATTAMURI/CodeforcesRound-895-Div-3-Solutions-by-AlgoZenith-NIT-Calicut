import java.util.Scanner;

public class Main {
    static long gcd(long a, long b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    static void solve(long n, long x, long y) {
        //this is to store the number of indices which are common multiples of x and y
        //Remember the relation lcm(a, b)*gcd(a, b) = a*b.
        long number_of_common_multiples = n / ((x * y) / gcd(x, y));

        //this is to store the number of indices which are multiples of x
        long number_of_x_multiples = n / x;

        //this is to store the number of indices which are multiples of y
        long number_of_y_multiples = n / y;

        //subtract common multiples as they cancel each other
        number_of_x_multiples -= number_of_common_multiples;
        number_of_y_multiples -= number_of_common_multiples;

        //this is to store total sum
        long total_sum = n * (n + 1) / 2;

        //this is to store the sum on y multiple indices. As we will start from putting numbers from 1 to number_of_y_multiples
        long sum_on_y_multiple_indices = number_of_y_multiples * (number_of_y_multiples + 1) / 2;

        //let us assume there are 3 indices that are multiples of x
        //so we will put n, n - 1, n - 2 on these 3 indices.
        //n + (n - 1) + (n - 2) = n(n + 1)/2 - (n - 3)(n - 2)/2.
        //in simple terms, sum of last three numbers is equal to (sum of first n numbers) - (sum of first (n - 3) numbers).
        long sum_till_x_multiple_indices = (n - number_of_x_multiples) * (n - number_of_x_multiples + 1) / 2;

        //this stores the difference of (x multiples indices sum) and (y multiples indices sum).
        long ans = total_sum - sum_till_x_multiple_indices - sum_on_y_multiple_indices;
        System.out.println(ans);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextLong();
            long x = sc.nextLong();
            long y = sc.nextLong();
            if(x == y){
                System.out.println(0);
                continue;
            }
            solve(n, x, y);
        }
    }
}
