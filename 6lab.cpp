#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void lab61() {
    int array[10];
    for (int i = 0; i < 10; i++)
        cin >> array[i];
    for (int i = 0; i < 10; i++)
        cout << "[" << i << "]=" << array[i] << endl;
}

void lab62() {
    int array[10] = { 0,1,2,3,4,5,6,7,8,9 };
    for (int i = 0; i < 10; i++)
        cout << "[" << i << "]=" << array[i] << endl;
}

void lab63() {
    int array[10];
    for (int i = 0; i < 10; i++)
        array[i] = (rand() % 2) - 1;
    for (int i = 0; i < 10; i++)
        cout << "[" << i << "]=" << array[i] << endl;
}

void lab64() {
    int array[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int summ = 0;
    for (int i = 0; i < 10; i++)
        summ += array[i];
    cout << summ;
}

void lab65() {
    int array[10] = { 0,11,2,33,4,55,6,7,8,9 };
    int max = 0;
    for (int i = 0; i < 10; i++)
        if (array[i] > max) max = array[i];
    cout << max;
}

void lab66() {
    int array[3][3] = { {45,3,77},{7,432,76},{90,4,0} };
    int max = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (array[i][j] > max) max = array[i][j];
    cout << max;
}

void lab67() {
    int array[10] = { 55,33,542,33,33,55,76,7,83,96 };
    int x = 0;
    cin >> x;
    int summ = 0;
    for (int i = 0; i < 10; i++)
        if (array[i] == x) summ++;
    cout << summ;
}

void lab68() {
    int array[10] = { 55,33,-542,33,-33,-55,76,7,-83,96 };
    int summ[2] = { 0,0 };
    for (int i = 0; i < 10; i++)
        if (array[i] < 0)
            summ[0]++;
        else
            summ[1]++;
    cout << "?????????????:" << summ[1] << "\n?????????????:" << summ[0] << endl;
}

void lab69() {
    int array[2][3] = { {45,3,77},{90,4,0} };
    int summ[2] = { 0,0 };
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            summ[i] += array[i][j];
    cout << "????? 1:" << summ[0] << "\n????? 2:" << summ[1] << endl;
    for (int i = 0; i < 2; i++) {
        cout << "[";
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

void lab610() {
    int array[2][3] = { {45,3,77},{90,4,0} };
    int summ[3] = { 0,0 };
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            summ[j] += array[i][j];
    cout << "????? 1:" << summ[0] << "\n????? 2:" << summ[1] << "\n????? 3:" << summ[2] << endl;
    for (int i = 0; i < 2; i++) {
        cout << "[";
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

void lab6_10() {

    int k = 0, v = 0;
    cin >> k >> v;
    int** array = new int* [k];
    for (int i = 0; i < k; i++) {
        array[i] = new int[v];
    }

    //int summ[2][3] = { { 0, 0 }, { 0, 0 } };

    int** summ = new int* [2];

    summ[0] = new int[k];
    for (int j = 0; j < k; j++)
        summ[0][j] = 0;

    summ[1] = new int[v];
    for (int j = 0; j < v; j++)
        summ[1][j] = 0;



    // ?????????? ????????
    for (int i = 0; i < k; i++)
        for (int j = 0; j < v; j++)
            array[i][j] = rand() % 10;

    // ????? ?????

    for (int i = 0; i < k; i++)
        for (int j = 0; j < v; j++)
            summ[0][i] += array[i][j];

    // ????? ???????
    for (int i = 0; i < k; i++)
        for (int j = 0; j < v; j++)
            summ[1][j] += array[i][j];


    for (int i = 0; i < k; i++) {
        cout << "[";
        for (int j = 0; j < v; j++) {
            cout << array[i][j] << "\t";
        }
        cout << "]\t" << "=" << summ[0][i] << endl;
    }
    cout << "-------------------------\n";
    for (int i = 0; i < v; i++)
        cout << summ[1][i] << "\t";
}