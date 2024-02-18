/*
Задание 2.17. Двумерки, диагональ. Программа создает двумерный 
целочисленный массив размером NxN элементов (задается константами), 
инициализирует их случайными значениями в диапазоне (A;B) (задается 
пользователем) и выводит на экран в виде матрицы. Программа заменяет все 
элементы матрицы кроме диагональных единицами и выводит их на экран.
*/

#include <iostream>
 

 
#include <stdio.h>

using namespace std;
 
 int main()
{
int N, M, A, B;
cout << "Write number A > ";
cin >> A;
cout << "Write number B > ";
cin >> B;
int **matrix;
cout << "Write number N > ";
cin >> N;
matrix = new int *[N];
int L;
int* arr = new int[L];
                for (int i = 0; i < N; ++i)
                         *(matrix + i) = new int [M];  
                    for (int i = 0; i < N; i++)
                        {
                            
                            for (int j = 0; j < N; j++)
                                {
                                matrix[i][j] = A + rand() % (B - A);
                                }
                        }
cout<< "Matrix:" << endl;

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
        {
        cout <<  matrix[i][j] << " ";
        }
    cout << '\n';           
}


cout << "Matrix2:" << endl;
                    for (int i = 0; i < N; i++)
                    {
                        for (int j = 0; j < N; j++)
                            {
                            if (j != i)
                            {
                                matrix[i][j] = 1;
                            }
                            cout <<  matrix[i][j] << " ";
                            }
                            cout << '\n';
                                   
                    }
            
            
    return 0; 
}
