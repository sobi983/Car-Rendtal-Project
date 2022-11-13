#include"iostream"
#include"string"
#include"fstream"
#include"conio.h"
#include"Windows.h"
using namespace std;
void intro() {
	system("color F1");
	cout << "\t   -------------------------------------------------------" << endl; Sleep(1000);
	cout << "\t   *******************************************************" << endl << endl; Sleep(1000);
	cout << "\t   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl << endl; Sleep(1000);
	cout << "\t                             #" << endl; Sleep(1000);
	cout << "\t                             #" << endl; Sleep(1000);
	cout << "\t                             #" << endl << endl; Sleep(1000);
	cout << "\t\t\t          WELCOME " << endl << endl; Sleep(1000);
	cout << "\t\t\t            TO" << endl << endl; Sleep(1000);
	cout << "\t\t\t     CAR RENTAL SYSTEM " << endl << endl; Sleep(1000);
	cout << "\t                             #" << endl; Sleep(1000);
	cout << "\t                             #" << endl; Sleep(1000);
	cout << "\t                             #" << endl << endl; Sleep(1000);
	cout << "\t   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl << endl; Sleep(1000);
	cout << "\t   *******************************************************" << endl << endl; Sleep(1000);
	cout << "\t   -------------------------------------------------------" << endl; Sleep(1000);
	cout << "\t                             #" << endl; Sleep(1000);
	cout << "\t                             #" << endl << endl; Sleep(1000);
	cout << "\t        PRESENTED BY:-" << endl; Sleep(1000);
	cout << "\t                       SOHAIB(SOBI)" << endl; Sleep(1000);
	cout << "\t                       AWAIS" << endl; Sleep(1000);
	cout << "\t                       MUTAAL" << endl; Sleep(1000);
	for (int i = 0; i < 5; i++) {
		cout << endl;
		Sleep(1000);
	}
	cout << "\t\t PRESS ANY TO CONTINUE THE SYSTEM.." << endl;
	_getch();
	system("cls");
}
int login() {
	string username = "login00";
	string check;
	string password = "ixak";
	string checkp;
	char a;
	while (1) {
		for (int i = 0; i < 7; i++) {
			cout << endl;
		}
		system("color 02");
	label:
		cout << "\t\t\t    ENTER 1 TO LOGIN THE SYSTEM\n\t\t\t    ENTER 0 TO LOG OFF:- " << endl;
		cout << "\t\t\t                        "; a = _getch();

		if (a == '1') {
			system("cls");
			system("color F0");
			cout << "\n\n\n\n\n\n\n\n\n\n";
			cout << "\t\t^^^^^ ^^^^^^^ ^^^^^^^^^^^^^^^^^^^^ ^^^^^^^ ^^^^^" << endl << endl;
			cout << "\t\t\t      ENTER THE USERNAME:- ";
			cin >> check;
			cout << endl;
			cout << "\t\t\t      ENTER THE PASSWORD:- ";
			cin >> checkp;
			cout << endl << endl;
			cout << "\t\t^^^^^ ^^^^^^^ ^^^^^^^^^^^^^^^^^^^^ ^^^^^^^ ^^^^^" << endl;
			if (check == username && checkp == password) {
				system("cls");
				system("color F1");
				for (int i = 0; i < 12; i++)
					cout << endl;
				cout << "\t\t\t ~^* W . E . L . C . O . M . E *^~";
				Sleep(3000);
				system("cls");
				break;
			}
			else {
				cout << "\n\n\n\n";
				cout << "\t\t Sorry you have enetered wrong username or password" << endl << endl;
				Sleep(3000);
				system("cls");
			}
		}

		if (a == '0') {
			system("color 0F");
			exit(0);
		}
		else
			goto label;
	}
}
void menu() {
	system("color 74");
	for (int i = 0; i <5 - 1; i++)
		cout << endl;
	cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t |                                                            |\n";
	cout << "\t |                         : < MENU > :                       |\n\t |                                                            |\n";
	cout << "\t |     |************************************************|     |\n\t |                                                            |\n";
	cout << "\t |     |   PRESS 1    :   FOR AVAILABILITY OF ALL CARS  |     |\n\t |                                                            |\n";
	cout << "\t |     |   PRESS 2    :   TO BOOK A CAR                 |     |\n\t |                                                            |\n";
	cout << "\t |     |                                                |     |\n\t |                                                            |\n";
	cout << "\t |     |   PRESS 0    :            EXIT                 |     |\n\t |                                                            |\n";
	cout << "\t |     ***************************************************    |\n\t |                                                            |\n";
	cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
void menu1() {
	system("color 74");
	for (int i = 0; i <5 - 1; i++)
		cout << endl;
	cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t |                                                            |\n";
	cout << "\t |                         : < CARS > :                       |\n\t |                                                            |\n";
	cout << "\t |     |************************************************|     |\n\t |                                                            |\n";
	cout << "\t |     |   PRESS 1    :            TOYOTA               |     |\n\t |                                                            |\n";
	cout << "\t |     |   PRESS 2    :            SUZUKI               |     |\n\t |                                                            |\n";
	cout << "\t |     |   PRESS 3    :            HONDA                |     |\n\t |                                                            |\n";
	cout << "\t |     |   PRESS 4    :             BMW                 |     |\n\t |                                                            |\n";
	cout << "\t |     ***************************************************    |\n\t |                                                            |\n";
	cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
void menu2() {
	system("color 74");
	for (int i = 0; i <5 - 1; i++)
		cout << endl;
	cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t |                                                            |\n";
	cout << "\t |                         : < SELECT > :                     |\n\t |                                                            |\n";
	cout << "\t |     |************************************************|     |\n\t |                                                            |\n";
	cout << "\t |     |   PRESS 1    :           TO RENT A CAR         |     |\n\t |                                                            |\n";
	cout << "\t |     |   PRESS 2    :     GO BACK TO THE MAIN MENU    |     |\n\t |                                                            |\n";
	cout << "\t |     |                                                |     |\n\t |                                                            |\n";
	cout << "\t |     |                                                |     |\n\t |                                                            |\n";
	cout << "\t |     ***************************************************    |\n\t |                                                            |\n";
	cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
void termsandcondition() {
	system("cls");
	system("color 02");
	cout << "loading..." << endl;
	Sleep(3000);
	system("cls");
	system("color F0");
	cout << "Terms and Conditions of Rental Agreement Which limit your rights - please read carefully\n";
	for (int i = 0; i < 10; i++)
	{
		Sleep(1000);
		cout << "\t\t\t\t  .\n";
	}

}
void thankyou() {
	system("cls");
	system("color F1");
	for (int i = 0; i < 12; i++)
		cout << endl;
	cout << "\t\t\t ~^* T . H . A . N . K . Y . O . U *^~";
	Sleep(3000);
	system("cls");
}
class cars {
protected:
	string *carcatagories, *numberplate, *colour; int *modelnumber; int *price;
public:
	virtual void fcarcatagories() = 0;
	virtual void fnumberplate() = 0;
	virtual void displayallinfo() = 0;
	virtual void fcolour() = 0;
	virtual void fmodelnumber() = 0;
	virtual void fprice() = 0;
};
class toyota :public cars {
protected:
	string rc, rn, rcl; int rm; double rp; int numberoflinesc, numberoflinesn, numberoflinec, numberoflinem; int numberoflinep;
public:
	void setnumberoflines_allocate() {
		ifstream read; read.open("toyota_car_catagories.txt"); string k;
		if (!read) {
			cout << "not opened" << endl;
		}
		numberoflinesc = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinesc++;
		}
		read.close();
		carcatagories = new string[numberoflinesc];
	}
	void fcarcatagories() {
		ifstream read;
		read.open("toyota_car_catagories.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinesc == 0)
				carcatagories[i] = "NULL";
			else
			{
				read >> rc;
				carcatagories[i] = rc;
			}
			
		}
		read.close();
	}




	void setnumberoflinesn_allocate() {
		ifstream read; read.open("toyota_number_plate.txt"); string k;
		numberoflinesn = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinesn++;
		}
		read.close();
		numberplate = new string[numberoflinesn];
	}
	void fnumberplate() {
		ifstream read;
		read.open("toyota_number_plate.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinesn == 0)
				numberplate[i] = "NULL";
			else
			{
				read >> rn;
				numberplate[i] = rn;
			}
		}
		read.close();
	}


	void setnumberoflinesc_allocate() {
		ifstream read; read.open("toyota_colour.txt");
		string k;
		numberoflinec = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinec++;
		}
		read.close();
		colour = new string[numberoflinec];
	}
	void  fcolour() {
		ifstream read;
		read.open("toyota_colour.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinec == 0)
				colour[i] = "NULL";
			else
			{
				read >> rcl;
				colour[i] = rcl;
			}
		}
		read.close();
	}


	void setnumberoflinesm_allocate() {
		ifstream read; read.open("toyota_model_number.txt");
		int k;
		numberoflinem = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinem++;
		}
		read.close();
		modelnumber = new int[numberoflinem];
	}
	void  fmodelnumber() {
		ifstream read;
		read.open("toyota_model_number.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinem == 0)
				modelnumber[i] = 0;
			else
			{
				read >> rm;
				modelnumber[i] = rm;
			}
		}
		read.close();
	}

	void setnumberoflinesp_allocate() {
		ifstream read; read.open("toyota_price.txt");
		int k;
		numberoflinep = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinep++;
		}
		read.close();
		price = new int[numberoflinep];
	}
	void  fprice() {
		ifstream read;
		read.open("toyota_price.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinep == 0)
				price[i] = 0;
			else
			{
				read >> rp;
				price[i] = rp;
			}
		}
		read.close();
	}
	void displayallinfo() {
		for (int i = 0; i < 5; i++)
			cout << endl;
		cout << " |                      : < TOYOTA CARS > :                   |       \n\n";
		cout << " |  CAR    |   COLOUR    |    MODEL NO.   |   PLATE NUMBER    |    PRICE   \n\n";
		for (int i = 0; i < numberoflinesc; i++) {
			cout << " | " << carcatagories[i] << "        " << colour[i] << "           " << modelnumber[i] << "            " << numberplate[i] << "             " << price[i] << endl;
		}
	}
	void renting(string f) {
		for (int i = 0; i < numberoflinesc; i++) {
			if (f == carcatagories[i])
			{
				ofstream write;
				write.open("toyota_car_catagories.txt");
				if (!write)
					cout << "Overriting toyota file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << carcatagories[j] << endl;
					if (j == numberoflinesc - 1)
						write << carcatagories[j];

				}
				write.close();

				write.open("toyota_number_plate.txt");
				if (!write)
					cout << "Overriting toyota file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << numberplate[j] << endl;
					if (j == numberoflinesc - 1)
						write << numberplate[j];

				}
				write.close();

				write.open("toyota_colour.txt");
				if (!write)
					cout << "Overriting toyota file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << colour[j] << endl;
					if (j == numberoflinesc - 1)
						write << colour[j];

				}
				write.close();

				write.open("toyota_model_number.txt");
				if (!write)
					cout << "Overriting toyota file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << modelnumber[j] << endl;
					if (j == numberoflinesc - 1)
						write << modelnumber[j];

				}
				write.close();

				write.open("toyota_price.txt");
				if (!write)
					cout << "Overriting toyota file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << price[j] << endl;
					if (j == numberoflinesc - 1)
						write << price[j];

				}
				write.close();
				numberoflinesc = numberoflinesc - 1;
			}
		}
	}
};
class suzuki :public cars {
protected:
	string rc, rn, rcl; int rm; double rp; int numberoflinesc, numberoflinesn, numberoflinec, numberoflinem; int numberoflinep;
public:
	void setnumberoflines_allocate() {
		ifstream read; read.open("suzuki_car_catagories.txt"); string k;
		if (!read) {
			cout << "not opened" << endl;
		}
		numberoflinesc = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinesc++;
		}
		read.close();
		carcatagories = new string[numberoflinesc];
	}
	void fcarcatagories() {
		ifstream read;
		read.open("suzuki_car_catagories.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinesc == 0)
				carcatagories[i] = "NULL";
			else
			{
				read >> rc;
				carcatagories[i] = rc;
			}
		}
		read.close();
	}




	void setnumberoflinesn_allocate() {
		ifstream read; read.open("suzuki_number_plate.txt"); string k;
		numberoflinesn = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinesn++;
		}
		read.close();
		numberplate = new string[numberoflinesn];
	}
	void fnumberplate() {
		ifstream read;
		read.open("suzuki_number_plate.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinesn == 0)
				numberplate[i] = "NULL";
			else
			{
				read >> rn;
				numberplate[i] = rn;
			}
		}
		read.close();
	}


	void setnumberoflinesc_allocate() {
		ifstream read; read.open("suzuki_colour.txt");
		string k;
		numberoflinec = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinec++;
		}
		read.close();
		colour = new string[numberoflinec];
	}
	void  fcolour() {
		ifstream read;
		read.open("suzuki_colour.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinec == 0)
				colour[i] = "NULL";
			else
			{
				read >> rcl;
				colour[i] = rcl;
			}
		}
		read.close();
	}


	void setnumberoflinesm_allocate() {
		ifstream read; read.open("suzuki_model_number.txt");
		int k;
		numberoflinem = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinem++;
		}
		read.close();
		modelnumber = new int[numberoflinem];
	}
	void  fmodelnumber() {
		ifstream read;
		read.open("suzuki_model_number.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinem == 0)
				modelnumber[i] = 0;
			else
			{
				read >> rm;
				modelnumber[i] = rm;
			}
		}
		read.close();
	}

	void setnumberoflinesp_allocate() {
		ifstream read; read.open("suzuki_price.txt");
		int k;
		numberoflinep = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinep++;
		}
		read.close();
		price = new int[numberoflinep];
	}
	void  fprice() {
		ifstream read;
		read.open("suzuki_price.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinep == 0)
				price[i] = 0;
			else
			{
				read >> rp;
				price[i] = rp;
			}
		}
		read.close();
	}
	void displayallinfo() {
		for (int i = 0; i < 5; i++)
			cout << endl;

		cout << " |                      : < SUZUKI CARS > :                   |       \n\n";
		cout << " |  CAR    |   COLOUR    |    MODEL NO.   |   PLATE NUMBER    |    PRICE   \n\n";
		for (int i = 0; i < numberoflinesc; i++) {
			cout << " | " << carcatagories[i] << "        " << colour[i] << "           " << modelnumber[i] << "            " << numberplate[i] << "             " << price[i] << endl;
		}
	}
	void renting(string f) {
		for (int i = 0; i < numberoflinesc; i++) {
			if (f == carcatagories[i])
			{
				ofstream write;
				write.open("suzuki_car_catagories.txt");
				if (!write)
					cout << "Overriting SUZUKI file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << carcatagories[j] << endl;
					if (j == numberoflinesc - 1)
						write << carcatagories[j];

				}
				write.close();

				write.open("suzuki_number_plate.txt");
				if (!write)
					cout << "Overriting SUZUKI file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << numberplate[j] << endl;
					if (j == numberoflinesc - 1)
						write << numberplate[j];

				}
				write.close();

				write.open("suzuki_colour.txt");
				if (!write)
					cout << "Overriting SUZUKI file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << colour[j] << endl;
					if (j == numberoflinesc - 1)
						write << colour[j];

				}
				write.close();

				write.open("suzuki_model_number.txt");
				if (!write)
					cout << "Overriting SUZUKI file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << modelnumber[j] << endl;
					if (j == numberoflinesc - 1)
						write << modelnumber[j];

				}
				write.close();

				write.open("suzuki_price.txt");
				if (!write)
					cout << "Overriting SUZUKI file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << price[j] << endl;
					if (j == numberoflinesc - 1)
						write << price[j];

				}
				write.close();

			}
		}
	}
};
class honda :public cars {
protected:
	string rc, rn, rcl; int rm; double rp; int numberoflinesc, numberoflinesn, numberoflinec, numberoflinem; int numberoflinep;
public:
	void setnumberoflines_allocate() {
		ifstream read; read.open("honda_car_catagories.txt"); string k;
		if (!read) {
			cout << "not opened" << endl;
		}
		numberoflinesc = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinesc++;
		}
		read.close();
		carcatagories = new string[numberoflinesc];
	}
	void fcarcatagories() {
		ifstream read;
		read.open("honda_car_catagories.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinesc == 0)
				carcatagories[i] = "NULL";
			else
			{
				read >> rc;
				carcatagories[i] = rc;
			}
		}
		read.close();
	}




	void setnumberoflinesn_allocate() {
		ifstream read; read.open("honda_number_plate.txt"); string k;
		numberoflinesn = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinesn++;
		}
		read.close();
		numberplate = new string[numberoflinesn];
	}
	void fnumberplate() {
		ifstream read;
		read.open("honda_number_plate.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinesn == 0)
				numberplate[i] = "NULL";
			else
			{
				read >> rn;
				numberplate[i] = rn;
			}
		}
		read.close();
	}


	void setnumberoflinesc_allocate() {
		ifstream read; read.open("honda_colour.txt");
		string k;
		numberoflinec = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinec++;
		}
		read.close();
		colour = new string[numberoflinec];
	}
	void  fcolour() {
		ifstream read;
		read.open("honda_colour.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinec == 0)
				colour[i] = "NULL";
			else
			{
				read >> rcl;
				colour[i] = rcl;
			}
		}
		read.close();
	}


	void setnumberoflinesm_allocate() {
		ifstream read; read.open("honda_model_number.txt");
		int k;
		numberoflinem = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinem++;
		}
		read.close();
		modelnumber = new int[numberoflinem];
	}
	void  fmodelnumber() {
		ifstream read;
		read.open("honda_model_number.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinem == 0)
				modelnumber[i] = 0;
			else
			{
				read >> rm;
				modelnumber[i] = rm;
			}
		}
		read.close();
	}

	void setnumberoflinesp_allocate() {
		ifstream read; read.open("honda_price.txt");
		int k;
		numberoflinep = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinep++;
		}
		read.close();
		price = new int[numberoflinep];
	}
	void  fprice() {
		ifstream read;
		read.open("honda_price.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinep == 0)
				price[i] = 0;
			else
			{
				read >> rp;
				price[i] = rp;
			}
		}
		read.close();
	}
	void displayallinfo() {
		for (int i = 0; i < 5; i++)
			cout << endl;

		cout << " |                       : < HONDA CARS > :                   |       \n\n";
		cout << " |  CAR    |   COLOUR    |    MODEL NO.   |   PLATE NUMBER    |    PRICE   \n\n";
		for (int i = 0; i < numberoflinesc; i++) {
			cout << " | " << carcatagories[i] << "        " << colour[i] << "           " << modelnumber[i] << "            " << numberplate[i] << "             " << price[i] << endl;
		}
	}
	void renting(string f) {
		for (int i = 0; i < numberoflinesc; i++) {
			if (f == carcatagories[i])
			{
				ofstream write;
				write.open("honda_car_catagories.txt");
				if (!write)
					cout << "Overriting HONDA file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << carcatagories[j] << endl;
					if (j == numberoflinesc - 1)
						write << carcatagories[j];

				}
				write.close();

				write.open("honda_number_plate.txt");
				if (!write)
					cout << "Overriting HONDA file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << numberplate[j] << endl;
					if (j == numberoflinesc - 1)
						write << numberplate[j];

				}
				write.close();

				write.open("honda_colour.txt");
				if (!write)
					cout << "Overriting HONDA file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << colour[j] << endl;
					if (j == numberoflinesc - 1)
						write << colour[j];

				}
				write.close();

				write.open("honda_model_number.txt");
				if (!write)
					cout << "Overriting HONDA file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << modelnumber[j] << endl;
					if (j == numberoflinesc - 1)
						write << modelnumber[j];

				}
				write.close();

				write.open("honda_price.txt");
				if (!write)
					cout << "Overriting HONDA file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << price[j] << endl;
					if (j == numberoflinesc - 1)
						write << price[j];

				}
				write.close();
			}
		}
	}
};
class bmw :public cars {
protected:
	string rc, rn, rcl; int rm; double rp; int numberoflinesc, numberoflinesn, numberoflinec, numberoflinem; int numberoflinep;
public:
	void setnumberoflines_allocate() {
		ifstream read; read.open("bmw_car_catagories.txt"); string k;
		if (!read) {
			cout << "not opened" << endl;
		}
		numberoflinesc = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinesc++;
		}
		read.close();
		carcatagories = new string[numberoflinesc];
	}
	void fcarcatagories() {
		ifstream read;
		read.open("bmw_car_catagories.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinesc == 0)
				carcatagories[i] = "NULL";
			else
			{
				read >> rc;
				carcatagories[i] = rc;
			}
		}
		read.close();
	}




	void setnumberoflinesn_allocate() {
		ifstream read; read.open("bmw_number_plate.txt"); string k;
		numberoflinesn = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinesn++;
		}
		read.close();
		numberplate = new string[numberoflinesn];
	}
	void fnumberplate() {
		ifstream read;
		read.open("bmw_number_plate.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinesn == 0)
				numberplate[i] = "NULL";
			else
			{
				read >> rn;
				numberplate[i] = rn;
			}
		}
		read.close();
	}


	void setnumberoflinesc_allocate() {
		ifstream read; read.open("bmw_colour.txt");
		string k;
		numberoflinec = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinec++;
		}
		read.close();
		colour = new string[numberoflinec];
	}
	void  fcolour() {
		ifstream read;
		read.open("bmw_colour.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinec == 0)
				colour[i] = "NULL";
			else
			{
				read >> rcl;
				colour[i] = rcl;
			}
		}
		read.close();
	}


	void setnumberoflinesm_allocate() {
		ifstream read; read.open("bmw_model_number.txt");
		int k;
		numberoflinem = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinem++;
		}
		read.close();
		modelnumber = new int[numberoflinem];
	}
	void  fmodelnumber() {
		ifstream read;
		read.open("bmw_model_number.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinem == 0)
				modelnumber[i] = 0;
			else
			{
				read >> rm;
				modelnumber[i] = rm;
			}
		}
		read.close();
	}

	void setnumberoflinesp_allocate() {
		ifstream read; read.open("bmw_price.txt");
		int k;
		numberoflinep = 0;
		while (!read.eof()) {
			read >> k;
			numberoflinep++;
		}
		read.close();
		price = new int[numberoflinep];
	}
	void  fprice() {
		ifstream read;
		read.open("bmw_price.txt");
		if (!read) {
			cout << "File not opened" << endl;
		}
		for (int i = 0; !read.eof(); i++) {
			if (numberoflinep == 0)
				price[i] = 0;
			else
			{
				read >> rp;
				price[i] = rp;
			}
		}
		read.close();
	}
	void displayallinfo() {
		for (int i = 0; i < 5; i++)
			cout << endl;

		cout << " |                         : < BMW CARS > :                   |       \n\n";
		cout << " |  CAR    |   COLOUR    |    MODEL NO.   |   PLATE NUMBER    |    PRICE   \n\n";
		for (int i = 0; i < numberoflinesc; i++) {
			cout << " | " << carcatagories[i] << "        " << colour[i] << "           " << modelnumber[i] << "            " << numberplate[i] << "             " << price[i] << endl;
		}
	}
	void renting(string f) {
		for (int i = 0; i < numberoflinesc; i++) {
			if (f == carcatagories[i])
			{
				ofstream write;
				write.open("bmw_car_catagories.txt");
				if (!write)
					cout << "Overriting BMW file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << carcatagories[j] << endl;
					if (j == numberoflinesc - 1)
						write << carcatagories[j];

				}
				write.close();

				write.open("bmw_number_plate.txt");
				if (!write)
					cout << "Overriting BMW file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << numberplate[j] << endl;
					if (j == numberoflinesc - 1)
						write << numberplate[j];

				}
				write.close();

				write.open("bmw_colour.txt");
				if (!write)
					cout << "Overriting BMW file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << colour[j] << endl;
					if (j == numberoflinesc - 1)
						write << colour[j];

				}
				write.close();

				write.open("bmw_model_number.txt");
				if (!write)
					cout << "Overriting BMW file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << modelnumber[j] << endl;
					if (j == numberoflinesc - 1)
						write << modelnumber[j];

				}
				write.close();

				write.open("bmw_price.txt");
				if (!write)
					cout << "Overriting BMW file not opened\n";
				for (int j = 0; j < numberoflinesc; j++) {
					if (i == j)
						continue;

					if (j < numberoflinesc - 1)
						write << price[j] << endl;
					if (j == numberoflinesc - 1)
						write << price[j];

				}
				write.close();
			}
		}
	}
};
class customerinfo {
protected:
	long int cnic; string name;
public:
	void setcnic(long int p) { cnic = p; }
	void setname(string h) { name = h; }
	int getcnic() { return cnic; }
	string getname() { return name; }
};
class ixak {
protected:
	toyota a; suzuki b; honda c; bmw d; customerinfo e; string f;
public:
	ixak(toyota obj, suzuki objs, honda objh, bmw objb, customerinfo objc) {
		a = obj, b = objs, c = objh, d = objb, e = objc; string carname;
	bap:
		menu();
		char a; a = _getch();
		if (a == '1') {
			system("cls");
			system("color 02");
			cout << "loading..." << endl;
			Sleep(3000);
			system("cls");
		tuf:
			menu1();
			a = _getch();
			if (a == '1') {
				system("cls");
				system("color F4");
				obj.setnumberoflines_allocate();
				obj.fcarcatagories();
				obj.setnumberoflinesn_allocate();
				obj.fnumberplate();
				obj.setnumberoflinesc_allocate();
				obj.fcolour();
				obj.setnumberoflinesm_allocate();
				obj.fmodelnumber();
				obj.setnumberoflinesp_allocate();
				obj.fprice();
				obj.displayallinfo(); cout << endl << endl << endl;
				cout << "\t <>PRESS ANY KEY TO GO BACK TO THE MAIN MENU ON<>.." << endl;
				a = _getch();
				system("cls");
				system("color 02");
				cout << "loading..." << endl;
				Sleep(3000);
				system("cls");
				goto bap;
			}
			else if (a == '2')
			{
				system("cls");
				system("color F4");
				objs.setnumberoflines_allocate();
				objs.fcarcatagories();
				objs.setnumberoflinesn_allocate();
				objs.fnumberplate();
				objs.setnumberoflinesc_allocate();
				objs.fcolour();
				objs.setnumberoflinesm_allocate();
				objs.fmodelnumber();
				objs.setnumberoflinesp_allocate();
				objs.fprice();
				objs.displayallinfo(); cout << endl << endl << endl;
				cout << "\t <>PRESS ANY KEY TO GO BACK TO THE MAIN MENU ON<>.." << endl;
				a = _getch();
				system("cls");
				system("color 02");
				cout << "loading..." << endl;
				Sleep(3000);
				system("cls");
				goto bap;
			}
			else if (a == '3') {
				system("cls");
				system("color F4");
				objh.setnumberoflines_allocate();
				objh.fcarcatagories();
				objh.setnumberoflinesn_allocate();
				objh.fnumberplate();
				objh.setnumberoflinesc_allocate();
				objh.fcolour();
				objh.setnumberoflinesm_allocate();
				objh.fmodelnumber();
				objh.setnumberoflinesp_allocate();
				objh.fprice();
				objh.displayallinfo(); cout << endl << endl << endl;
				cout << "\t <>PRESS ANY KEY TO GO BACK TO THE MAIN MENU ON<>.." << endl;
				a = _getch();
				system("cls");
				system("color 02");
				cout << "loading..." << endl;
				Sleep(3000);
				system("cls");
				goto bap;
			}
			else if (a == '4') {
				system("cls");
				system("color F4");
				objb.setnumberoflines_allocate();
				objb.fcarcatagories();
				objb.setnumberoflinesn_allocate();
				objb.fnumberplate();
				objb.setnumberoflinesc_allocate();
				objb.fcolour();
				objb.setnumberoflinesm_allocate();
				objb.fmodelnumber();
				objb.setnumberoflinesp_allocate();
				objb.fprice();
				objb.displayallinfo(); cout << endl << endl << endl;
				cout << "\t <>PRESS ANY KEY TO GO BACK TO THE MAIN MENU ON<>.." << endl;
				a = _getch();
				system("cls");
				system("color 02");
				cout << "loading..." << endl;
				Sleep(3000);
				system("cls");
				goto bap;
			}
			else {
				system("cls");
				goto tuf;
			}


		}

		else if (a == '2') {
			system("cls");
			system("color 02");
			cout << "loading..." << endl;
			Sleep(3000);
			system("cls");
			obj.setnumberoflines_allocate();
			obj.fcarcatagories();
			obj.setnumberoflinesn_allocate();
			obj.fnumberplate();
			obj.setnumberoflinesc_allocate();
			obj.fcolour();
			obj.setnumberoflinesm_allocate();
			obj.fmodelnumber();
			obj.setnumberoflinesp_allocate();
			obj.fprice();
			objs.setnumberoflines_allocate();
			objs.fcarcatagories();
			objs.setnumberoflinesn_allocate();
			objs.fnumberplate();
			objs.setnumberoflinesc_allocate();
			objs.fcolour();
			objs.setnumberoflinesm_allocate();
			objs.fmodelnumber();
			objs.setnumberoflinesp_allocate();
			objs.fprice();
			objh.setnumberoflines_allocate();
			objh.fcarcatagories();
			objh.setnumberoflinesn_allocate();
			objh.fnumberplate();
			objh.setnumberoflinesc_allocate();
			objh.fcolour();
			objh.setnumberoflinesm_allocate();
			objh.fmodelnumber();
			objh.setnumberoflinesp_allocate();
			objh.fprice();
			objb.setnumberoflines_allocate();
			objb.fcarcatagories();
			objb.setnumberoflinesn_allocate();
			objb.fnumberplate();
			objb.setnumberoflinesc_allocate();
			objb.fcolour();
			objb.setnumberoflinesm_allocate();
			objb.fmodelnumber();
			objb.setnumberoflinesp_allocate();
			objb.fprice();
			objb.displayallinfo();
			objh.displayallinfo();
			objs.displayallinfo();
			obj.displayallinfo(); cout << endl << endl << endl;
			cout << "\t ENTER THE NAME OF THE CAR YOU WANT TO RENT\n\t               oR\n\t   ENTER DOT(.) TO GO TO THE MAIN MENU" << endl;
		shukr:
			cin >> carname;
			if (carname == ".")
			{
				system("cls");
				goto bap;

			}
			else
			{
				for (int i = 0; i < carname.length(); i++)
					carname[i] = tolower(carname[i]);
				if (carname == "vitz" || carname == "carolla" || carname == "camery")
				{
					obj.renting(carname);
					system("cls");
					system("color 02");
					cout << "loading..." << endl;
					Sleep(3000);
					system("cls");
					system("color F0");
					cout << "\n\n\n\n\n\n\n\n\n\n";
					cout << "\t\t^^^^^ ^^^^^^^ ^^^^^^^^^^^^^^^^^^^^ ^^^^^^^ ^^^^^" << endl << endl;
					cout << "\t\t\t      ENTER YOUR NAME:- ";
					string o; cin >> o;
					objc.setname(o);
					cout << endl;
					cout << "\t\t\t      ENTER YOUR CNIC:- ";
					int long dd; cin >> dd;
					objc.setcnic(dd);
					cout << "\n\t\t\t      DO YOU NEED A DRIVER(Y/N):- ";
				p:
					char x; cin >> x; string w;
					if (x == ' Y' || x == 'y')
						w = "WITH DRIVER";

					else if (x == 'N' || x == 'n')
						w = "WITHOUT DRIVER";
					else {
						cout << "\n\t\t\t     WRONG KEY ENTERED TRY AGAIN\n";
						goto p;
					}

					ofstream write;
					write.open("CUSTOMER_INFORMATION.txt", ios::app);
					if (!write)
						cout << "Customer file not opened\n";
					for (int i = 0; i < 4; i++)
					{
						if (i == 0)
							write << carname << endl;
						if (i == 1)
							write << objc.getname() << endl;
						if (i == 2)
							write << objc.getcnic() << endl;
						if (i == 3)
							write << w << endl;
					}
					write.close();
					termsandcondition();
					thankyou();
					goto bap;
				}
				else if (carname == "m3" || carname == "m4" || carname == "m5")
				{
					objb.renting(carname);
					system("cls");
					system("color 02");
					cout << "loading..." << endl;
					Sleep(3000);
					system("cls");
					system("color F0");
					cout << "\n\n\n\n\n\n\n\n\n\n";
					cout << "\t\t^^^^^ ^^^^^^^ ^^^^^^^^^^^^^^^^^^^^ ^^^^^^^ ^^^^^" << endl << endl;
					cout << "\t\t\t      ENTER THE NAME:- ";
					string o; cin >> o;
					objc.setname(o);
					cout << endl;
					cout << "\t\t\t      ENTER THE CNIC:- ";
					long int dd; cin >> dd;
					objc.setcnic(dd);
					cout << "\n\t\t\t      DO YOU NEED A DRIVER(Y/N):- ";
				pp:
					char x; cin >> x; string w;
					if (x == ' Y' || x == 'y')
						w = "WITH DRIVER";

					else if (x == 'N' || x == 'n')
						w = "WITHOUT DRIVER";
					else {
						cout << "\n\t\t\t     WRONG KEY ENTERED TRY AGAIN\n";
						goto pp;
					}
					ofstream write;
					write.open("CUSTOMER_INFORMATION.txt", ios::app);
					if (!write)
						cout << "Customer file not opened\n";
					for (int i = 0; i < 4; i++)
					{
						if (i == 0)
							write << carname << endl;
						if (i == 1)
							write << objc.getname() << endl;
						if (i == 2)
							write << objc.getcnic() << endl;
						if (i == 3)
							write << w << endl;
					}
					write.close();
					termsandcondition();
					thankyou();
					goto bap;
				}
				else if (carname == "city" || carname == "civic" || carname == "vezel")
				{
					objh.renting(carname);
					system("cls");
					system("color 02");
					cout << "loading..." << endl;
					Sleep(3000);
					system("cls");
					system("color F0");
					cout << "\n\n\n\n\n\n\n\n\n\n";
					cout << "\t\t^^^^^ ^^^^^^^ ^^^^^^^^^^^^^^^^^^^^ ^^^^^^^ ^^^^^" << endl << endl;
					cout << "\t\t\t      ENTER THE NAME:- ";
					string o; cin >> o;
					objc.setname(o);
					cout << endl;
					cout << "\t\t\t      ENTER THE CNIC:- ";
					long int dd; cin >> dd;
					objc.setcnic(dd);
					cout << "\n\t\t\t      DO YOU NEED A DRIVER(Y/N):- ";
				ppp:
					char x; cin >> x; string w;
					if (x == ' Y' || x == 'y')
						w = "WITH DRIVER";

					else if (x == 'N' || x == 'n')
						w = "WITHOUT DRIVER";
					else {
						cout << "\n\t\t\t     WRONG KEY ENTERED TRY AGAIN\n";
						goto ppp;
					}
					ofstream write;
					write.open("CUSTOMER_INFORMATION.txt", ios::app);
					if (!write)
						cout << "Customer file not opened\n";
					for (int i = 0; i < 3; i++)
					{
						if (i == 0)
							write << carname << endl;
						if (i == 1)
							write << objc.getname() << endl;
						if (i == 2)
							write << objc.getcnic() << endl;
						if (i == 3)
							write << w << endl;
					}
					write.close();
					termsandcondition();
					thankyou();
					goto bap;
				}
				else if (carname == "mehran" || carname == "alto" || carname == "cultos")
				{
					objs.renting(carname);
					system("cls");
					system("color 02");
					cout << "loading..." << endl;
					Sleep(3000);
					system("cls");
					system("color F0");
					cout << "\n\n\n\n\n\n\n\n\n\n";
					cout << "\t\t^^^^^ ^^^^^^^ ^^^^^^^^^^^^^^^^^^^^ ^^^^^^^ ^^^^^" << endl << endl;
					cout << "\t\t\t      ENTER THE NAME:- ";
					string o; cin >> o;
					objc.setname(o);
					cout << endl;
					cout << "\t\t\t      ENTER THE CNIC:- ";
					long int dd; cin >> dd;
					objc.setcnic(dd);
					cout << "\n\t\t\t      DO YOU NEED A DRIVER(Y/N):- ";
				pppp:
					char x; cin >> x; string w;
					if (x == ' Y' || x == 'y')
						w = "WITH DRIVER";

					else if (x == 'N' || x == 'n')
						w = "WITHOUT DRIVER";
					else {
						cout << "\n\t\t\t     WRONG KEY ENTERED TRY AGAIN\n";
						goto pppp;
					}
					ofstream write;
					write.open("CUSTOMER_INFORMATION.txt", ios::app);
					if (!write)
						cout << "Customer file not opened\n";
					for (int i = 0; i < 3; i++)
					{
						if (i == 0)
							write << carname << endl;
						if (i == 1)
							write << objc.getname() << endl;
						if (i == 2)
							write << objc.getcnic() << endl;
						if (i == 3)
							write << w << endl;
					}
					write.close();
					termsandcondition();
					thankyou();
					goto bap;
				}
				else {
					cout << "\t ENTERED WRONG PASSWORD PLEASE ENTER AGAIN" << endl;
					goto shukr;
				}
			}
		}
		else if (a == '0') {
			exit(0);
		}
		else {
			system("cls");
			goto bap;
		}
	}
	~ixak() {
		cout << "ALL DATA DELETED BECAUSE OF COMPOSITION RELATION" << endl;
		
	}

};

void main() {
	intro();
	login();
	toyota q; suzuki e; honda w; bmw r; customerinfo t;
	ixak(q, e, w, r, t);
}
