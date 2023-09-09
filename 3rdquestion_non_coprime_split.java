public static void solve(int a, int b){
    //checking for a prime divisor (useful when b is odd)
    for(int i = 2; i*i <= b; i++){
        if(b%i == 0){
            int first_number = i;
            int second_number = b - i;
            System.out.println(first_number + " " + second_number);
            return;
        }
    }
    //if a prime divisor is not found, then definitely b is odd, so b - 1 is even which means b - 3 is also even
    //so GCD(2, b - 3) = 2 and b - 3 + 2 = b - 1 which is less than b. (Both the conditions are satisfied)
    //a must not be equal to b (left as a task to think upon).
    if(a != b && b - 3 > 0){
        System.out.println(2 + " " + (b - 3));
    }else{
        System.out.println(-1);
    }
}
public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt(){
    while(t-- > 0){
        int a = sc.nextInt();
        int b = sc.nextInt();
        solve(a, b);
    }
    sc.close();
}
