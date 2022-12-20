#include <iostream>

using namespace std;

/*void f(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void f2(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int GetAmount(int *ptr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++, ptr++) {
        sum += *ptr;
    }
    return sum;
}*/

/*
Задание 1. Используя указатели и оператор разыменования, 
определить наибольшее из двух чисел.
*/
void f1(int* a, int* b) {
    if (*a > *b) cout << *a;
    else cout << *b;
}
void f1(int& a, int& b) {
    if (a > b) cout << a << endl;
    else cout << b << endl;
}

/*
Задание 2. Используя указатели и оператор разыменования, 
определить знак числа, введённого с клавиатуры.
*/
void f2(int& a) {
    if (a > 0) cout << "pozitive" << endl;
    else if (a < 0) cout << "negative" << endl;
    else cout << "zero" << endl;
}
/*
Задание 4. Написать примитивный калькулятор, пользуясь только указателями.
*/
void f3() {
    /*float _a, _b;
    float* a{nullptr};
    float* b{nullptr};
    char c;
    cout << "Enter first number -> ";
    cin >> _a >> _b >> c;
    a = &_a;
    b = &_b;*/

    float* a{new float};
    float* b{ new float };
    char c;
    cout << "Enter first number -> ";
    cin >> *a >> *b >> c;

    switch (c)
    {
    case '+':
        cout << *a + *b<< endl;
        break;
    case '-':
        cout << *a - *b << endl;
        break;
    case '*':
        cout << *a * *b << endl;
        break;
    case '/':
        if (*b != 0)
            cout << *a / *b << endl;
        break;
    default:
        break;
    }
}

/*
Задание 5. Используя указатель на массив целых чисел, посчитать 
сумму элементов массива. Использовать
в программе арифметику указателей для продвижения
по массиву, а также оператор разыменования.
*/
int f4(int* arr /*int arr[]*/) {
    int sum = 0;
    // первый способ
    /*for (int i = 0; i < sizeof(arr) / sizeof(int); i++, arr++) {
        sum += *arr;
    }*/
    // второй способ
    /*for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        sum += *(arr + i);
    }*/
    return sum;
}

int main()
{
    /*int a{5};
    int b{ 9 };*/
    /*int* pa;
    pa = &a;

    cout << pa << " " << *pa << endl;

    *pa += 7;
    cout << pa << " " << *pa << " " << a << endl;

    int* pa2 = pa;

    *pa2 *= 2;

    cout << pa << " " << pa2 << " " << *pa << " " << *pa2 << " " << a;*/
    /*cout << a << " " << b << endl;
    f(&a, &b);
    f2(a, b);
    cout << a << " " << b << endl;*/
    /*int arr[10]{5,7,9,5,4,1,2,4,5,7};
    /*for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    f1(arr);

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    int* pArr = &arr[0];

    cout << *(pArr + 2) << endl;*/
    /*const int size = 5;
    int arr[size] = { 33,44,7,8,9 };*/
    //int* ptr = &arr[0];
    /*cout << *ptr << endl;
    cout << *(ptr + 1) << endl;

    ptr = ptr + 1; // ptr += 1; 
    cout << *ptr << endl;*/
    /*int* ptr = arr;

    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl << endl;

    ptr[1] = 55;
    ptr[2] = 12;

    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }

    cout << endl << GetAmount(arr, size);*/
    /*int* a = 0;
    cout << a << endl;

    a = NULL;
    cout << a << endl;

    a = nullptr;
    cout << a << endl;

    if (a == nullptr) {
        cout << "Null pointer was found" << endl;
    }
    */
    int a{ 5 };
    int b{ 9 };
    //f1(&a, &b);
    //f1(a, b);
    //f3();

    int arr[]{ 8,9,7,4,6,4,4 };
    cout << sizeof(int) << endl << sizeof(arr) << endl;
}
