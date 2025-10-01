#include <iostream>
using namespace std;

int main()
{
    char currency = '$';
    double cost_per_item = 9.99;
    int x;

    cout << "The price per item is: " << currency << cost_per_item << endl;
    cout << "How many items did you buy? ";
    cin >> x;
    int total_items = x;
    double total_cost = cost_per_item * total_items;
    cout << "The total cost is: " << currency << total_cost << endl;
    return 0;
}