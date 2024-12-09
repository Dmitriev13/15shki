void move(int x, int** mas)
{
    int xi = 0, yi = 0, x0 = 0, y0 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mas[i][j] == x)
            {
                xi = i;
                yi = j;
            }
            if (mas[i][j] == 0)
            {
                x0 = i;
                y0 = j;
            }
        }
    }

    if ((abs(xi - x0) + abs(yi - y0)) == 1)
    {
        swap(mas[xi][yi], mas[x0][y0]);
    }
    else
    {
        cout << "Числа не соседние, ошибка((" << endl;
    }
}
