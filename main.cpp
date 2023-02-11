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

//Функция определения победителя
bool check_winner(const char array [3][3], const char player)
{
    for (int i=0; i<3; i++)
    {
        if (array[i][0] == player && array[i][1] == player && array[i][2] == player) return true;
        if (array[0][i] == player && array[1][i] == player && array[2][i] == player) return true;
    }
    if (array[0][0] == player && array[1][1] == player && array[2][2] == player) return true;
    if (array[0][2] == player && array[1][1] == player && array[2][0] == player) return true;
    return false;
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

    //Инициализация флага наличия победителя
    bool winner=false;

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

        //Проверка на наличие победителя начиная с пятого хода
        if (step>4)
            {
            winner=check_winner(playingField, playerName);
            if (winner)
                {
                cout << "Player " << playerName << " WINS!" << endl;
                break;
                }
            }

        //Если 10 ход и победителя нет, вывести сообщение о ничьей
        if (step == 10 && !winner) cout << "The result of the game is a draw!" << endl;
    }
    return 0;
}
