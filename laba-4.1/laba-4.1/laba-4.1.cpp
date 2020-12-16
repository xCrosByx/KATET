#include <iostream>
#include"CCar.h"
#include <vector>
#include <stack>
#include <iterator>
#include <algorithm>

using namespace std;

template<typename T>
void Bubblesort(T* arr, int masSize) {


	for (int i = 0; i < masSize; i++)
	{

		for (int j = 1; j < masSize; j++)
		{
			if (arr[j - 1] > arr[j]) {

				T buffer = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = buffer;
			}
		}

	}

	for (int i = 0; i < masSize; i++)
	{

		cout << arr[i] << endl;

	}

}

template<typename K>
void Bubblesort(vector<K> arr) {


	int masSize = arr.size();


	for (int i = 0; i < masSize; i++)
	{

		for (int j = 1; j < masSize; j++)
		{
			if (arr[j - 1] > arr[j]) {

				K buffer = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = buffer;
			}
		}

	}

	for (int i = 0; i < masSize; i++)
	{

		cout << arr[i] << endl;

	}
}

////////////////////////////////

template<typename T>
void PatienceSorting(vector<T>& elements)
{
	vector<vector<T> > piles;

	for (int insertPos = 0; insertPos < elements.size(); insertPos++)
	{
		int middle, left = 0, right = piles.size() - 1;
		while (left <= right)
		{
			middle = (left + right) / 2;
			if (elements.at(insertPos) > piles.at(middle).back())
				left = middle + 1;
			else
				right = middle - 1;
		}

		if (left >= piles.size())
			piles.resize(piles.size() + 1);
		piles.at(left).push_back(elements.at(insertPos));
	}

	for (int insertPos = 0; insertPos < elements.size(); insertPos++)
	{
		elements.at(insertPos) = piles.front().back();
		piles.front().pop_back();

		if (piles.front().empty())
		{
			swap(piles.front(), piles.back());
			piles.resize(piles.size() - 1);
		}

		int root = 0, minChild = 0;

		while (root < piles.size())
		{
			int child1 = root * 2 + 1, child2 = root * 2 + 2;

			if (child1 < piles.size() && piles.at(child1).back() < piles.at(minChild).back())
				minChild = child1;
			if (child2 < piles.size() && piles.at(child2).back() < piles.at(minChild).back())
				minChild = child2;
			if (minChild != root)
			{
				swap(piles.at(minChild), piles.at(root));
				root = minChild;
			}
			else break;
		}
	}
	return;
}

template<typename T>
void PatienceSorting(T* elements, int size)
{
	vector<vector<T> > piles;

	for (int insertPos = 0; insertPos < size; insertPos++)
	{
		int middle, left = 0, right = piles.size() - 1;
		while (left <= right)
		{
			middle = (left + right) / 2;
			if (elements[insertPos] > piles.at(middle).back())
				left = middle + 1;
			else
				right = middle - 1;
		}

		if (left >= piles.size())
			piles.resize(piles.size() + 1);
		piles.at(left).push_back(elements[insertPos]);
	}

	for (int insertPos = 0; insertPos < size; insertPos++)
	{
		elements[insertPos] = piles.front().back();
		piles.front().pop_back();

		if (piles.front().empty())
		{
			swap(piles.front(), piles.back());
			piles.resize(piles.size() - 1);
		}

		int root = 0, minChild = 0;

		while (root < piles.size())
		{
			int child1 = root * 2 + 1, child2 = root * 2 + 2;

			if (child1 < piles.size() && piles.at(child1).back() < piles.at(minChild).back())
				minChild = child1;
			if (child2 < piles.size() && piles.at(child2).back() < piles.at(minChild).back())
				minChild = child2;
			if (minChild != root)
			{
				swap(piles.at(minChild), piles.at(root));
				root = minChild;
			}
			else break;
		}
	}
	return;
}

int main()
{

	CCar car[] = { CCar(143,"blue","bmw"),CCar(852,"red","bmw"),CCar(54,"green","audi"),CCar(417,"gray","vw") };
	//Bubblesort(car,4);

	vector<CCar> vec = { CCar(143,"blue","bmw"),CCar(852,"red","bmw"),CCar(54,"green","audi"),CCar(417,"gray","vw") };
	//Bubblesort(vec);
	PatienceSorting(car, 4);


	for (int i = 0; i < 4; i++)
	{

		cout << car[i] << endl;

	}

	return 0;
}