#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cassert>

#include <algorithm>
#include <array>
#include <bitset>
#include <deque>
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
#include <vector>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int maxDecimals = 1001;
    int a, b;
    cin >> a >> b;

    cout << a / b << '.';
    a = (a % b) * 10;

    do {
        cout << a / b;
        a = (a % b) * 10;
    } while (maxDecimals-- > 0 && a > 0);

    cout << '\n';

    return 0;
}
