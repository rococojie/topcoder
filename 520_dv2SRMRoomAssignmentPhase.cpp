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

class SRMRoomAssignmentPhase {
public:
	int countCompetitors(vector <int>, int);
};

int SRMRoomAssignmentPhase::countCompetitors(vector <int> ratings, int K) {
	int round = 0;
	int myRating = ratings[0];
	bool isFindMe = false;
	sort(ratings.rbegin(), ratings.rend());

	for(int i=0;i<ratings.size(); i += K) {
		for(int j=0; j<K; j++) {
			if(myRating == ratings[i+j] ) {
				isFindMe = true;
				break;
			}
		}
		
		if(isFindMe) break;
		else round++;
	}

	return round;	
}


//Powered by [KawigiEdit] 2.0!
