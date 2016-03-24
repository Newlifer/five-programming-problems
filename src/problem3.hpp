#include <vector>

template <typename T>
auto generate_fibonacci (const std::size_t amount) -> std::vector<T>
{
    std::vector<T> rs;
    rs.emplace_back (0);
    rs.emplace_back (1);

    for (std::size_t i = 2; i < amount; ++i)
        rs.emplace_back (rs[i - 1] + rs[i - 2]);
    return rs;
}
