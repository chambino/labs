#include <iostream>
#include <string>
using namespace std;

class Student {
private:
       int age;
       string gender;
       int grant;
public:
    Student(int NewAge, string NewString, int NewGrant) {
        age = NewAge;
        gender = NewString;
        grant = NewGrant;

        cout << "¬ведите данные: " << endl;
        cout << "age= " << age << endl;
        cout << "sex= " << gender << endl;
        cout << "scholarship= " << grant << endl << endl;

    }
    void setStudent() {
        cin >> age;
        cin >> gender;
        cin >> grant;
    }
    void getStudent()
    {
        cout << "age = " << age << endl;
        cout << "sex = " << gender << endl;
        cout << "scholarship = " << grant << endl << endl;
    }
    ~Student() {
        cout << (age + age) / 2 << endl;
        cout << grant + grant << endl;
    }
};

int main() {

    Student s1(18, "male", 900); 

    s1.setStudent(); 
    s1.getStudent(); 

    Student s2(12, "female", 1500);

    s2.setStudent();
    s2.getStudent();
    return 0;
}