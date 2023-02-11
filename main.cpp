#include <iostream>

using namespace std;

//Функция вывода двумерного массива
void print_array (const char array [3][3])
{
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<6; j++)
        {
            cout << array [i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    //Инициализация массива учета свободных мест для ходов и массива игрового поля
    bool places [3][3]={false, false, false, false, false, false, false, false, false};
    char playingField [3][3]={' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',};

    //Инициализация переменной имени игрока
    char gamerName='O';

    //Инициализация переменной номара хода
    int step=1;

    //Инициализация координат игрового поля
    int x, y;

    //Организация цикла игры
    while (step<10)
        {
        //Определение и смена имени игрока
        if (gamerName == 'O') gamerName = 'O';
        else gamerName = 'X';
        do
        {
            cout << "Gamer " << gamerName << " enter move coordinates"
        }


        }
    return 0;
}
