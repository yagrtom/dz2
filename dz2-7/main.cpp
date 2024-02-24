/*
Задание 2.7. Утомительное чтение. На вход программы идет три числа. Первое –
количество слов в строке, второе – количество строк на странице, третье –
число страниц в книге. Каждая третья страница содержит лишь половину строк, 
а на каждой пятой на всю страницу распечатана картинка. Посчитать 
количество слов в книге
*/
#include <iostream>
using namespace std;

int main(){

    cout << "How many words, lines and pages in book" << endl;
float a, b, c, i, delta, x;
cin >> a >> b >> c;
            for (size_t i = 1; i <= c; i++)
            {
                cout << i <<"\tshag" << endl;
                delta = a*b;
             if (i%5==0)
             {
                delta = 0;             
             }
             if (i%3==0)
             {
                delta = delta/2;              
             }
                x = delta + x;
              cout<< x << "\tposchitali slov" << endl;      
}
cout << "he number of words in the book:\t" << x << endl;

    return 0;
}