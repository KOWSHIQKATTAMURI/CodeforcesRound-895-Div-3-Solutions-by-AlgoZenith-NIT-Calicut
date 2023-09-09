#include<bits/stdc++.h>
using namespace std;

void solve(long long int n, long long int x, long long int y){
    //this is to store the number of indices which are common multiples of x and y
    //Remember the relation lcm(a, b)*gcd(a, b) = a*b.
    long long int number_of_common_multiples = n/((x*y)/__gcd(x, y));
    
    //this is to store the number of indices which are multiples of x
    long long int number_of_x_multiples = n/x;
    
    //this is to store the number of indices which are multiples of y
    long long int number_of_y_multiples = n/y;
    
    //subtract common multiples as they cancel each other
    number_of_x_multiples -= number_of_common_multiples;
    number_of_y_multiples -= number_of_common_multiples;
    
    //this is to store total sum
    long long int total_sum = n*(n + 1)/2;
    
    //this is to store the sum on y multiple indices. As we will start from putting numbers from 1 to number_of_y_multiples
    long long int sum_on_y_multiple_indices = number_of_y_multiples*(number_of_y_multiples + 1)/2;
    
    //let us assume there are 3 indices that are multiples of x
    //so we will put n, n - 1, n - 2 on these 3 indices.
    //n + (n - 1) + (n - 2) = n(n + 1)/2 - (n - 3)(n - 2)/2.
    //in simple terms, sum of last three numbers is equal to (sum of first n numbers) - (sum of first (n - 3) numbers).
    long long int sum_till_x_multiple_indices = (n - number_of_x_multiples)*(n - number_of_x_multiples + 1)/2;
    
    //this stores the difference of (x multiples indices sum) and (y multiples indices sum).
    long long int ans = total_sum - sum_till_x_multiple_indices - sum_on_y_multiple_indices;
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, x, y;
        cin >> n >> x >> y;
        if(x == y){
            cout << 0 << endl;
            continue;
        }
        solve(n, x, y);
    }
    return 0;
}
