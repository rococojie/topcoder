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

class ShippingCubes {
public:
	int minimalCost(int);
};

int ShippingCubes::minimalCost(int N) {
	int minNum = 3*N;
	for(int x= 1; x<=N; x++) {
		for(int y = 1; y<= N;y++) {
			if(x * y> N) break;
			for(int z = 1; z<=N; z++) {
				if(x*y*z > N) break;	
				else if(x*y*z == N) minNum = min(minNum, x+y+z);
			}
		}
	}
	
	return minNum;
}


//Powered by [KawigiEdit] 2.0!
