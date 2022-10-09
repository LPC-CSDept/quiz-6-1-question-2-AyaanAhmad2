#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
// Your code here
// ******************************

// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format
void printResult(int n1, int n2, int n3, int min);
void getInput(int &n1, int &n2, int &n3);
int findMin(int n1, int n2, int n3);

int main () {
	int n1,n2,n3;
	int min = 0;
	getInput(n1, n2, n3);
min = findMin(n1, n2, n3);
printResult(n1, n2, n3, min);

}


void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}

void getInput(int &n1, int &n2, int &n3) {
  cout << "Enter three num:" << endl;
  cin >> n1 >> n2 >> n3;
}

int findMin(int n1, int n2, int n3) {
 int min = 0;
  if ((n1 <= n2) && (n1 <= n3)) {
    min = n1;
  } else if ((n2 <= n1) && (n2 <= n3)) {
    min = n2;
  } else {
    min = n3;
  }

  return min;
}