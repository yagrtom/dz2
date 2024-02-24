/*
Задание 2.16. Двумерки, минмакс. Программа создает двумерный 
целочисленный массив размером NxM элементов (задается константами), 
инициализирует их случайными значениями в диапазоне (A;B) (задается 
пользователем) и выводит на экран в виде матрицы. Программа находит 
минимальный из максимальных элементов для каждой строки и выводит на 
экран.
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
cout << "Write number M > ";
cin >> M;
cout << "Write number N > ";
cin >> N;

matrix = new int *[N];
int L;
int* arr = new int[L];
                for (int i = 0; i < N; ++i)
                         *(matrix + i) = new int [M];  
                    for (int i = 0; i < N; i++)
                        {
                            
                            for (int j = 0; j < M; j++)
                                {
                                matrix[i][j] = A + rand() % (B - A);
                                }
                        }
cout<< "Matrix:" << endl;

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < M; j++)
        {
        cout <<  matrix[i][j] << " ";
        }
    cout << '\n';           
}



int max = A - 1;
int min = B + 1;


            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                    {
                    if (matrix[i][j] > max)
                    {
                        max = matrix[i][j]; 
                    }
                    if (matrix[i][j] < min)
                    {
                        min = matrix[i][j];
                    }
                    }                    
            cout << "line number = " << i << "\t\tmax =" << max << endl;
            max = A - 1;
            cout << "\t\t\tmin =" << min << "\n" << endl;
            min = B + 1;               
            }           
    return 0; 
}

