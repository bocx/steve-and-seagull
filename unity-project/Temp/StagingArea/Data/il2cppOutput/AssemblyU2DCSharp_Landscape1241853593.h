#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Landscape
struct  Landscape_t1241853593  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Landscape::speed
	float ___speed_2;
	// System.Single Landscape::distanceBetween
	float ___distanceBetween_3;
	// System.Single Landscape::posToMoveAt
	float ___posToMoveAt_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Landscape_t1241853593, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_distanceBetween_3() { return static_cast<int32_t>(offsetof(Landscape_t1241853593, ___distanceBetween_3)); }
	inline float get_distanceBetween_3() const { return ___distanceBetween_3; }
	inline float* get_address_of_distanceBetween_3() { return &___distanceBetween_3; }
	inline void set_distanceBetween_3(float value)
	{
		___distanceBetween_3 = value;
	}

	inline static int32_t get_offset_of_posToMoveAt_4() { return static_cast<int32_t>(offsetof(Landscape_t1241853593, ___posToMoveAt_4)); }
	inline float get_posToMoveAt_4() const { return ___posToMoveAt_4; }
	inline float* get_address_of_posToMoveAt_4() { return &___posToMoveAt_4; }
	inline void set_posToMoveAt_4(float value)
	{
		___posToMoveAt_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
