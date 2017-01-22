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

// wave
struct  wave_t1600140723  : public MonoBehaviour_t1158329972
{
public:
	// System.Single wave::maxSize
	float ___maxSize_2;
	// System.Single wave::growFactor
	float ___growFactor_3;
	// System.Single wave::waitTime
	float ___waitTime_4;
	// UnityEngine.GameObject wave::whale
	GameObject_t1756533147 * ___whale_5;
	// System.Single wave::endPosition
	float ___endPosition_6;
	// System.Single wave::startPosition
	float ___startPosition_7;

public:
	inline static int32_t get_offset_of_maxSize_2() { return static_cast<int32_t>(offsetof(wave_t1600140723, ___maxSize_2)); }
	inline float get_maxSize_2() const { return ___maxSize_2; }
	inline float* get_address_of_maxSize_2() { return &___maxSize_2; }
	inline void set_maxSize_2(float value)
	{
		___maxSize_2 = value;
	}

	inline static int32_t get_offset_of_growFactor_3() { return static_cast<int32_t>(offsetof(wave_t1600140723, ___growFactor_3)); }
	inline float get_growFactor_3() const { return ___growFactor_3; }
	inline float* get_address_of_growFactor_3() { return &___growFactor_3; }
	inline void set_growFactor_3(float value)
	{
		___growFactor_3 = value;
	}

	inline static int32_t get_offset_of_waitTime_4() { return static_cast<int32_t>(offsetof(wave_t1600140723, ___waitTime_4)); }
	inline float get_waitTime_4() const { return ___waitTime_4; }
	inline float* get_address_of_waitTime_4() { return &___waitTime_4; }
	inline void set_waitTime_4(float value)
	{
		___waitTime_4 = value;
	}

	inline static int32_t get_offset_of_whale_5() { return static_cast<int32_t>(offsetof(wave_t1600140723, ___whale_5)); }
	inline GameObject_t1756533147 * get_whale_5() const { return ___whale_5; }
	inline GameObject_t1756533147 ** get_address_of_whale_5() { return &___whale_5; }
	inline void set_whale_5(GameObject_t1756533147 * value)
	{
		___whale_5 = value;
		Il2CppCodeGenWriteBarrier(&___whale_5, value);
	}

	inline static int32_t get_offset_of_endPosition_6() { return static_cast<int32_t>(offsetof(wave_t1600140723, ___endPosition_6)); }
	inline float get_endPosition_6() const { return ___endPosition_6; }
	inline float* get_address_of_endPosition_6() { return &___endPosition_6; }
	inline void set_endPosition_6(float value)
	{
		___endPosition_6 = value;
	}

	inline static int32_t get_offset_of_startPosition_7() { return static_cast<int32_t>(offsetof(wave_t1600140723, ___startPosition_7)); }
	inline float get_startPosition_7() const { return ___startPosition_7; }
	inline float* get_address_of_startPosition_7() { return &___startPosition_7; }
	inline void set_startPosition_7(float value)
	{
		___startPosition_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
