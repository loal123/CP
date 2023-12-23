#include <iostream>
int faktorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * faktorial(x - 1);
    }
}
int main()
{
    std::cout << faktorial(4);
}