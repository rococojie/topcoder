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

class PairingPawns {
public:
	int savedPawnCount(vector <int>);
};

int PairingPawns::savedPawnCount(vector <int> start) {
	for(int i = start.size()-1; i>0; i--) {
		start[i-1] += start[i]/2;
	}
	
	return start[0];
}


//Powered by [KawigiEdit] 2.0!
