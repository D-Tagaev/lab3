#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

// Завдання 1: Присвоєння нових значень змінним A і B в залежності від їх порівняння
void task_if10(); // Декларація функції для завдання 1

// Завдання 2: Функція для перевірки, чи точка потрапляє в червону фігуру
void task_geom28(); // Декларація функції для завдання 2

// Завдання 3: Функція для обчислення площі та периметра червоної фігури
void task_calculate28(); // Декларація функції для завдання 3

int main() {
    int menu;
    cout << "Task 1. Assigning new values to variables A and B depending on their comparison\n";
    cout << "Task 2. Check whether a point falls within a red shape\n";
    cout << "Task 3. Calculating the area and perimeter of the red figure\n";
    cout << "Choose task number (1, 2 or 3): ";
    cin >> menu;

    // Перемикання між завданнями
    switch (menu) {
    case 1:
        task_if10(); // завдання 1, if10
        break;
    case 2:
        task_geom28(); // завдання 2, 28 варіант
        break;
    case 3:
        task_calculate28(); // завдання 3, обчислення периметра та площі
        break;
    default:
        cout << "Invalid task number! (Only 1, 2, or 3)" << endl; // Повідомлення про помилку
    }
    system("pause");
    return 0;
}

// Завдання 1: Реалізація функції для оновлення значень змінних A і B
void task_if10() {
    int A, B;
    cout << "Enter the values of A and B: ";
    cin >> A >> B;

    if (A != B) {
        A = A + B;
        B = A; // присвоїти обом змінним суму
    }
    else {
        A = 0;
        B = 0; // якщо значення рівні, то присвоїти нуль
    }
    cout << "New values of A and B: " << A << ", " << B << endl;
}

// Завдання 2: Реалізація функції для перевірки, чи точка потрапляє в червону фігуру
void task_geom28() {
    double x, y, r;
    cout << "Enter the coordinates of the point (x, y): ";
    cin >> x >> y;
    cout << "Enter the radius of the circle r: ";
    cin >> r;

    if ((-r <= x && x <= 0) && (-r <= y && y <= 0) && abs(y) <= abs(x) && ((x + r) * (x + r) + y * y <= r * r)) {
        cout << "The point falls into the red shape." << endl;
    }
    else if ((-2 * r <= x && x <= -r) && (-r <= y && y <= 0) && ((x + r) * (x + r) + y * y >= r * r)) {
        cout << "The point falls into the red shape." << endl;
    }
    else {
        cout << "The point does not fall into the red shape." << endl;
    }
}

// Завдання 3: Реалізація функції для обчислення площі та периметра червоної фігури
void task_calculate28() {
    double r;
    cout << "Enter the radius of the red shape: ";
    cin >> r;

    double area1 = r * r - (PI * r * r) / 4; // Площа чверті круга
    double area2 = (r * r) / 2; // площа трикутника
    double area = (area1 + area2);
    double perimeter = r * (4.5 + sqrt(2)); // Периметр другої червоної фігури

    cout << "Area of the red shape: " << area << endl;
    cout << "Perimeter of the red shape: " << perimeter << endl;
}
