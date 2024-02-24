/*
Задание 2.18. Двумерки, симметрия. Программа создает двумерный 
целочисленный массив размером NxN элементов (задается константами), 
инициализирует их случайными значениями в диапазоне (A;B) (задается 
пользователем) и выводит на экран в виде матрицы. Программа выводит на 
экран решение о том, является ли матрица симметричной
*/


#include <iostream>
#include <stdio.h>
using namespace std;
 
 int main(){   
int N, M, A, B;
cout << "Write number A > ";
cin >> A;
cout << "Write number B > ";
cin >> B;
int **matrix;
cout << "Write number N > ";
cin >> N;
bool symetric = true;
matrix = new int *[N];


        /* code */
    
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

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
        {
        if (matrix[i][j] != matrix[j][i])
        {
            symetric = false;
            break;
        }
         
        }           
}

if (symetric == true)
{
    cout << "MMMMMMMMMMatrix is symmetrical" << endl;
}
else{
    cout << "Matrix is asymmetrical" << endl;
}
          
    return 0; 
}