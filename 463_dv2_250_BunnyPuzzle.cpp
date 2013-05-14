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

class BunnyPuzzle {
public:
	int theCount(vector <int>);
};

/ * solution 1   */
 

bool isJumps(vector<int> bunnies, int a, int b ) {
	int minPosition = min(a, 2*b-a);
	int maxPosition = max(a, 2*b-a);
	for(int i=0; i<int(bunnies.size()); i++) {
		if(bunnies[i] != a && bunnies[i] >= minPosition && bunnies[i] <= maxPosition && bunnies[i] != b) {
			return false;
		}
	}
	return true;
}
int BunnyPuzzle::theCount(vector <int> bunnies) {
	int result = 0;
	
	for(int i=0; i<int(bunnies.size()); i++) {
		int a = bunnies[i];
		for(int j=0; j<int(bunnies.size()); j++) {
			if( i== j) continue;
			int b = bunnies[j];
			if(isJumps(bunnies, a,b)) result++;
			
		}
	}
	
	return result;
	
}



/* solution 2   */
int BunnyPuzzle::theCount(vector <int> bunnies) {
	int result = 0;
	int len = int(bunnies.size());
	
	for(int i=0; i<len-1; i++) {
		int a = bunnies[i];
		int b = bunnies[i+1];
		if(i == 0 || i>0 && 2*a-b > bunnies[i-1]) result++;
		if(i==len-2 || i<len-2 && 2*b-a< bunnies[i+2] ) result++;
	
	}	
	return result;
}