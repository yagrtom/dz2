/*
Баловство с ящичками. Пользователь вводит три переменные: X, Y, 
Z. Если значения переменных упорядочены по убыванию, программа удваивает 
их; в противном случае заменяет значение каждой переменной на 
противоположное. Программа выводит значения X, Y, Z на экран.
*/
#include <iostream>
using namespace std;

int main()
{
  int x, y, z;
    cout <<"enter a number x" << endl;
  cin >> x ;
    cout <<"enter a number y" << endl;
  cin >> y;
    cout <<"enter a number z" << endl;
  cin >> z;
        if (x > y && x > z)
                {
                x = x*2;
                y = y*2;
                z = z*2;
                  /* code */
                }
                else {
                    x = x-x*2;
                    y = y-y*2;
                    z = z-z*2; 
                }
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
  return 0;
}