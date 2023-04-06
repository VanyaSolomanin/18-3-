//Замінити елементи неголовної діагоналі матриці цілих чисел розміром 4x4 сумами елементів її рядків

#include <iostream>
using namespace std;

int main() {

    int i, j;
    int matrix[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "matrix[" << i+1<< "][" << j+1 << "] = ";
            cin >> matrix[i][j];
        }
    }

    // Виведення початкової матриці
    cout << "Початкова матриця: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Замінити елементи неголовної діагоналі сумами рядків
  
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            // перевіряємо, чи поточний елемент знаходиться на не головній діагоналі
            if (i + j != 3) { // якщо ні, додаємо його до змінної sum
                sum += matrix[i][j];
            }
        }
        // переставити елемент на неголовну діагональ з сумою рядка
            matrix[i][3-i] = sum;
    }

    //виведення заміненної матриці 
    cout << "\nЗаміненна матриця:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}