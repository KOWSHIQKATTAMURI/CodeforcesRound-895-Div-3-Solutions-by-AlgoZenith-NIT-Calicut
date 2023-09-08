#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        //diff is the used to store the absolute difference between two container volumes 
        int diff = abs(b - a);
        //flow is used to store the volume of the actual transaction that must be done from one container to the other
        //diff can be even or odd. So to deal with this situation, we add 1 to diff and then divide by 2.
        //This ensures that irrespective of diff being odd or even, we will get exact amount of transaction volume.
        int flow = (diff + 1)/2;
        //moves is ued to store the number of times the third glass need to be used for the transaction
        //flow can be or cannot be divisible by c. 
        //So to ensure that we get correct number of moves, we add (c - 1) to flow and then divide by c.
        int moves = (flow + c - 1)/c;
        cout << moves << endl;
    }
    return 0;
}
