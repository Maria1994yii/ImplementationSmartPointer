// SmartPointer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

template<typename T>

class Pointer {
public:
    Pointer(T* inPtr);
    virtual ~Pointer();
    Pointer(const Pointer<T>& src) = delete;
    Pointer<T>& operator=(const Pointer<T>& rhs) = delete;
    T& operator*();
    const T& operator*() const;
    T* operator->();
    const T* operator->()const;

private:
    T* mPtr;
};

template <typename T>
Pointer<T>::Pointer(T* inPtr) :mPtr(inPtr)
{

}


template <typename T>
Pointer<T>::~Pointer()
{
    delete mPtr;
    mPtr = nullptr;
}


template <typename T>
T& Pointer<T>::operator*()
{
    return *mPtr;
}


template <typename T>
const T& Pointer<T>::operator*()const
{
    return *mPtr;
}


template <typename T>
T* Pointer<T>::operator->()
{
    return mPtr;
}


template <typename T>
const T* Pointer<T>::operator->()const
{
    return mPtr;
}


int main()
{
    Pointer<int> smartInt(new int);
    *smartInt = 5;

    std::cout << *smartInt;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
