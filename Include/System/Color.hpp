#include <iostream>

namespace System
{
    class Color
    {
    public:                            // Public Properties Of Color Class
        static std::string ResetColors; // Value Of Reset Colors Of Console

        static std::string BlackForeground;  // Value Of Set Foreground Color Of Console To Black
        static std::string RedForeground;    // Value Of Set Foreground Color Of Console To Red
        static std::string GreenForeground;  // Value Of Set ForeGround Color Of Console To Green
        static std::string YellowForeground; // Value Of Set Foreground Color Of Console To Yellow
        static std::string BlueForeground;   // Value Of Set Foreground Color Of Console To Blue
        static std::string PurpleForeground; // Value Of Set Foreground Color Of Console To Purple
        static std::string CyanForeground;   // Value Of Set Foreground Color Of Console To Cyan
        static std::string WhiteForeground;  // Value Of Set Foreground Color Of Console To White

        static std::string BlackBackground;  // Value Of Set Background Color Of Console To Black
        static std::string RedBackground;    // Value Of Set Background Color Of Console To Red
        static std::string GreenBackground;  // Value Of Set Background Color Of Console To Green
        static std::string YellowBackground; // Value Of Set Background Color Of Console To Yellow
        static std::string BlueBackground;   // Value Of Set Background Color Of Console To Blue
        static std::string PurpleBackground; // Value Of Set Background Color Of Console To Purple
        static std::string CyanBackground;   // Value Of Set Background Color Of Console To Cyan
        static std::string WhiteBackground;  // Value Of Set Background Color Of Console To White
    };

    std::string Color::ResetColors = "\033[0;0m";

    std::string Color::BlackForeground = "\033[30m";
    std::string Color::RedForeground = "\033[31m";
    std::string Color::GreenForeground = "\033[32m";
    std::string Color::YellowForeground = "\033[33m";
    std::string Color::BlueForeground = "\033[34m";
    std::string Color::PurpleForeground = "\033[35m";
    std::string Color::CyanForeground = "\033[36m";
    std::string Color::WhiteForeground = "\033[37m";

    std::string Color::BlackBackground = "\033[;40m";
    std::string Color::RedBackground = "\033[;41m";
    std::string Color::GreenBackground = "\033[;42m";
    std::string Color::YellowBackground = "\033[;43m";
    std::string Color::BlueBackground = "\033[;44m";
    std::string Color::PurpleBackground = "\033[;45m";
    std::string Color::CyanBackground = "\033[;46m";
    std::string Color::WhiteBackground = "\033[;47m";
}