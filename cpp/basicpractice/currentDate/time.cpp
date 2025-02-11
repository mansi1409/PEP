#include <iostream>
#include <ctime>
using namespace std;
int main() {
    time_t now = time(0);  // Get current time
    tm *lt = localtime(&now);  // Convert time to local format
    cout << "Date: " << (lt->tm_year + 1900) << "-" 
         << (lt->tm_mon + 1) << "-" 
         << lt->tm_mday << endl;
    cout << "Time: " << lt->tm_hour << ":" 
         << lt->tm_min << ":" 
         << lt->tm_sec << endl;
    return 0;
}
