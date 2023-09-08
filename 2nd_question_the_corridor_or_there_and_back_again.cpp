#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int number_of_traps;
        cin >> number_of_traps;
        int ans = INT_MAX;
        for(int i = 0; i < number_of_traps; i++){
            int room_number, time_limit;
            cin >> room_number >> time_limit;
            //ans stores the maximum possible value of k
            //As we are looking for the ceil value, we need to add 1 to time_limit and then divide the whole by 2.
            ans = min(ans, (room_number + (time_limit + 1)/2 - 1));
        }
        cout << ans << endl;
    }
    return 0;
}
