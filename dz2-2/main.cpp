/*
Задание 2.2. Масса тела. Единицы массы пронумерованы следующим образом: 1 
– килограмм, 2 – миллиграмм, 3 – грамм, 4 – тонна, 5 – центнер. Пользователь 
вводит номер единицы массы N и массу тела M в этих единицах (значение 
массы – вещественное число). Программа выводит на экран массу данного тела 
в килограммах.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    float m;
cout << "enter the unit of mass 1=kg/2=mg/3=g/4=t/5=cen" << endl;
    cin >> n;
cout << "write mass" << endl;
    cin >> m;
    
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
    
cout << m << " kg" << endl;


    return 0;
}