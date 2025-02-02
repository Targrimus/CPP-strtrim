#if !defined(_TRIMMER)
#define _TRIMMER

#include <string>

auto trim_left = [](const std::string &str) -> std::string {
    auto begin = std::begin(str);
    while (begin != std::end(str) && isspace(*begin)) ++begin;
    return {begin, std::end(str)};
};

auto trim_right = [](const std::string &str) -> std::string {
    auto rbegin = std::rbegin(str);
    while (rbegin != std::rend(str) && isspace(*rbegin)) ++rbegin;
    return {std::begin(str), rbegin.base()};
};

auto trim = [](const std::string &str) -> std::string {
    return trim_left(trim_right(str));
};


#endif // _TRIMMER
