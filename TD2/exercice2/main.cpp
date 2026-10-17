#include <iostream>
#include "MatrixBase.h"
#include "MatrixNumerical.h"

int main()
{
    MatrixNumerical<int> m(2, 3);

    //test addElement and getElement
    m.addElement(0, 0, 1);
    m.addElement(0, 1, 2);
    m.addElement(0, 2, 3);

    m.addElement(1, 0, 4);
    m.addElement(1, 1, 5);
    m.addElement(1, 2, 6);

    std::cout << m.getElement(0, 1) << std::endl;
    std::cout << m.getElement(1, 2) << std::endl;

    //test getRows and getCols
    std::cout << "Lignes : " << m.getRows() << std::endl;
    std::cout << "Colonnes : " << m.getCols() << std::endl;

    //test Display
    m.Display();

    // Test getDeterminant
    MatrixNumerical<int> d(2, 2);

    d.addElement(0, 0, 1);
    d.addElement(0, 1, 2);
    d.addElement(1, 0, 3);
    d.addElement(1, 1, 4);

    std::cout << "Determinant : " << d.getDeterminant() << std::endl;

    // Matrices pour operator
    MatrixNumerical<double> a(2, 2);
    MatrixNumerical<double> b(2, 2);

    a.addElement(0, 0, 1);
    a.addElement(0, 1, 2);
    a.addElement(1, 0, 3);
    a.addElement(1, 1, 4);

    b.addElement(0, 0, 5);
    b.addElement(0, 1, 6);
    b.addElement(1, 0, 7);
    b.addElement(1, 1, 8);

    // Test operator+
    std::cout << "Addition :" << std::endl;
    (a + b).Display();

    // Test operator-
    std::cout << "Soustraction :" << std::endl;
    (a - b).Display();

    // Test operator*
    std::cout << "Multiplication :" << std::endl;
    (a * b).Display();

    // Test getInverse
    std::cout << "Inverse de a :" << std::endl;
    a.getInverse().Display();

    // Test operator/
    std::cout << "Division a / b :" << std::endl;
    (a / b).Display();

    // Test getIdentity
    std::cout << "Matrice identite 3x3 :" << std::endl;
    MatrixNumerical<int>::getIdentity(3).Display();


    return 0;
}