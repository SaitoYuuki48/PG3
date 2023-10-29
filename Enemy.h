#pragma once

class Enemy
{
private:
	enum class Phase {
		kApproach,
		kFire,
		kLeave,
	};

public:
	/// <summary>
	/// ���t���[������
	/// </summary>
	void Update();

private:
	// �ڋ߂���
	void Approach();
	// �e����
	void Fire();
	// ���E����
	void Leave();
	

private:
	Phase phase_ = Phase::kApproach;

	static void (Enemy::* spPhaseTable[])();
};

