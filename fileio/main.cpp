//Cullum - demo of file io
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //container to hold data
    int data[20];
    int maxValues = 0;

    //create file stream object
    ifstream inFile("data.txt");

    //check if file exists, and populate array
    if (!inFile.is_open()){
        cout << "error";
        return 404;
    }
    else{
        int i = 0;
        while (!inFile.eof()){
            inFile >> data[i];
            i++;
        }
        //record max number of values
        maxValues = i;

    }

    //print contents of array
    for (int i = 0; i < maxValues; i++){
        cout << data[i] << " ";
    }

    return 0;
    
}