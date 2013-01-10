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

class P8XMatrixTransformation {
public:
	string solve(vector <string>, vector <string>);
};

string P8XMatrixTransformation::solve(vector <string> original, vector <string> target) {
	map<char, int> orig;
	map<char,int >targ;
	
	for(int i = 0; i<target.size(); i++) {
		for(int j = 0; j<target[0].size(); j++) {
			orig[original[i][j]]++;
			targ[target[i][j]]++;
		}
	}
	
	if(orig['0'] == targ['0'] && orig['1'] == targ['1']) return "YES";
	else return "NO";
}


//Powered by [KawigiEdit] 2.0!
