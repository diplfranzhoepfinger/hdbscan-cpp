#include<iostream>
#include<cstdio>
#include"Hdbscan/hdbscan.hpp"
using namespace std;

//using namespace csv;
#include <typeinfo>
#include <vector>
#include <list>


int main() {

	/*cout << "Hello World!" << endl;
	vector< vector<double>> x;
	cout << typeid(x).name() <<endl;
	Example example("../HDBSCANDataset/Dataset.csv");
	example.loadCsv(2);
	vector<vector <double>> dataset = example.dataset;

	for (int i = 0; i < dataset.size(); i++) {

		for (int j = 0; j < dataset[i].size(); j++) {

			cout << dataset[i][j] << ",";

		}

		cout << endl;

	}
	vector <cluster> test;
	cluster v[100];
	test.reserve(100);
	cluster expected;
	test.push_back(expected);
	printf("%p\n", &expected);
	v[0] = expected;
	cout << &v[0] << endl;
	//cluster real = *std::find(test.begin(), test.end(), expected);
	for (auto i = test.begin(); i != test.end(); ++i)
		std::cout << &(*i) << ' ';
	for (int i = 0; i < test.size(); ++i)
		printf("%p\n", &test[i]);

	int e = 100;
	int a[10];
	a[0] = e;
	cout << &a[0] << " " << &e << endl;
	*/
	Hdbscan hdbscan("../HDBSCANDataset/pecan-2000_cleaned.csv");
	hdbscan.loadCsv(20, true);
	vector<vector <double>> dataset = hdbscan.dataset;
	hdbscan.execute(20, 20, "Euclidean");
	hdbscan.displayResult();
	return 0;

}
