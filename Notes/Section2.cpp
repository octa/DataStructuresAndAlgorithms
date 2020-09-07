#include <iostream>
using namespace std;

class Human {
private:
    string gender;
public:
    Human(string& gender);
    void setGender(string& gender);
    string getGender();
};

Human::Human(string &gender) {
    this->gender = gender;
}

void Human::setGender(string &gender) {
    this->gender = gender;
}

string Human::getGender() {
    return gender;
}

// ************************************************************

class Student:public Human {
private:
    string name;
public:
    Student(string &name, string &gender);
    void setName(string& name);
    string getName();
};

Student::Student(string &name, string &gender) : Human(gender) {
    this->name = name;
}

void Student::setName(string &name) {
    this->name = name;
}

string Student::getName() {
    return name;
}

// ************************************************************

int main() {

    string octa = "Octa";
    string gender = "Guy";
    Student* x = new Student(octa, gender);

    cout << "Student's name is " << x->getName() << " and is a " << x->getGender() << endl;

}