#include<iostream>
#include<string> // A useful STL for string operation
using namespace std;
string add(string x, string y) { // Implementing addition
	
	if(x.size() < y.size()) {
		swap(x, y);
	} // Make x the longest among those two. 

	int res[x.size() + 5];
	memset(res, 0, sizeof(res));
	// Use a array to compute.

	for(int i = x.size() - 1, j = y.size() - 1; j >= 0; i --, j --) {
		res[i] = (x[i] - '0') + (y[j] - '0');
	} // Doing from the end of x and y

	for(int i = x.size() - y.size() - 1; i >= 0; i --) {
		res[i] = x[i] - '0';
	} // Get the rest of the x
	int flag = 0;
	for(int i = x.size() - 1; i >= 0; i --) {
		if(res[i] >= 10) {
			if(i == 0) {
				flag = 1;
				res[i] -= 10;
				break;
				// No place to 進位, so use a addition variable to record.
			}
			res[i - 1] ++;
			res[i] -= 10;
			// When greater than ten, then 進位
		}
	}
	string z;
	if(flag == 1) {
		z += '1';
		// The biggest digit has something.
	}
	for(int i = 0; i < x.size(); i ++) {
		z += (char)(res[i] + '0');
		// Transform the res into string
	}
	return z;
}
string multiply(string x, string y) {
	string final_ans = "0";
	int now = 0; // Current number of suffixing 0
	for(int i = y.size() - 1; i >= 0; i --) {
		
		int res[x.size() + 5];
		memset(res, 0, sizeof(res));
		// Use a array to compute.

		for(int j = 0; j < x.size(); j ++) {
			res[j] = (x[j] - '0') * (y[i] - '0');
			// Multiplexing thingy.
		}

		int flag = 0;

		for(int j = x.size() - 1; j >= 0; j --) {
			if(res[j] >= 10) {
				if(j == 0) {
					flag = res[j] / 10;
					res[j] %= 10;
					break;
				}
				res[j - 1] += res[j] / 10;
				res[j] %= 10;
			}
			// 進位 thingy
		}

		string z = "";

		if(flag) {
			z += (char)(flag + '0');
		}

		for(int j = 0; j < x.size(); j ++) {
			z += (char)(res[j] + '0');
		}

		// transform array to string

		for(int j = 0; j < now; j ++) {
			z += '0';
		}
		now ++;

		// add the zeros, imagine the multiplexing proccess.

		final_ans = add(z, final_ans);

		// Add the current thing to the final_ans 
	}
	return final_ans;
}
int main() {
	string one, two; cin >> one >> two;
	string res = multiply(one, two);
	while(res.size() >= 2 && res[0] == '0') {
		res = res.substr(1, res.size() - 1);
	} // Remove the leading zeros, e.x. : 000009 => 9
	cout << res << '\n';
	return 0;
}