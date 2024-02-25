/*
Задание 2.6. Культурный отдых. Мужчины после завода решили провести 
эксперимент. Имеется кубоидный аквариум, высотой H1, длиной D и шириной 
L. Им стало интересно, сколько бокалов, наполненных прохлаждающим 
напитком, цилиндрической формы высотой H2 и радиусом R необходимо 
вылить в него, чтобы полностью заполнить (ответ предоставить в вещественных 
числах).
*/

#include <iostream>
#define _USE_MATH_DEFINES
#define M_PI 
#include <cmath>
using namespace std;

int main() {
float H1, D, L, H2, R;
float V1, V2;
int x;
cout << "Write H1, D, L" << endl;
cin >> H1 >> D >> L; 
cout << "Write R, H2" << endl;
cin >> R >> H2;
V1 = H1 * D * L;
V2 = R * R * H2 * M_PI; 
x = V1/V2;
cout << " answer = " << x << endl;
    return 0;
}