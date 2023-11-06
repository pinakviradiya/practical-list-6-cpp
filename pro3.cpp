#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
    ifstream inputFile("test.txt");

 
    if (inputFile.is_open()) {
       
        int characterCount = 0;

        
        char ch;
        while (inputFile.get(ch)) {
            characterCount++;
        }


        inputFile.close();
         cout<< "Viradiya pinak";
    			 cout<< "220130318014";
        cout << "Number of characters in the file: " << characterCount << endl;
    } else {
        cout << "Error opening the file." << endl;
    }

    return 0;
}

