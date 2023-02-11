#include <iostream>

using namespace std;

//Функция вывода двумерного массива
void print_array (const char array [3][3])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << array [i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    cout << "------------Tic-Tac-Toe game------------\n\n";

    //Инициализация массива учета свободных мест для ходов и массива игрового поля
    bool places [3][3]={false, false, false, false, false, false, false, false, false};
    char playingField [3][3]={'_', '_', '_', '_', '_', '_', '_', '_', '_'};

    //Инициализация переменной имени игрока
    char playerName='X';

    //Инициализация переменной номара хода
    int step=1;

    //Инициализация координат игрового поля
    int x, y;

    //Организация цикла игры
    while (step<10)
    {
        //Определение и смена имени игрока
        if (playerName == 'X') playerName = 'O';
        else playerName = 'X';

        //Ввод координат хода
        do
        {
            cout << "Player " << playerName << " enter move coordinates: ";
            cin >> x >> y;
        } while(x<1 || x>3 || y<1 || y>3 || places [x-1][y-1]);

        //Ввод данных в массивы и учет хода
        places [x-1][y-1]=true;
        playingField[x-1][y-1]=playerName;
        step++;

        //Вывод игрового поля
        print_array(playingField);


    }
    return 0;
}
