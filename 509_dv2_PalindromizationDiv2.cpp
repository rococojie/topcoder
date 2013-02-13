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

class PalindromizationDiv2 {
public:
	int getMinimumCost(int);
};
bool isPalindromic(int x){
	stringstream ss;
	string s;
	bool result = true;
	ss<<x;
	ss>>s;
	for(int j=0, k = s.size()-1; j<=k; j++, k--) {
		if(s[j] != s[k]) {
			result = false;
			break;
		}
	}
	
	return result;
}

int PalindromizationDiv2::getMinimumCost(int X) {
	if(isPalindromic(X)) return 0;
	
	int result = 100000;
	int temp = X-1;
	while(temp >=0) {
		if(isPalindromic(temp)) break;
		else temp--; 
	}
	result = min(result, X- temp);
	temp = X+1;
	while(temp <=100000) {
		if(isPalindromic(temp)) break;
		else temp++; 
	}
	
	result = min(result, temp-X);
	return result;
}


//Powered by [KawigiEdit] 2.0!
