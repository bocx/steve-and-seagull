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

// PickUp
struct  PickUp_t726362912  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PickUp::player
	GameObject_t1756533147 * ___player_2;
	// PlayerController PickUp::playerController
	PlayerController_t4148409433 * ___playerController_3;
	// System.Single PickUp::speed
	float ___speed_4;
	// UnityEngine.GameObject PickUp::playerCharacter
	GameObject_t1756533147 * ___playerCharacter_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(PickUp_t726362912, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_playerController_3() { return static_cast<int32_t>(offsetof(PickUp_t726362912, ___playerController_3)); }
	inline PlayerController_t4148409433 * get_playerController_3() const { return ___playerController_3; }
	inline PlayerController_t4148409433 ** get_address_of_playerController_3() { return &___playerController_3; }
	inline void set_playerController_3(PlayerController_t4148409433 * value)
	{
		___playerController_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerController_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PickUp_t726362912, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_playerCharacter_5() { return static_cast<int32_t>(offsetof(PickUp_t726362912, ___playerCharacter_5)); }
	inline GameObject_t1756533147 * get_playerCharacter_5() const { return ___playerCharacter_5; }
	inline GameObject_t1756533147 ** get_address_of_playerCharacter_5() { return &___playerCharacter_5; }
	inline void set_playerCharacter_5(GameObject_t1756533147 * value)
	{
		___playerCharacter_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerCharacter_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
