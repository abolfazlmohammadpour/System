#include <iostream>

namespace System
{
    class Type
    {
    public: // Public Properties Of Type Class
        typedef bool Boolean; // This DataType Is Same As <bool>

        typedef void Empty; // This DataType Is Same As <void>
        
        typedef std::string String; // This DataType Is Same As <std::string>

        typedef char Character; // This DataType Is Same As <char>
        typedef signed char SignedCharacter; // This DataType Is Same As <signed char>
        typedef unsigned char UnsignedCharacter; // This DataType Is Same As <unsigned char>

        typedef short int ShortInteger; // This DataType Is Same As <short int>
        typedef signed short int  SignedShortInteger; // This DataType Is Same As <signed short int>
        typedef unsigned short int UnsignedShortInteger; // This DataType Is Same As <unsigned short int>

        typedef int Integer; // This DataType Is Same As <int>
        typedef signed int SignedInteger; // This DataType Is Same As <signed int>
        typedef unsigned int UnsignedInteger; // This DataType Is Same As <unsigned int>

        typedef long int LongInteger; // This DataType Is Same As <long int>
        typedef signed long int SignedLongInteger; // This DataType Is Same As <signed long int>
        typedef unsigned long int UnsignedLongInteger; // This DataType Is Same As <unsigned long int>

        typedef long long int LongLongInteger; // This DataType Is Same As <long long int>
        typedef signed long long int SignedLongLongInteger; // This DataType Is Same As <signed long long int>
        typedef unsigned long long int UnsignedLongLongInteger; // This DataType Is Same As <unsigned long long int>

        typedef float FloatingPointInteger; // This DataType Is Same As <float>
        typedef double DoubleFloatingPointInteger; // This DataType Is Same As <double>
        typedef long double LongDoubleFloatingPointInteger; // This DataType Is Same As <long double>

    };
}