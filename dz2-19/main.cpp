/*
Задание 2.19. Двумерки, обнуление строк. Программа создает двумерный 
целочисленный массив размером NxN элементов (задается константами), 
инициализирует их случайными значениями в диапазоне (A;B) (задается 
пользователем) и выводит на экран в виде матрицы. Пользователь вводит число, 
а программа обнуляет строку с выбранным индексом, и выводит матрицу на 
экран.
*/
#include <iostream>
using namespace std;
main(){
int N, M, A, B;
cout << "Write number A > ";
cin >> A;
cout << "Write number B > ";
cin >> B;
int **matrix;
cout << "Write number N > ";
cin >> N;
matrix = new int *[N];
    
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


        int a;
        cout << "wtire a >";
        cin >> a;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                {
                    if (i == a)
                    {
                       matrix[i][j] = 0; 
                    }
                    
                cout <<  matrix[i][j] << " ";
                }
            cout << '\n';           
        }

    return 0;
}