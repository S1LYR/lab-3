#include "Fraction.h"

// Конструктор с параметрами
Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    if (denominator == 0) {
        throw invalid_argument("Знаменатель не может быть нулем");
    }
    reduce();
}

// Функция для сокращения дроби
void Fraction::reduce() {
    int gcd = std::gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    // Если знаменатель отрицательный, меняем знак числителя
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

// Метод для получения строкового представления дроби
string Fraction::toString() const {
    return to_string(numerator) + "/" + to_string(denominator);
}

// Методы для выполнения операций
Fraction Fraction::sum(const Fraction& other) const {
    return Fraction(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
}

Fraction Fraction::minus(const Fraction& other) const {
    return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
}

Fraction Fraction::multiply(const Fraction& other) const {
    return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::divide(const Fraction& other) const {
    return Fraction(numerator * other.denominator, denominator * other.numerator);
}

Fraction Fraction::sum(int integer) const {
    return Fraction(numerator + integer * denominator, denominator);
}

Fraction Fraction::minus(int integer) const {
    return Fraction(numerator - integer * denominator, denominator);
}

Fraction Fraction::multiply(int integer) const {
    return Fraction(numerator * integer, denominator);
}

Fraction Fraction::divide(int integer) const {
    return Fraction(numerator, denominator * integer);
}
