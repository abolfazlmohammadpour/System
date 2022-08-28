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
        static inline Type::Boolean ToBoolean(TypeName Data)
        {
            return static_cast<Type::Boolean>(Data);
        }

        // This Property Convert A DataType To String DataType
        template <typename TypeName>
        static inline Type::String ToString(TypeName Data)
        {
            return std::to_string(Data);
        }

        // This Property Reverses A String And Returns It
        static inline Type::String StringReverse(Type::String Data)
        {
            if (!(Data.length() % 2))
            {
                for (Type::UnsignedShortInteger Counter = 0, ReverseCounter = (Data.length() - 1);; Counter++, ReverseCounter--)
                {
                    if ((Counter + 1) == ReverseCounter)
                    {
                        Type::Character BackCharacter = Data[Counter];
                        Type::Character NextCharacter = Data[ReverseCounter];

                        Data[Counter] = NextCharacter;
                        Data[ReverseCounter] = BackCharacter;

                        break;
                    }
                    else
                    {
                        Type::Character BackCharacter = Data[Counter];
                        Type::Character NextCharacter = Data[ReverseCounter];

                        Data[Counter] = NextCharacter;
                        Data[ReverseCounter] = BackCharacter;
                    }
                }
            }
            else
            {
                for (Type::UnsignedShortInteger Counter = 0, ReverseCounter = (Data.length() - 1);; Counter++, ReverseCounter--)
                {
                    if (Counter == ReverseCounter)
                    {
                        break;
                    }
                    else
                    {
                        Type::Character BackCharacter = Data[Counter];
                        Type::Character NextCharacter = Data[ReverseCounter];

                        Data[Counter] = NextCharacter;
                        Data[ReverseCounter] = BackCharacter;
                    }
                }
            }

            return Data;
        }
    };
}