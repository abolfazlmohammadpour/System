#include <iostream>
#include <cctype>

namespace System
{
    class Convert
    {
    public: // Public Properties Of Convert Class
        // This Property Convert UpperCase String To LowerCase String
        static inline std::string ToLowerCase(std::string String)
        {
            for (unsigned short int Counter = 0; Counter < String.length(); Counter++)
            {
                String[Counter] = (char)tolower((int)String[Counter]);
            }

            return String;
        }

        // This Property Convert LowerCase String To UpperCase String
        static inline std::string ToUpperCase(std::string String)
        {
            for (unsigned short int Counter = 0; Counter < String.length(); Counter++)
            {
                String[Counter] = (char)toupper((int)String[Counter]);
            }

            return String;
        }
    };
}