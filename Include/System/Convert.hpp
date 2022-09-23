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

        // This Property Convert A Decimal Signed Integer (-2147483647 <= X <= +2147483647) To Binary And Return It
        static inline Type::String ToBinary(Type::SignedInteger DecimalNumber)
        {
            if (DecimalNumber < -2147483647 || DecimalNumber > 2147483647)
            {
                throw "Error : OverLimit Of Signed Integer Type";
            }

            Type::String Binary = "";

            Type::UnsignedShortInteger *OverflowBit = new Type::UnsignedShortInteger(1);

            if (DecimalNumber == 0)
            {
                Binary += Convert::ToString(0);

                while (Binary.length() < 32)
                {
                    Binary += '0';
                }
            }

            else if (DecimalNumber > 0)
            {
                while (true)
                {
                    if (((DecimalNumber / 2) != 0) && ((DecimalNumber / 2) != 1))
                    {
                        Binary += Convert::ToString(DecimalNumber % 2);

                        DecimalNumber /= 2;
                    }

                    else
                    {
                        if ((DecimalNumber == 0) || (DecimalNumber) == 1)
                        {
                            Binary += Convert::ToString(DecimalNumber);

                            break;
                        }

                        else
                        {
                            Binary += Convert::ToString(DecimalNumber % 2);
                            Binary += Convert::ToString(DecimalNumber / 2);

                            break;
                        }
                    }
                }

                while (Binary.length() < 32)
                {
                    Binary += '0';
                }
            }

            else if (DecimalNumber < 0)
            {
                DecimalNumber *= -1; // Convert Signed Integer To Unsigned Integer
                while (true)
                {
                    if (((DecimalNumber / 2) != 0) && ((DecimalNumber / 2) != 1))
                    {
                        Binary += Convert::ToString(DecimalNumber % 2);

                        DecimalNumber /= 2;
                    }

                    else
                    {
                        if ((DecimalNumber == 0) || (DecimalNumber) == 1)
                        {
                            Binary += Convert::ToString(DecimalNumber);

                            break;
                        }

                        else
                        {
                            Binary += Convert::ToString(DecimalNumber % 2);
                            Binary += Convert::ToString(DecimalNumber / 2);

                            break;
                        }
                    }
                }

                while (Binary.length() < 32)
                {
                    Binary += '0';
                }

                // Toggle All Bits Of Binary
                for (Type::UnsignedShortInteger Counter = 0; Counter < Binary.length(); Counter++)
                {
                    if (Binary[Counter] == '0')
                    {
                        Binary[Counter] = '1';
                    }
                    else
                    {
                        Binary[Counter] = '0';
                    }
                }

                // Add A Overflow Bit To Toggled Binary
                for (Type::Integer Counter = 0; Counter < Binary.length(); Counter++)
                {
                    if (*OverflowBit == 1)
                    {
                        if (Binary[Counter] == '1')
                        {
                            Binary[Counter] = '0';
                        }

                        else
                        {
                            *OverflowBit = 0;

                            Binary[Counter] = '1';
                        }
                    }
                }
            }

            delete OverflowBit;

            // Rverse All Bits Of Binary
            return Convert::StringReverse(Binary);
        }

        // This Property Convert A Decimal Unsigned Integer (0 <= X <= 4294967295) To Binary And Return It
        static inline Type::String ToBinary(Type::UnsignedInteger DecimalNumber)
        {
            if (DecimalNumber < (Type::UnsignedInteger)0 || DecimalNumber > (Type::UnsignedInteger)4294967295)
            {
                throw "Error : OverLimit Of Unsigned Integer Type";
            }

            Type::String Binary = "";

            if (DecimalNumber == 0)
            {
                Binary += Convert::ToString(0);

                while (Binary.length() < 32)
                {
                    Binary += '0';
                }
            }

            else
            {
                while (true)
                {
                    if (((DecimalNumber / 2) != 0) && ((DecimalNumber / 2) != 1))
                    {
                        Binary += Convert::ToString(DecimalNumber % 2);

                        DecimalNumber /= 2;
                    }

                    else
                    {
                        if ((DecimalNumber == 0) || (DecimalNumber) == 1)
                        {
                            Binary += Convert::ToString(DecimalNumber);

                            break;
                        }

                        else
                        {
                            Binary += Convert::ToString(DecimalNumber % 2);
                            Binary += Convert::ToString(DecimalNumber / 2);

                            break;
                        }
                    }
                }

                while (Binary.length() < 32)
                {
                    Binary += '0';
                }
            }

            // Rverse All Bits Of Binary
            return Convert::StringReverse(Binary);
        }
    };
}