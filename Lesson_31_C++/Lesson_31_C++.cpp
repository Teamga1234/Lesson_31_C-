#include "Admin.h"

int main()
{
	Admin itStep;
	itStep.addSoft(new Free_soft("spotify", "Spotify Technology S.A."));
	itStep.addSoft(new Shareware("spotify", "Spotify Technology S.A.", Date(23, 10, 2024) - 20, 10));
	itStep.addSoft(new Commercial("spotify", "Spotify Technology S.A.", Date(23, 10, 2024), 50, 100));
	
	itStep.showList();

}