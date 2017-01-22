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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SafetiesController
struct  SafetiesController_t2383666998  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SafetiesController::speed
	float ___speed_2;
	// UnityEngine.GameObject SafetiesController::edgeLeft
	GameObject_t1756533147 * ___edgeLeft_3;
	// UnityEngine.GameObject SafetiesController::edgeRight
	GameObject_t1756533147 * ___edgeRight_4;
	// System.Single SafetiesController::horizonZPos
	float ___horizonZPos_5;
	// System.Single SafetiesController::nearEdgeZPos
	float ___nearEdgeZPos_6;
	// UnityEngine.GameObject[] SafetiesController::types
	GameObjectU5BU5D_t3057952154* ___types_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SafetiesController::safeties
	List_1_t1125654279 * ___safeties_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(SafetiesController_t2383666998, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_edgeLeft_3() { return static_cast<int32_t>(offsetof(SafetiesController_t2383666998, ___edgeLeft_3)); }
	inline GameObject_t1756533147 * get_edgeLeft_3() const { return ___edgeLeft_3; }
	inline GameObject_t1756533147 ** get_address_of_edgeLeft_3() { return &___edgeLeft_3; }
	inline void set_edgeLeft_3(GameObject_t1756533147 * value)
	{
		___edgeLeft_3 = value;
		Il2CppCodeGenWriteBarrier(&___edgeLeft_3, value);
	}

	inline static int32_t get_offset_of_edgeRight_4() { return static_cast<int32_t>(offsetof(SafetiesController_t2383666998, ___edgeRight_4)); }
	inline GameObject_t1756533147 * get_edgeRight_4() const { return ___edgeRight_4; }
	inline GameObject_t1756533147 ** get_address_of_edgeRight_4() { return &___edgeRight_4; }
	inline void set_edgeRight_4(GameObject_t1756533147 * value)
	{
		___edgeRight_4 = value;
		Il2CppCodeGenWriteBarrier(&___edgeRight_4, value);
	}

	inline static int32_t get_offset_of_horizonZPos_5() { return static_cast<int32_t>(offsetof(SafetiesController_t2383666998, ___horizonZPos_5)); }
	inline float get_horizonZPos_5() const { return ___horizonZPos_5; }
	inline float* get_address_of_horizonZPos_5() { return &___horizonZPos_5; }
	inline void set_horizonZPos_5(float value)
	{
		___horizonZPos_5 = value;
	}

	inline static int32_t get_offset_of_nearEdgeZPos_6() { return static_cast<int32_t>(offsetof(SafetiesController_t2383666998, ___nearEdgeZPos_6)); }
	inline float get_nearEdgeZPos_6() const { return ___nearEdgeZPos_6; }
	inline float* get_address_of_nearEdgeZPos_6() { return &___nearEdgeZPos_6; }
	inline void set_nearEdgeZPos_6(float value)
	{
		___nearEdgeZPos_6 = value;
	}

	inline static int32_t get_offset_of_types_7() { return static_cast<int32_t>(offsetof(SafetiesController_t2383666998, ___types_7)); }
	inline GameObjectU5BU5D_t3057952154* get_types_7() const { return ___types_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_types_7() { return &___types_7; }
	inline void set_types_7(GameObjectU5BU5D_t3057952154* value)
	{
		___types_7 = value;
		Il2CppCodeGenWriteBarrier(&___types_7, value);
	}

	inline static int32_t get_offset_of_safeties_8() { return static_cast<int32_t>(offsetof(SafetiesController_t2383666998, ___safeties_8)); }
	inline List_1_t1125654279 * get_safeties_8() const { return ___safeties_8; }
	inline List_1_t1125654279 ** get_address_of_safeties_8() { return &___safeties_8; }
	inline void set_safeties_8(List_1_t1125654279 * value)
	{
		___safeties_8 = value;
		Il2CppCodeGenWriteBarrier(&___safeties_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
