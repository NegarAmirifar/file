#include <iostream>
#include <fstream>  // برای استفاده از fstream

using namespace std;

int main() {
    fstream file("example.txt", ios::in | ios::out);  // باز کردن فایل برای خواندن و نوشتن
    if (file.is_open()) {
        file << "Hello, World!\nAre you good?" << endl;  // نوشتن در فایل
        file.seekg(0);  // بازگشت به ابتدای فایل برای خواندن
        string line;
        while (1) {
            if (getline(file, line))
                cout << line << endl;
            else
                break;
        }
        file.close();  // بستن فایل
    } else {
        cout << "خطا در باز کردن فایل" << endl;
    }
    return 0;
}
