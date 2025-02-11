/*#include <iostream>
using namespace std;

int main() {
    int N, i, j;
    cin >> N;

    for (i = 2, j = 2; i <= N; j++) {
        if (j == i) {
            cout << i << " ";
            i++;
            j = 1;
        } 
        else if (i % j == 0) {
            i++;
            j = 1;
        }
    }
}*/
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    for (int num = 2; num <= N; num++) { // Loop through numbers from 2 to N
        int count = 0;

        for (int i = 1; i <= num; i++) { // Count divisors of num
            if (num % i == 0) {
                count++;
            }
        }

        if (count == 2) { // Prime numbers have exactly 2 divisors (1 and itself)
            cout << num << " ";
        }
    }

    return 0;
}

