#include <iostream>
#include <memory>

class Fruit
{
public:
    virtual void showName() = 0;
};

class Apple : public Fruit
{
public:
    void showName() override
    {
        std::cout << "I am Apple" << std::endl;
    }
    ~Apple() { std::cout << "~Apple" << std::endl; }
};

class Banana : public Fruit
{
public:
    void showName() override
    {
        std::cout << "I am Banana" << std::endl;
    }
    ~Banana() { std::cout << "~Banana" << std::endl; }
};

class Factory
{
public:
    static std::shared_ptr<Fruit> makeFruit(const std::string &name)
    {
        if (name == "apple")
        {
            return std::make_shared<Apple>();
        }
        else
        {
            return std::make_shared<Banana>();
        }
    }
};

int main()
{
    auto fruit = Factory::makeFruit("apple");
    fruit->showName();
    fruit = Factory::makeFruit("banana");
    fruit->showName();
    return 0;
}