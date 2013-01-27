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

class RedAndGreen {
public:
	int minPaints(string);
};

int RedAndGreen::minPaints(string row) {	
	int minNum = row.size();
	string tempRow(minNum,'G');

	for(int i=0;i<=row.size(); i++ ) {
		int temp   = 0;
		for(int j=0; j<row.size(); j++) {
			if(row[j] !=tempRow[j]) temp++;
		}
		
		minNum =min(minNum, temp);
		tempRow[i] = 'R';
	}
	
	return minNum;
}


//Powered by [KawigiEdit] 2.0!
