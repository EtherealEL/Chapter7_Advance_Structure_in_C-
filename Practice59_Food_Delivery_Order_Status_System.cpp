#include<string>
#include <iostream>
using namespace std;

enum order_status
{
	placed,
	preparing,
	out_for_delivery,
	delivered
};


struct Order
{
	int order_id;
	string customer_name;
	float total_amount;
	order_status status;
};


int main()
{

	Order order1;

	int status_choice;

	cout << "Enter Order ID#: ";
	cin >> order1.order_id;

	cout << "Enter Customer's Name: ";
	cin >> order1.customer_name;

	cout << "Enter Total Order Amount: ";
	cin >> order1.total_amount;



	//menu

	cout << "\nChoose Order Status:\n";
	cout << "0 - Placed\n";
	cout << "1 - Preparting\n";
	cout << "2 - Out for Delivery\n";
	cout << "3 - Delivered\n";
	cout << "Enter your choice: ";
	cin >> status_choice;

	//assigning enum value using if conditions

	if (status_choice == 0)
		order1.status = placed;
	else if (status_choice == 1)
		order1.status = preparing;
	else if (status_choice == 2)
	order1.status = out_for_delivery;
	else
		order1.status = delivered;

	cout << "\n\t Order Summary\n\n";
	cout << "Order ID#: " << order1.order_id << endl;
	cout << "Customer: " << order1.customer_name << endl;
	cout << "Total Amount: " << order1.total_amount << endl;


	//displaying status msg

	if (order1.status == placed)
	{
		cout << "\n Status: Placed" << endl;
		cout << "We have received your order.." << endl;

	}
	else if(order1.status == preparing)
	{
		cout << "\n Status: Prepparing" << endl;
		cout << "Your food is being prepared...." << endl;

	}
	else if (order1.status == out_for_delivery)
	{
		cout << "\n Status: Out for Delivery" << endl;
		cout << "Your food is on the way!" << endl;

	}
	else
	{
		cout << "\nStatus: DELIVERED!" << endl;
		cout << "Enjoy your meal!" << endl;
	}
	return 0;


}
