namespace System
{
    class Type
    {
    public:                   // Public Properties Of Type Class
        typedef bool Boolean; // This DataType Is Same As <bool>

        typedef void Empty; // This DataType Is Same As <void>

        typedef std::string String; // This DataType Is Same As <std::string>

        typedef char Character;                  // This DataType Is Same As <char>
        typedef signed char SignedCharacter;     // This DataType Is Same As <signed char>
        typedef unsigned char UnsignedCharacter; // This DataType Is Same As <unsigned char>

        typedef short int ShortInteger;                  // This DataType Is Same As <short int>
        typedef signed short int SignedShortInteger;     // This DataType Is Same As <signed short int>
        typedef unsigned short int UnsignedShortInteger; // This DataType Is Same As <unsigned short int>

        typedef int Integer;                  // This DataType Is Same As <int>
        typedef signed int SignedInteger;     // This DataType Is Same As <signed int>
        typedef unsigned int UnsignedInteger; // This DataType Is Same As <unsigned int>

        typedef long int LongInteger;                  // This DataType Is Same As <long int>
        typedef signed long int SignedLongInteger;     // This DataType Is Same As <signed long int>
        typedef unsigned long int UnsignedLongInteger; // This DataType Is Same As <unsigned long int>

        typedef long long int LongLongInteger;                  // This DataType Is Same As <long long int>
        typedef signed long long int SignedLongLongInteger;     // This DataType Is Same As <signed long long int>
        typedef unsigned long long int UnsignedLongLongInteger; // This DataType Is Same As <unsigned long long int>

        typedef float FloatingPointInteger;                 // This DataType Is Same As <float>
        typedef double DoubleFloatingPointInteger;          // This DataType Is Same As <double>
        typedef long double LongDoubleFloatingPointInteger; // This DataType Is Same As <long double>

        static const Type::Integer CharMinValue = CHAR_MIN;   // Minimum Value Of DataType <char>
        static const Type::Integer CharMaxValue = CHAR_MAX;   // Maximum Value Of DataType <char>
        static const Type::Integer SCharMinValue = SCHAR_MIN; // Minimum Value Of DataType <signed char>
        static const Type::Integer SCharMaxValue = SCHAR_MAX; // Maximum Value Of DataType <signed char>
        static const Type::Integer UCharMinValue = 0;         // Minimum Value Of DataType <unsigned char>
        static const Type::Integer UCharMaxValue = UCHAR_MAX; // Maximum Value Of DataType <unsigned char>

        static const Type::Integer ShortIntMinValue = SHRT_MIN;                // Minimum Value Of DataType <short int>
        static const Type::Integer ShortIntMaxValue = SHRT_MAX;                // Maximum Value Of DataType <short int>
        static const Type::Integer SShortIntMinValue = Type::ShortIntMinValue; // Minimum Value Of DataType <signed short int>
        static const Type::Integer SShortIntMaxValue = Type::ShortIntMaxValue; // Maximum Value Of DataType <signed short int>
        static const Type::Integer UShortIntMinValue = 0;                      // Minimum Value Of DataType <unsigned short int>
        static const Type::Integer UShortIntMaxValue = USHRT_MAX;              // Maximum Value Of DataType <unsigned short int>

        static const Type::Integer IntMinValue = INT_MIN;            // Minimum Value Of DataType <int>
        static const Type::Integer IntMaxValue = INT_MAX;            // Maximum Value Of DataType <int>
        static const Type::Integer SIntMinValue = Type::IntMinValue; // Minimum Value Of DataType <signed int>
        static const Type::Integer SIntMaxValue = Type::IntMaxValue; // Maximum Value Of DataType <signed int>
        static const Type::Integer UIntMinValue = 0;                 // Minimum Value Of DataType <unsigned int>
        static const Type::UnsignedInteger UIntMaxValue = UINT_MAX;  // Maximum Value Of DataType <unsigned int>

        static const Type::LongInteger LongIntMinValue = LONG_MIN;               // Minimum Value Of DataType <long int>
        static const Type::LongInteger LongIntMaxValue = LONG_MAX;               // Maximum Value Of DataType <long int>
        static const Type::LongInteger SLongIntMinValue = Type::LongIntMinValue; // Minimum Value Of DataType <signed long int>
        static const Type::LongInteger SLongIntMaxValue = Type::LongIntMaxValue; // Maximum Value Of DataType <signed long int>
        static const Type::Integer ULongIntMinValue = 0;                         // Minimum Value Of DataType <unsigned long int>
        static const Type::UnsignedLongInteger ULongIntMaxValue = ULONG_MAX;     // Maximum Value Of DataType <unsigned long int>

        static const Type::LongLongInteger LongLongIntMinValue = LLONG_MIN;                  // Minimum Value Of DataType <long long int>
        static const Type::LongLongInteger LongLongIntMaxValue = LLONG_MAX;                  // Maximum Value Of DataType <long long int>
        static const Type::LongLongInteger SLongLongIntMinValue = Type::LongLongIntMinValue; // Minimum Value Of DataType <signed long long int>
        static const Type::LongLongInteger SLongLongIntMaxValue = Type::LongLongIntMaxValue; // Maximum Value Of DataType <signed long long int>
        static const Type::Integer ULongLongIntMinValue = 0;                                 // Minimum Value Of DataType <usnigned long long int>
        static const Type::UnsignedLongLongInteger ULongLongIntMaxValue = ULLONG_MAX;        // Maximum Value Of DataType <unsigned long long int>
    };
}