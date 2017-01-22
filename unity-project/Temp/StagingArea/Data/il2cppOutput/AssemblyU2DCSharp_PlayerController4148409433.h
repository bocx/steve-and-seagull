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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// Death
struct Death_t2883266902;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayerController::edgeLeft
	GameObject_t1756533147 * ___edgeLeft_2;
	// UnityEngine.GameObject PlayerController::edgeRight
	GameObject_t1756533147 * ___edgeRight_3;
	// UnityEngine.GameObject PlayerController::model
	GameObject_t1756533147 * ___model_4;
	// System.Int32 PlayerController::items
	int32_t ___items_5;
	// UnityEngine.GameObject PlayerController::playerCharacter
	GameObject_t1756533147 * ___playerCharacter_6;
	// UnityEngine.Rigidbody PlayerController::rigidbody
	Rigidbody_t4233889191 * ___rigidbody_7;
	// Death PlayerController::death
	Death_t2883266902 * ___death_8;
	// UnityEngine.Animator PlayerController::animator
	Animator_t69676727 * ___animator_9;
	// System.Boolean PlayerController::isKilled
	bool ___isKilled_10;
	// UnityEngine.AudioSource[] PlayerController::audios
	AudioSourceU5BU5D_t1873220070* ___audios_11;
	// UnityEngine.UI.Text PlayerController::countText
	Text_t356221433 * ___countText_12;

public:
	inline static int32_t get_offset_of_edgeLeft_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___edgeLeft_2)); }
	inline GameObject_t1756533147 * get_edgeLeft_2() const { return ___edgeLeft_2; }
	inline GameObject_t1756533147 ** get_address_of_edgeLeft_2() { return &___edgeLeft_2; }
	inline void set_edgeLeft_2(GameObject_t1756533147 * value)
	{
		___edgeLeft_2 = value;
		Il2CppCodeGenWriteBarrier(&___edgeLeft_2, value);
	}

	inline static int32_t get_offset_of_edgeRight_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___edgeRight_3)); }
	inline GameObject_t1756533147 * get_edgeRight_3() const { return ___edgeRight_3; }
	inline GameObject_t1756533147 ** get_address_of_edgeRight_3() { return &___edgeRight_3; }
	inline void set_edgeRight_3(GameObject_t1756533147 * value)
	{
		___edgeRight_3 = value;
		Il2CppCodeGenWriteBarrier(&___edgeRight_3, value);
	}

	inline static int32_t get_offset_of_model_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___model_4)); }
	inline GameObject_t1756533147 * get_model_4() const { return ___model_4; }
	inline GameObject_t1756533147 ** get_address_of_model_4() { return &___model_4; }
	inline void set_model_4(GameObject_t1756533147 * value)
	{
		___model_4 = value;
		Il2CppCodeGenWriteBarrier(&___model_4, value);
	}

	inline static int32_t get_offset_of_items_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___items_5)); }
	inline int32_t get_items_5() const { return ___items_5; }
	inline int32_t* get_address_of_items_5() { return &___items_5; }
	inline void set_items_5(int32_t value)
	{
		___items_5 = value;
	}

	inline static int32_t get_offset_of_playerCharacter_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerCharacter_6)); }
	inline GameObject_t1756533147 * get_playerCharacter_6() const { return ___playerCharacter_6; }
	inline GameObject_t1756533147 ** get_address_of_playerCharacter_6() { return &___playerCharacter_6; }
	inline void set_playerCharacter_6(GameObject_t1756533147 * value)
	{
		___playerCharacter_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerCharacter_6, value);
	}

	inline static int32_t get_offset_of_rigidbody_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rigidbody_7)); }
	inline Rigidbody_t4233889191 * get_rigidbody_7() const { return ___rigidbody_7; }
	inline Rigidbody_t4233889191 ** get_address_of_rigidbody_7() { return &___rigidbody_7; }
	inline void set_rigidbody_7(Rigidbody_t4233889191 * value)
	{
		___rigidbody_7 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody_7, value);
	}

	inline static int32_t get_offset_of_death_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___death_8)); }
	inline Death_t2883266902 * get_death_8() const { return ___death_8; }
	inline Death_t2883266902 ** get_address_of_death_8() { return &___death_8; }
	inline void set_death_8(Death_t2883266902 * value)
	{
		___death_8 = value;
		Il2CppCodeGenWriteBarrier(&___death_8, value);
	}

	inline static int32_t get_offset_of_animator_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___animator_9)); }
	inline Animator_t69676727 * get_animator_9() const { return ___animator_9; }
	inline Animator_t69676727 ** get_address_of_animator_9() { return &___animator_9; }
	inline void set_animator_9(Animator_t69676727 * value)
	{
		___animator_9 = value;
		Il2CppCodeGenWriteBarrier(&___animator_9, value);
	}

	inline static int32_t get_offset_of_isKilled_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isKilled_10)); }
	inline bool get_isKilled_10() const { return ___isKilled_10; }
	inline bool* get_address_of_isKilled_10() { return &___isKilled_10; }
	inline void set_isKilled_10(bool value)
	{
		___isKilled_10 = value;
	}

	inline static int32_t get_offset_of_audios_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___audios_11)); }
	inline AudioSourceU5BU5D_t1873220070* get_audios_11() const { return ___audios_11; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_audios_11() { return &___audios_11; }
	inline void set_audios_11(AudioSourceU5BU5D_t1873220070* value)
	{
		___audios_11 = value;
		Il2CppCodeGenWriteBarrier(&___audios_11, value);
	}

	inline static int32_t get_offset_of_countText_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___countText_12)); }
	inline Text_t356221433 * get_countText_12() const { return ___countText_12; }
	inline Text_t356221433 ** get_address_of_countText_12() { return &___countText_12; }
	inline void set_countText_12(Text_t356221433 * value)
	{
		___countText_12 = value;
		Il2CppCodeGenWriteBarrier(&___countText_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
