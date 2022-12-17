#include <iostream>


using namespace std;

float division(int a, int b){
    if (b == 0) { throw 1; }
    return (float)a / b;
}

int main(int argc, char **argv){
    int a = 5, b = 0, z = 0;
    try{
        cout <<  division(a, b) << endl;
    }catch(int e){
        cout << "Error: " << e << endl;
    }
    cout << "bye" << endl;
}