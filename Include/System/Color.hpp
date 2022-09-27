namespace System
{
    class Color
    {
    public:                              // Public Properties Of Color Class
        static Type::String ResetColors; // Value Of Reset Colors Of Console

        static Type::String BlackForeground;  // Value Of Set Foreground Color Of Console To Black
        static Type::String RedForeground;    // Value Of Set Foreground Color Of Console To Red
        static Type::String GreenForeground;  // Value Of Set ForeGround Color Of Console To Green
        static Type::String YellowForeground; // Value Of Set Foreground Color Of Console To Yellow
        static Type::String BlueForeground;   // Value Of Set Foreground Color Of Console To Blue
        static Type::String PurpleForeground; // Value Of Set Foreground Color Of Console To Purple
        static Type::String CyanForeground;   // Value Of Set Foreground Color Of Console To Cyan
        static Type::String WhiteForeground;  // Value Of Set Foreground Color Of Console To White

        static Type::String BlackBackground;  // Value Of Set Background Color Of Console To Black
        static Type::String RedBackground;    // Value Of Set Background Color Of Console To Red
        static Type::String GreenBackground;  // Value Of Set Background Color Of Console To Green
        static Type::String YellowBackground; // Value Of Set Background Color Of Console To Yellow
        static Type::String BlueBackground;   // Value Of Set Background Color Of Console To Blue
        static Type::String PurpleBackground; // Value Of Set Background Color Of Console To Purple
        static Type::String CyanBackground;   // Value Of Set Background Color Of Console To Cyan
        static Type::String WhiteBackground;  // Value Of Set Background Color Of Console To White
    };

    Type::String Color::ResetColors = "\033[0;0m";

    Type::String Color::BlackForeground = "\033[30m";
    Type::String Color::RedForeground = "\033[31m";
    Type::String Color::GreenForeground = "\033[32m";
    Type::String Color::YellowForeground = "\033[33m";
    Type::String Color::BlueForeground = "\033[34m";
    Type::String Color::PurpleForeground = "\033[35m";
    Type::String Color::CyanForeground = "\033[36m";
    Type::String Color::WhiteForeground = "\033[37m";

    Type::String Color::BlackBackground = "\033[;40m";
    Type::String Color::RedBackground = "\033[;41m";
    Type::String Color::GreenBackground = "\033[;42m";
    Type::String Color::YellowBackground = "\033[;43m";
    Type::String Color::BlueBackground = "\033[;44m";
    Type::String Color::PurpleBackground = "\033[;45m";
    Type::String Color::CyanBackground = "\033[;46m";
    Type::String Color::WhiteBackground = "\033[;47m";
}