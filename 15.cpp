#include <iostream>
#include <fstream>
using namespace std;
bool Luck(int k1, int k2, string s)//������ ����.�������
{
    ofstream out; //������ ���� ��� ������
    out.open("OUTPUT.TXT", ios::out);// ��������� ���� ��� ������
    for (int i = 1; i < s.size(); ++i) {//���� for
        k1 = 0, k2 = 0;
        for (int j = 0; j < i; ++j) //���� for
            k1 += s[j] - 48;
        for (int j = i; j < s.size(); ++j)//���� for
            k2 += s[j] - 48;
        while (k1 >= 10 || k2 >= 10) { //���� while
            k1 %= 9;
            k2 %= 9;
        }
        if (k1 == k2) {
            out << "YES";//���������� �����
            return true;//���������� ������
        }
    }
    out << "NO";//���������� �����
    out.close(); //��������� ����
    return false;//���������� ����

}

int main()
{
    int k1, k2;//���� ���������� k1 � k2
    string s;//���� ���������� s
    ifstream in("INPUT.TXT");//��������� ���� ��� ������
    in >> s; // ��������� ������� � ���������� s
    in.close(); //��������� ����
    Luck(k1, k2, s);//���������� ����.������� 
    return 0;
}
