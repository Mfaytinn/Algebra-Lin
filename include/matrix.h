#ifndef MATRIX_H
#define MATRIX_H


#include <cstddef>
#include <iostream>
#include <vector>

template<typename T>
class matrix{
        std::vector<std::vector<T>> data;
        size_t size_x;
        size_t size_y;

        public:
                matrix(size_t size_x, size_t size_y);
                void print();
                matrix<T> operator+(matrix<T> const &other);
                matrix<T> operator-(matrix<T> const &other);
                std::vector<T> operator[](size_t const pos_i);
                matrix<T> operator*(T const scalar);
                matrix<double> operator/(T const scalar);
                std::vector<double> norm();
                matrix<T> transpose();
                matrix<T> dot(matrix<T> const &other);
};

#endif







