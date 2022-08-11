#include <iostream>

namespace System
{
    class Console
    {
    public: // Public Properties Of Console Class
        // This Property Prints String Of Input Argument In New Line Of Console
        static inline Type::Empty WriteLine(Type::String String)
        {
            std::cout << String << std::endl;
        }

		// This Property Prints String Of Input Argument In Console
		static inline Type::Empty Write(Type::String String)
		{
			std::cout << String;
		}

        // This Property Reads A Line Of Console And Return Its
        static inline Type::String ReadLine(Type::Empty)
        {
            Type::String String;

            std::getline(std::cin , String);

            return String;
        }
		
		// This Property Reads A String Without Space Of Console And Reaturn Its
		static inline Type::String Read(Type::Empty)
		{
			Type::String String;
			
			std::cin >> String;

			return String;
		}
    };
}
