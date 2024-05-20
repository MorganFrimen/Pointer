#include <iostream>

int main()
{
	int foo = 1;
	int* ptr = &foo;

	std::cout << "*foo = " << foo << std::endl;
	std::cout << "&ptr = " << *ptr << std::endl;

	//int* fooPtr = nullptr, ptr = 0;

	int* fooPtr = new (std::nothrow) int;
	if (fooPtr != nullptr)
	{
		//Error
	}
	delete fooPtr;

	int* pointer1 = &foo;

	const int* pointer2 = &foo;
	pointer2 = nullptr;

	int* const pointer3 = &foo;
	*pointer3 = 15;

	const int* const pointer4 = &foo;

	int* nonConstPointer = const_cast<int*>(pointer2);

	int* randomAddress = reinterpret_cast<int*>(0x000000B8000000);

	const size_t ROWS = 4u;
	const size_t COLUMNS = 5u;
	int matrix[ROWS][COLUMNS] =
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
	};

	size_t rows = 4u, columns = 5u;
	int* heapMatrix = new int[rows * columns];

	if (heapMatrix == nullptr)
	{
		//Error
	}
	std::cout << "Heap Matrix[3][2]" << heapMatrix[3 * columns + 2] << std::endl;
	delete[] heapMatrix;

	int a = 100;
	int& ref = a;
	ref = 200;

	std::cin.get();
}