#include <iostream>

using namespace std;

int main(){
    /*string name = "Katleho";
    int age = 12;
    double height = 1.55;
    char letter = 'N';
    bool coding = true;

    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old." << endl;
    cout << "My height is " << height << endl;
    cout << "Do I like coding? " << coding << endl;*/
    // Operations
/*
    int num1;
    int num2;

    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;

    int Total = num1 + num2;
    
    cout << Total << endl;
    */

    // Conditional Statements
    int age;
    cout << " Enter your age: ";
    cin >> age;
    if (age < 13 ){
        cout << "Child ticket";
    }
    else if (age >= 13 && age < 18) {
        cout << "Teen ticket";
    }else{
        cout << "Adult Ticket";
    }


    return 0;
}