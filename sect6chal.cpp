#include <iostream>
using namespace std;

int main() {

int small_rooms;
int large_rooms;
const int price_small = 25;
const int price_large = 35;
const double tax = 0.06;
const int estimate_expiry = 30;

cout << "How many small rooms would you like cleaned?" << endl;

cin >> small_rooms;

cout << "How many large rooms would you like cleaned?" << endl;

cin >> large_rooms;

int total_before_tax = (small_rooms * price_small) + (large_rooms * price_large);
int total_after_tax = total_before_tax + (total_before_tax * tax);

cout << "Estimate for carpet cleaning services:" << endl;

cout << "Number of small rooms: " << small_rooms << endl;

cout << "Number of large rooms: " << large_rooms << endl;

cout << "Price per small room: " << price_small << endl;

cout << "Price per large room: " << price_large << endl;

cout << "Cost: $" << total_before_tax  << endl;

cout << "Tax: $" << tax << endl;

cout << "===========================================" << endl;

cout << "Total Estimate: $" << total_after_tax << endl;

cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

return 0;

}
