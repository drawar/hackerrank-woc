/*
Original link: 
*/

#include <vector>
#include <iostream>

using namespace std;

#define max(a,b) ((a) > (b) ? (a) : (b))

int main() {
    int q;
    cin >> q;
    int n;
    int m;
    bool sorted;
    vector<int> v(100000);
    while(q--){
        int moves = 0;
        sorted = true;
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> v[j];
        }

        for (int i = 0; i < n; i++){
            moves += v[i] - i;
            if (moves > 1){
                sorted = false;
                break;
            }
                
        }

        if (sorted)
            printf("%s\n, "Yes");
        else
            printf("%s\n, "No");
    }
    return 0;
}
