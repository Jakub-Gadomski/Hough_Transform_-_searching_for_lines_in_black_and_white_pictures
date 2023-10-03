#include <stdio.h>
#include <cuda.h>
#include <fstream>
#include <opencv2/opencv.hpp>

using namespace std;

int main() {
    char* x = new char;

    ifstream file("rys1.png", ios::binary);
    while (file.read(x, sizeof(char))) {
        printf("%d ", (int)*x);
    }
    file.close();

    delete x;
    return 0;
}