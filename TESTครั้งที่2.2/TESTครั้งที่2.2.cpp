#include <iostream>
#include <string>
using namespace std;

int main() {

    string name = "Woraphon Phonkan"; // เปลี่ยน Name
    int age = 19;                       // เปลี่ยน Age
    string studentID = "6811130027";    // เปลี่ยน Student ID
    float height = 169.0;               // เพิ่ม Height

    // แสดงผลลัพธ์ออกหน้าจอ
    cout << "================ Student Info ================" << endl;
    cout << "Name      : " << name << endl;
    cout << "Age       : " << age << " years old" << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Height    : " << height << " cm" << endl; // แสดง Height
    cout << "==============================================" << endl;

    return 0;
}