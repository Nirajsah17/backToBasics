#include <bits/stdc++.h>
using namespace std;

void pQ();

int main()
{
	pQ();
	return 0;
}

void pQ(){
	priority_queue<int> pq;
	pq.push(2); // {2}
	pq.push(8); // {8,2}
	pq.emplace(5); // {8,5,2}
}