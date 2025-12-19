/*
 * CS101 Final Exam - File 2: bmi_calculator.cpp
 * The Tool Test: BMI Calculator
 *
 * Student Name: Jossuart Lara
 * Date: 12/18/2025
 *
 * OBJECTIVE:
 * Create an interactive program that calculates a user's Body Mass Index (BMI).
 *
 * REQUIREMENTS:
 * 1. Ask the user for their weight in kilograms
 * 2. Ask the user for their height in meters
 * 3. Calculate BMI using the formula: BMI = weight / (height × height)
 * 4. Display the calculated BMI to the user
 * 5. BONUS: Tell the user their BMI category (Underweight, Normal, Overweight, Obese)
 *
 * HINTS:
 * - Use 'double' or 'float' for decimal numbers
 * - Use 'cin' to get input from the user
 * - Use 'cout' to display messages and results
 *
 * BMI CATEGORIES (BONUS):
 * - Underweight: BMI < 18.5
 * - Normal weight: BMI 18.5 - 24.9
 * - Overweight: BMI 25 - 29.9
 * - Obese: BMI >= 30
 *
 * GRADING FOCUS:
 * - Can you get input from the user?
 * - Can you perform the calculation correctly?
 * - Can you display the result in a user-friendly way?
 */

#include <iostream>
using namespace std;

int main()
{
    // Variables to store weight, height, and BMI
    double weight;
    double height;
    double BMI;

    // Welcome message
    cout << " Welcome to the BMI Calculator! " << endl;
    cout << " This program will calculate your Body Mass Index." << endl;
    cout << endl;

    // Ask user for their weight
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    // Ask user for their height
    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculates BMI using the formula
    // This determine if user is underweight, normal, or obese
    BMI = weight / (height * height);

    // Shows BMI result
    cout << " Your BMI is: " << BMI << endl;

    // Checks BMI category using IF/else/Boolean statements
    if (BMI < 18.5) {
        cout << "You are underweight." << endl;
    }
    else if (BMI >= 18.5 && BMI <= 24.9) {
        cout << "You are in the normal weight range." << endl;
    }
    else if (BMI >= 30) {
        cout << "You are overweight." << endl;
    }
    else {
        cout << "You are obese." << endl;
    }

    cout << " Thank you for using the BMI Calculator!" << endl;

    return 0;
}
