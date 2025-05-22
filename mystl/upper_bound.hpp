#pragma once
#include <iterator>
#include <functional>

namespace mystl {

template <typename Iterator, typename T, typename Compare = std::less<>>
Iterator upper_bound(Iterator first, Iterator last, const T& value, Compare comp = Compare()) {
    Iterator ans = last;

    while (first < last) {
        Iterator mid = first + (last - first) / 2;

        if (!comp(value, *mid)) {
            first = mid + 1;
        } else {
            ans = mid;
            last = mid;
        }
    }

    return ans;
}

}
