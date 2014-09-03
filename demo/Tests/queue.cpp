#include "libgame.h"

int main () {

	cout << "File: lgQueue test" << endl;

	float i =0;

	// Int
	lgQueue<int> queue(5);

	for (i=0; i<5; i++)
	{
		queue.insert(i);
		cout << "Inserted: " << i << endl;
	}

	queue.print();
	cout << "Full: " << queue.full() << endl;
	cout << "Removed: " << queue.remove() << endl;
	queue.insert(i);
	cout << "Inserted: " << i++ << endl;
	queue.print();

	cout << "Empty: " << queue.empty() << endl;
	cout << "Size: "  << queue.size() << endl;



	cout << endl << endl << "Random Queue" << endl;
	lgQueue<int> queuer(1000000);
	int nbr_random = 0;
	random_device rd;

	for(i=0; i< 500000; i++)
		queuer.insert(i);
	
	for(i=0; i< 10000000; i++)
	{
		nbr_random = rd();
		if (nbr_random % 2 == 0)
			queuer.insert(nbr_random);
		else
			queuer.remove();
	}
	cout << "Size: "  << queuer.size() << endl;

	
}