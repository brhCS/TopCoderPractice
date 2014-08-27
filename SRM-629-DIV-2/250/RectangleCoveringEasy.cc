
// {{{ $VIMCODER$ <-----------------------------------------------------
// vim:filetype=cpp:foldmethod=marker:foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

// }}}

#define ZERO(a) memset(a, 0, sizeof(a))
#define FOR(x,to) for(x=0;x<to;++x)
#define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();++x)

class RectangleCoveringEasy
{
public:
    int solve(int holeH, int holeW, int boardH, int boardW)
    {
        if(boardH <= holeH && boardW <= holeW) return -1;
        if(boardH <= holeW && boardW <= holeH) return -1;
        if(boardH >= holeH && boardW >= holeW) return 1;
        if(boardH >= holeW && boardW >= holeH) return 1;
        return -1;
    }
};

