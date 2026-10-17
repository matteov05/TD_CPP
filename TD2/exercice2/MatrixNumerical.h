
#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H

#include "MatrixBase.h"
#include <stdexcept>
#include <cstddef>

template <typename T>
class MatrixNumerical;

template <typename T>
MatrixNumerical<T> getCoFactor(const MatrixNumerical<T>& m, size_t p, size_t q);

template <typename T>
class MatrixNumerical : public MatrixBase<T>
{
public:
    MatrixNumerical() : MatrixBase<T>() {
    }

    MatrixNumerical(std::size_t rows, std::size_t cols)
        : MatrixBase<T>(rows, cols) {
    }

    T getDeterminant() const {
        if (this->rows == 1)
            return this->data[0][0];

        if (this->rows == 2)
            return this->data[0][0] * this->data[1][1]- this->data[0][1] * this->data[1][0];

        T det = 0;

        for (size_t j = 0; j < this->cols; ++j) {
            MatrixNumerical<T> cof = ::getCoFactor(*this, 0, j);
            T signe = (j % 2 == 0) ? 1 : -1;

            det += signe * this->data[0][j] * cof.getDeterminant();
        }
        return det;
    }

    MatrixNumerical<T> operator+(const MatrixNumerical<T>& o) const {
        MatrixNumerical<T> res(this->rows, this->cols);

        for (size_t i = 0; i < this->rows; ++i)
            for (size_t j = 0; j < this->cols; ++j)
                res.data[i][j] = this->data[i][j] + o.data[i][j];

        return res;
    }

    MatrixNumerical<T> operator-(const MatrixNumerical<T>& o) const {
        MatrixNumerical<T> res(this->rows, this->cols);

        for (size_t i = 0; i < this->rows; ++i)
            for (size_t j = 0; j < this->cols; ++j)
                res.data[i][j] = this->data[i][j] - o.data[i][j];

        return res;
    }

    MatrixNumerical<T> operator*(const MatrixNumerical<T>& o) const {
        MatrixNumerical<T> res(this->rows, o.cols);

        for (size_t i = 0; i < this->rows; ++i)
            for (size_t j = 0; j < o.cols; ++j)
                for (size_t k = 0; k < this->cols; ++k)
                    res.data[i][j] += this->data[i][k] * o.data[k][j];

        return res;
    }

    MatrixNumerical<T> getInverse() const {
        T det = getDeterminant();
        MatrixNumerical<T> res(this->rows, this->cols);

        for (size_t i = 0; i < this->rows; ++i) {
            for (size_t j = 0; j < this->cols; ++j) {
                MatrixNumerical<T> cof = ::getCoFactor(*this, i, j);
                T signe = ((i + j) % 2 == 0) ? 1 : -1;

                res.data[j][i] = signe * cof.getDeterminant() / det;
            }
        }
        return res;
    }

    MatrixNumerical<T> operator/(const MatrixNumerical<T>& o) const {
        return *this * o.getInverse();
    }

    static MatrixNumerical<T> getIdentity(int n) {
        MatrixNumerical<T> res(n, n);

        for (int i = 0; i < n; ++i)
            res.data[i][i] = 1;

        return res;
    }
};

template <typename T>
MatrixNumerical<T> getCoFactor(const MatrixNumerical<T>& m, size_t p, size_t q) {
    MatrixNumerical<T> res(m.getRows() - 1, m.getCols() - 1);

    size_t i2 = 0;
    size_t j2 = 0;

    for (size_t i = 0; i < m.getRows(); ++i) {
        for (size_t j = 0; j < m.getCols(); ++j) {
            if (i != p && j != q) {
                res.addElement(i2, j2, m.getElement(i, j));
                ++j2;

                if (j2 == m.getCols() - 1) {
                    j2 = 0;
                    ++i2;
                }
            }
        }
    }
    return res;
}

#endif
