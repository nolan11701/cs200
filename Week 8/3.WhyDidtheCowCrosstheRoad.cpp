#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cows[n];
    int location[n];

    for (int i =0; i<n; i++) {
        cin >> cows[i] >> location[i];
    }

    
    int cows_crosses[10] = {-1, -1, -1, -1, -1, -1 , -1, -1, -1, -1};
    int total_count = 0;

    for (int i = 0; i<n; i++) {
        // find cow current cc
        int last_location = cows_crosses[cows[i]-1];
        if ( last_location == -1){
            // first time of cow
            // save current location to cc
            cows_crosses[cows[i]-1] = location[i];
        } else {
            // if last location != current location 
            if (last_location != location[i]){
                total_count++;
                cows_crosses[cows[i]-1] = location[i];
            } 
        }
    }
    cout << total_count;

}