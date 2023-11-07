#include <stdio.h>
#include "Earphone.h"
#include "Headphone.h"

int main() {

	Transducer* transducers[] = {
		new Transducer(),
		new Earphone(),
		new Headphone()
	};

	transducers[0]->Sound();
	transducers[1]->Sound();
	transducers[2]->Sound();

	return 0;
}