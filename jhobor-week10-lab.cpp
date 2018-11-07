#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;
void joke(string y){
    cout << "What's the best thing about Switzerland " << y << "?" << endl; // Takes string name and outputs a funny!
    cout << "I don't know, but the flag is a big plus!" << endl;
}
double gradecalc(float received, float total ){

    return  (received / total) * 100;           //divides to floats and multiples by 100 to give a percentage returns the percentage

}
int increaseCount(int add){  //adds 1 to the variable entered
    ++add;
    return add;

}
int main() {
    cout << "Welcome to the function machine!" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Enter a number to select the program you want to run:" << endl;
    cout << endl;
    cout << "1: Calculate your grade on a test" << endl;
    cout << "2: Tell me a joke" << endl;
    cout << "3: Count to 10" << endl;
    cout << "Any other key: Exit" << endl;
    int count = 0; // initializes count to 0
    int selection;
    cin >> selection;
    string name; //initializes a string name name
    

    if (cin.fail() || selection < 1 || selection > 3) {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
    }

    if(selection == 1) {
        float marksReceived = 0;
        float totalMarksAvailable = 0;
        double gradePercentage = 0.0;

        // Read in 2 integer values
        cout << "Enter the total possible score" << endl; // user inputs total possible grade and grade recieved 
        cin >> totalMarksAvailable;
        cout << "Enter The Marks received" << endl;
        cin >> marksReceived;



        /* 
           Pass the integer values to a function. 
           The function should calculates the grade
           as a percentage out of 100 and return as
           as a double
        */

       gradePercentage = gradecalc(marksReceived, totalMarksAvailable); // calls gradecalc function and makes grade percent equal to the result
    
        cout << "You achieved a grade of: " << gradePercentage << "%" << endl; //gives user percent result
    } else if(selection == 2) {
        // Ask the user for their name
        
        cout << "What is your Name?" << endl;
        cin  >> name; //input users name

        // Call a function that tells them a joke
        // The function should not return a value

        joke(name); // calls joke function using name string


    } else {
        int count = 0;

        // Replace the while loop with a for loop
        for (int i=0;i<10;++i) { //loops 10 times
        
            // Call a function here to increase the count
            count = increaseCount(count); //calls increaseCount function

            cout << count << " "; // prints count to screen
        }
    }

    return 0;
}