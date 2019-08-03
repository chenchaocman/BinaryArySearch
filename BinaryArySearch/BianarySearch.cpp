#include<iostream>
using namespace std;

template<typename T>




int bianry_search_ary(const T& key, const T data[], const T &N)
{
	int low = 0;
	int high = N - 1;


	if (low> high)	 //从判断条件来看，那些排序一定要是正序的，倒叙就会出错。
	{
		return -1;
	}

	while (low<= high)
	{
		int mid = low + (high - low) / 2;
		
		T midEle = data[mid];

		if (midEle > key)
		{
			high = mid - 1;
		}
		else if (midEle < key)
		{
			low = mid + 1;
		}
		else
		{
			cout << "mid" << midEle << "key" << key << endl;
			return mid;
		};

	}

	     return -1;

}



int main()
{

	int a[5] = { 2,3,4,8,11 };

	int key = bianry_search_ary(-2, a, 5);

	cout << "this is " << key << endl;

	return 0;


}

















