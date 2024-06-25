#pragma once
class Prompter
{
public:
    Prompter();
    Prompter(const Prompter& copy);
    const Prompter& operator=(const Prompter& copy);
    virtual ~Prompter();

private:
    enum { BUFFER_COUNT = 512 };
    enum { BUFFER_STRING_LEN = 512 };

    char mBuffer[BUFFER_COUNT][BUFFER_STRING_LEN];
};

