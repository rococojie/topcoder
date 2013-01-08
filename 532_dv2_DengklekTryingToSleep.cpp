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

class DengklekTryingToSleep {
public:
	int minDucks(vector <int>);
};

int DengklekTryingToSleep::minDucks(vector <int> ducks) {

	sort(ducks.begin(),ducks.end());
	
	int len = int(ducks.size());
	int max = ducks.at(len-1);
	int min = ducks.front();
	
	int result = max-min -len + 1;
	
	return result;
	
}


//Powered by [KawigiEdit] 2.0!
