#include "Free_Soft.h"
#include "Shareware.h"
#include "Date.h"

int main()
{
	Free_soft a("spotify", "Spotify Technology S.A.");
	a.showInfo();
	cout << endl;
	Shareware b("spotify", "Spotify Technology S.A.", Date(23, 10, 2024)- 20, 10);
	b.showInfo();
}