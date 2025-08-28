#include <iostream> 
using namespace std;


int main()
{
	float loan_amount;
	cout << "please enter loan alount : " << endl;
	cin >> loan_amount;

	float how_many_mounth;
	cout << "please enter how_many_mounth : " << endl;
	cin >> how_many_mounth;

	float mounthly_installment = loan_amount / how_many_mounth;

	cout << "mounthly_installment is:" << mounthly_installment  << endl;

	return 0;
}

