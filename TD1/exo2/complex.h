#ifndef COMPLEX_H
#define COMPLEX_H

class Complex2D {
private:
	double reel;
	double imaginaire;

public:
	Complex2D();                           //constructeur par defaut
    Complex2D(double r, double i);         //constructeur qui prend les valeurs réelles et imaginaires
    Complex2D(double value);               //constructeur qui prend une valeur pour 2
    Complex2D(const Complex2D& other);     //constructeur qui copie 

    void set_reel(double value);           //setter reel
    void set_imaginaire(double value);     //setter imaginaire

    double get_reel();                    //getter reel
    double get_imaginaire();              //getter imaginaire

    Complex2D operator+(Complex2D other); //opérateur +
    Complex2D operator-(Complex2D other); //opérateur -
    Complex2D operator*(Complex2D other); //opérateur *
    Complex2D operator/(Complex2D other); //opérateur /
    bool operator<(Complex2D other);      //opérateur <
    bool operator>(Complex2D other);      //opérateur >
};

#endif
