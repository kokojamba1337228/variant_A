#include <iostream>
#include<algorithm>

using namespace std;

void fill_arr(double* arr,int size) {
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (100 - 1) / 10.0;
    }
}

void print_arr(double* arr, int size) {
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << "]";
}

double arr_min(double* arr, int size) {
    double i = *min_element(arr, arr + size);
    return i;
}

void sum_until_min(double* arr, int size) {

}

int main()
{
    setlocale(LC_ALL, "ru");

    const int size = 10;

    double arr[size];
    fill_arr(arr, size);
    print_arr(arr, size);
    cout << arr_min(arr, size);

}
