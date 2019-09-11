#include <iostream>
#include <cmath>
using namespace std;

void BodyMassIndex(double weight, double height) {
  //Declare and calculate BMI
  double Bmi = 703 * weight / pow(height, 2.0);
  cout << "Your BMI is: " << Bmi << " pounds per square inch.\n";

}

int main() {
  //Declare height and weight variables
  double UserWeight,
      UserHeight;

  //Prompt user to provide their height in inches and weight in pounds
  cout << "Please enter your weight in pounds...\n";
  cin >> UserWeight;
  cout << "Please enter your height in inches...\n";
  cin >> UserHeight;

  //Run BMI calculation using the given user information
  BodyMassIndex(UserWeight, UserHeight);

  return 0;
}
