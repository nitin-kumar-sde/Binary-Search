#pragma once
#include <iterator>
#include <functional>

namespace mystl {

template <typename Iterator, typename T, typename Compare = std::less<>>
bool binary_search(Iterator first, Iterator last, const T& value, Compare comp = Compare()) {
    while (first < last) {
        Iterator mid = first + (last - first) / 2;

        if (comp(*mid, value)) {
            first = mid + 1;
        } else if (comp(value, *mid)) {
            last = mid;
        } else {
            return true;
        }
    }
    return false;
}

}
