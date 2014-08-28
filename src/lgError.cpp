#include "lgError.h"

void lgError(string message, string where)
{	
	cout << "-------------------" << endl;
	cout << "[!] Critial error on " << where << endl;
	cout << message << endl;
	cout << "-------------------" << endl;
	exit(-1);
}
void lgWarning(string message, string where)
{
	cout << "[!] Warning on " << where << endl;
	cout << message << endl;
}