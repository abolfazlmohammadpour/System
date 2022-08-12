namespace System
{
    class Convert
    {
    public: // Public Properties Of Convert Class
        // This Property Convert A UpperCase String To LowerCase String
        static inline Type::String ToLowerCase(Type::String String)
        {
            for (Type::UnsignedShortInteger Counter = 0; Counter < String.length(); Counter++)
            {
                String[Counter] = (Type::Character)tolower((Type::Integer)String[Counter]);
            }

            return String;
        }

        // This Property Convert A LowerCase String To UpperCase String
        static inline Type::String ToUpperCase(Type::String String)
        {
            for (Type::UnsignedShortInteger Counter = 0; Counter < String.length(); Counter++)
            {
                String[Counter] = (Type::Character)toupper((Type::Integer)String[Counter]);
            }

            return String;
        }

        // This Property Convert A DataType To Boolean DataType
        template <typename TypeName>
        static inline Type::Boolean ToBoolean(TypeName DataType)
        {
            return static_cast<bool>(DataType);
        }
    };
}