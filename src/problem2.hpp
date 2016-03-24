#include <list>
#include <string>

auto interleave (const std::list<std::string>& left, const std::list<std::string>& right) -> std::list<std::string>
{
    std::list<std::string> rs;
    auto left_itr = std::begin (left);
    auto right_itr = std::begin (right);
    for (;left_itr != std::end (left), right_itr != std::end (right); ++left_itr, ++right_itr)
    {
        rs.push_back (*left_itr);
        rs.push_back (*right_itr);
    }
    return rs;
}
