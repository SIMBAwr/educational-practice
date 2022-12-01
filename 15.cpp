#include <iostream>
#include <fstream>
using namespace std;
bool Luck(int k1, int k2, string s)//Создаём спец.функцию
{
    ofstream out; //Создаём файл для записи
    out.open("OUTPUT.TXT", ios::out);// Открываем файл для записи
    for (int i = 1; i < s.size(); ++i) {//цикл for
        k1 = 0, k2 = 0;
        for (int j = 0; j < i; ++j) //цикл for
            k1 += s[j] - 48;
        for (int j = i; j < s.size(); ++j)//цикл for
            k2 += s[j] - 48;
        while (k1 >= 10 || k2 >= 10) { //цикл while
            k1 %= 9;
            k2 %= 9;
        }
        if (k1 == k2) {
            out << "YES";//Записываем ответ
            return true;//возвращаем истину
        }
    }
    out << "NO";//Записываем ответ
    out.close(); //Закрываем файл
    return false;//возвращаем ложь

}

int main()
{
    int k1, k2;//ввод переменных k1 и k2
    string s;//ввод переменной s
    ifstream in("INPUT.TXT");//Открываем файл для чтения
    in >> s; // Считываем строчку в переменную s
    in.close(); //Закрываем файл
    Luck(k1, k2, s);//Используем спец.функцию 
    return 0;
}
