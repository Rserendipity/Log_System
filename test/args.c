#include <stdio.h>
#include <stdarg.h>

// 不定参宏
#define LOG(fmt, ...) printf("[%s,%d] "fmt, __FILE__, __LINE__, ##__VA_ARGS__)

// 不定参函数
void printNum(int count, ...)
{
    va_list ap;
    va_start(ap, count); // 获取第一个参数以后的起始地址
    for (size_t i = 0; i < count; i++)
    {
        int num = va_arg(ap, int); // 取出元素
        printf("[index%d:%d]\n", i, num);
    }
    va_end(ap);
}

int main()
{
    // LOG("%s", "this is a message");
    printNum(4, 1, 2, 3, 4);
    return 0;
}