/*
Задание 2.14. Проход по массиву с переворотом. Программа спрашивает у 
пользователя три числа A, B и N. После чего генерирует и выводит на экран 
массив N целых чисел расположенных в диапазоне (A;B). Программа 
переворачивает значение в массиве используя второй массив и выводит на 
экран.

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
int a = N;
int* arr2 = new int[N];
cout <<"aray2:" << endl;
for (size_t j = 0; j < N; j++)
{
    a = a - 1;
    arr2[j] = arr[a];
    cout << arr2[j] << " ";
}

    return 0;
}