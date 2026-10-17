
#ifndef MATRIXBASE_H
#define MATRIXBASE_H
#include <iostream>
#include <vector>
#include <cstddef>

template <typename T>
class MatrixBase{
protected:
    std::vector<std::vector<T>> data;
    std::size_t rows;
    std::size_t cols;

public:
    MatrixBase(){
        rows = 0;
        cols = 0;
    }

    MatrixBase(std::size_t nbRows, std::size_t nbCols){
        rows = nbRows;
        cols = nbCols;

        data = std::vector<std::vector<T>>(
            rows, std::vector<T>(cols, T{})
        );
    }

    void addElement(std::size_t row, std::size_t col, T value){
        if (row < rows && col < cols){
            data[row][col] = value;
        }
    }

    T getElement(std::size_t row, std::size_t col) const{
        if (row < rows && col < cols){
            return data[row][col];
        }
        throw std::out_of_range("Indice hors limites");
    }

    std::size_t getRows() const{
        return rows;
    }

    std::size_t getCols() const{
        return cols;
    }

    void Display() const{
    for (std::size_t i = 0; i < rows; i++){
        for (std::size_t j = 0; j < cols; j++){
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
        }
    }
};
#endif
