#include <iostream>
#include <cctype>

namespace System
{
    class Convert
    {
    public: // Public Properties Of Convert Class
        // This Property Convert A UpperCase String To LowerCase String
        static inline std::string ToLowerCase(std::string String)
        {
            for (unsigned short int Counter = 0; Counter < String.length(); Counter++)
            {
                String[Counter] = (char)tolower((int)String[Counter]);
            }

            return String;
        }

        // This Property Convert A LowerCase String To UpperCase String
        static inline std::string ToUpperCase(std::string String)
        {
            for (unsigned short int Counter = 0; Counter < String.length(); Counter++)
            {
                String[Counter] = (char)toupper((int)String[Counter]);
            }

            return String;
        }

        // These Properties Convert A DataType To Boolean

        // This Property Convert A Character To Boolean
        static inline bool ToBoolean(char Character)
        {
            if (Character)
                return true;
            else
                return false;
        }

        // This Property Convert A SignedCharacter To Boolean
        static inline bool ToBoolean(signed char SignedChar)
        {
            if (SignedChar)
                return true;
            else
                return false;
        }

        // This Property Convert A UnsignedChar To Boolean
        static inline bool ToBoolean(unsigned char UnsignedChar)
        {
            if (UnsignedChar)
                return true;
            else
                return false;
        }

        // This Property Convert A SignedShortInteger To Boolean
        static inline bool ToBoolean(signed short int SignedShortInteger)
        {
            if (SignedShortInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A UnsignedShortInteger To Boolean
        static inline bool ToBoolean(unsigned short int UnsignedShortInteger)
        {
            if (UnsignedShortInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A SignedInteger To Boolean
        static inline bool ToBoolean(signed int SignedInteger)
        {
            if (SignedInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A UnsignedInteger To Boolean
        static inline bool ToBoolean(unsigned int UnsignedInteger)
        {
            if (UnsignedInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A SignedLongInteger To Boolean
        static inline bool ToBoolean(signed long int SignedLongInteger)
        {
            if (SignedLongInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A UnsignedLongInteger To Boolean
        static inline bool ToBoolean(unsigned long int UnsignedLongInteger)
        {
            if (UnsignedLongInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A SignedLongLongInteger To Boolean
        static inline bool ToBoolean(signed long long int SignedLongLongInteger)
        {
            if (SignedLongLongInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A UnsignedLongLongInteger To Boolean
        static inline bool ToBoolean(unsigned long long int UnsignedLongLongInteger)
        {
            if (UnsignedLongLongInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A FloatingPointInteger To Boolean
        static inline bool ToBoolean(float FloatingPointInteger)
        {
            if (FloatingPointInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A DoubleFloatingPointInteger To Boolean
        static inline bool ToBoolean(double DoubleFloatingPointInteger)
        {
            if (DoubleFloatingPointInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A LongDoubleFloatingPoint To Boolean
        static inline bool ToBoolean(long double LongDoubleFloatingPoint)
        {
            if (LongDoubleFloatingPoint)
                return true;
            else
                return false;
        }
    };
}