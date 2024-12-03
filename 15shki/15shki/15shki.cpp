#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    setlocale (LC_ALL,"rus");
    cout << "Игра - пятняшки"<<endl;
    cout << "Цель игры - на поле 4х4 следует разместить цифры в порядке возрастания от 1 до 15, 0 - пустая клетка"<<endl;
    cout << "Удачи!\n";
    void RandZap(int** mas);
    void vvod();
    int move(int x, int** arr);
    
    
}
