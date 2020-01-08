#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <algorithm>
#include <array>
#include <bitset>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

constexpr int N = 10;
constexpr int MOD = 42;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n = N, num;
    set < short > remainders;

    while (n--) {
        cin >> num;
        remainders.insert(num % MOD);
    }
    cout << remainders.size() << '\n';

    return 0;
}
