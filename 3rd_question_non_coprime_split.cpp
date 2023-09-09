#include<bits/stdc++.h>
using namespace std;

void solve(int a, int b){
    //checking for a prime divisor (useful when b is odd)
    for(int i = 2; i*i <= b; i++){
        if(b%i == 0){
            int first_number = i;
            int second_number = b - i;
            cout << first_number << ' ' << second_number << endl;
            return;
        }
    }
    //if a prime divisor is not found, then definitely b is odd, so b - 1 is even which means b - 3 is also even
    //so GCD(2, b - 3) = 2 and b - 3 + 2 = b - 1 which is less than b. (Both the conditions are satisfied)
    //a must not be equal to b (left as a task to think upon).
    if(a != b and b - 3 > 0){
        cout << 2 << ' ' << b - 3 << endl;
    }else{
        cout << -1 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
