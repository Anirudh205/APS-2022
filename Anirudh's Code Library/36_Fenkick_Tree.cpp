//Fenwick Tree
//Binary Indexed Tree

#include <iostream>
using namespace std;

int getSum(int BITree[], int index){
	int sum = 0; // Initialize result
	index = index + 1; // index in BITree[] is 1 more than the index in arr[]	
	while (index>0){ // Traverse ancestors of BITree[index]
		sum += BITree[index]; // Add current element of BITree to sum
		index -= index & (-index); // Move index to parent node in getSum View
	}
	return sum;
}
void updateBIT(int BITree[], int n, int index, int val){	
	index = index + 1; // index in BITree[] is 1 more than the index in arr[]
	while (index <= n){ // Traverse all ancestors and add 'val'
	    BITree[index] += val; // Add 'val' to current node of BI Tree
	    index += index & (-index); // Update index to that of parent in update View
	}
}
int *constructBITree(int arr[], int n){
	int *BITree = new int[n+1]; // Create and initialize BITree[] as 0
	for (int i=1; i<=n; i++) BITree[i] = 0;
	for (int i=0; i<n; i++) updateBIT(BITree, n, i, arr[i]); // Store the actual values in BITree[] using update()
	return BITree;
}
int main(){
	int freq[] = {2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(freq)/sizeof(freq[0]);
	int *BITree = constructBITree(freq, n);
	cout << "Sum of elements in arr[0..5] is "<< getSum(BITree, 5);
	freq[3] += 6;
	updateBIT(BITree, n, 3, 6); //Update BIT for above change in arr[]
	cout << "\nSum of elements in arr[0..5] after update is "<< getSum(BITree, 5);
	return 0;
}
