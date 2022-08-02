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
    };
}