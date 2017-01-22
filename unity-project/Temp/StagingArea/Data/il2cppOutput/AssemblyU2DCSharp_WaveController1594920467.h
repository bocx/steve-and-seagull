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
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaveController
struct  WaveController_t1594920467  : public MonoBehaviour_t1158329972
{
public:
	// System.Single WaveController::minSize
	float ___minSize_2;
	// UnityEngine.GameObject WaveController::wave
	GameObject_t1756533147 * ___wave_3;
	// UnityEngine.GameObject WaveController::whale
	GameObject_t1756533147 * ___whale_4;
	// System.Single WaveController::speed
	float ___speed_5;
	// System.Single WaveController::endPosition
	float ___endPosition_6;
	// UnityEngine.Animator WaveController::animator
	Animator_t69676727 * ___animator_7;
	// UnityEngine.Vector3 WaveController::startScale
	Vector3_t2243707580  ___startScale_8;

public:
	inline static int32_t get_offset_of_minSize_2() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___minSize_2)); }
	inline float get_minSize_2() const { return ___minSize_2; }
	inline float* get_address_of_minSize_2() { return &___minSize_2; }
	inline void set_minSize_2(float value)
	{
		___minSize_2 = value;
	}

	inline static int32_t get_offset_of_wave_3() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___wave_3)); }
	inline GameObject_t1756533147 * get_wave_3() const { return ___wave_3; }
	inline GameObject_t1756533147 ** get_address_of_wave_3() { return &___wave_3; }
	inline void set_wave_3(GameObject_t1756533147 * value)
	{
		___wave_3 = value;
		Il2CppCodeGenWriteBarrier(&___wave_3, value);
	}

	inline static int32_t get_offset_of_whale_4() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___whale_4)); }
	inline GameObject_t1756533147 * get_whale_4() const { return ___whale_4; }
	inline GameObject_t1756533147 ** get_address_of_whale_4() { return &___whale_4; }
	inline void set_whale_4(GameObject_t1756533147 * value)
	{
		___whale_4 = value;
		Il2CppCodeGenWriteBarrier(&___whale_4, value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_endPosition_6() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___endPosition_6)); }
	inline float get_endPosition_6() const { return ___endPosition_6; }
	inline float* get_address_of_endPosition_6() { return &___endPosition_6; }
	inline void set_endPosition_6(float value)
	{
		___endPosition_6 = value;
	}

	inline static int32_t get_offset_of_animator_7() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___animator_7)); }
	inline Animator_t69676727 * get_animator_7() const { return ___animator_7; }
	inline Animator_t69676727 ** get_address_of_animator_7() { return &___animator_7; }
	inline void set_animator_7(Animator_t69676727 * value)
	{
		___animator_7 = value;
		Il2CppCodeGenWriteBarrier(&___animator_7, value);
	}

	inline static int32_t get_offset_of_startScale_8() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___startScale_8)); }
	inline Vector3_t2243707580  get_startScale_8() const { return ___startScale_8; }
	inline Vector3_t2243707580 * get_address_of_startScale_8() { return &___startScale_8; }
	inline void set_startScale_8(Vector3_t2243707580  value)
	{
		___startScale_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
