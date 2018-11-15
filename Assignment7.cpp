#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tower
{
private:
	vector<string> disks;
public:
	Tower(string name, int size, bool isInitialTower)
	{
		this->name = name;

		if (isInitialTower)
		{
			for (int i = size; i > 0; i--)
			{
				this->pushDisk(to_string(i));
			}
		}

	}
	string name;

	void pushDisk(string val)
	{
		this->disks.push_back(val);
	}

	void popDisk()
	{
		this->disks.pop_back();
	}

	string print()
	{
		string output = "Tower " + this->name + ": ";
		for (auto disk : disks)
		{
			output += disk + ", ";
		}
		return output;
	}
};

void hanoi(int disks, Tower*, Tower*, Tower*);

int main()
{
	int num;

	do
	{
		cout << "Enter the number of disks(-1 to quit): ";
		cin >> num;

		if (num > 0)
		{
			system("cls");
			auto A = new Tower("A", num, true);
			auto B = new Tower("B", num, false);
			auto C = new Tower("C", num, false);

			cout << A->print() << endl;
			cout << B->print() << endl;
			cout << C->print() << endl;
			system("pause");

			hanoi(num, A, B, C);
		}
		else if (num == 0 || num < -1)
		{
			cout << "Invalid input." << endl;
			system("pause");
		}
		system("cls");
	} while (num != -1);

	return 0;
}

void hanoi(int disks, Tower* source, Tower* target, Tower* spare)
{
	if (disks > 0)
	{
		hanoi(disks - 1, source, spare, target);

		system("cls");

		source->popDisk();
		target->pushDisk(to_string(disks));
		cout << source->print() << endl;
		cout << spare->print() << endl;
		cout << target->print() << endl;
		cout << "Move disk " << disks << " from " << source->name << " to " << target->name << endl;;
		system("pause");

		hanoi(disks - 1, spare, target, source);
	}
}
