#pragma once
#include "Transducer.h"
// �w�b�h�z��
class Headphone : public Transducer
{
public:
	Headphone();
	~Headphone();
	
	void Sound() override;
};

