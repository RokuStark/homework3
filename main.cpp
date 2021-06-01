#include <iostream>
#include <string>

int getValue()
{
	bool intager = false;
	std::string bufferVal;
	do 
	{
	std::cin >> bufferVal;
	for (int i = 0; i < bufferVal.length(); i++)
	{
		if(bufferVal[i] >= '0' && bufferVal[i] <= '9')
		{
			intager = true;
		}
		else
		{
			std::cout << "Entry value no integer!!! Pls ty again." << std::endl;
			intager = false;
			break;
		}		
	}
	if(intager)	return std::stoi(bufferVal);
	} while (true);
}
bool exitProg()
{
	char charInput;
	do{
	std::cout << "Program compleate! Quit? y/n  = ";
	char charBuffer;
	std::cin >> charBuffer;
	std::cout << std::endl;
	if(charBuffer == 'y' || charBuffer == 'n')
	{
		charInput = charBuffer;
		break;
	}
	else
		std::cout << "Pls, try again" << std::endl;
	} while (true);

	return (charInput == 'y') ? 0 : 1;
}
void task1_4()
{
	std::cout << " a * (b +(c / d)) " << std::endl;
	std::cout << "Enter a value = ";
	int a = getValue();
	std::cout << std::endl;
	std::cout << "Enter b value = ";
	int b = getValue();
	std::cout << std::endl;
	std::cout << "Enter c value = ";
	int c = getValue();
	std::cout << std::endl;
	int d;
	do
	{
		std::cout << "Enter d value = ";
		d = getValue();
		if (d == 0)
			std::cout << "Cabbot be divided by 0 (zero)" << std::endl;
		else
			break;
	} while (true);

	float result;
	result = a * (b + (static_cast<float>(c) / d));
	std::cout << a << " * " << " ( " << b << " +( " << c << " / " << d << " )) = " << result << std::endl;

	// task 4
	extern int e_a;
	extern int e_b;
	extern int e_c;
	extern int e_d;
	result = e_a * (e_b + (static_cast<float>(e_c) / e_d));
	std::cout << " Variable to file sup.cpp " << std::endl;
	std::cout << e_a << " * " << " ( " << e_b << " +( " << e_c << " / " << e_d << " )) = " << result << std::endl;
	std::cout << std::endl;
}
void task2()
{
	std::cout << "Enter intager = ";
	int value = getValue();
	std::cout << std::endl;
	std::cout <<  (( value <= 21 ) ? 21 - value : (value - 21) * 2);
	std::cout << std::endl;
	std::cout << std::endl;
}
void task3()
{
	const int SIZE = 3;
	int buffer = SIZE * sizeof(int) + 1; // Вычисляем размер int , умножаем на размер массива + 1 (Правило учт. едениц)
	int aGame[SIZE][SIZE][SIZE]{0};
	int* pCenterCube = &aGame[0][0][0];
	*(pCenterCube+buffer) = 1;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			for (int k = 0; k < SIZE; k++)
			{
				std::cout << aGame[i][j][k] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
	


	std::cout << "Adress = " << (pCenterCube+buffer) << " , and = " << *(pCenterCube+buffer) << std::endl;
	std::cout << std::endl;
}


int main()
{
	do
	{
		task1_4();
		task2();
		task3();

	} while (exitProg());
}

