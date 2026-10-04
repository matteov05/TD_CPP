#include "complex.h"
#include <cmath>

Complex2D::Complex2D() { //constructeur par defaut
    reel = 0.0;
    imaginaire = 0.0;
}

Complex2D::Complex2D(double r, double i) { //constructeur qui prend les valeurs réelles et imaginaires
    reel = r;
    imaginaire = i;
}

Complex2D::Complex2D(double value) { //constructeur qui prend une valeur pour 2
    reel = value;
    imaginaire = value;
}

Complex2D::Complex2D(const Complex2D& other) { //constructeur qui copie 
    reel = other.reel;
    imaginaire = other.imaginaire;
}

void Complex2D::set_reel(double value) {//setter reel
    reel = value;
}

void Complex2D::set_imaginaire(double value) { //setter imaginaire
    imaginaire = value;
}

double Complex2D::get_reel() { //getter reel
    return reel;
}

double Complex2D::get_imaginaire() { //getter imaginaire
    return imaginaire;
}

Complex2D Complex2D::operator+(Complex2D other) { //opérateur +
    return Complex2D(reel + other.reel,imaginaire + other.imaginaire);
}

Complex2D Complex2D::operator-(Complex2D other) { //opérateur -
    return Complex2D(reel - other.reel,imaginaire - other.imaginaire);
}

Complex2D Complex2D::operator*(Complex2D other) { //opérateur *
    return Complex2D(reel * other.reel - imaginaire * other.imaginaire,reel * other.imaginaire + imaginaire * other.reel);
}

Complex2D Complex2D::operator/(Complex2D other) { //opérateur /
    return Complex2D((reel * other.reel + imaginaire * other.imaginaire)/ (other.reel * other.reel + other.imaginaire * other.imaginaire),
        (imaginaire * other.reel - reel * other.imaginaire)/ (other.reel * other.reel + other.imaginaire * other.imaginaire));
}

bool Complex2D::operator<(Complex2D other){ //opérateur <
    return sqrt(reel * reel + imaginaire * imaginaire) < sqrt(other.reel * other.reel + other.imaginaire * other.imaginaire);
}

bool Complex2D::operator>(Complex2D other){ //opérateur >
    return sqrt(reel * reel + imaginaire * imaginaire) > sqrt(other.reel * other.reel + other.imaginaire * other.imaginaire);
}

