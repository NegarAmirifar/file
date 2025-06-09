#include <iostream>
#include <fstream>  // برای استفاده از fstream

using namespace std;

int main() {
    int counterLines=0;
    //open the file
    fstream myFile("example.txt", ios::in | ios::out);
    if (myFile.is_open()) {
        string line1,line2;
        int n;
        cout<<"Enter the number lines:"<<endl;
        cin>>n;
        //------------------------------
        //write in the file
        for(int i=0;i<n;i++)
        {
            cout<<"Enter your line:"<<endl;
            cin>>line1;
            myFile<<line1<<endl;//write in file
        }
        //-------------------------------
        //read from the file
        myFile.seekg(0);
        while (1) {
            if (getline(myFile, line2)){
                 counterLines++;
                cout << line2 << endl;
            }

            else
                break;
        }
        myFile.close();//close the file
        cout<<"the count of Lines in the file= "<<counterLines;
    }
    else {
        cout << "Error in opening file" << endl;
    }
    return 0;
}
