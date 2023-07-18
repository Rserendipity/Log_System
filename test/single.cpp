#include <iostream>

// 饿汉式单例模式
// class Singleton
// {
// public:
//     static Singleton &getInstance()
//     {
//         return _eton;
//     }
//     int getData()
//     {
//         return _data;
//     }
// private:
//     static Singleton _eton;
//     Singleton() : _data(123) { std::cout << "Singleton" << std::endl; }
//     ~Singleton() {}
//     Singleton(const Singleton &) = delete;
// private:
//     int _data;
// };
// Singleton Singleton::_eton;


// 懒汉方式
class Singleton
{
public:
    static Singleton &getInstance()
    {
        static Singleton _eton;
        return _eton;
    }
    int getData()
    {
        return _data;
    }
private:
    Singleton() : _data(123) { std::cout << "Singleton" << std::endl; }
    ~Singleton() {}
    Singleton(const Singleton &) = delete;
private:
    int _data;
};

int main()
{
    //std::cout << Singleton::getInstance().getData() << std::endl;
    return 0;
}