/*
Задание 2.9. Кратные числа. Программа запрашивает у пользователя три числа –
A, B, M. После чего выводит все числа, расположенные в диапазоне (A;B), 
которые кратны M.
*/
#include <iostream>
using namespace std;
int main(){
    int A, B, M;
    int x;
    cout << "Write A>";
    cin >> A;
    cout << "Write B>";
    cin >> B;
    cout << "Write M>";
    cin >> M;
    cout << "the numbers in the range from " << A << " to " << B << " are multiples of the number " << M << " :" << endl;
    for (size_t i = A; i <= B; i++)
    {
      if (i%M==0)
      {
        cout << i << endl;
      }
      
        
    }
    

    return 0;
}