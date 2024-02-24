/*
Задание 2.5. Шахматы. Пользователь вводит расположение шахматной фигуры 
игрока, затем вводит расположение шахматной фигуры соперника. Программа 
определяет и выводит информацию о том, бьет ли фигура игрока, фигуру 
соперника. Перечень фигур: ладья, слон, ферзь, конь
*/
#include <iostream>
using namespace std;
int main() {
    int x1,y1, x2, y2, figura1;
    cout << "\n what is figura number1? \n 1-ladia, 2-slon, 3-ferz, 4-kon" << endl;
    cin >> figura1;
    cout << "What is pozition x?" << endl;
    cin >> x1;
    cout << "what is pozition y?" <<endl;
    cin >> y1;
    cout << "\n figera number 2: \n What is pozition x" <<endl;
    cin >> x2;
    cout << "what is pozition y?" << endl;
    cin >> y2;
    
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
    return 0;
    }
}
