#include<iostream>
using namespace std;

int main () {
	long long a, limit;
	long long a_1,limit_1;
	int c = 0;
	
	while (cin >> a >> limit) {
		if (a < 0 && limit < 0) 
            break;
		a_1 = a;
		limit_1 = limit;
		
		++c;
		
		int counter = 0;
		while (a <= limit){
			++counter;
			if (a == 1) break;
			else if ( a % 2 == 0 ) a /= 2;
			else a = 3 * a + 1;
		} while (a <= limit);
		
		cout << "Case " << c << ": A = " << a_1 << ", limit = " << limit_1 << ", number of terms = " << counter << endl;
	}
	
	return 0;
}
