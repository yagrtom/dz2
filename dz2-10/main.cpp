/*
Задание 2.10. Простые числа. Программа запрашивает у пользователя число N. 
После чего выводит первые N простых чисел.
*/

#include <iostream>
using namespace std;

int main() {
int N, a, b;
b = 0;
a = 1;
cin >> N;
while (b < N){
    a = a + 1;
    
    if (((a * a) % 24 == 1)) //не знаю какое условие
    {
        cout << b+1 << ": " << a << endl;
        b = b + 1;
    }
    
    }
return 0;
}
