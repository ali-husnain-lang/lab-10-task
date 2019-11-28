

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{//Initilize the Programing.
	int arr[5] = { 1,2,3,4,5 };
	ofstream myfile("arr.txt");//
	int result = 0;
	string mystring;
	if (myfile)
	{
			cout << "\n \t Writing the  element of Array Are :";//Printing tha Element bof Array. 
cout << "\n The retrived Array is:";
	
		for (int j = 0; j < 5; j++)
		{
			myfile << arr[j] << " ";//Name of the Obgect.
		}
	}
	else
		cout << "\n Not Present:";
	myfile.close();
	ifstream file("arr.txt");
	if (file)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[j] << " ";
			result = result + arr[j];
		}
	}

	fstream (sum);
	sum.open("sum.txt", ios::app);
	sum << "\n Sum is:" << result;
	cout << endl;
	cout << "\n Sum Appended Successfully:";

}