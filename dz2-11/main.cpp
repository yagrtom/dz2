/*
Задание 2.11. Контролируемая случайность. Программа спрашивает у 
пользователя три числа A, B и N. После чего генерирует и выводит на экран 
массив N целых чисел расположенных в диапазоне (A;B). Программа выводит
среднее арифметическое всех четных элементов, стоящих на нечетных 
позициях.
*/

#include <iostream>
using namespace std;
int main() {
int A, B, N, x, a;
cout << "Write number A > ";
cin >> A;
cout << "Write number B > ";
cin >> B;
cout << "Write number N > ";
cin >> N;
int* arr = new int[N];
a = 0;
x = 0;
cout << "array:"<< endl;;
for (int i = 0; i < N; i++) {
    arr[i] = A + rand() % (B - A);
    cout << arr[i] << " ";
    if ( (i % 2 != 0) && (arr[i]%2 == 0)) 
    {
        x = x + arr[i];
        a = a+1;
    }
    
    }
int mid = x/a;
    cout << "\n" << mid << endl;
    return 0;
}