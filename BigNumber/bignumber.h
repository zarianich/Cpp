#pragma once

class BigNumber
{
    char* number;

    void Deallocate();
    void Copy(const BigNumber& other);

public:
    BigNumber();
    BigNumber(const char* number);
    BigNumber(long long int number);

    const char* getNumber() const;

    BigNumber& operator = (const BigNumber& other);
    BigNumber (const BigNumber& other);
    ~BigNumber();

    void readFromConsole();
    void printBigNumber();

    bool operator == (const BigNumber& other) const;
    bool operator != (const BigNumber& other) const;
    bool operator < (const BigNumber& other) const;
    bool operator > (const BigNumber& other) const;
};