#include <iostream>
#include <time.h> 
#include <stdlib.h> 
#include <string>
#include <stdio.h> 
#include <Windows.h>

using namespace std;


// Lentelės sukūrimas
// If statement

int Random()
{
	int card;
	srand((unsigned)time(0));
	card = 0 + (rand() % (8 - 2 + 1));

	return card;
}

char kuris(int Side[],int x)
{
	char Valu{};
	if (Side[x] == 0)
		Valu = ' ';
	else if (Side[x] == 1)
		Valu = 'X';
	else if (Side[x] == 2)
		Valu = 'O';
	return Valu;
}

void Isvestis(int Side[])
{
	cout << "| ";
	cout <<kuris(Side, 0);
	cout << " | ";
	cout <<kuris(Side, 1);
	cout << " | ";
	cout << kuris(Side, 2);
	cout << " |";
	cout << endl;
	cout << "| ";
	cout << kuris(Side, 3);
	cout << " | ";
	cout << kuris(Side, 4);
	cout << " | ";
	cout << kuris(Side, 5);
	cout << " |";
	cout << endl;
	cout << "| ";
	cout << kuris(Side, 6);
	cout << " | ";
	cout << kuris(Side, 7);
	cout << " | ";
	cout << kuris(Side, 8);
	cout << " |";
	cout << endl;
}

void RandomBotLaukas(int Side[])
{
	bool stay = true;
	srand((unsigned)time(0));
	int num;
	while (stay == true)
	{
		srand((unsigned)time(0));
		num = Random();

		if (Side[num] == 0 )
		{
			Side[num] = 1;
			stay = false;
		}
		else 
			srand((unsigned)time(0));
	}
}
void ZaidejoLaukas(int Side[])
{
	int option;
	bool tikrinti = false;
	cout << endl;
	cout << "_______________" << endl;
	cout << "Laukelis pagal skaicius" << endl;
	cout << "| " << "1" << " | " << "2" << " | " << "3" << " |" << endl;
	cout << "| " << "4" << " | " << "5" << " | " << "6" << " |" << endl;
	cout << "| " << "7" << " | " << "8" << " | " << "9" << " |" << endl;
	cout << "_______________" << endl;
	cout << "Pasirinkite laukeli" << endl;
	while (tikrinti == false)
	{
		cout << "Laukelis: ";
		cin >> option;
		option--;
		if (Side[option] == 0)
		{
			Side[option] = 2;
			tikrinti = true;
		}
		else
		{
			cout << "Laukelis netinkamas. Pasirinkite is naujo" << endl;
			tikrinti = false;
		}
	}
}

void BotUzkirtimoSalygos(int Side[])
{
	//pirma eilute
	if (Side[0] ==2 && Side[1] ==2 && Side[2]==0)
	{
		Side[2] = 1;
	}
	else if (Side[0] == 2 && Side[2] == 2 && Side[1] == 0)
	{
		Side[1] = 1;
	}
	else if (Side[1] == 2 && Side[2] == 2 && Side[0] == 0)
	{
		Side[0] = 1;
	}

	//Antra eilute

	else if (Side[3] == 2 && Side[4] == 2 && Side[5] == 0)
	{
		Side[5] = 1;
	}
	else if (Side[3] == 2 && Side[5] == 2 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[4] == 2 && Side[5] == 2 && Side[0] == 0)
	{
		Side[3] = 1;
	}

	//Trecia eilute

	else if (Side[6] == 2 && Side[7] == 2 && Side[8] == 0)
	{
		Side[8] = 1;
	}
	else if (Side[6] == 2 && Side[8] == 2 && Side[7] == 0)
	{
		Side[7] = 1;
	}
	else if (Side[7] == 2 && Side[8] == 2 && Side[6] == 0)
	{
		Side[6] = 1;
	}

	//Kryzminiai
	//pirmas

	else if (Side[0] == 2 && Side[4] == 2 && Side[8] == 0)
	{
		Side[8] = 1;
	}
	else if (Side[0] == 2 && Side[8] == 2 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[4] == 2 && Side[8] == 2 && Side[0] == 0)
	{
		Side[0] = 1;
	}
	
	//antras

	else if (Side[2] == 2 && Side[4] == 2 && Side[6] == 0)
	{
		Side[6] = 1;
	}
	else if (Side[2] == 2 && Side[6] == 2 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[6] == 2 && Side[4] == 2 && Side[2] == 0)
	{
		Side[2] = 1;
	}

	//Virsutiniai
	//pirma

	else if (Side[0] == 2 && Side[3] == 2 && Side[6] == 0)
	{
		Side[6] = 1;
	}
	else if (Side[0] == 2 && Side[6] == 2 && Side[3] == 0)
	{
		Side[3] = 1;
	}
	else if (Side[3] == 2 && Side[6] == 2 && Side[0] == 0)
	{
		Side[0] = 1;
	}

	//antra

	else if (Side[1] == 2 && Side[4] == 2 && Side[7] == 0)
	{
		Side[7] = 1;
	}
	else if (Side[1] == 2 && Side[7] == 2 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[4] == 2 && Side[7] == 2 && Side[1] == 0)
	{
		Side[1] = 1;
	}

	//trecia

	else if (Side[2] == 2 && Side[5] == 2 && Side[8] == 0)
	{
		Side[8] = 1;
	}
	else if (Side[2] == 2 && Side[8] == 2 && Side[5] == 0)
	{
		Side[5] = 1;
	}
	else if (Side[5] == 2 && Side[8] == 2 && Side[2] == 0)
	{
		Side[2] = 1;
	}

	//pirma eilute
	else if (Side[0] ==2 && Side[1] ==2 && Side[2]==0)
	{
		Side[2] = 1;
	}
	else if (Side[0] == 2 && Side[2] == 2 && Side[1] == 0)
	{
		Side[1] = 1;
	}
	else if (Side[1] == 2 && Side[2] == 2 && Side[0] == 0)
	{
		Side[0] = 1;
	}

	//Antra eilute

	else if (Side[3] == 2 && Side[4] == 2 && Side[5] == 0)
	{
		Side[5] = 1;
	}
	else if (Side[3] == 2 && Side[5] == 2 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[4] == 2 && Side[5] == 2 && Side[0] == 0)
	{
		Side[3] = 1;
	}

	//Trecia eilute

	else if (Side[6] == 2 && Side[7] == 2 && Side[8] == 0)
	{
		Side[8] = 1;
	}
	else if (Side[6] == 2 && Side[8] == 2 && Side[7] == 0)
	{
		Side[7] = 1;
	}
	else if (Side[7] == 2 && Side[8] == 2 && Side[6] == 0)
	{
		Side[6] = 1;
	}

	//Kryzminiai
	//pirmas

	else if (Side[0] == 2 && Side[4] == 2 && Side[8] == 0)
	{
		Side[8] = 1;
	}
	else if (Side[0] == 2 && Side[8] == 2 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[4] == 2 && Side[8] == 2 && Side[0] == 0)
	{
		Side[0] = 1;
	}
	
	//antras

	else if (Side[2] == 2 && Side[4] == 2 && Side[6] == 0)
	{
		Side[6] = 1;
	}
	else if (Side[2] == 2 && Side[6] == 2 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[6] == 2 && Side[4] == 2 && Side[2] == 0)
	{
		Side[2] = 1;
	}

	//Virsutiniai
	//pirma

	else if (Side[0] == 2 && Side[3] == 2 && Side[6] == 0)
	{
		Side[6] = 1;
	}
	else if (Side[0] == 2 && Side[6] == 2 && Side[3] == 0)
	{
		Side[3] = 1;
	}
	else if (Side[3] == 2 && Side[6] == 2 && Side[0] == 0)
	{
		Side[0] = 1;
	}

	//antra

	else if (Side[1] == 2 && Side[4] == 2 && Side[7] == 0)
	{
		Side[7] = 1;
	}
	else if (Side[1] == 2 && Side[7] == 2 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[4] == 2 && Side[7] == 2 && Side[1] == 0)
	{
		Side[1] = 1;
	}

	//trecia

	else if (Side[2] == 2 && Side[5] == 2 && Side[8] == 0)
	{
		Side[8] = 1;
	}
	else if (Side[2] == 2 && Side[8] == 2 && Side[5] == 0)
	{
		Side[5] = 1;
	}
	else if (Side[5] == 2 && Side[8] == 2 && Side[2] == 0)
	{
		Side[2] = 1;
	}
	
	//Boto laimejimai
	//pirma eilute
	else if (Side[0] == 1 && Side[1] == 1 && Side[2] == 0)
	{
		Side[2] = 1;
	}
	else if (Side[0] == 1 && Side[2] == 1 && Side[1] == 0)
	{
		Side[1] = 1;
	}
	else if (Side[1] == 1 && Side[2] == 1 && Side[0] == 0)
	{
		Side[0] = 1;
	}

	//Antra eilute

	else if (Side[3] == 1 && Side[4] == 1 && Side[5] == 0)
	{
		Side[5] = 1;
	}
	else if (Side[3] == 1 && Side[5] == 1 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[4] == 1 && Side[5] == 1 && Side[0] == 0)
	{
		Side[3] = 1;
	}

	//Trecia eilute

	else if (Side[6] == 1 && Side[7] == 1 && Side[8] == 0)
	{
		Side[8] = 1;
	}
	else if (Side[6] == 1 && Side[8] == 1 && Side[7] == 0)
	{
		Side[7] = 1;
	}
	else if (Side[7] == 1 && Side[8] == 1 && Side[6] == 0)
	{
		Side[6] = 1;
	}

	//Kryzminiai
	//pirmas

	else if (Side[0] == 1 && Side[4] == 1 && Side[8] == 0)
	{
		Side[8] = 1;
	}
	else if (Side[0] == 1 && Side[8] == 1 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[4] == 1 && Side[8] == 1 && Side[0] == 0)
	{
		Side[0] = 1;
	}

	//antras

	else if (Side[2] == 1 && Side[4] == 1 && Side[6] == 0)
	{
		Side[6] = 1;
	}
	else if (Side[2] == 1 && Side[6] == 1 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[6] == 1 && Side[4] == 1 && Side[2] == 0)
	{
		Side[2] = 1;
	}

	//Virsutiniai
	//pirma

	else if (Side[0] == 1 && Side[3] == 1 && Side[6] == 0)
	{
		Side[6] = 1;
	}
	else if (Side[0] == 1 && Side[6] == 1 && Side[3] == 0)
	{
		Side[3] = 1;
	}
	else if (Side[3] == 1 && Side[6] == 1 && Side[0] == 0)
	{
		Side[0] = 1;
	}

	//antra

	else if (Side[1] == 1 && Side[4] == 1 && Side[7] == 0)
	{
		Side[7] = 1;
	}
	else if (Side[1] == 1 && Side[7] == 1 && Side[4] == 0)
	{
		Side[4] = 1;
	}
	else if (Side[4] == 1 && Side[7] == 1 && Side[1] == 0)
	{
		Side[1] = 1;
	}

	//trecia

	else if (Side[2] == 1 && Side[5] == 1 && Side[8] == 0)
	{
		Side[8] = 1;
	}
	else if (Side[2] == 1 && Side[8] == 1 && Side[5] == 0)
	{
		Side[5] = 1;
	}
	else if (Side[5] == 1 && Side[8] == 1 && Side[2] == 0)
	{
		Side[2] = 1;
	}

	else 
	RandomBotLaukas(Side);

}

int Laimejimas(int Side[])
{
	if (Side[0] == 1 && Side[1] == 1 && Side[2] == 1)
	{
		return 1;
	}
	else if (Side[3] == 1 && Side[4] == 1 && Side[5] == 1)
	{
		return 1;
	}
	else if (Side[6] == 1 && Side[7] == 1 && Side[8] == 1)
	{
		return 1;
	}
	else if (Side[0] == 1 && Side[4] == 1 && Side[8] == 1)
	{
		return 1;
	}
	else if (Side[2] == 1 && Side[4] == 1 && Side[6] == 1)
	{
		return 1;
	}
	else if (Side[0] == 1 && Side[3] == 1 && Side[6] == 1)
	{
		return 1;
	}
	else if (Side[1] == 1 && Side[4] == 1 && Side[7] == 1)
	{
		return 1;
	}
	else if (Side[2] == 1 && Side[5] == 1 && Side[8] == 1)
	{
		return 1;
	}

	//zaidejas

	if (Side[0] == 2 && Side[1] == 2 && Side[2] == 2)
	{
		return 2;
	}
	else if (Side[3] == 2 && Side[4] == 2 && Side[5] == 2)
	{
		return 2;
	}
	else if (Side[6] == 2 && Side[7] == 2 && Side[8] == 2)
	{
		return 2;
	}
	else if (Side[0] == 2 && Side[4] == 2 && Side[8] == 2)
	{
		return 2;
	}
	else if (Side[2] == 2 && Side[4] == 2 && Side[6] == 2)
	{
		return 2;
	}
	else if (Side[0] == 2 && Side[3] == 2 && Side[6] == 2)
	{
		return 2;
	}
	else if (Side[1] == 2 && Side[4] == 2 && Side[7] == 2)
	{
		return 2;
	}
	else if (Side[2] == 2 && Side[5] == 2 && Side[8] == 2)
	{
		return 1;
	}
	else if (Side[0] != 0 && Side[1] != 0 && Side[2] != 0 && Side[3] != 0 && Side[4] != 0 && Side[5] != 0 && Side[6] != 0 && Side[7] != 0 && Side[8] != 0 && Side[9] != 0)
	{
		return 3;
	}
	else return 0;

}

int main()
{
	int Side[9] = { 0 }; //0- nieko //1- X <- Botas //2- O <- zaidejas // system("CLS"); <- istrinti console // sleep(10); <- pauze
	bool Running = true;

	RandomBotLaukas(Side); // Boto pasirinkimas
	Isvestis(Side); //ekranas
	cout << endl;
	while (Running == true)
	{
		ZaidejoLaukas(Side);
		Isvestis(Side);

		if (Laimejimas(Side) == 1)
		{
			cout << "Laimejo Botas!" << endl;
			Running = false;
		}
		else if (Laimejimas(Side) == 2)
		{
			cout << "Laimejo Zaidejas!" << endl;
			Running = false;
		}
		else if (Laimejimas(Side) == 2)
		{
			cout << endl;
		}
		else if (Laimejimas(Side) == 3)
		{
			cout << "Niekas Nelaimejo";
			cout << endl;
			Running = false;
		}

		cout << endl;
		BotUzkirtimoSalygos(Side);
		Isvestis(Side);
		cout << endl;
		system("CLS");
		Isvestis(Side);

		if (Laimejimas(Side) == 1)
		{
			cout << "Laimejo Botas!" << endl;
			Running = false;
		}
		else if (Laimejimas(Side) == 2)
		{
			cout << "Laimejo Zaidejas!" << endl;
			Running = false;
		}
		else if (Laimejimas(Side) == 2)
		{
			cout << endl;
		}
		else if (Laimejimas(Side) == 3)
		{
			cout <<"Niekas Nelaimejo";
			cout << endl;
			Running = false;
		}
		
	}
	return 0;
}
