/*
Задание 2.5. Шахматы. Пользователь вводит расположение шахматной фигуры 
игрока, затем вводит расположение шахматной фигуры соперника. Программа 
определяет и выводит информацию о том, бьет ли фигура игрока, фигуру 
соперника. Перечень фигур: ладья, слон, ферзь, конь
*/
#include <iostream>
using namespace std;

int PositionY(string position){
    int y;
    switch (position[1])
    {
    case '1':
    y = 1; 
        break;
    case '2':
    y = 2;
        break;
    case '3':
    y = 3; 
        break;
    case '4':
    y = 4;
        break;
    case '5':
    y = 5; 
        break;
    case '6':
    y = 6;
        break;
    case '7':
    y = 7; 
        break;
    case '8':
    y = 8;
        break;    
    }
    return y;
}

int PositionX(string position)
{
    int x;
    switch (position[0])
    {
    case 'a':
    x = 1;
        break;
    case 'b':
    x = 2;
        break;
    case 'c':
    x = 3;
        break;
    case 'd':
    x = 4;
        break;
    case 'e':
    x = 5;
        break;
    case 'f':
    x = 6;
        break;
    case 'g':
    x = 7;
        break;
    case 'h':
    x = 8;
        break;
    }
    
    return x;
}



int main() {
    int figura1;
    cout << "\n what is figura number1? \n 1-ladia, 2-slon, 3-ferz, 4-kon" << endl;
    cin >> figura1;
    string position1;
    cout << "\n Write position of figura1 (for example: a1)" << endl;
    cin >> position1;
    string position2;
    cout << "\n Write position of figura1 (for example: a1)" << endl;
    cin >> position2;
    int x1 = PositionX(position1);
    int x2 = PositionX(position2);
    int y1 = PositionY(position1);
    int y2 = PositionY(position2);
    if ((x1 == x2) && (y1 == y2))
    {
        cout << "Erorr in pozition" << endl;
    }
    else {
    
     
    switch (figura1)
    {
    case 1:
    cout << "ladia" << endl;
    if ((x1 == x2) || (y1 == y2))
    {
       cout << "eat" << endl;
    }
    else{
        cout << "no eat" << endl;
    }
    
        break;
            case 2:
            cout << "slon" << endl;
            if ( (x1 - x2) == (y1 - y2) )
            {
            cout << "eat" << endl;
            }
            else{
                cout << "no eat" << endl;
            }
                break;
    case 3:
    cout << "ferz" << endl;
    if ((x1 == x2) || (y1 == y2) || ( (x1 - x2) == (y1 - y2) ))
        {
            cout << "eat" << endl;
            }
    else{
        cout << "no eat" << endl;
            }
    break;
            case 4:
            cout << "kon" << endl;
            if (((abs(x1-x2) == 1) && (abs(y1-y2) == 2)) || ((abs(x1-x2) == 2) && (abs(y1-y2) == 1)))
            {
                cout << "eat" << endl;
            }
            else{
                cout << "no eat" << endl;
            }
            
                break;
    }
    }
    return 0;
}


