#include "../include/matrix.h"


template <typename T>
matrix<T>::matrix(size_t const rows, size_t const columns){
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
std::vector<T> matrix<T>::operator[](size_t const pos_i){
        return data[pos_i];
}

template <typename T>
matrix<T> matrix<T>::operator*(T const scalar){
        matrix<T> result(size_x, size_y);
        for (int i=0; i<size_x; i++){
                for (int j=0; j<size_y; j++){
                        result[i][j] = data[i][j] * scalar;
                }
        }
        return result;
}


template <typename T>
matrix<T> matrix<T>::operator+(matrix<T> const &other){
        matrix<T> result(size_x, size_y);
        for (int i=0; i<size_x; i++){
                for (int j=0; j<size_y; j++){
                        result[i][j] = data[i][j] + other[i][j];
                }
        }
        return result;
}

template <typename T>
matrix<T> matrix<T>::operator-(matrix<T> const &other){
        matrix<T> result(size_x, size_y);
        for (int i=0; i<size_x; i++){
                for (int j=0; j<size_y; j++){
                        result[i][j] = data[i][j] - other[i][j];
                }
        }
        return result;
}

template <typename T>
matrix<T> matrix<T>::operator*(T const scalar){
        matrix<T> result(size_x, size_y);
        for (int i=0; i<size_x; i++){
                for (int j=0; j<size_y; j++){
                        result[i][j] = data[i][j] * scalar;
                }
        }
        return result;
}


template <typename T>
matrix<double> matrix<T>::operator/(T const scalar){
        matrix<T> result(size_x, size_y);
        for (int i=0; i<size_x; i++){
                for (int j=0; j<size_y; j++){
                        result[i][j] = data[i][j] / static_cast<double>(scalar);
                }
        }
        return result;
}

template <typename T>
std::vector<double> matrix<T>::norm(){
        std::vector<double> result;
        for (int i=0; i<size_x; i++){
                for (int j=0; j<size_y; j++){
                        result.push_back(data[i][j]);
                }
        }
        return result;
}


template <typename T>
matrix<T> matrix<T>::transpose(){
        matrix<T> result(size_y, size_x);
        for (int i=0; i<size_x; i++){
                for (int j=0; j<size_y; j++){
                        result[j][i] = data[i][j];
                }
        }
        return result;
}

template <typename T>
matrix<T> matrix<T>::dot(matrix<T> const &other){
        matrix<T> result(size_x, size_y);
        for (int i=0; i<size_x; i++){
                for (int j=0; j<size_y; j++){
                        result[i][j] = data[i][j] * other[i][j];
                }
        }
        return result;
}
























