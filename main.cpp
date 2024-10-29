#include <iostream>
#include "Name.h"
#include "Person.h"
#include "City.h"
#include "Fraction.h"
using namespace std;

int getIntegerInput(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) { // Проверка на корректность ввода
            cin.clear(); // Сбрасываем состояние ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Игнорируем неправильный ввод
            cout << "Ошибка: пожалуйста, введите целое число." << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Игнорируем оставшиеся символы
            break; // Корректный ввод, выходим из цикла
        }
    }
    return value;
}

int main() {
    system("chcp 65001");

    cout << "Задание номер 1.2, 1.3 и 2.2 'Люди и имена': "<< endl;
    Name name1("Клеопатра");
    Name name2("Пушкин", "Александр", "Сергеевич");
    Name name3("Маяковский", "Владимир");


    Person person1(name1, 152);
    Person person2(name2, 167);
    Person person3(name3, 189);

    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;

    cout << endl;
    cout << "Задание номер 3.3 и 4.8 'Города': "<< endl;
    cout << endl;

    City cityA("Город A");
    City cityB("Город B");
    City cityC("Город C");
    City cityD("Город D");
    City cityE("Город E");
    City cityF("Город F");

    cityA.addPath(&cityF, 1);
    cityA.addPath(&cityB, 5);
    cityA.addPath(&cityD, 6);

    cityB.addPath(&cityA, 5);
    cityB.addPath(&cityC, 3);

    cityC.addPath(&cityB, 3);
    cityC.addPath(&cityD, 4);

    cityD.addPath(&cityC, 4);
    cityD.addPath(&cityA, 6);
    cityD.addPath(&cityE, 2);

    cityE.addPath(&cityF, 2);

    cityF.addPath(&cityE, 2);
    cityF.addPath(&cityB, 1);

    vector<pair<City*, int>> paths = {
        {&cityB, 5},
        {&cityC, 3}
    };
    City cityG("Город G", paths);


    cout << cityA.toString();
    cout << cityB.toString();
    cout << cityC.toString();
    cout << cityD.toString();
    cout << cityE.toString();
    cout << cityF.toString();
    cout << cityG.toString();

    cout << endl;
    cout << "Задание номер 5.5 'дроби': "<< endl;
    cout << endl;


    int num = getIntegerInput("Введите числитель для дроби f1: ");
    int denom;
    while (true) {
        denom = getIntegerInput("Введите знаменатель для дроби f1: ");
        if (denom == 0) {
            cout << "Ошибка: знаменатель не может быть нулем. Попробуйте снова." << endl;
        } else {
            break;
        }
    }
    Fraction f1(num, denom);


    num = getIntegerInput("Введите числитель для дроби f2: ");
    while (true) {
        denom = getIntegerInput("Введите знаменатель для дроби f2: ");
        if (denom == 0) {
            cout << "Ошибка: знаменатель не может быть нулем. Попробуйте снова." << endl;
        } else {
            break;
        }
    }
    Fraction f2(num, denom);


    num = getIntegerInput("Введите числитель для дроби f3: ");
    while (true) {
        denom = getIntegerInput("Введите знаменатель для дроби f3: ");
        if (denom == 0) {
            cout << "Ошибка: знаменатель не может быть нулем. Попробуйте снова." << endl;
        } else {
            break;
        }
    }
    Fraction f3(num, denom);


    num = getIntegerInput("Введите числитель для дроби f4: ");
    while (true) {
        denom = getIntegerInput("Введите знаменатель для дроби f4: ");
        if (denom == 0) {
            cout << "Ошибка: знаменатель не может быть нулем. Попробуйте снова." << endl;
        } else {
            break;
        }
    }
    Fraction f4(num, denom);


    Fraction sumResult = f1.sum(f2);
    cout << f1.toString() << " + " << f2.toString() << " = " << sumResult.toString() << endl;

    Fraction minusResult = f1.minus(f2);
    cout << f1.toString() << " - " << f2.toString() << " = " << minusResult.toString() << endl;

    Fraction multiplyResult = f1.multiply(f2);
    cout << f1.toString() << " * " << f2.toString() << " = " << multiplyResult.toString() << endl;

    Fraction divideResult = f1.divide(f2);
    cout << f1.toString() << " / " << f2.toString() << " = " << divideResult.toString() << endl;

    Fraction finalResult = f1.sum(f2).divide(f3).minus(5);
    cout << "Результат операции f1.sum(f2).div(f3).minus(5) = " << finalResult.toString() << endl;


    return 0;
}
