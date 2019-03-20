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

		while (true)
		{
			while (partyMembers > 6)
			{
				cout << partyMembers << " members seem like too much!" << endl;
				cin >> partyMembers;
			}
			if (partyMembers <= 6)
			{
				cout << "You now have " << partyMembers << " party members!" << endl;
				break;
			}
		}
	}

	catch (string err)
	{
		cout << err << endl;
	}


	system("pause");
}