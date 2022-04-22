#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <utility>
#include <queue>

using namespace std;


// A pair of pairs, first element is going to
// store value, second element index of array
// and third element index in the array.
typedef pair<int, pair<int, int> > pairIndex;//change name $ (side note this a defenition of a type of pair that can be created not the name of the varible)

// This function takes an array of arrays as an
// argument and all arrays are assumed to be
// sorted. It merges them together and prints
// the final sorted output.
vector<int> mergeKArrays(vector<vector<int> > arr)
{
	vector<int> output;

	// Create a min heap with k heap nodes. Every
	// heap node has first element of an array
	priority_queue<pairIndex, vector<pairIndex>, greater<pairIndex> > pairQueue;

	for (int i = 0; i < arr.size(); i++)
	{
		pairQueue.push({ arr[i][0], { i, 0 } });
	}
	// Now one by one get the minimum element
	// from min heap and replace it with next
	// element of its array
	while (!pairQueue.empty())
	{
		pairIndex curr = pairQueue.top();
		pairQueue.pop();

		// i ==> Array Number
		// j ==> Index in the array number(genuelly am lost how this works)
		int i = curr.second.first;
		int j = curr.second.second;

		output.push_back(curr.first);

		// The next element belongs to same array as
		// current.
		if (j + 1 < arr[i].size())
			pairQueue.push({ arr[i][j + 1], { i, j + 1 } });
	}

	return output;
}


int main()
{

	// of elements in an array
	vector<vector<int> > arr{ { 2, 5, 9, 21 },
							{ -1, 0, 2 },
							{ -10, 81, 121 },
							{ 4, 6, 12, 20, 150 } };

	vector<int> output = mergeKArrays(arr);

	cout << "Merged array is " << endl;
	for (auto x : output)
		cout << x << " ";

	return 0;
}
