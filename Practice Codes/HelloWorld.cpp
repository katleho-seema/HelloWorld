#include <iostream>

using namespace std;

int main(){
    const int SIZE = 6;

    int numbers[SIZE] = {1,24,13,0,3};

    for (int i = 0; i< SIZE ; i++) {
        cout << numbers[i] << " ";

    }
    return 0;
}