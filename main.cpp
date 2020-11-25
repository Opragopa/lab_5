#include<iostream>
#include <iomanip>
#include <string>
#include <ctime>

//10) Количество столбцов, содержащих повторяющиеся элементы

int** creatingMatrix(int i, int j) // создание матрицы
{
	//выделение памяти под двумерный массив;
	int** output = new int* [i]; // i строк
	for (int count = 0; count < i; count++)
	{
		output[count] = new int[j]; // j столбцов
	}

	//инициализация двумерного массива;
	for (int row = 0; row < i; row++)
	{
		for (int col = 0; col < j; col++)
		{
			output[row][col] = rand() % 5 + 1; // случайно генерируемые числа
		}
	}
	std::cout << "\n";
	return output;
}
template < typename T >
void printMatrix(T& address, int rows, int columns)  //вывод матрицы на в cout
{ 
	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < columns; j++) 
		{
			std::cout << "(" << i << "," << j << ") = " << address[i][j] << "\t";
			//std::cout << output << "\t";
			//std::cout << matrix[i][j] << "\t";
		}
		std::cout << '\n';
	}
}

// 0 - false
// 1 - true
bool inputValidation()
{
	bool isCorrect = 1;
	while (isCorrect)
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Incorrect value, please try again.\n";
			std::cin.get();
			isCorrect = 0;
			continue;
		}
		else
		{
			isCorrect = 1;
			break;
		}
	}
	return isCorrect;
}

template < typename T >
void solveFunc(T& address, int row, int col) // проверка на то, есть ли в столбцах повторяющиеся элементы
{
	int count = 0;
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < row; i++)
		{
			for (int x = i+1; x < row; x++)	//brute force without repetitions
			{
				if (address[x][j] == address[i][j])
				{
					count++;
					std::cout << "\n " << count <<")\t(" << i << "," << j << ") AND ";
					std::cout << "(" << x << "," << j << ")  is equal";
					break;
				}
			}
			break;
		}
	}
	std::cout << "\nКоличество столбцов: " << count;
}



int main()
{
	{
		setlocale(LC_ALL, "Russian");
		srand(time(NULL)); // randomizer;
		std::string border = "\n-----------------------------------------------------------\n"; // разделитель

	//Static memory

	const int i = 5;
	const int j = 7;
	int staticMatrix[i][j] =
	{
		{1,2,3,4,5,6,7},
		{1,3,4,5,6,7,8},
		{3,2,5,6,7,8,9},
		{4,5,3,7,8,9,10},
		{5,6,7,4,9,10,11}
	}; // in this case answer is 4

	printMatrix(staticMatrix, i, j);
	solveFunc(staticMatrix, i, j);

	std::cout << border;
	}

	// Dynamic memory
	{
		int n;
		std::cout << "Enter number of rows: ";
		std::cin >> n;
		inputValidation(); // строки
		int m = 0;
		std::cout << "Enter number of columns: ";
		std::cin >> m;
		inputValidation(); // столбцы
		int** matrix = creatingMatrix(n, m);
		printMatrix(matrix, n, m);
		inputValidation();
		solveFunc(matrix, n, m); // решение созданного массива

		for (int i = 0; i < n; i++) delete[] matrix[i];
		delete[] matrix;
		matrix = NULL;
	}
	return -1;
}
