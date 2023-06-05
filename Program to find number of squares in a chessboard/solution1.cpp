Program to find number of squares in a chessboard


#include <iostream>

int main() {
    int chessboardSize = 8;
    int total = 0;

    for (int i = 1; i <= chessboardSize; i++) {
        total += i * i;
    }

    cout << "Total number of squares on a " << chessboardSize << "x" << chessboardSize << " chessboard: " << total << std::endl;

    return 0;
}
