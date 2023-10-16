//My name is Merdan Garlyyev, and I am taking CS231 class. The name of my program is "MetricArray". The code takes 10 numbers (in range 1 too 100 inclusive).
//If number is valid, it will be assigned to appropriate position. After the program finds smallest, highest, and average value. It's all prints on console.
#include <iostream>

using namespace std;

int main() {
	
// this declares the amount of array values, which users needs to input
int arr[10]; 
int i = 0;

// declared smallest, largest , and average variables
int smallest, largest;
float sum = 0, average;

//Welcome message
cout << "Welcome to the program, user!" << endl;

// while loops assigns the amount of numbers that needs for this program (in this case 10 values)
while (i < 10) {
int num;
cout << "Hi user. Please enter number " << i+1 << ": ";
cin >> num;


// checks the validation of inputted values 
if (num >= 1 && num <= 100) {
  arr[i] = num;
  i++;
} else {

// If invalid, gives the error, and asks to re-enter another value
  cout << "Invalid input! Number must be between 1 and 100 inclusive." << endl;
}


}

// formula to find the smallest and largest numbers in the array
smallest = largest = arr[0]; 
for (int j = 1; j < 10; j++) {
if (arr[j] < smallest) {
smallest = arr[j];
}
if (arr[j] > largest) {
largest = arr[j];
}


}

// calculates the average number in the array
for (int j = 0; j < 10; j++) {
sum += arr[j];
}
average = sum / 10;

// print out the smallest, largest, and average values
cout << "The smallest value in the array is: " << smallest << endl;
cout << "The largest value in the array is: " << largest << endl;
cout << "The average value of the numbers in the array is: " << average << endl;

return 0;
}