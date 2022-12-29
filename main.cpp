#include <Windows.h>
#include <iostream>

void force_exception()
{
    __try
    {
        __asm {
        pushfd ; push EFLAG
        or word ptr[esp], 0x100 ; setting trapflag
        popfd ; popping ZFLAG back into register
        nop ; trapflag is triggered on this instruction
        }
    }
    __except(1)
    {
        //exception handler to handle single-step exception
    }
}

int main()
{
    while(true)
    {
        force_exception();
        std::cout << "hai :3\n";
    }
}
