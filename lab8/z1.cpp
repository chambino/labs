#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    int age;
    string gender;
    int grant;
    Student() {}
};

int main()
{
    Student s1, s2;

    s1.age = 15;
    s1.gender = "male";
    s1.grant = 1000;

    s2.age = 19;
    s2.gender = "female";
    s2.grant = 2000;


    cout << "Student 1:" << endl;
    cout << "age = " << s1.age << endl;
    cout << "gender = " << s1.gender << endl;
    cout << "grant = " << s1.grant << endl;

    cout << "Student 2:" << endl;
    cout << "age = " << s2.age << endl;
    cout << "gender = " << s2.gender << endl;
    cout << "grant = " << s2.grant << endl;

    return 0;


}