/*
Конвертер величин. То же самое задание, что и 2.2, но 
пользователю позволяется выбрать в какой конкретно величине он вводит 
значение массы и в какую массу перевести. Сделайте это задание используя 
конструкцию switch. Ограничение: ключевое слово switch можно использовать 
лишь два раза за всю программу.
*/

#include <iostream>
#include <cmath>
using namespace std;


int main(){
int n;
float m;
cout << "write the unit of mass 1=kg/2=mg/3=g/4=t/5=cen" << endl;
cin >> n;
cout << "write mass" << endl;
cin >> m;
int n2;
cout << "write down which unit to convert to 1=kg/2=mg/3=g/4=t/5=cen" << endl;
cin >> n2;
    switch (n)
        {
        case 1:
            m = m;
            break;
        case 2:
            m = m*pow(10,-6);
            break;
        case 3:
            m = m*pow(10,-3);
            break;
        case 4:
            m = m*pow(10,3);
            break;
        case 5:
            m = m*pow(10,2);
            break;
    
        }
    switch (n2)
                {
                    case 1:
                        m = m;
                        break;
                    case 2:
                        m = m*pow(10,6);
                        break;
                    case 3:
                        m = m*pow(10,3);
                        break;
                    case 4:
                        m = m*pow(10,-3);
                        break;
                    case 5:
                        m = m*pow(10,-2);
                        break;
                }
cout << m << endl;
return 0;
}