/*
Задание 2.12. Локальные максимумы. Программа спрашивает у пользователя 
три числа A, B и N. После чего генерирует и выводит на экран массив N целых 
чисел расположенных в диапазоне (A;B). Программа выводит индексы всех 
локальных максимумов в выборке.
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
cout << "array:"<< endl;;
    for (int i = 1; i < N; i++) {
        arr[i] = A + rand() % (B - A);
        cout << arr[i] << " ";        
        }
        cout << endl;
        cout << "element array number i is local maximum:" << endl;
    for (size_t i = 0; i < N; i++)
    {
        if ((arr[i] > arr[i+1] && arr[i] > arr[i-1]))
            {
                cout << i << " ";  
            }
            else{
                cout <<"  "; 
            }
    }

    return 0;
}