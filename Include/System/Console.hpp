namespace System
{
    class Console
    {
    public: // Public Properties Of Console Class
        // This Property Prints Data Of Input Argument In New Line Of Console
        template <typename TypeName>
        static inline Type::Empty WriteLine(TypeName Data)
        {
            std::cout << Data << std::endl;
        }

		// This Property Prints DataType Of Input Argument In Console
        template <typename TypeName>
		static inline Type::Empty Write(TypeName Data)
		{
			std::cout << Data;
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
