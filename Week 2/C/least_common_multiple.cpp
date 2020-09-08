#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <assert.h>
#include <vector>
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <numeric>
#include <array>
#include <tuple>
#include <stdexcept>
#include <utility>
#include <functional>
#include <locale>
#define     all(v)            v.begin(),v.end()
#define     mp                     make_pair
#define     pb                     push_back
#define     endl                     '\n'

typedef   long long int               ll;



using namespace std;

ll gcd(ll a, ll b) {
	while (b) {
		ll tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}


ll lcm(ll a, ll b) {
	return a / (ll)(gcd(a, b))* b;
}
int main() {
	int a, b; 
	cin >> a >> b; 
	cout << lcm(a, b) << endl;
}
