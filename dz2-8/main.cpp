/*Задание 2.8. Ангем. Пользователь вводит X, Y, Z для четырех точек в 
пространстве. Первые три точки составляют плоскость. Программа выводит на 
каком расстоянии от плоскости находится четвертая точка8
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
float h;
float X1, Y1, Z1;
float X2, Y2, Z2;
float X3, Y3, Z3;
float X4, Y4, Z4;
cout << "Write coordinates point #1:\n coordinates x>";
cin >> X1;
cout << "Write coordinates point #1:\n coordinates y>";
cin >> Y1;
cout << "Write coordinates point #1:\n coordinates z>";
cin >> Z1;

cout << "Write coordinates point #2:\n coordinates x>";
cin >> X2;
cout << "Write coordinates point #2:\n coordinates y>";
cin >> Y2;
cout << "Write coordinates point #2:\n coordinates z>";
cin >> Z2;

cout << "Write coordinates point #3:\n coordinates x>";
cin >> X3;
cout << "Write coordinates point #3:\n coordinates y>";
cin >> Y3;
cout << "Write coordinates point #3:\n coordinates z>";
cin >> Z3;

cout << "Write coordinates point #4:\n coordinates x>";
cin >> X4;
cout << "Write coordinates point #4:\n coordinates y>";
cin >> Y4;
cout << "Write coordinates point #4:\n coordinates z>";
cin >> Z4;

/*строим плоскость по первым трем точкам, приводим к уравнению вида Ax+By+Cz+D=0 */
        float direct_Ax = X2 - X1; 
        float direct_Ay = Y2 - Y1;
        float direct_Az = Z2 - Z1;
        float direct_Bx = X3 - X1; 
        float direct_By = Y3 - Y1;
        float direct_Bz = Z3 - Z1;
        float flatness_A = direct_Ay * direct_Bz - direct_By * direct_Az;
        float flatness_B = direct_Az * direct_Bx - direct_Bz * direct_Ax;
        float flatness_C = direct_Ax * direct_By - direct_Bx * direct_Ay;
     
       float flatness_D = -(  flatness_A * X1 + flatness_B * Y1 + direct_Ax * Z1);

h = (fabs(flatness_A * X4) + fabs(flatness_B * Y4) + fabs(flatness_C * Z4) + fabs(flatness_D))/ sqrt(flatness_A*flatness_A + flatness_B*flatness_B + flatness_C*flatness_C);
cout << "h = "<< h;
    return 0;
}
