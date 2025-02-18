#include "Integer.hpp"


Integer::Integer(int val) {
    if (val > 0)
    {
        value_ = val;
        sign_ = false; // false = +, true = -
    }
    else {
        value_ = static_cast<unsigned>(val);
        sign_ = true;
    }

}



    bool Integer::isOdd()
    {
        return (value_ % 2) != 0;
    }

    // isEven

    bool Integer::isPositive()
    {
        return !sign_;
    }
    
    bool Integer::isNegative()
    {
        return sign_;
    }

    bool Integer::isPrime()
    {
        if (value_ < 2)
        {
            return false;
        }

        for (int i = 2; i * i <= value_; ++i)
        {
            if (value_ % i == 0)
            {
                return false;
            }
        }

        return true;
    }

    // remake for multifile

    bool Integer::areCoprime(const Integer& other)const
    {
        return std::gcd(value_, other.value_) == 1;
    }


    Integer Integer::Nod(const Integer& other)const
    {
        return std::gcd(value_, other.value_);
    }


    Integer Integer::Nok(const Integer& other)const
    {
        return std::lcm(value_, other.value_);
    }
    Integer getValue() const
    {
        return Integer::value_;
    }
};