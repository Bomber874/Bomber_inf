#include<iostream>

using namespace std;

int *GenerateArray(){
    static int _arr[250];
    for(int i = 0; i < 250; i++){
        _arr[i] = rand();
    }
    return _arr;
}

void Bubble(){
    int* arr = GenerateArray();
    for (int i = 0; i < 250; i++){
        for (int j = 0; j < 250-i; j++){
            if (arr[j]>arr[j+1]){
                int b = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = b;
            }
        }
    }
    for (int i = 0; i < 250; i++)
        cout << arr[i] << endl;
}
int main(){
    Bubble();
    return 0;
}
