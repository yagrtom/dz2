/*
Задание 2.13. Глобальные экстремумы. Программа спрашивает у пользователя 
три числа A, B и N. После чего генерирует и выводит на экран массив N целых
чисел расположенных в диапазоне (A;B). Программа выводит индекс и значение 
максимума и минимума.
*/

#include <iostream>
using namespace std;
int main() {
int A, B, N;
int* arr = new int[N];
cout << "Write number A > ";
cin >> A;
cout << "Write number B > ";
cin >> B;
cout << "Write number N > ";
cin >> N;
cout << "array:"<< endl;
for (int i = 0; i < N; i++) {
        arr[i] = A + rand() % (B - A);
        cout << arr[i] << " ";        
        }
        cout << endl;
    for (size_t i = 0; i < N; i++)
    {
        if ((arr[i] > arr[i+1] && arr[i] > arr[i-1]) || (arr[i] < arr[i+1] && arr[i] < arr[i-1]))
            {
                cout << "arr[" << i << "] = " << arr[i] << " - extreme" << endl;  
            }
    }
    return 0;
}