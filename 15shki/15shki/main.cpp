#include <iostream>
#include "header.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));

    cout << "Игра - пятнашки" << endl;
    cout << "Цель игры - на поле 4х4 следует разместить цифры в порядке возрастания от 1 до 15, 0 - пустая клетка" << endl;
    cout << "Удачи!" << endl;

    int** mas = new int* [4];
    for (int i = 0; i < 4; i++)
    {
        mas[i] = new int[4];
    }

    Randzap(mas);
    while (true) {
        if (ProvProb(mas))
        {
            cout << "Победа!" << endl;
            break;
        }

        cout << "Введи число, которое хотите переместить: ";
        int x;
        while (!(cin >> x)) {
            cin.clear();
            cin.ignore(1, '\n');
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (mas[i][j] < 10) {
                        cout << " " << mas[i][j] << " ";
                    }
                    else {
                        cout << mas[i][j] << " ";
                    }
                }
                cout << endl;
            }
            cout << "Ошибка, введи число: ";
        }

        move(x, mas);

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (mas[i][j] < 10) {
                    cout << " " << mas[i][j] << " ";
                }
                else {
                    cout << mas[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
}



