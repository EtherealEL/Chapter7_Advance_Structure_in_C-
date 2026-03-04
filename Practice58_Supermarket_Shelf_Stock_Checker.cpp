#include<string>
#include <iostream>
using namespace std;


struct Product
{
	int product_code;
	string product_name;
	int stock_count;
};



//input function
void input_products(Product store[][3], int aisle_count, int products_per_aisle)
{
	for (int aisle_index = 0; aisle_index < aisle_count; aisle_index++)
	{
		cout << "\n\nEnter Details for Aisle " << (aisle_index + 1) << endl;

		for (int product_index = 0; product_index < products_per_aisle; product_index++)
		{
			cout << "Enter Product " << (product_index + 1) << " Code: " << endl;
			cin >> store[aisle_index][product_index].product_code;

			cout << "Enter Product " << (product_index + 1) << " Name: " << endl;
			cin >> store[aisle_index][product_index].product_name;

			cout << "Enter Product " << (product_index + 1) << " Stock Count: " << endl;
		}
	}

}

void display_shelf_report(const Product store[][3], int aisle_count, int products_per_aisle)
{

	cout << "\n\n\tShelf Stock Report\n\n" << endl;

	for (int aisle_index = 0; aisle_index < aisle_count; aisle_index++)
	{
		int aisle_total_stock = 0;

		cout << "Aisle " << (aisle_index + 1) << ":" << endl;


		for (int product_index = 0; product_index < products_per_aisle; product_index++)
		{
			cout << "\tProduct code: " << store[aisle_index][product_index].product_code << endl;
			cout << "\tProduct name: " << store[aisle_index][product_index].product_name << endl;
			cout << "\tStock Count: " << store[aisle_index][product_index].stock_count << endl;

			aisle_total_stock += store[aisle_index][product_index].stock_count;
		}
		cout << "Total Stock in Aisle " << (aisle_index + 1) << ": " << aisle_total_stock << endl;
		cout << "\t~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	}


}




int main()
{

	const int aisle_count = 2;
	const int products_per_aisle = 3;


	Product store[aisle_count][products_per_aisle];

	input_products(store, aisle_count, products_per_aisle);
	display_shelf_report(store, aisle_count, products_per_aisle);

	return 0;

}

