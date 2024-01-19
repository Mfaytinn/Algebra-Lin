#include "matrix.h"


template <typename T>
matrix<T>::matrix(size_t rows, size_t columns){
        size_x = rows;       
        size_y = columns;
        for (int i=0; i<rows; i++){
                for(int j=0; j<columns; j++){
                        data[i][j] = 0;

                }
        }
}

template <typename T>
void matrix<T>::print(){
        
        
        for (int i=0; i<size_x; i++){
                for(int j=0; j<size_y; j++){
                        std::cout << data[i][j] << " ";


                }
                std::cout << "\n";
        

}
}


template <typename T>
std::vector<T> matrix<T>::operator[](size_t pos_i){
        return data[pos_i];
}























