#include <vector>
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

using namespace std;

class ContiguousCacheEasy {
public:
	int bytesRead(int, int, vector <int>);
};

int getByte(int bas, int byte){
	return bytes>k?k:bytes;
}

int getBasePoint(int newPoint, int start, int end){
	
	if(newPoint > end)  return end;
	else if( newPoint < start )  return start;
	else  return newPoint;
}

void setNewStart(int &start, int basePoint, int k) {
	if(basePoint == start) start = basePoint;
	else start = basePoint + k - 1;

}

void setNewEnd(int &end, int basePoint, int k) {
	if(basePoint == end) end = basePoint;
	else end = basePoint + k - 1;

}
int ContiguousCacheEasy::bytesRead(int n, int k, vector <int> addresses) {

	int startPoint = 0;
	int endPoint = k - 1;

	int totalbytes = 0;
	for (int i=0; i<addresses.size(); i++) {
		if(addresses[i] <= endPoint && addresses[i] >= startPoint) continue;
		int bytes = 0;
		int basePoint = getBasePoint(addresses[i], startPoint, endPoint);
		bytes = abs(addresses[i] - basePoint);
		tatolbytes += getByte(k, bytes);
		
		setNewStart(start, bytes, k);
		setNewEnd( end, base, k);
		
	}

	return totalbytes;

}