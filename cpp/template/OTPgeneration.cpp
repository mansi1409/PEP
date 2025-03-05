#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Seed random number generator with current time
    srand(time(0));

    // Generate a 6-digit OTP
    int otp = 100000 + (rand() % 900000);

    cout << "Your OTP is: " << otp << endl;

    return 0;
}
