#include <iostream>
#include <string>

using namespace std;

int main()
{
	int partyMembers;

	try
	{
		cout << "Please enter the amount of party members you wish to have for your campaign: ";
		cin >> partyMembers;

		if (partyMembers == 0)
		{
			throw string("You must have at least one party member.");
		}


		if (partyMembers < 0)
		{
			throw string("You cannot have negative party members!");
		}


		cout << "You now have " << partyMembers << " party members!" << endl;
	}

	catch (string err)
	{
		cout << err << endl;
	}


	system("pause");
}