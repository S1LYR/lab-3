#ifndef PERSON_H
#define PERSON_H

#include "Name.h"
#include <string>
using namespace std;  // Используем std для строк

class Person {
private:
    Name name;      // Имя как объект класса Name
    int height;     // Рост человека

public:
    // Конструктор
    Person(const Name& name, int height);

    // Метод для приведения к строковому виду
    string toString() const;
};

#endif  // PERSON_H
