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
// PlayerController
struct PlayerController_t4148409433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Death
struct  Death_t2883266902  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Death::model
	GameObject_t1756533147 * ___model_2;
	// PlayerController Death::playerController
	PlayerController_t4148409433 * ___playerController_3;

public:
	inline static int32_t get_offset_of_model_2() { return static_cast<int32_t>(offsetof(Death_t2883266902, ___model_2)); }
	inline GameObject_t1756533147 * get_model_2() const { return ___model_2; }
	inline GameObject_t1756533147 ** get_address_of_model_2() { return &___model_2; }
	inline void set_model_2(GameObject_t1756533147 * value)
	{
		___model_2 = value;
		Il2CppCodeGenWriteBarrier(&___model_2, value);
	}

	inline static int32_t get_offset_of_playerController_3() { return static_cast<int32_t>(offsetof(Death_t2883266902, ___playerController_3)); }
	inline PlayerController_t4148409433 * get_playerController_3() const { return ___playerController_3; }
	inline PlayerController_t4148409433 ** get_address_of_playerController_3() { return &___playerController_3; }
	inline void set_playerController_3(PlayerController_t4148409433 * value)
	{
		___playerController_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerController_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
