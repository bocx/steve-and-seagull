#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game
struct  Game_t1600141214  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Game::approachingDoom
	GameObject_t1756533147 * ___approachingDoom_2;
	// System.Single Game::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_approachingDoom_2() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___approachingDoom_2)); }
	inline GameObject_t1756533147 * get_approachingDoom_2() const { return ___approachingDoom_2; }
	inline GameObject_t1756533147 ** get_address_of_approachingDoom_2() { return &___approachingDoom_2; }
	inline void set_approachingDoom_2(GameObject_t1756533147 * value)
	{
		___approachingDoom_2 = value;
		Il2CppCodeGenWriteBarrier(&___approachingDoom_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
