#include <iostream>
#include <string>
#include "SimpleVector.h"

using namespace std;

int main()
{

    SimpleVector<int> sv;

    sv.push_back(3);
    sv.push_back(6);
    sv.push_back(8);
    sv.push_back(2);
    sv.push_back(9);
    sv.push_back(7);
    sv.push_back(3);
    sv.push_back(6);
    sv.push_back(1);
    sv.push_back(3);
    sv.push_back(6);
    sv.push_back(5);
    
    sv.getData();
    cout << "배열의 총 크기 : " << sv.capacity() << endl;
    cout << "현재 원소의 개수 : " << sv.size() << endl;
    sv.sortData();

    cout << "\n============================\n" << endl;

    SimpleVector<char> csv(5);
    csv.push_back('a');
    csv.push_back('b');
    csv.push_back('c');
    csv.push_back('d');
    csv.push_back('e');
    csv.push_back('f');
    csv.push_back('g');
    csv.push_back('h');
    csv.push_back('i');
    csv.push_back('j');
    csv.push_back('k');
    csv.push_back('l');
    csv.push_back('m');
    csv.push_back('n');
    csv.push_back('o');
    csv.push_back('p');

    csv.getData();
    cout << "배열의 총 크기 : " << csv.capacity() << endl;
    cout << "현재 원소의 개수 : " << csv.size() << endl;

    csv.pop_back();
    csv.pop_back();
    cout << "\npop_back 2번 실행" << endl;
    csv.getData();
    cout << "배열의 총 크기 : " << csv.capacity() << endl;
    cout << "현재 원소의 개수 : " << csv.size() << endl;

    cout << "\npush_back('k') 실행" << endl;
    csv.push_back('k');
    csv.getData();
    cout << "배열의 총 크기 : " << csv.capacity() << endl;
    cout << "현재 원소의 개수 : " << csv.size() << endl;

    cout << "\n============================\n" << endl;
   
    
    SimpleVector<char> csv2(csv);
    csv2.getData();
    cout << "배열의 총 크기 : " << csv2.capacity() << endl;
    cout << "현재 원소의 개수 : " << csv2.size() << endl;
    csv2.resize(30);
    csv2.sortData();

}

