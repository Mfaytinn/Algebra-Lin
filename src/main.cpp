#include <iostream>
#include "matrix.h"

int main (int argc, char *argv[]) {
        matrix<int> matrix_1(10,10);


        for (int i=0;i<10; i++){
                for (int j=0; j<10; j++){
                        matrix_1[i][j]= i+j;               
                }
        }
        return 0;
}
