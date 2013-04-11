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

class TheJediTestDiv2 {
public:
	int countSupervisors(vector <int>, int, int);
};

int getJediNum(int total, int J) {
	if(total <= 0) return 0;
	
	int result = (total + J - 1) / J;
	return result;
}
int TheJediTestDiv2::countSupervisors(vector <int> students, int Y, int J) {
	int minJedi = 10000000;
	
	for(int i=0; i<int(students.size()); i++) {
		int temp = getJediNum(students[i] - Y, J);
		
		for(int j=0; j<int(students.size()); j++) {
			if( i== j) continue;
			
			temp += getJediNum(students[j], J);
		}
	
		minJedi = min(temp, minJedi);
	}
	
	return minJedi;
}


//Powered by [KawigiEdit] 2.0!
