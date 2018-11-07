#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;
void joke(string y){
    cout << "What's the best thing about Switzerland" << y << "?" << endl;
    cout << "I don't know, but the flag is a big plus!" << endl;
}
float gradecalc(int received, int total ){
    gradecalc = received \ total * 100;
    return gradecalc;

}
int increaseCount(int add){
    ++add
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
    int count = 0;
    int selection;
    cin >> selection;
    string name;
    

    if (cin.fail() || selection < 1 || selection > 3) {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
    }

    if(selection == 1) {
        int marksReceived = 0;
        int totalMarksAvailable = 0;
        float gradePercentage = 0;

        // Read in 2 integer values
        cout << "Enter the total possible score" << endl;
        cin >> totalMarksAvailable;
        cout << "Enter The Marks received" << endl;
        cin >> marksReceived;



        /* 
           Pass the integer values to a function. 
           The function should calculates the grade
           as a percentage out of 100 and return as
           as a float
        */

       gradecalc(marksReceived, totalMarksAvailable) = gradePercentage;
    
        cout << "You achieved a grade of: " << gradePercentage << "%" << endl;
    } else if(selection == 2) {
        // Ask the user for their name
        
        cout << "What is your Name?" << endl;
        cin  >> name;

        // Call a function that tells them a joke
        // The function should not return a value

        joke(name);


    } else {
        int count = 0;

        // Replace the while loop with a for loop
        for (int i=0;i<11;++i) {
        
            // Call a function here to increase the count
            increaseCount(count);

            cout << count << " ";
        }
    }

    return 0;
}