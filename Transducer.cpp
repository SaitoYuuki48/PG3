#include "Transducer.h"
#include <stdio.h>

Transducer::Transducer()
{
	name = "�ϊ���";
}

Transducer::~Transducer(){}

void Transducer::Sound()
{
	printf("����%s\n", name);
}
