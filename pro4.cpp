#include <iostream>
#include <fstream>
using namespace std;

int main() {
   
    ifstream sourceFile("source.txt");


    ofstream destinationFile("destination.txt");

    
    if (sourceFile.is_open() && destinationFile.is_open()) {
      
        string line;
        while (getline(sourceFile, line)) {
            destinationFile << line << endl;
        }

       
        sourceFile.close();
        destinationFile.close();

        cout << "File copied successfully." << endl;
    } else {
        cout << "Error opening one or both files." << endl;
    }

    return 0;
}

