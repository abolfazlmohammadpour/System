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

        // These Properties Convert A DataType To Boolean

        // This Property Convert A Character To Boolean
        static inline Type::Boolean ToBoolean(Type::Character Character)
        {
            if (Character)
                return true;
            else
                return false;
        }

        // This Property Convert A SignedCharacter To Boolean
        static inline Type::Boolean ToBoolean(Type::SignedCharacter SignedCharacter)
        {
            if (SignedCharacter)
                return true;
            else
                return false;
        }

        // This Property Convert A UnsignedChar To Boolean
        static inline Type::Boolean ToBoolean(Type::UnsignedCharacter UnsignedCharacter)
        {
            if (UnsignedCharacter)
                return true;
            else
                return false;
        }

        // This Property Convert A SignedShortInteger To Boolean
        static inline Type::Boolean ToBoolean(Type::SignedShortInteger SignedShortInteger)
        {
            if (SignedShortInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A UnsignedShortInteger To Boolean
        static inline Type::Boolean ToBoolean(Type::UnsignedShortInteger UnsignedShortInteger)
        {
            if (UnsignedShortInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A SignedInteger To Boolean
        static inline Type::Boolean ToBoolean(Type::SignedInteger SignedInteger)
        {
            if (SignedInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A UnsignedInteger To Boolean
        static inline Type::Boolean ToBoolean(Type::UnsignedInteger UnsignedInteger)
        {
            if (UnsignedInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A SignedLongInteger To Boolean
        static inline Type::Boolean ToBoolean(Type::SignedLongInteger SignedLongInteger)
        {
            if (SignedLongInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A UnsignedLongInteger To Boolean
        static inline Type::Boolean ToBoolean(Type::UnsignedLongInteger UnsignedLongInteger)
        {
            if (UnsignedLongInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A SignedLongLongInteger To Boolean
        static inline Type::Boolean ToBoolean(Type::SignedLongLongInteger SignedLongLongInteger)
        {
            if (SignedLongLongInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A UnsignedLongLongInteger To Boolean
        static inline Type::Boolean ToBoolean(Type::UnsignedLongLongInteger UnsignedLongLongInteger)
        {
            if (UnsignedLongLongInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A FloatingPointInteger To Boolean
        static inline Type::Boolean ToBoolean(Type::FloatingPointInteger FloatingPointInteger)
        {
            if (FloatingPointInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A DoubleFloatingPointInteger To Boolean
        static inline Type::Boolean ToBoolean(Type::DoubleFloatingPointInteger DoubleFloatingPointInteger)
        {
            if (DoubleFloatingPointInteger)
                return true;
            else
                return false;
        }

        // This Property Convert A LongDoubleFloatingPoint To Boolean
        static inline Type::Boolean ToBoolean(Type::LongDoubleFloatingPointInteger LongDoubleFloatingPointInteger)
        {
            if (LongDoubleFloatingPointInteger)
                return true;
            else
                return false;
        }
    };
}