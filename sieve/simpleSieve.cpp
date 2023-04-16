#include <bits/stdc++.h>
using namespace std;

void simpleSieve(int limit)
{
	bool mark[limit];
	for(int i = 0; i<limit; i++) {
	mark[i] = true;
	}

	for (int p=2; p*p<limit; p++)
	{
		if (mark[p] == true)
		{
			// Update all multiples of p
			for (int i=p*p; i<limit; i+=p)
				mark[i] = false;
		}
	}

	// Print all prime numbers and store them in prime
	for (int p=2; p<limit; p++)
		if (mark[p] == true)
			cout << p << " ";
}

int main(){
    int limit;
    cin>>limit;
    simpleSieve(limit);
}
