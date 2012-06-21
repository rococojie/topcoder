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

int setNewPoint(int oldPoint, int basePoint, int k) {

	int newPoint = 0;

	if(basePoint == oldPoint) newPoint = basePoint;
	else newPoint = basePoint + k - 1;
	
	return newPoint;

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
		
		start = setNewPoint(start, bytes, k);
		end = setNewPoint( end, bytes, k);
		
	}

	return totalbytes;

}