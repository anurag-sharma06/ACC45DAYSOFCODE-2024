#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;
        
        int thirdNumber = 21 - (A + B);

        // Check if the third number is between 1 and 10
        if (thirdNumber >= 1 && thirdNumber <= 10) {
            cout << thirdNumber << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}