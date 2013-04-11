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

class TheProgrammingContestDivTwo {
public:
	vector <int> find(int, vector <int>);
};
int getTotolPenalty(vector<int> requiredTime, int j) {
	int result = 0;
	
	for(int i=0; i<=j; i++) {
		result += requiredTime[i];
	}
	
	return result;
}
vector <int> TheProgrammingContestDivTwo::find(int T, vector <int> requiredTime) {
	vector<int> scores;
	int solved = 0;
	int penalty =0;
	int i = 0;
	int len = int(requiredTime.size());
	sort(requiredTime.begin(), requiredTime.end());
	
	while(T - requiredTime[i] >=0 && i < len) {
		solved++;
		penalty += getTotolPenalty(requiredTime, i);
		T -= requiredTime[i];
		i++;
	}
	
	scores.push_back(solved);
	scores.push_back(penalty);

	return scores;
}


//Powered by [KawigiEdit] 2.0!
