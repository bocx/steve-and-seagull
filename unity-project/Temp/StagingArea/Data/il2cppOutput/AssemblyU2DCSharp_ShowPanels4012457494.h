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

// ShowPanels
struct  ShowPanels_t4012457494  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ShowPanels::optionsPanel
	GameObject_t1756533147 * ___optionsPanel_2;
	// UnityEngine.GameObject ShowPanels::optionsTint
	GameObject_t1756533147 * ___optionsTint_3;
	// UnityEngine.GameObject ShowPanels::menuPanel
	GameObject_t1756533147 * ___menuPanel_4;
	// UnityEngine.GameObject ShowPanels::pausePanel
	GameObject_t1756533147 * ___pausePanel_5;

public:
	inline static int32_t get_offset_of_optionsPanel_2() { return static_cast<int32_t>(offsetof(ShowPanels_t4012457494, ___optionsPanel_2)); }
	inline GameObject_t1756533147 * get_optionsPanel_2() const { return ___optionsPanel_2; }
	inline GameObject_t1756533147 ** get_address_of_optionsPanel_2() { return &___optionsPanel_2; }
	inline void set_optionsPanel_2(GameObject_t1756533147 * value)
	{
		___optionsPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___optionsPanel_2, value);
	}

	inline static int32_t get_offset_of_optionsTint_3() { return static_cast<int32_t>(offsetof(ShowPanels_t4012457494, ___optionsTint_3)); }
	inline GameObject_t1756533147 * get_optionsTint_3() const { return ___optionsTint_3; }
	inline GameObject_t1756533147 ** get_address_of_optionsTint_3() { return &___optionsTint_3; }
	inline void set_optionsTint_3(GameObject_t1756533147 * value)
	{
		___optionsTint_3 = value;
		Il2CppCodeGenWriteBarrier(&___optionsTint_3, value);
	}

	inline static int32_t get_offset_of_menuPanel_4() { return static_cast<int32_t>(offsetof(ShowPanels_t4012457494, ___menuPanel_4)); }
	inline GameObject_t1756533147 * get_menuPanel_4() const { return ___menuPanel_4; }
	inline GameObject_t1756533147 ** get_address_of_menuPanel_4() { return &___menuPanel_4; }
	inline void set_menuPanel_4(GameObject_t1756533147 * value)
	{
		___menuPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___menuPanel_4, value);
	}

	inline static int32_t get_offset_of_pausePanel_5() { return static_cast<int32_t>(offsetof(ShowPanels_t4012457494, ___pausePanel_5)); }
	inline GameObject_t1756533147 * get_pausePanel_5() const { return ___pausePanel_5; }
	inline GameObject_t1756533147 ** get_address_of_pausePanel_5() { return &___pausePanel_5; }
	inline void set_pausePanel_5(GameObject_t1756533147 * value)
	{
		___pausePanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___pausePanel_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
