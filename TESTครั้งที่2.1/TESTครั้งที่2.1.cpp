#include <iostream>
#include <string>
#include <iomanip> // เพิ่มเพื่อใช้ในการจัดรูปแบบทศนิยม
using namespace std;

int main() {
    string itemName;
    float price;
    int qty;
    float total;

    // รับชื่อสินค้า
    cout << "Enter item name: ";
    getline(cin, itemName);

    // รับราคา
    cout << "Enter price: ";
    cin >> price;

    // รับจำนวน
    cout << "Enter quantity: ";
    cin >> qty;

    // คำนวณราคารวม
    total = price * qty;

    // แสดงในแสจอ
    cout << endl; // เว้นบรรทัด
    cout << "---------- Receipt ----------" << endl;
    cout << "Item Name: " << itemName << endl;

    // จัดรูปแบบให้แสดงทศนิยม 2 ตำแหน่ง
    cout << fixed << setprecision(2);

    cout << "Price: " << price << endl;
    cout << "Quantity: " << qty << endl;
    cout << "Total: " << total << endl;
    cout << "-----------------------------" << endl;

    return 0;
}