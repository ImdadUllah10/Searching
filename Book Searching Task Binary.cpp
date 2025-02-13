#include<iostream>
using namespace std;
int main() {
	int bookIDs[] = { 357,123,478,234,568,190,356,689,257,145 };
	int n = sizeof(bookIDs) / sizeof(bookIDs[0]);
	//bubble sorting in desc order
	for (int i = 0;i < n - 1;i++) {
		for (int j = 0;j < n - i - 1;j++) {
			if (bookIDs[j] < bookIDs[j + 1]) {
				swap(bookIDs[j], bookIDs[j + 1]);
			}
		}
	}
	//display sorted book ids
	for (int i = 0;i < n;i++) {
		cout << bookIDs[i] << " ";
	}
	cout << endl;
	//searching for book id
	int targetID;
	cout << "enter book id to search:";
	cin>> targetID;

	int left = 0;
	int right = n - 1;
	int foundindex = -1;
	while (left <= right) {
		int mid = left + (right = left) / 2;
			if(bookIDs[mid]==targetID){
				foundindex = mid;
				break;
			}else if(bookIDs[mid]<targetID) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
	}
	//Display result
	if (foundindex != -1) {
		cout << "BookID found at position:" << foundindex + 1 << endl;
	}
	else {
		cout << "book id not found:";
		cout << endl;
	}
	

	return 0;
}