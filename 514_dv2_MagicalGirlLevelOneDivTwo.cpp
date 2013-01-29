#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class MagicalGirlLevelOneDivTwo {
public:
	double theMinDistance(int, int, int);
};

double MagicalGirlLevelOneDivTwo::theMinDistance(int d, int x, int y) {
	double result;
	int tx = (abs(x) - d)>0 ?(abs(x)-d):0;
	int ty = (abs(y) - d)>0?(abs(y) -d):0;
	
	result = sqrt(tx*tx+ ty*ty);
	return result;
}


//Powered by [KawigiEdit] 2.0!
