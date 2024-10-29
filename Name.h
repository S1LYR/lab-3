#ifndef NAME_H
#define NAME_H

#include <string>
using namespace std;  // Используем std для строк

class Name {
private:
    string surname;
    string firstName;
    string patronymic;

public:
    // Конструктор с параметрами (по умолчанию пустые строки)
    Name(const string& surname = "",
         const string& firstName = "",
         const string& patronymic = "");

    // Метод для приведения к строковому виду
    string toString() const;
};

#endif  // NAME_H
