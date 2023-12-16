#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    //Declaring variables
    string city;
    double celsius;
    int fahrenheit;

    ifstream inputFile("FahrenheitTemperature.txt"); //Open file 

    ofstream outputFile("celsiusTemperature.txt"); // Output file

    if(!inputFile) {
        cout << "Not able to open file" << endl;//Error response in case file cannot open successfully
    }

    if(!outputFile) { // Error response for output file 
        cout << "Not able to open output file" << endl;
    }

    while(inputFile >> city >> fahrenheit) { //Loop that will take in input from the file and will calculate celsius
        celsius = (fahrenheit - 32.0) * (5.0 / 9.0); // Celsius conversion

        outputFile << city << " " << celsius << endl; // prints city and celsius to output file
    }

    //close both files
    inputFile.close();
    outputFile.close();
}