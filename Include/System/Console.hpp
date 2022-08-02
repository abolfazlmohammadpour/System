#include <iostream>

namespace System
{
    class Console
    {
    public: // Public Properties Of Console Class
        // This Property Prints String Of Input Argument In New Line Of Console
        static void WriteLine(std::string String)
        {
            std::cout << String << std::endl;
        }

        // This Property Reads A Line Of Console And Return Its
        static std::string ReadLine(void)
        {
            std::string String;

            std::getline(std::cin , String);

            return String;
        }
    };
}