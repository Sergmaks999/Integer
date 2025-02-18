#include <iostream>
#include <numeric>

class Integer
{
public:
    Integer();
    Integer(int val);


    bool isOdd();

    bool isPositive();

    bool isNegative();

    bool isPrime();

    bool areCoprime(const Integer& other) const;

    Integer Nod(const Integer& other) const;

    Integer Nok(const Integer& other) const;




private:
    unsigned value_;
    bool sign_;
};