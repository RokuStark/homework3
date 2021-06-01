#include <iostream>
#include <string>

int getValue()
{
	bool intager = false;
	std::string bufferVal;
	do 
	{
	std::cin >> bufferVal;
	std::cout << std::endl;
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
	std::cin >> &charBuffer;
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
void task1()
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
	std::cout << "Enter d value = ";
	int d = getValue();

	float result;
	result = static_cast<float>(a) * (static_cast<float>(b) +(static_cast<float>(c) / static_cast<float>(d)));
	std::cout << a << " * " << " ( " << b << " +( " << c << " / " << d << " )) = "<< result << std::endl;
	
}
void task2()
{
	std::cout << "Enter intager = ";
	int value = getValue();
	std::cout << std::endl;
	std::cout <<  (( value <= 21 ) ? 21 - value : (value - 21) * 2);
	std::cout << std::endl;
}
void task3()
{
	const int SIZE = 3;
	int aGame[SIZE][SIZE][SIZE]{0};
}


int main()
{
	do
	{
		//task1();
		//task2();
	
	

	} while (exitProg());
}

