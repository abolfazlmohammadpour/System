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

		// This Property Prints String Of Input Argument In Console
		static void Write(std::string String)
		{
			std::cout << String;
		}

        // This Property Reads A Line Of Console And Return Its
        static std::string ReadLine(void)
        {
            std::string String;

            std::getline(std::cin , String);

            return String;
        }
		
		// This Property Reads A String Without Space Of Console And Reaturn Its
		static std::string Read(void)
		{
			std::string String;
			
			std::cin >> String;

			return String;
		}
    };
}
