#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <ctime>

int main(void)
{
	int a;
	int k;
	srand(static_cast<unsigned int>(time(0)));
	std::cout << "Enter array dim:" << std::endl;
	std::cin >> a;
	int* arr = new int[a];
	int* arr1 = new int[a - 4];
	std::cout << "Array:" << std::endl;
	for (int i = 0;i <= a;i++)
	{
	    arr[i] =rand()%21 ;
		//arr[i] = i ;
			std::cout <<"arr=" <<arr[i]<< std::endl;
		if (i > 1 && i < a -2)
		{
		//	std::cout <<"arr1 _u_ i=" <<i<< std::endl;
			arr1[i - 2] = arr[i];
			k++;
		//	std::cout << arr1[i]<<"arr1 i=" <<i<< std::endl;
		}

		std::cout << arr[i] << "arr i=" << i << std::endl;

		//std::cout << arr1[i] <<"arr1 i=" << i<<std::endl;
	}
	std::cout <<"____k=" << k<<std::endl;
	arr = (int*)realloc(arr, k);
	std::cout << "New Array:" << std::endl;
	for (int j = 0;j <k ;j++)
	{
		//std::cout << arr1[j]<<"arr1" << std::endl;
		arr[j] = arr1[j];
		std::cout << arr[j] << "arr" << std::endl;
	
}
		//arr1 = nullptr;
		//delete arr1;
	return 0;
}