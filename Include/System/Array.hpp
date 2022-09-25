namespace System
{
    class Array
    {
    public: // Public Properties Of Array Class
        // This Property Creates An Array With Custom Type And Length And Returns Address Of First Unit Of Array
        template <typename TypeName>
        static inline TypeName *CreateArray(Type::UnsignedInteger ArrayLength, ...)
        {
            TypeName *Array = (TypeName *)calloc(ArrayLength, sizeof(TypeName));

            TypeName *ValueOfArgument = new TypeName;

            va_list ListOfArguments;

            va_start(ListOfArguments, ArrayLength);
            for (Type::UnsignedInteger Counter = 0; Counter < ArrayLength; Counter++)
            {
                *ValueOfArgument = va_arg(ListOfArguments, TypeName);

                Array[Counter] = *ValueOfArgument;
            }
            va_end(ListOfArguments);

            delete ValueOfArgument;

            return Array;
        }

        // This Property Removes The Array Created By <CreateArray> Property
        template <typename TypeName>
        static inline Type::Empty RemoveArray(TypeName *Array)
        {
            free(Array);
        }

        // This Property Returns An String That Is Contain Executable Output Of Array Of Input Argument
        template <typename TypeName>
        static inline Type::String ExecutableOutput(Type::UnsignedInteger ArrayLength, TypeName *Array)
        {
            Type::String ExecutableOutput = "";

            ExecutableOutput += "{";
            for (Type::UnsignedInteger Counter = 0; Counter < ArrayLength; Counter++)
            {
                if (Counter == (ArrayLength - 1))
                {
                    ExecutableOutput += Convert::ToString(Array[Counter]);
                }
                else
                {
                    ExecutableOutput += Convert::ToString(Array[Counter]);
                    ExecutableOutput += ", ";
                }
            }
            ExecutableOutput += "}";

            return ExecutableOutput;
        }

        // This Property Returns Maximum Value Of A Numerical Array With Signed Integer Type
        static inline Type::SignedInteger MaximumValueOfNumericalArray(Type::UnsignedInteger ArrayLength, Type::SignedInteger *Array)
        {
            Type::SignedInteger MaximumNumber = Array[0];

            for (Type::UnsignedInteger Counter = 1; Counter < (ArrayLength); Counter++)
            {
                if (Array[Counter] > MaximumNumber)
                    MaximumNumber = Array[Counter];
            }

            return MaximumNumber;
        }

        // This Property Returns Maximum Value Of A Numerical Array With Unsigned Integer Type
        static inline Type::UnsignedInteger MaximumValueOfNumericalArray(Type::UnsignedInteger ArrayLength, Type::UnsignedInteger *Array)
        {
            Type::UnsignedInteger MaximumNumber = Array[0];

            for (Type::UnsignedInteger Counter = 1; Counter < (ArrayLength); Counter++)
            {
                if (Array[Counter] > MaximumNumber)
                    MaximumNumber = Array[Counter];
            }

            return MaximumNumber;
        }

        // This Prperty Returns Minimum Value Of Numerical Array With Signed Integer Type
        static inline Type::SignedInteger MinimumValueOfNumericalArray(Type::UnsignedInteger ArrayLength, Type::SignedInteger *Array)
        {
            Type::SignedInteger MinimumNumber = Array[0];

            for (Type::UnsignedInteger Counter = 1; Counter < ArrayLength; Counter++)
            {
                if (Array[Counter] < MinimumNumber)
                    MinimumNumber = Array[Counter];
            }

            return MinimumNumber;
        }

        // This Prperty Returns Minimum Value Of Numerical Array With Unsigned Integer Type
        static inline Type::UnsignedInteger MinimumValueOfNumericalArray(Type::UnsignedInteger ArrayLength, Type::UnsignedInteger *Array)
        {
            Type::UnsignedInteger MinimumNumber = Array[0];

            for (Type::UnsignedInteger Counter = 1; Counter < ArrayLength; Counter++)
            {
                if (Array[Counter] < MinimumNumber)
                    MinimumNumber = Array[Counter];
            }

            return MinimumNumber;
        }
    };
}