#include <iostream>
using namespace std;
const int MAXCOMMANDS = 100, SIZE = 20;
int turnRight(int);
int turnLeft(int);
void getCommands(int[][2]);
void movePen(int, int[][SIZE], int, int);
void printArray(const int[][SIZE]);
int main3()  //程序开始乌龟在【0，0】处，头朝右边->这种状态
{
	int floor[SIZE][SIZE] = { 0 }, command, direction = 0,
		commandArray[MAXCOMMANDS][2] = { 0 }, distance, count = 0;
	bool penDown = false;
	getCommands(commandArray);
	command = commandArray[count][0];

	while (command != 9)
	{
		switch (command)
		{
		case 1:
			penDown = false;
			break;
		case 2:
			penDown = true;
			break;
		case 3:
			direction = turnRight(direction);
			break;
		case 4:
			direction = turnLeft(direction);
			break;
		case 5:
			distance = commandArray[count][1];
			movePen(penDown, floor, direction, distance);
			break;
		case 6:
			cout << "\nThe drawing is:\n\n";
			printArray(floor);
			break;
		}
		command = commandArray[++count][0];
	}
	system("pause");
	return 0;
}
void getCommands(int commands[][2])
{
	int tempCommand;
	int i;
	cout << "Enter command (9 to end input): ";
	cin >> tempCommand;
	for (i = 0; tempCommand != 9 && i < MAXCOMMANDS; ++i)
	{
		commands[i][0] = tempCommand;
		if (tempCommand == 5)
		{
			cin.ignore(); // skip comma
			cin >> commands[i][1];
		}
		cout << "Enter command (9 to end input): ";
		cin >> tempCommand;
	}
	commands[i][0] = 9; // last command
}
int turnRight(int d)
{
	return ++d > 3 ? 0 : d;
}
int turnLeft(int d)
{
	return --d < 0 ? 3 : d;
}
void movePen(int down, int a[][SIZE], int dir, int dist)
{
	static int xPos = 0, yPos = 0;
	int j; // looping variable
	switch (dir)
	{
	case 0: // move to the right
		for (j = 1; j <= dist && yPos + j < SIZE; ++j)
		if (down)
			a[xPos][yPos + j] = 1;
		yPos += j - 1;
		break;
	case 1: // move down
		for (j = 1; j <= dist && xPos + j < SIZE; ++j)
		if (down)
			a[xPos + j][yPos] = 1;
		xPos += j - 1;
		break;
	case 2: // move to the left
		for (j = 1; j <= dist && yPos - j >= 0; ++j)
		if (down)
			a[xPos][yPos - j] = 1;
		yPos -= j - 1;
		break;
	case 3: // move up
		for (j = 1; j <= dist && xPos - j >= 0; ++j)
		if (down)
			a[xPos - j][yPos] = 1;
		xPos -= j - 1;
		break;
	}
}

void printArray(const int a[][SIZE])
{
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
			cout << (a[i][j] ? '*' : ' ');
		cout << endl;
	}
}
