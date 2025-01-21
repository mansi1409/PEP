#include <iostream>
using namespace std;

/*void Hello() { //function declaration
    cout << "Hello World";
     }

int main() { 
    Hello(); // function call
     }
*/
//arguments are the input that gives us output



// Function to print the multiplication table
/*void printTable(int num) {
    for (int i = 1; i <= 10; i++) {
        int result = num * i;
        cout << num << " x " << i << " = " << result << endl;
    }
}

int main() {
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;

    // Call the function to print the table
    printTable(a);

    return 0;
}*/



// Function to calculate the sum of the first n natural numbers
int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i; // Add each number to the sum
    }
    return sum;
}

int main() {
    int n = 10; // First 10 natural numbers
    cout << sumOfNaturalNumbers(n) << endl;
    return 0;
}
