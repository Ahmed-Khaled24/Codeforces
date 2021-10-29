#include <iostream>
using namespace std;
int main() {

	int number_of_rides_planned, special_ticket_rides, one_ride_price, special_ticket_price, money{0};
	cin >> number_of_rides_planned >> special_ticket_rides >> one_ride_price >> special_ticket_price;

	if (special_ticket_price < one_ride_price * special_ticket_rides) {
		/* if the special ticket is cheaper. */

		if (number_of_rides_planned % special_ticket_rides == 0) {
			/* if the number of planned rides is divisible by the special ticket rides, she buy only special tickets. */

			int special_tickets = number_of_rides_planned / special_ticket_rides;
			money = special_tickets * special_ticket_price;

		}

		else if (number_of_rides_planned % special_ticket_rides != 0) {
			/* if the number of planned rides is not divisible by the special ticket rides, she buy the maximum number of special tickets
			then compare the price of the single-ride ticket * number of remaining rides with the special ticket price. */

			int special_tickets = number_of_rides_planned / special_ticket_rides;
			int remaining_rides = number_of_rides_planned % special_ticket_rides;

			if (remaining_rides * one_ride_price <= special_ticket_price)
				money = special_tickets * special_ticket_price + remaining_rides * one_ride_price;
			else
				money = (special_tickets + 1) * special_ticket_price;
		}

	}

	else
		money = number_of_rides_planned * one_ride_price;


	cout << money;

}