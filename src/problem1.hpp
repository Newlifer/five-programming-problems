#include <list>

template <typename T>
auto sum_for_loop (const std::list<T>& lst) -> T
{
    T rs = 0;
    for (const auto x : lst)
        rs += x;
    return rs;
}

template <typename T>
auto sum_while_loop (const std::list<T>& lst) -> T
{
    auto itr = std::begin (lst);
    T rs = 0;
    while (itr != std::end (lst))
    {
        rs += *itr;
        ++itr;
    }
    return rs;
}

namespace detail
{
    template <typename T>
    auto _sum_recursively (typename std::list<T>::const_iterator itr, typename std::list<T>::const_iterator end_, const T v) -> T
    {
        if (itr == end_)
            return v;
        else
            return _sum_recursively (++itr, end_, *itr + v);
    }
}


template <typename T>
auto sum_recursively (const std::list<T>& lst ) -> T
{
    return detail::_sum_recursively<T> (std::begin (lst), std::end (lst), 0);
}
