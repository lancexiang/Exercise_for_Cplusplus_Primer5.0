#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int days(int i);
int lyric_2(int i);
int main()
{
	cout << "\t\tThe Twelve days of Christmas\t\t\n";
	for (int i = 1; i <= 12; i++)
	{
		days(i);
		lyric_2(i);
		continue;
	}
	system("pause");
	return 0;
}







//int main3()
//{
//	cout << "\t\tThe Twelve days of Christmas\t\t\n";
//	for (int i = 1; i <= 12; i++)
//	{
//		days(i);
//		lyric(i);
//		continue;
//	}
//	system("pause");
//	return 0;
//}
int days(int i)
{
	switch (i)
	{
	case 1:
		cout << "First\n";
		break;
	case 2:
		cout << "Second\n";
		break;
	case 3:
		cout << "Third\n";
		break;
	case 4:
		cout << "Fourth\n";
		break;
	case 5:
		cout << "Fifth\n";
		break;
	case 6:
		cout << "Sixth\n";
		break;
	case 7:
		cout << "Seventh\n";
		break;
	case 8:
		cout << "Eighth\n";
		break;
	case 9:
		cout << "Ninth\n";
		break;
	case 10:
		cout << "Tenth\n";
		break;
	case 11:
		cout << "Eleventh\n";
		break;
	case 12:
		cout << "Twelfth\n";
		break;
	default:
		break;
	}
	return 0;
}
int lyric_1(int i)
{
	switch (i)
	{
	case 1:
		cout << "\t\tOn the first day of Christmas\t\t\n"<<"\t\t  my true love sent to me :\t\t\n" <<"\t\t A Partridge in a Pear Tree\t\t\n";
		break;
	case 2:
		cout << "\t\tOn the second day of Christmas\t\t\n"<< "\t\t  my true love sent to me:\t\t\n"<<"\t\t     Two Turtle Doves\t\t\n"<<"\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	case 3:
		cout << "\t\tOn the third day of Christmas\t\t\n" << "\t\t  my true love sent to me:\t\t\n" <<"\t\t     Three French Hens\t\t\n"<< "\t\t      Two Turtle Doves\t\t\n" << "\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	case 4:
		cout << "\t\tOn the third day of Christmas\t\t\n" << "\t\t  my true love sent to me:\t\t\n" <<"\t\t    Four Calling Birds\t\t\n" <<"\t\t     Three French Hens\t\t\n" << "\t\t      Two Turtle Doves\t\t\n" << "\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	case 5:
		cout << "\t\tOn the third day of Christmas\t\t\n" << "\t\t  my true love sent to me:\t\t\n" <<"\t\t     Five Golden Rings\t\t\n"<< "\t\t    Four Calling Birds\t\t\n" "\t\t     Three French Hens\t\t\n" << "\t\t      Two Turtle Doves\t\t\n" << "\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	case 6:
		cout << "\t\tOn the third day of Christmas\t\t\n" << "\t\t  my true love sent to me:\t\t\n" <<"\t\t    Six Geese a Laying \t\t\n"<< "\t\t     Five Golden Rings\t\t\n" << "\t\t    Four Calling Birds\t\t\n" "\t\t     Three French Hens\t\t\n" << "\t\t      Two Turtle Doves\t\t\n" << "\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	case 7:
		cout << "\t\tOn the third day of Christmas\t\t\n" << "\t\t  my true love sent to me:\t\t\n" <<"\t\t   Seven Swans a Swimming\t\t\n"<< "\t\t    Six Geese a Laying \t\t\n" << "\t\t     Five Golden Rings\t\t\n" << "\t\t    Four Calling Birds\t\t\n" "\t\t     Three French Hens\t\t\n" << "\t\t      Two Turtle Doves\t\t\n" << "\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	case 8:
		cout << "\t\tOn the third day of Christmas\t\t\n" << "\t\t  my true love sent to me:\t\t\n" <<"\t\t    Eight Maids a Milking\t\t\n"<< "\t\t   Seven Swans a Swimming\t\t\n" << "\t\t    Six Geese a Laying \t\t\n" << "\t\t     Five Golden Rings\t\t\n" << "\t\t    Four Calling Birds\t\t\n" "\t\t     Three French Hens\t\t\n" << "\t\t      Two Turtle Doves\t\t\n" << "\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	case 9:
		cout << "\t\tOn the third day of Christmas\t\t\n" << "\t\t  my true love sent to me:\t\t\n" <<"\t\t    Nine Ladies Dancing\t\t\n"<< "\t\t    Eight Maids a Milking\t\t\n" << "\t\t   Seven Swans a Swimming\t\t\n" << "\t\t    Six Geese a Laying \t\t\n" << "\t\t     Five Golden Rings\t\t\n" << "\t\t    Four Calling Birds\t\t\n" "\t\t     Three French Hens\t\t\n" << "\t\t      Two Turtle Doves\t\t\n" << "\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	case 10:
		cout << "\t\tOn the third day of Christmas\t\t\n" << "\t\t  my true love sent to me:\t\t\n" <<"\t\t    Ten Lords a Leaping\t\t\n"<< "\t\t    Nine Ladies Dancing\t\t\n" << "\t\t    Eight Maids a Milking\t\t\n" << "\t\t   Seven Swans a Swimming\t\t\n" << "\t\t    Six Geese a Laying \t\t\n" << "\t\t     Five Golden Rings\t\t\n" << "\t\t    Four Calling Birds\t\t\n" "\t\t     Three French Hens\t\t\n" << "\t\t      Two Turtle Doves\t\t\n" << "\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	case 11:
		cout << "\t\tOn the third day of Christmas\t\t\n" << "\t\t  my true love sent to me:\t\t\n" <<"\t\t    Eleven Pipers Piping\t\t\n"<< "\t\t    Ten Lords a Leaping\t\t\n" << "\t\t    Nine Ladies Dancing\t\t\n" << "\t\t    Eight Maids a Milking\t\t\n" << "\t\t   Seven Swans a Swimming\t\t\n" << "\t\t    Six Geese a Laying \t\t\n" << "\t\t     Five Golden Rings\t\t\n" << "\t\t    Four Calling Birds\t\t\n" "\t\t     Three French Hens\t\t\n" << "\t\t      Two Turtle Doves\t\t\n" << "\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	case 12:
		cout << "\t\tOn the third day of Christmas\t\t\n" << "\t\t  my true love sent to me:\t\t\n" <<"\t\t    12 Drummers Drumming\t\t\n"<< "\t\t    Eleven Pipers Piping\t\t\n" << "\t\t    Ten Lords a Leaping\t\t\n" << "\t\t    Nine Ladies Dancing\t\t\n" << "\t\t    Eight Maids a Milking\t\t\n" << "\t\t   Seven Swans a Swimming\t\t\n" << "\t\t    Six Geese a Laying \t\t\n" << "\t\t     Five Golden Rings\t\t\n" << "\t\t    Four Calling Birds\t\t\n" "\t\t     Three French Hens\t\t\n" << "\t\t      Two Turtle Doves\t\t\n" << "\t\tand a Partridge in a Pear Tree\t\t\n";
		break;
	default:
		break;
	}
	return 0;
}
int lyric_2(int i)
{
	cout << "\t\tOn the first day of Christmas\t\t\n" << "\t\t  my true love sent to me :\t\t\n";
	switch (i)
	{
	case 12:
		cout <<"\t\t    12 Drummers Drumming\t\t\n";
	case 11:
		cout << "\t\t    Eleven Pipers Piping\t\t\n";
	case 10:
		cout << "\t\t    Ten Lords a Leaping\t\t\n";
	case 9:
		cout << "\t\t    Nine Ladies Dancing\t\t\n";
	case 8:
		cout << "\t\t    Eight Maids a Milking\t\t\n";
	case 7:
		cout << "\t\t   Seven Swans a Swimming\t\t\n";
	case 6:
		cout << "\t\t    Six Geese a Laying \t\t\n";
	case 5:
		cout << "\t\t     Five Golden Rings\t\t\n";
	case 4:
		cout << "\t\t    Four Calling Birds\t\t\n";
	case 3:
		cout << "\t\t     Three French Hens\t\t\n";
	case 2:
		cout << "\t\t     Two Turtle Doves\t\t\n";
	case 1:
		cout << "\t\t A Partridge in a Pear Tree\t\t\n";
		break;
	default:
		break;
	}
	return 0;
}