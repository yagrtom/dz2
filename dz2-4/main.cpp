/*
Уравнение до 2-го порядка. Пользователь вводит коэффициенты 
уравнения вида
𝑎𝑥2 + 𝑏𝑥 + 𝑐 = 0. Программа выводит решение данного 
уравнения. Учтите все возможные комбинации коэффициентов
*/
#include <iostream>
#include <cmath>
using namespace std;

int main (){

cout << "write a, b, c in 𝑎𝑥2 + 𝑏𝑥 + 𝑐 = 0." << endl;
float a, b, c, x, D;
cout << "Write index a >";
cin >> a;
cout << "Write index b >";
cin >> b;
cout << "Write index c >";
cin >> c;
cout  << a << "x^2 + " << b << "x + " << c << endl;
D = pow(b, 2) - 4*a*c;
if (D>=0)
{
    x = (-b + sqrt(D))/(2*a);
    cout << "x1 =" << x << endl;
    x = (-b - sqrt(D))/(2*a);
    cout << "x2 =" << x << endl;
}
    else {
        D = -D;
        cout << "x1 =" << ( -b/2*a ) << " + " << ( sqrt(D)/2*a ) << "*i" << endl;
        cout << "x2 =" << ( -b/2*a ) << " - " << ( sqrt(D)/2*a ) << "*i" << endl;  
    }
return 0;
}