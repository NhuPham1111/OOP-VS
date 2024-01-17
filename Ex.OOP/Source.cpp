#include <iostream>
#include <string.h>
using namespace std;
class HUMAN {
private:
    string* name;
    int* age;
    char* classID;
    
    string getName() {
        string addName = "CuteCute";
        return *name + addName ;
    }

    int getAge() {
        return *age - 4;
    }
public:
    HUMAN(string myName, int myAge, char myClassID) {
        name = new string;
        age = new int;
        classID = new char;

        *name = myName;
        *age = myAge;
        *classID = myClassID;
    }

    void Display();
    void setDisplay(string value1, int value2, char value3);

    ~HUMAN() {
        delete name;
        delete age;
       // delete classID;
        
        cout << *classID << endl;
        cout << " Cleared all memories" << endl;
     

    }

};

void HUMAN::Display() {
    cout << "My name is " << HUMAN::getName() << ", my age is " << HUMAN::getAge() << " and my class Id is: " << *HUMAN::classID << endl;
}

void HUMAN::setDisplay(string value1, int value2, char value3) {
    *HUMAN::name = value1;
    *HUMAN::age = value2;
    *HUMAN::classID = value3;
}


int main() {
    HUMAN* Nhu = new HUMAN("Nhu", 20, 'N');
    Nhu->Display();
    delete Nhu;


    return 0;
}
