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

class TwiceString {
public:
	string getShortest(string);
};

string TwiceString::getShortest(string s) {
	string temp;
	int pos = 0;
	int tPos = 1;
	
	while(string::npos != (tPos = s.find(s[0],tPos))) {
		bool isOK = true;
		for(int i=tPos; i<s.size(); i++) {
			if(s[i] == s[pos])  pos++;
			else  {
				isOK  = false;
				pos = 0;
				break;
			}
		}
		
		if(isOK)  { break; }
		else tPos++;
	}
	
	temp = s+ s.substr(pos);
	
	return temp;
	
}


//Powered by [KawigiEdit] 2.0!
