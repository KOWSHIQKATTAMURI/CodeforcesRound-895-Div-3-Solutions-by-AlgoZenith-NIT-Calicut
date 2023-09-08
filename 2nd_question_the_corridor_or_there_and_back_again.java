import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int number_of_traps = sc.nextInt();
            //ans stores the maximum possible value of k
            int ans = Integer.MAX_VALUE;
            for (int i = 0; i < number_of_traps; i++){
                int room_number = sc.nextInt();
                int time_limit = sc.nextInt();            
                //As we are looking for the ceil value, we need to add 1 to time_limit and then divide the whole by 2.
                ans = Math.min(ans, (room_number + (time_limit + 1) / 2 - 1));
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
