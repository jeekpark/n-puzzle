#include "Prompter.h"

#include <iostream>
#include <cstring>

Prompter::Prompter()
{
    std::memset(mBuffer, 0, static_cast<size_t>(BUFFER_COUNT) * BUFFER_STRING_LEN * sizeof(char));
    std::cout << "Prompter Gen" << std::endl;
}

Prompter::Prompter(const Prompter& copy)
{
    std::memcpy(mBuffer, copy.mBuffer, static_cast<size_t>(BUFFER_COUNT) * BUFFER_STRING_LEN * sizeof(char));
}

const Prompter& Prompter::operator=(const Prompter& copy)
{
    if (this != &copy)
    {
        std::memcpy(mBuffer, copy.mBuffer, static_cast<size_t>(BUFFER_COUNT) * BUFFER_STRING_LEN * sizeof(char));
    }
    return *this;
}

Prompter::~Prompter()
{

}