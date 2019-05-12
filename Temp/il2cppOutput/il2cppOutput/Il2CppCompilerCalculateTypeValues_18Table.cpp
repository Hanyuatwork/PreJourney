#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Void
struct Void_t1185182177;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Text
struct Text_t1901882714;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Transform
struct Transform_t3600365921;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef UNITYEVENT_1_T3800508814_H
#define UNITYEVENT_1_T3800508814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Collections.Generic.List`1<KKSpeech.LanguageOption>>
struct  UnityEvent_1_t3800508814  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3800508814, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3800508814_H
#ifndef UNITYEVENT_1_T2729110193_H
#define UNITYEVENT_1_T2729110193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.String>
struct  UnityEvent_1_t2729110193  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2729110193, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2729110193_H
#ifndef UNITYEVENT_1_T978947469_H
#define UNITYEVENT_1_T978947469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_t978947469  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t978947469, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T978947469_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef AVAILABILITYCALLBACK_T2432171084_H
#define AVAILABILITYCALLBACK_T2432171084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KKSpeech.SpeechRecognizerListener/AvailabilityCallback
struct  AvailabilityCallback_t2432171084  : public UnityEvent_1_t978947469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVAILABILITYCALLBACK_T2432171084_H
#ifndef ERRORCALLBACK_T334159912_H
#define ERRORCALLBACK_T334159912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KKSpeech.SpeechRecognizerListener/ErrorCallback
struct  ErrorCallback_t334159912  : public UnityEvent_1_t2729110193
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCALLBACK_T334159912_H
#ifndef SUPPORTEDLANGUAGESCALLBACK_T4242193044_H
#define SUPPORTEDLANGUAGESCALLBACK_T4242193044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KKSpeech.SpeechRecognizerListener/SupportedLanguagesCallback
struct  SupportedLanguagesCallback_t4242193044  : public UnityEvent_1_t3800508814
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTEDLANGUAGESCALLBACK_T4242193044_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef STATUS_T3328643239_H
#define STATUS_T3328643239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// status
struct  status_t3328643239  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image status::healthBar
	Image_t2670269651 * ___healthBar_2;
	// UnityEngine.UI.Text status::time
	Text_t1901882714 * ___time_3;
	// System.Single status::maxHP
	float ___maxHP_4;
	// System.Single status::CurrentHP
	float ___CurrentHP_5;
	// System.Single status::percentage
	float ___percentage_6;
	// System.Single status::timer
	float ___timer_7;

public:
	inline static int32_t get_offset_of_healthBar_2() { return static_cast<int32_t>(offsetof(status_t3328643239, ___healthBar_2)); }
	inline Image_t2670269651 * get_healthBar_2() const { return ___healthBar_2; }
	inline Image_t2670269651 ** get_address_of_healthBar_2() { return &___healthBar_2; }
	inline void set_healthBar_2(Image_t2670269651 * value)
	{
		___healthBar_2 = value;
		Il2CppCodeGenWriteBarrier((&___healthBar_2), value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(status_t3328643239, ___time_3)); }
	inline Text_t1901882714 * get_time_3() const { return ___time_3; }
	inline Text_t1901882714 ** get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(Text_t1901882714 * value)
	{
		___time_3 = value;
		Il2CppCodeGenWriteBarrier((&___time_3), value);
	}

	inline static int32_t get_offset_of_maxHP_4() { return static_cast<int32_t>(offsetof(status_t3328643239, ___maxHP_4)); }
	inline float get_maxHP_4() const { return ___maxHP_4; }
	inline float* get_address_of_maxHP_4() { return &___maxHP_4; }
	inline void set_maxHP_4(float value)
	{
		___maxHP_4 = value;
	}

	inline static int32_t get_offset_of_CurrentHP_5() { return static_cast<int32_t>(offsetof(status_t3328643239, ___CurrentHP_5)); }
	inline float get_CurrentHP_5() const { return ___CurrentHP_5; }
	inline float* get_address_of_CurrentHP_5() { return &___CurrentHP_5; }
	inline void set_CurrentHP_5(float value)
	{
		___CurrentHP_5 = value;
	}

	inline static int32_t get_offset_of_percentage_6() { return static_cast<int32_t>(offsetof(status_t3328643239, ___percentage_6)); }
	inline float get_percentage_6() const { return ___percentage_6; }
	inline float* get_address_of_percentage_6() { return &___percentage_6; }
	inline void set_percentage_6(float value)
	{
		___percentage_6 = value;
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(status_t3328643239, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}
};

struct status_t3328643239_StaticFields
{
public:
	// status status::instance
	status_t3328643239 * ___instance_8;

public:
	inline static int32_t get_offset_of_instance_8() { return static_cast<int32_t>(offsetof(status_t3328643239_StaticFields, ___instance_8)); }
	inline status_t3328643239 * get_instance_8() const { return ___instance_8; }
	inline status_t3328643239 ** get_address_of_instance_8() { return &___instance_8; }
	inline void set_instance_8(status_t3328643239 * value)
	{
		___instance_8 = value;
		Il2CppCodeGenWriteBarrier((&___instance_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T3328643239_H
#ifndef PATHFINDING_T1696160666_H
#define PATHFINDING_T1696160666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathFinding
struct  PathFinding_t1696160666  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Transform> PathFinding::Poss
	List_1_t777473367 * ___Poss_2;
	// System.Collections.Generic.List`1<UnityEngine.Transform> PathFinding::Doors
	List_1_t777473367 * ___Doors_3;
	// UnityEngine.LineRenderer PathFinding::Line
	LineRenderer_t3154350270 * ___Line_4;
	// UnityEngine.GameObject PathFinding::ball
	GameObject_t1113636619 * ___ball_5;
	// UnityEngine.Transform PathFinding::DoorParent
	Transform_t3600365921 * ___DoorParent_6;
	// UnityEngine.Transform PathFinding::PosParent
	Transform_t3600365921 * ___PosParent_7;
	// UnityEngine.Vector3 PathFinding::Destination
	Vector3_t3722313464  ___Destination_8;
	// System.Int32 PathFinding::counter
	int32_t ___counter_9;
	// System.Boolean PathFinding::speak
	bool ___speak_10;
	// System.Int32 PathFinding::trig
	int32_t ___trig_11;

public:
	inline static int32_t get_offset_of_Poss_2() { return static_cast<int32_t>(offsetof(PathFinding_t1696160666, ___Poss_2)); }
	inline List_1_t777473367 * get_Poss_2() const { return ___Poss_2; }
	inline List_1_t777473367 ** get_address_of_Poss_2() { return &___Poss_2; }
	inline void set_Poss_2(List_1_t777473367 * value)
	{
		___Poss_2 = value;
		Il2CppCodeGenWriteBarrier((&___Poss_2), value);
	}

	inline static int32_t get_offset_of_Doors_3() { return static_cast<int32_t>(offsetof(PathFinding_t1696160666, ___Doors_3)); }
	inline List_1_t777473367 * get_Doors_3() const { return ___Doors_3; }
	inline List_1_t777473367 ** get_address_of_Doors_3() { return &___Doors_3; }
	inline void set_Doors_3(List_1_t777473367 * value)
	{
		___Doors_3 = value;
		Il2CppCodeGenWriteBarrier((&___Doors_3), value);
	}

	inline static int32_t get_offset_of_Line_4() { return static_cast<int32_t>(offsetof(PathFinding_t1696160666, ___Line_4)); }
	inline LineRenderer_t3154350270 * get_Line_4() const { return ___Line_4; }
	inline LineRenderer_t3154350270 ** get_address_of_Line_4() { return &___Line_4; }
	inline void set_Line_4(LineRenderer_t3154350270 * value)
	{
		___Line_4 = value;
		Il2CppCodeGenWriteBarrier((&___Line_4), value);
	}

	inline static int32_t get_offset_of_ball_5() { return static_cast<int32_t>(offsetof(PathFinding_t1696160666, ___ball_5)); }
	inline GameObject_t1113636619 * get_ball_5() const { return ___ball_5; }
	inline GameObject_t1113636619 ** get_address_of_ball_5() { return &___ball_5; }
	inline void set_ball_5(GameObject_t1113636619 * value)
	{
		___ball_5 = value;
		Il2CppCodeGenWriteBarrier((&___ball_5), value);
	}

	inline static int32_t get_offset_of_DoorParent_6() { return static_cast<int32_t>(offsetof(PathFinding_t1696160666, ___DoorParent_6)); }
	inline Transform_t3600365921 * get_DoorParent_6() const { return ___DoorParent_6; }
	inline Transform_t3600365921 ** get_address_of_DoorParent_6() { return &___DoorParent_6; }
	inline void set_DoorParent_6(Transform_t3600365921 * value)
	{
		___DoorParent_6 = value;
		Il2CppCodeGenWriteBarrier((&___DoorParent_6), value);
	}

	inline static int32_t get_offset_of_PosParent_7() { return static_cast<int32_t>(offsetof(PathFinding_t1696160666, ___PosParent_7)); }
	inline Transform_t3600365921 * get_PosParent_7() const { return ___PosParent_7; }
	inline Transform_t3600365921 ** get_address_of_PosParent_7() { return &___PosParent_7; }
	inline void set_PosParent_7(Transform_t3600365921 * value)
	{
		___PosParent_7 = value;
		Il2CppCodeGenWriteBarrier((&___PosParent_7), value);
	}

	inline static int32_t get_offset_of_Destination_8() { return static_cast<int32_t>(offsetof(PathFinding_t1696160666, ___Destination_8)); }
	inline Vector3_t3722313464  get_Destination_8() const { return ___Destination_8; }
	inline Vector3_t3722313464 * get_address_of_Destination_8() { return &___Destination_8; }
	inline void set_Destination_8(Vector3_t3722313464  value)
	{
		___Destination_8 = value;
	}

	inline static int32_t get_offset_of_counter_9() { return static_cast<int32_t>(offsetof(PathFinding_t1696160666, ___counter_9)); }
	inline int32_t get_counter_9() const { return ___counter_9; }
	inline int32_t* get_address_of_counter_9() { return &___counter_9; }
	inline void set_counter_9(int32_t value)
	{
		___counter_9 = value;
	}

	inline static int32_t get_offset_of_speak_10() { return static_cast<int32_t>(offsetof(PathFinding_t1696160666, ___speak_10)); }
	inline bool get_speak_10() const { return ___speak_10; }
	inline bool* get_address_of_speak_10() { return &___speak_10; }
	inline void set_speak_10(bool value)
	{
		___speak_10 = value;
	}

	inline static int32_t get_offset_of_trig_11() { return static_cast<int32_t>(offsetof(PathFinding_t1696160666, ___trig_11)); }
	inline int32_t get_trig_11() const { return ___trig_11; }
	inline int32_t* get_address_of_trig_11() { return &___trig_11; }
	inline void set_trig_11(int32_t value)
	{
		___trig_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHFINDING_T1696160666_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (AvailabilityCallback_t2432171084), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (ErrorCallback_t334159912), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (SupportedLanguagesCallback_t4242193044), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (PathFinding_t1696160666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[10] = 
{
	PathFinding_t1696160666::get_offset_of_Poss_2(),
	PathFinding_t1696160666::get_offset_of_Doors_3(),
	PathFinding_t1696160666::get_offset_of_Line_4(),
	PathFinding_t1696160666::get_offset_of_ball_5(),
	PathFinding_t1696160666::get_offset_of_DoorParent_6(),
	PathFinding_t1696160666::get_offset_of_PosParent_7(),
	PathFinding_t1696160666::get_offset_of_Destination_8(),
	PathFinding_t1696160666::get_offset_of_counter_9(),
	PathFinding_t1696160666::get_offset_of_speak_10(),
	PathFinding_t1696160666::get_offset_of_trig_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (status_t3328643239), -1, sizeof(status_t3328643239_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1804[7] = 
{
	status_t3328643239::get_offset_of_healthBar_2(),
	status_t3328643239::get_offset_of_time_3(),
	status_t3328643239::get_offset_of_maxHP_4(),
	status_t3328643239::get_offset_of_CurrentHP_5(),
	status_t3328643239::get_offset_of_percentage_6(),
	status_t3328643239::get_offset_of_timer_7(),
	status_t3328643239_StaticFields::get_offset_of_instance_8(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
