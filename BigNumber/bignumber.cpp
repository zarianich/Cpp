#include <iostream>
#include <cstring>
#include <cassert>

#include "bignumber.h"

const std::size_t INITIAL_NUMBER_SIZE = 10;

void BigNumber::Deallocate()
{
    delete[] this->number;
}

void BigNumber::Copy(const BigNumber& other)
{
    this->number = new (std::nothrow) char[strlen(other.number) + 1];
    if(!this->number)
    {
        std::cout<<"Memory problem!"<<std::endl;
        return;
    }
    strcpy(this->number, other.number);
}

BigNumber::BigNumber()
{
    this->number = new (std::nothrow) char[INITIAL_NUMBER_SIZE];
    if(!this->number)
    {
        std::cout<<"Memory problem!"<<std::endl;
        return;
    }
    strcpy(this->number, "0");
}

BigNumber::BigNumber(const char* number)
{
    assert(number != nullptr);

    this->number = new (std::nothrow) char[strlen(number) + 1];
    if(!this->number)
    {
        std::cout<<"Memory problem!"<<std::endl;
        return;
    }
    strcpy(this->number, number);
}

BigNumber::BigNumber(long long int number)
{
    this->number = new (std::nothrow) char[number + 1];
    if(!this->number)
    {
        std::cout<<"Memory problem!"<<std::endl;
        return;
    }
    std::sprintf(this->number, "%lld", number);
}

const char* BigNumber::getNumber() const
{
    return this->number;
}

BigNumber& BigNumber::operator = (const BigNumber& other)
{
    if (this != &other)
    {
        this->Deallocate();
        this->Copy(other);
    }

    return *this;
}

BigNumber::BigNumber(const BigNumber& other)
{
    this->Copy(other);
}

BigNumber::~BigNumber()
{
    this->Deallocate();
}

void BigNumber::readFromConsole()
{
    std::cout << "Enter a big number: ";
    char* buffer = new (std::nothrow) char[INITIAL_NUMBER_SIZE];
    if(!buffer)
    {
        std::cout<<"Memory problem!"<<std::endl;
        return;
    }
    std::cin.get(buffer, INITIAL_NUMBER_SIZE);

    while (std::cin.get() != '\n')
    {
        char* block = new (std::nothrow) char[INITIAL_NUMBER_SIZE];
        if(!block)
        {
            std::cout<<"Memory problem!"<<std::endl;
            delete[] buffer;
            return;
        }
        std::cin.get(block, INITIAL_NUMBER_SIZE);

        char* copybuffer = new (std::nothrow) char[strlen(buffer) + 1];
        if(!copybuffer)
        {
            std::cout<<"Memory problem!"<<std::endl;
            delete[] buffer;
            delete[] block;
            return;
        }
        strcpy(copybuffer, buffer);
        delete[] buffer;

        buffer = new (std::nothrow) char[INITIAL_NUMBER_SIZE + strlen(copybuffer) + 1];
        if(!buffer)
        {
            std::cout<<"Memory problem!"<<std::endl;
            delete[] block;
            delete[] copybuffer;
            delete[] buffer;
            return;
        }
        strcpy(buffer, copybuffer);
        strcat(buffer, block);
        delete[] block;
        delete[] copybuffer;
    }
    
    assert(buffer != nullptr);

    this->Deallocate();

    this->number = new (std::nothrow) char[strlen(buffer) + 1];
    if(!this->number)
    {
        std::cout<<"Memory problem!"<<std::endl;
        delete[] buffer;
        return;
    }
    strcpy(this->number, buffer);

    delete[] buffer;
}

void BigNumber::printBigNumber(){
    std::cout<<this->number;
}

bool BigNumber::operator == (const BigNumber& other) const
{
    if (strlen(this->number) >= strlen(other.number))
    {
        for (std::size_t i = 0; i < strlen(this->number); ++i)
        {
            if (this->number[i] != other.number[i])
                return false;
        }
    }
    else
    {
        for (std::size_t i = 0; i < strlen(other.number); ++i)
        {
            if (this->number[i] != other.number[i])
                return false;
        }
    }
    
    return true;
}

bool BigNumber::operator != (const BigNumber& other) const
{
    return !(*this==other);
}

bool BigNumber::operator < (const BigNumber& other) const
{
    if (this->number[0] == '-')
    {
        if (other.number[0] == '-')
        {
            if (strlen(this->number) > strlen(other.number))
            {
                return true;
            }
            else if (strlen(this->number) < strlen(other.number))
            {
                return false;
            }
            else
            {
                for (std::size_t i = 0; i < strlen(other.number); ++i)
                {
                    if (this->number[i] > other.number[i])
                        return true;
                }
            }
        }
        else
        {
            return true;
        }
    }
    else if (other.number[0] == '-')
    {
        return false;
    }
    else
    {
        if (strlen(this->number) > strlen(other.number))
        {
            return false;
        }
        else if (strlen(this->number) < strlen(other.number))
        {
            return true;
        }
        else
        {
            for (std::size_t i = 0; i < strlen(other.number); ++i)
            {
                if (this->number[i] < other.number[i])
                    return true;
            }
        }
    }
    return false;
}

bool BigNumber::operator > (const BigNumber& other) const
{
    return !(*this<other);
}