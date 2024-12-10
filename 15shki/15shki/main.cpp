#include <iostream>
#include "header.h"

using namespace std;

int main()
{
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

        cout << "Введите число, которое хотите переместить: ";
        int x;
        cin >> x;
        if (type(x) == int)
        {

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
}
else
{
    cout << "Это не число" << endl;
    return;
        }

}
