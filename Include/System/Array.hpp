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
    };
}