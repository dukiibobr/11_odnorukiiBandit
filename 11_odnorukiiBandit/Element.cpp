#include "Element.h"

 Element::Element()
{
	sobaka = '@';
	vidsotok = '%';
	zirochka = '*';
}

  char Element::getRandomSymb() {
	 int random = rand() % 3;
	 if (random == 0)
		 return sobaka;
	 else if (random == 1)
		 return vidsotok;
	 else
		 return zirochka;
 }
