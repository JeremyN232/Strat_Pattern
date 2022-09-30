#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.List`1<Chapter.Strategy.IManeuverBehaviour>
struct List_1_t91F86D882823933C9209AFAD14707DCEDF173417;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// Chapter.Strategy.IManeuverBehaviour[]
struct IManeuverBehaviourU5BU5D_t765064F3F71522A050783FAAF366478D3E5053C9;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Chapter.Strategy.BoppingManeuver
struct BoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912;
// Chapter.Strategy.ClientStrategy
struct ClientStrategy_t2CD3132D0ADD984D86D44FBAB8E381375A300A3E;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Chapter.Strategy.Drone
struct Drone_t489091E572DA0E7234873811B728A3820740914E;
// Chapter.Strategy.FallbackManeuver
struct FallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Chapter.Strategy.IManeuverBehaviour
struct IManeuverBehaviour_t91574446B1837E8E645EBC516B749D5BCBEC3619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Chapter.Strategy.WeavingManeuver
struct WeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59;
// Chapter.Strategy.BoppingManeuver/<Bopple>d__1
struct U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85;
// Chapter.Strategy.FallbackManeuver/<Fallback>d__1
struct U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC;
// Chapter.Strategy.WeavingManeuver/<Weave>d__1
struct U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IManeuverBehaviour_t91574446B1837E8E645EBC516B749D5BCBEC3619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t91F86D882823933C9209AFAD14707DCEDF173417_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralAE25642FB427038362FF378445859FCB35DE7A89;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912_m86C5974966DDD6E9CCD9B155DC8902A27EB70F0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDrone_t489091E572DA0E7234873811B728A3820740914E_mE82EC4FBB912E3B1FF8A6A321D2194DF684A74BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B_mB71D7D9CB1AF5870E2579B4BC3EC3A7A0130A53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59_m2F0643F1AA79A6C5E1FEB5BC621B5DE971BBB781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDrone_t489091E572DA0E7234873811B728A3820740914E_mC83F9BE266290009FB3CA74669212BC77F36D1D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3F5910C82AB4389A13A25DC4AB802C12E86939A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6F53C44029B30CCEF8F3EFB9B7F3F46D675ECF94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCE6BB64EAA81B7C30AFB401F096EF9FC0A5305E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC008283FD8B39960E4A00938D2BF685BE1E14837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBoppleU3Ed__1_System_Collections_IEnumerator_Reset_m63426D1ED653D85C9F607A389E1D1F4D111CA04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFallbackU3Ed__1_System_Collections_IEnumerator_Reset_mD5705A8E323937AAA2BAC5D7472B13C5766ED8FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWeaveU3Ed__1_System_Collections_IEnumerator_Reset_m9762887D2A3E575A541CEF752011DD515A6C8AB7_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<Chapter.Strategy.IManeuverBehaviour>
struct List_1_t91F86D882823933C9209AFAD14707DCEDF173417  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IManeuverBehaviourU5BU5D_t765064F3F71522A050783FAAF366478D3E5053C9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t91F86D882823933C9209AFAD14707DCEDF173417_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IManeuverBehaviourU5BU5D_t765064F3F71522A050783FAAF366478D3E5053C9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Chapter.Strategy.BoppingManeuver/<Bopple>d__1
struct U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85  : public RuntimeObject
{
	// System.Int32 Chapter.Strategy.BoppingManeuver/<Bopple>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Chapter.Strategy.BoppingManeuver/<Bopple>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Chapter.Strategy.Drone Chapter.Strategy.BoppingManeuver/<Bopple>d__1::drone
	Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone_2;
	// System.Single Chapter.Strategy.BoppingManeuver/<Bopple>d__1::<time>5__2
	float ___U3CtimeU3E5__2_3;
	// System.Boolean Chapter.Strategy.BoppingManeuver/<Bopple>d__1::<isReverse>5__3
	bool ___U3CisReverseU3E5__3_4;
	// System.Single Chapter.Strategy.BoppingManeuver/<Bopple>d__1::<speed>5__4
	float ___U3CspeedU3E5__4_5;
	// UnityEngine.Vector3 Chapter.Strategy.BoppingManeuver/<Bopple>d__1::<startPosition>5__5
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartPositionU3E5__5_6;
	// UnityEngine.Vector3 Chapter.Strategy.BoppingManeuver/<Bopple>d__1::<endPosition>5__6
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CendPositionU3E5__6_7;
	// UnityEngine.Vector3 Chapter.Strategy.BoppingManeuver/<Bopple>d__1::<start>5__7
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartU3E5__7_8;
	// UnityEngine.Vector3 Chapter.Strategy.BoppingManeuver/<Bopple>d__1::<end>5__8
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CendU3E5__8_9;
};

// Chapter.Strategy.FallbackManeuver/<Fallback>d__1
struct U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC  : public RuntimeObject
{
	// System.Int32 Chapter.Strategy.FallbackManeuver/<Fallback>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Chapter.Strategy.FallbackManeuver/<Fallback>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Chapter.Strategy.Drone Chapter.Strategy.FallbackManeuver/<Fallback>d__1::drone
	Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone_2;
	// System.Single Chapter.Strategy.FallbackManeuver/<Fallback>d__1::<time>5__2
	float ___U3CtimeU3E5__2_3;
	// System.Single Chapter.Strategy.FallbackManeuver/<Fallback>d__1::<speed>5__3
	float ___U3CspeedU3E5__3_4;
	// UnityEngine.Vector3 Chapter.Strategy.FallbackManeuver/<Fallback>d__1::<startPosition>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartPositionU3E5__4_5;
	// UnityEngine.Vector3 Chapter.Strategy.FallbackManeuver/<Fallback>d__1::<endPosition>5__5
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CendPositionU3E5__5_6;
};

// Chapter.Strategy.WeavingManeuver/<Weave>d__1
struct U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335  : public RuntimeObject
{
	// System.Int32 Chapter.Strategy.WeavingManeuver/<Weave>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Chapter.Strategy.WeavingManeuver/<Weave>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Chapter.Strategy.Drone Chapter.Strategy.WeavingManeuver/<Weave>d__1::drone
	Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone_2;
	// System.Single Chapter.Strategy.WeavingManeuver/<Weave>d__1::<time>5__2
	float ___U3CtimeU3E5__2_3;
	// System.Boolean Chapter.Strategy.WeavingManeuver/<Weave>d__1::<isReverse>5__3
	bool ___U3CisReverseU3E5__3_4;
	// System.Single Chapter.Strategy.WeavingManeuver/<Weave>d__1::<speed>5__4
	float ___U3CspeedU3E5__4_5;
	// UnityEngine.Vector3 Chapter.Strategy.WeavingManeuver/<Weave>d__1::<startPosition>5__5
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartPositionU3E5__5_6;
	// UnityEngine.Vector3 Chapter.Strategy.WeavingManeuver/<Weave>d__1::<endPosition>5__6
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CendPositionU3E5__6_7;
	// UnityEngine.Vector3 Chapter.Strategy.WeavingManeuver/<Weave>d__1::<start>5__7
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartU3E5__7_8;
	// UnityEngine.Vector3 Chapter.Strategy.WeavingManeuver/<Weave>d__1::<end>5__8
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CendU3E5__8_9;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Chapter.Strategy.BoppingManeuver
struct BoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Chapter.Strategy.ClientStrategy
struct ClientStrategy_t2CD3132D0ADD984D86D44FBAB8E381375A300A3E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Chapter.Strategy.ClientStrategy::_drone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____drone_4;
	// System.Collections.Generic.List`1<Chapter.Strategy.IManeuverBehaviour> Chapter.Strategy.ClientStrategy::_components
	List_1_t91F86D882823933C9209AFAD14707DCEDF173417* ____components_5;
};

// Chapter.Strategy.Drone
struct Drone_t489091E572DA0E7234873811B728A3820740914E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RaycastHit Chapter.Strategy.Drone::_hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ____hit_4;
	// UnityEngine.Vector3 Chapter.Strategy.Drone::_rayDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____rayDirection_5;
	// System.Single Chapter.Strategy.Drone::_rayAngle
	float ____rayAngle_6;
	// System.Single Chapter.Strategy.Drone::_rayDistance
	float ____rayDistance_7;
	// System.Single Chapter.Strategy.Drone::speed
	float ___speed_8;
	// System.Single Chapter.Strategy.Drone::maxHeight
	float ___maxHeight_9;
	// System.Single Chapter.Strategy.Drone::weavingDistance
	float ___weavingDistance_10;
	// System.Single Chapter.Strategy.Drone::fallbackDistance
	float ___fallbackDistance_11;
};

// Chapter.Strategy.FallbackManeuver
struct FallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Chapter.Strategy.WeavingManeuver
struct WeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Collections.IEnumerator Chapter.Strategy.BoppingManeuver::Bopple(Chapter.Strategy.Drone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoppingManeuver_Bopple_mDC25874168465C4009AE28E0C8C4BE0C9088877C (BoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912* __this, Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Chapter.Strategy.BoppingManeuver/<Bopple>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoppleU3Ed__1__ctor_m903521B4CC58F72C48E1AA72E734BF1B6E911F5C (U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___type0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Chapter.Strategy.Drone>()
inline Drone_t489091E572DA0E7234873811B728A3820740914E* GameObject_AddComponent_TisDrone_t489091E572DA0E7234873811B728A3820740914E_mE82EC4FBB912E3B1FF8A6A321D2194DF684A74BC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Drone_t489091E572DA0E7234873811B728A3820740914E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void Chapter.Strategy.ClientStrategy::ApplyRandomStrategies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientStrategy_ApplyRandomStrategies_m63A57B33F32267C0B22464DC5AAE9B886D5C08D3 (ClientStrategy_t2CD3132D0ADD984D86D44FBAB8E381375A300A3E* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Chapter.Strategy.WeavingManeuver>()
inline WeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59* GameObject_AddComponent_TisWeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59_m2F0643F1AA79A6C5E1FEB5BC621B5DE971BBB781 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Chapter.Strategy.IManeuverBehaviour>::Add(T)
inline void List_1_Add_m3F5910C82AB4389A13A25DC4AB802C12E86939A2_inline (List_1_t91F86D882823933C9209AFAD14707DCEDF173417* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91F86D882823933C9209AFAD14707DCEDF173417*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.GameObject::AddComponent<Chapter.Strategy.BoppingManeuver>()
inline BoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912* GameObject_AddComponent_TisBoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912_m86C5974966DDD6E9CCD9B155DC8902A27EB70F0B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<Chapter.Strategy.FallbackManeuver>()
inline FallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B* GameObject_AddComponent_TisFallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B_mB71D7D9CB1AF5870E2579B4BC3EC3A7A0130A53F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Chapter.Strategy.IManeuverBehaviour>::get_Count()
inline int32_t List_1_get_Count_mCE6BB64EAA81B7C30AFB401F096EF9FC0A5305E2_inline (List_1_t91F86D882823933C9209AFAD14707DCEDF173417* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t91F86D882823933C9209AFAD14707DCEDF173417*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Chapter.Strategy.Drone>()
inline Drone_t489091E572DA0E7234873811B728A3820740914E* GameObject_GetComponent_TisDrone_t489091E572DA0E7234873811B728A3820740914E_mC83F9BE266290009FB3CA74669212BC77F36D1D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Drone_t489091E572DA0E7234873811B728A3820740914E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Chapter.Strategy.IManeuverBehaviour>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mC008283FD8B39960E4A00938D2BF685BE1E14837 (List_1_t91F86D882823933C9209AFAD14707DCEDF173417* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t91F86D882823933C9209AFAD14707DCEDF173417*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Chapter.Strategy.Drone::ApplyStrategy(Chapter.Strategy.IManeuverBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drone_ApplyStrategy_mA1E0762DE101E5F45107D77010E84257A0F7C0F4 (Drone_t489091E572DA0E7234873811B728A3820740914E* __this, RuntimeObject* ___strategy0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void Chapter.Strategy.ClientStrategy::SpawnDrone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientStrategy_SpawnDrone_m3024477707257A8BDE03CA83661D9FEA8000897C (ClientStrategy_t2CD3132D0ADD984D86D44FBAB8E381375A300A3E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Chapter.Strategy.IManeuverBehaviour>::.ctor()
inline void List_1__ctor_m6F53C44029B30CCEF8F3EFB9B7F3F46D675ECF94 (List_1_t91F86D882823933C9209AFAD14707DCEDF173417* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91F86D882823933C9209AFAD14707DCEDF173417*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Chapter.Strategy.FallbackManeuver::Fallback(Chapter.Strategy.Drone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FallbackManeuver_Fallback_m4DD2D13E2E92B1A9D1B02ABF71A1BCA9E9EB1F4B (FallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B* __this, Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone0, const RuntimeMethod* method) ;
// System.Void Chapter.Strategy.FallbackManeuver/<Fallback>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallbackU3Ed__1__ctor_m52103C6A46F0E5270636E73B9BD78D8E3622DFF8 (U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Chapter.Strategy.WeavingManeuver::Weave(Chapter.Strategy.Drone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeavingManeuver_Weave_mADE6A68CB940F8814BE8ECACB9BA217BA4EBC588 (WeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59* __this, Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone0, const RuntimeMethod* method) ;
// System.Void Chapter.Strategy.WeavingManeuver/<Weave>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWeaveU3Ed__1__ctor_m187817697B201BD3F8D0AFE917E81F8CD289FDA3 (U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chapter.Strategy.BoppingManeuver::Maneuver(Chapter.Strategy.Drone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoppingManeuver_Maneuver_mE4040A97F854DF1628EE03623B03B51E1B33F9C0 (BoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912* __this, Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Bopple(drone));
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_0 = ___drone0;
		RuntimeObject* L_1;
		L_1 = BoppingManeuver_Bopple_mDC25874168465C4009AE28E0C8C4BE0C9088877C(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Chapter.Strategy.BoppingManeuver::Bopple(Chapter.Strategy.Drone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoppingManeuver_Bopple_mDC25874168465C4009AE28E0C8C4BE0C9088877C (BoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912* __this, Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* L_0 = (U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85*)il2cpp_codegen_object_new(U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85_il2cpp_TypeInfo_var);
		U3CBoppleU3Ed__1__ctor_m903521B4CC58F72C48E1AA72E734BF1B6E911F5C(L_0, 0, NULL);
		U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* L_1 = L_0;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_2 = ___drone0;
		L_1->___drone_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___drone_2), (void*)L_2);
		return L_1;
	}
}
// System.Void Chapter.Strategy.BoppingManeuver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoppingManeuver__ctor_m35AAB71EF90B329C4BE8A6EBBD8B2896B573783E (BoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chapter.Strategy.BoppingManeuver/<Bopple>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoppleU3Ed__1__ctor_m903521B4CC58F72C48E1AA72E734BF1B6E911F5C (U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Chapter.Strategy.BoppingManeuver/<Bopple>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoppleU3Ed__1_System_IDisposable_Dispose_m2A5F1B31F0F9B97802B1D8ED0979D9DEC5FD95AA (U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Chapter.Strategy.BoppingManeuver/<Bopple>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBoppleU3Ed__1_MoveNext_mA09251EEC8BA1709E9464255451AA0F3FD9CC326 (U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* G_B5_0 = NULL;
	U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* G_B4_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0101;
			}
			case 2:
			{
				goto IL_012f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bool isReverse = false;
		__this->___U3CisReverseU3E5__3_4 = (bool)0;
		// float speed = drone.speed;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_2 = __this->___drone_2;
		float L_3 = L_2->___speed_8;
		__this->___U3CspeedU3E5__4_5 = L_3;
		// Vector3 startPosition = drone.transform.position;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_4 = __this->___drone_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___U3CstartPositionU3E5__5_6 = L_6;
		// Vector3 endPosition = startPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___U3CstartPositionU3E5__5_6;
		__this->___U3CendPositionU3E5__6_7 = L_7;
		// endPosition.y = drone.maxHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___U3CendPositionU3E5__6_7);
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_9 = __this->___drone_2;
		float L_10 = L_9->___maxHeight_9;
		L_8->___y_3 = L_10;
	}

IL_0072:
	{
		// time = 0;
		__this->___U3CtimeU3E5__2_3 = (0.0f);
		// Vector3 start = drone.transform.position;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_11 = __this->___drone_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		__this->___U3CstartU3E5__7_8 = L_13;
		// Vector3 end =
		//     (isReverse) ? startPosition : endPosition;
		bool L_14 = __this->___U3CisReverseU3E5__3_4;
		G_B4_0 = __this;
		if (L_14)
		{
			G_B5_0 = __this;
			goto IL_00a4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___U3CendPositionU3E5__6_7;
		G_B6_0 = L_15;
		G_B6_1 = G_B4_0;
		goto IL_00aa;
	}

IL_00a4:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___U3CstartPositionU3E5__5_6;
		G_B6_0 = L_16;
		G_B6_1 = G_B5_0;
	}

IL_00aa:
	{
		G_B6_1->___U3CendU3E5__8_9 = G_B6_0;
		goto IL_0108;
	}

IL_00b1:
	{
		// drone.transform.position =
		//     Vector3.Lerp(start, end, time / speed);
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_17 = __this->___drone_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___U3CstartU3E5__7_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___U3CendU3E5__8_9;
		float L_21 = __this->___U3CtimeU3E5__2_3;
		float L_22 = __this->___U3CspeedU3E5__4_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_19, L_20, ((float)(L_21/L_22)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_23, NULL);
		// time += Time.deltaTime;
		float L_24 = __this->___U3CtimeU3E5__2_3;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_24, L_25));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0101:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0108:
	{
		// while (time < speed) {
		float L_26 = __this->___U3CtimeU3E5__2_3;
		float L_27 = __this->___U3CspeedU3E5__4_5;
		if ((((float)L_26) < ((float)L_27)))
		{
			goto IL_00b1;
		}
	}
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_28 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_28, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_012f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isReverse = !isReverse;
		bool L_29 = __this->___U3CisReverseU3E5__3_4;
		__this->___U3CisReverseU3E5__3_4 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->___U3CstartU3E5__7_8);
		il2cpp_codegen_initobj(L_30, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___U3CendU3E5__8_9);
		il2cpp_codegen_initobj(L_31, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// while (true) {
		goto IL_0072;
	}
}
// System.Object Chapter.Strategy.BoppingManeuver/<Bopple>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBoppleU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4ADD5CD14BCCCFF663B7F7566E2F070DFD9E7417 (U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Chapter.Strategy.BoppingManeuver/<Bopple>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoppleU3Ed__1_System_Collections_IEnumerator_Reset_m63426D1ED653D85C9F607A389E1D1F4D111CA04A (U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBoppleU3Ed__1_System_Collections_IEnumerator_Reset_m63426D1ED653D85C9F607A389E1D1F4D111CA04A_RuntimeMethod_var)));
	}
}
// System.Object Chapter.Strategy.BoppingManeuver/<Bopple>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBoppleU3Ed__1_System_Collections_IEnumerator_get_Current_mCE2F7739972339C2784C28BE5EC6C0492EEB33DE (U3CBoppleU3Ed__1_t06EC0DBABE7573F2F619314DCB01AD5FEF8B1B85* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chapter.Strategy.ClientStrategy::SpawnDrone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientStrategy_SpawnDrone_m3024477707257A8BDE03CA83661D9FEA8000897C (ClientStrategy_t2CD3132D0ADD984D86D44FBAB8E381375A300A3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDrone_t489091E572DA0E7234873811B728A3820740914E_mE82EC4FBB912E3B1FF8A6A321D2194DF684A74BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _drone =
		//     GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(3, NULL);
		__this->____drone_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____drone_4), (void*)L_0);
		// _drone.AddComponent<Drone>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____drone_4;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_2;
		L_2 = GameObject_AddComponent_TisDrone_t489091E572DA0E7234873811B728A3820740914E_mE82EC4FBB912E3B1FF8A6A321D2194DF684A74BC(L_1, GameObject_AddComponent_TisDrone_t489091E572DA0E7234873811B728A3820740914E_mE82EC4FBB912E3B1FF8A6A321D2194DF684A74BC_RuntimeMethod_var);
		// _drone.transform.position =
		//     Random.insideUnitSphere * 10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____drone_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, (10.0f), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_6, NULL);
		// ApplyRandomStrategies();
		ClientStrategy_ApplyRandomStrategies_m63A57B33F32267C0B22464DC5AAE9B886D5C08D3(__this, NULL);
		// }
		return;
	}
}
// System.Void Chapter.Strategy.ClientStrategy::ApplyRandomStrategies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientStrategy_ApplyRandomStrategies_m63A57B33F32267C0B22464DC5AAE9B886D5C08D3 (ClientStrategy_t2CD3132D0ADD984D86D44FBAB8E381375A300A3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912_m86C5974966DDD6E9CCD9B155DC8902A27EB70F0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B_mB71D7D9CB1AF5870E2579B4BC3EC3A7A0130A53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59_m2F0643F1AA79A6C5E1FEB5BC621B5DE971BBB781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDrone_t489091E572DA0E7234873811B728A3820740914E_mC83F9BE266290009FB3CA74669212BC77F36D1D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3F5910C82AB4389A13A25DC4AB802C12E86939A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCE6BB64EAA81B7C30AFB401F096EF9FC0A5305E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC008283FD8B39960E4A00938D2BF685BE1E14837_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _components.Add(
		//     _drone.AddComponent<WeavingManeuver>());
		List_1_t91F86D882823933C9209AFAD14707DCEDF173417* L_0 = __this->____components_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____drone_4;
		WeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59* L_2;
		L_2 = GameObject_AddComponent_TisWeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59_m2F0643F1AA79A6C5E1FEB5BC621B5DE971BBB781(L_1, GameObject_AddComponent_TisWeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59_m2F0643F1AA79A6C5E1FEB5BC621B5DE971BBB781_RuntimeMethod_var);
		List_1_Add_m3F5910C82AB4389A13A25DC4AB802C12E86939A2_inline(L_0, L_2, List_1_Add_m3F5910C82AB4389A13A25DC4AB802C12E86939A2_RuntimeMethod_var);
		// _components.Add(
		//     _drone.AddComponent<BoppingManeuver>());
		List_1_t91F86D882823933C9209AFAD14707DCEDF173417* L_3 = __this->____components_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____drone_4;
		BoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912* L_5;
		L_5 = GameObject_AddComponent_TisBoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912_m86C5974966DDD6E9CCD9B155DC8902A27EB70F0B(L_4, GameObject_AddComponent_TisBoppingManeuver_t997DB60FB8044D015D11577AF6DFF7B387E16912_m86C5974966DDD6E9CCD9B155DC8902A27EB70F0B_RuntimeMethod_var);
		List_1_Add_m3F5910C82AB4389A13A25DC4AB802C12E86939A2_inline(L_3, L_5, List_1_Add_m3F5910C82AB4389A13A25DC4AB802C12E86939A2_RuntimeMethod_var);
		// _components.Add(
		//     _drone.AddComponent<FallbackManeuver>());
		List_1_t91F86D882823933C9209AFAD14707DCEDF173417* L_6 = __this->____components_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____drone_4;
		FallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B* L_8;
		L_8 = GameObject_AddComponent_TisFallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B_mB71D7D9CB1AF5870E2579B4BC3EC3A7A0130A53F(L_7, GameObject_AddComponent_TisFallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B_mB71D7D9CB1AF5870E2579B4BC3EC3A7A0130A53F_RuntimeMethod_var);
		List_1_Add_m3F5910C82AB4389A13A25DC4AB802C12E86939A2_inline(L_6, L_8, List_1_Add_m3F5910C82AB4389A13A25DC4AB802C12E86939A2_RuntimeMethod_var);
		// int index = Random.Range(0, _components.Count);
		List_1_t91F86D882823933C9209AFAD14707DCEDF173417* L_9 = __this->____components_5;
		int32_t L_10;
		L_10 = List_1_get_Count_mCE6BB64EAA81B7C30AFB401F096EF9FC0A5305E2_inline(L_9, List_1_get_Count_mCE6BB64EAA81B7C30AFB401F096EF9FC0A5305E2_RuntimeMethod_var);
		int32_t L_11;
		L_11 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_10, NULL);
		V_0 = L_11;
		// _drone.GetComponent<Drone>().
		//     ApplyStrategy(_components[index]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____drone_4;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_13;
		L_13 = GameObject_GetComponent_TisDrone_t489091E572DA0E7234873811B728A3820740914E_mC83F9BE266290009FB3CA74669212BC77F36D1D0(L_12, GameObject_GetComponent_TisDrone_t489091E572DA0E7234873811B728A3820740914E_mC83F9BE266290009FB3CA74669212BC77F36D1D0_RuntimeMethod_var);
		List_1_t91F86D882823933C9209AFAD14707DCEDF173417* L_14 = __this->____components_5;
		int32_t L_15 = V_0;
		RuntimeObject* L_16;
		L_16 = List_1_get_Item_mC008283FD8B39960E4A00938D2BF685BE1E14837(L_14, L_15, List_1_get_Item_mC008283FD8B39960E4A00938D2BF685BE1E14837_RuntimeMethod_var);
		Drone_ApplyStrategy_mA1E0762DE101E5F45107D77010E84257A0F7C0F4(L_13, L_16, NULL);
		// }
		return;
	}
}
// System.Void Chapter.Strategy.ClientStrategy::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientStrategy_OnGUI_m4C0777E312F00B6432093D477F93270963478FFC (ClientStrategy_t2CD3132D0ADD984D86D44FBAB8E381375A300A3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE25642FB427038362FF378445859FCB35DE7A89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GUILayout.Button("Spawn Drone")) {
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_1;
		L_1 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteralAE25642FB427038362FF378445859FCB35DE7A89, L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// SpawnDrone();
		ClientStrategy_SpawnDrone_m3024477707257A8BDE03CA83661D9FEA8000897C(__this, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Chapter.Strategy.ClientStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientStrategy__ctor_m907DB7D4D79BAF3A12D99E92FB07710B3FF9B375 (ClientStrategy_t2CD3132D0ADD984D86D44FBAB8E381375A300A3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6F53C44029B30CCEF8F3EFB9B7F3F46D675ECF94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91F86D882823933C9209AFAD14707DCEDF173417_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<IManeuverBehaviour>
		//     _components = new List<IManeuverBehaviour>();
		List_1_t91F86D882823933C9209AFAD14707DCEDF173417* L_0 = (List_1_t91F86D882823933C9209AFAD14707DCEDF173417*)il2cpp_codegen_object_new(List_1_t91F86D882823933C9209AFAD14707DCEDF173417_il2cpp_TypeInfo_var);
		List_1__ctor_m6F53C44029B30CCEF8F3EFB9B7F3F46D675ECF94(L_0, List_1__ctor_m6F53C44029B30CCEF8F3EFB9B7F3F46D675ECF94_RuntimeMethod_var);
		__this->____components_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____components_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chapter.Strategy.Drone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drone_Start_m38EBDAB9155ED155214A908D88961185704F9C2D (Drone_t489091E572DA0E7234873811B728A3820740914E* __this, const RuntimeMethod* method) 
{
	{
		// _rayDirection =
		//     transform.TransformDirection(Vector3.back)
		//     * _rayDistance;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_0, L_1, NULL);
		float L_3 = __this->____rayDistance_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		__this->____rayDirection_5 = L_4;
		// _rayDirection =
		//     Quaternion.Euler(_rayAngle, 0.0f, 0f)
		//     * _rayDirection;
		float L_5 = __this->____rayAngle_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_5, (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->____rayDirection_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_6, L_7, NULL);
		__this->____rayDirection_5 = L_8;
		// }
		return;
	}
}
// System.Void Chapter.Strategy.Drone::ApplyStrategy(Chapter.Strategy.IManeuverBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drone_ApplyStrategy_mA1E0762DE101E5F45107D77010E84257A0F7C0F4 (Drone_t489091E572DA0E7234873811B728A3820740914E* __this, RuntimeObject* ___strategy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManeuverBehaviour_t91574446B1837E8E645EBC516B749D5BCBEC3619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// strategy.Maneuver(this);
		RuntimeObject* L_0 = ___strategy0;
		InterfaceActionInvoker1< Drone_t489091E572DA0E7234873811B728A3820740914E* >::Invoke(0 /* System.Void Chapter.Strategy.IManeuverBehaviour::Maneuver(Chapter.Strategy.Drone) */, IManeuverBehaviour_t91574446B1837E8E645EBC516B749D5BCBEC3619_il2cpp_TypeInfo_var, L_0, __this);
		// }
		return;
	}
}
// System.Void Chapter.Strategy.Drone::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drone_Update_mF4E1536FB988E891659415109D3EF6B8260E56F4 (Drone_t489091E572DA0E7234873811B728A3820740914E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.DrawRay(transform.position,
		//     _rayDirection, Color.blue);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____rayDirection_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_1, L_2, L_3, NULL);
		// if (Physics.Raycast(
		//     transform.position,
		//     _rayDirection, out _hit, _rayDistance)) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->____rayDirection_5;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_7 = (&__this->____hit_4);
		float L_8 = __this->____rayDistance_7;
		bool L_9;
		L_9 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_5, L_6, L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// if (_hit.collider) {
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_10 = (&__this->____hit_4);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11;
		L_11 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		// Debug.DrawRay(
		//     transform.position,
		//     _rayDirection, Color.green);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->____rayDirection_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_14, L_15, L_16, NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Chapter.Strategy.Drone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drone__ctor_m098C3C2F5D5EFFA08AE4D6FA8A72C8FC4AA9E112 (Drone_t489091E572DA0E7234873811B728A3820740914E* __this, const RuntimeMethod* method) 
{
	{
		// private float _rayAngle = -45.0f;
		__this->____rayAngle_6 = (-45.0f);
		// private float _rayDistance = 15.0f;
		__this->____rayDistance_7 = (15.0f);
		// public float speed = 1.0f;
		__this->___speed_8 = (1.0f);
		// public float maxHeight = 5.0f;
		__this->___maxHeight_9 = (5.0f);
		// public float weavingDistance = 1.5f;
		__this->___weavingDistance_10 = (1.5f);
		// public float fallbackDistance = 20.0f;
		__this->___fallbackDistance_11 = (20.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chapter.Strategy.FallbackManeuver::Maneuver(Chapter.Strategy.Drone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallbackManeuver_Maneuver_m4F59A05F0D2C1FDC78EFAC2B1EF082E1A686A21F (FallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B* __this, Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Fallback(drone));
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_0 = ___drone0;
		RuntimeObject* L_1;
		L_1 = FallbackManeuver_Fallback_m4DD2D13E2E92B1A9D1B02ABF71A1BCA9E9EB1F4B(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Chapter.Strategy.FallbackManeuver::Fallback(Chapter.Strategy.Drone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FallbackManeuver_Fallback_m4DD2D13E2E92B1A9D1B02ABF71A1BCA9E9EB1F4B (FallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B* __this, Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC* L_0 = (U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC*)il2cpp_codegen_object_new(U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC_il2cpp_TypeInfo_var);
		U3CFallbackU3Ed__1__ctor_m52103C6A46F0E5270636E73B9BD78D8E3622DFF8(L_0, 0, NULL);
		U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC* L_1 = L_0;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_2 = ___drone0;
		L_1->___drone_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___drone_2), (void*)L_2);
		return L_1;
	}
}
// System.Void Chapter.Strategy.FallbackManeuver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallbackManeuver__ctor_mFCA4BF56C54C5445C80F6A64ECBC8503D9F41DEF (FallbackManeuver_t07EC0BCACF430015EF51E0EC97E01FCFBE51B37B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chapter.Strategy.FallbackManeuver/<Fallback>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallbackU3Ed__1__ctor_m52103C6A46F0E5270636E73B9BD78D8E3622DFF8 (U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Chapter.Strategy.FallbackManeuver/<Fallback>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallbackU3Ed__1_System_IDisposable_Dispose_mFD6E5E595F7402A4C7C8DBD1F080B19BDEC7CF4E (U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Chapter.Strategy.FallbackManeuver/<Fallback>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFallbackU3Ed__1_MoveNext_m11E18FBAECA6D52DE64B76807CB431CA9A01D0FA (U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00c0;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float time = 0;
		__this->___U3CtimeU3E5__2_3 = (0.0f);
		// float speed = drone.speed;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_3 = __this->___drone_2;
		float L_4 = L_3->___speed_8;
		__this->___U3CspeedU3E5__3_4 = L_4;
		// Vector3 startPosition = drone.transform.position;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_5 = __this->___drone_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___U3CstartPositionU3E5__4_5 = L_7;
		// Vector3 endPosition = startPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___U3CstartPositionU3E5__4_5;
		__this->___U3CendPositionU3E5__5_6 = L_8;
		// endPosition.z = drone.fallbackDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___U3CendPositionU3E5__5_6);
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_10 = __this->___drone_2;
		float L_11 = L_10->___fallbackDistance_11;
		L_9->___z_4 = L_11;
		goto IL_00c7;
	}

IL_0070:
	{
		// drone.transform.position =
		//     Vector3.Lerp(
		//         startPosition, endPosition, time / speed);
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_12 = __this->___drone_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___U3CstartPositionU3E5__4_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___U3CendPositionU3E5__5_6;
		float L_16 = __this->___U3CtimeU3E5__2_3;
		float L_17 = __this->___U3CspeedU3E5__3_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_14, L_15, ((float)(L_16/L_17)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_18, NULL);
		// time += Time.deltaTime;
		float L_19 = __this->___U3CtimeU3E5__2_3;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_19, L_20));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00c0:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c7:
	{
		// while (time < speed)
		float L_21 = __this->___U3CtimeU3E5__2_3;
		float L_22 = __this->___U3CspeedU3E5__3_4;
		if ((((float)L_21) < ((float)L_22)))
		{
			goto IL_0070;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Chapter.Strategy.FallbackManeuver/<Fallback>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFallbackU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8DFC18F284BC4B827E73EE5CED4A341D282D4B35 (U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Chapter.Strategy.FallbackManeuver/<Fallback>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallbackU3Ed__1_System_Collections_IEnumerator_Reset_mD5705A8E323937AAA2BAC5D7472B13C5766ED8FE (U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFallbackU3Ed__1_System_Collections_IEnumerator_Reset_mD5705A8E323937AAA2BAC5D7472B13C5766ED8FE_RuntimeMethod_var)));
	}
}
// System.Object Chapter.Strategy.FallbackManeuver/<Fallback>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFallbackU3Ed__1_System_Collections_IEnumerator_get_Current_mEE81D300A97051FA75037623162068C58A37E1A5 (U3CFallbackU3Ed__1_t10582BAC1397E07FD2FC60BDF4970A8357B9B8BC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chapter.Strategy.WeavingManeuver::Maneuver(Chapter.Strategy.Drone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeavingManeuver_Maneuver_m1E2A7544C7441D2786C2D88CD072B4C578975CC9 (WeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59* __this, Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Weave(drone));
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_0 = ___drone0;
		RuntimeObject* L_1;
		L_1 = WeavingManeuver_Weave_mADE6A68CB940F8814BE8ECACB9BA217BA4EBC588(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Chapter.Strategy.WeavingManeuver::Weave(Chapter.Strategy.Drone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeavingManeuver_Weave_mADE6A68CB940F8814BE8ECACB9BA217BA4EBC588 (WeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59* __this, Drone_t489091E572DA0E7234873811B728A3820740914E* ___drone0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* L_0 = (U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335*)il2cpp_codegen_object_new(U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335_il2cpp_TypeInfo_var);
		U3CWeaveU3Ed__1__ctor_m187817697B201BD3F8D0AFE917E81F8CD289FDA3(L_0, 0, NULL);
		U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* L_1 = L_0;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_2 = ___drone0;
		L_1->___drone_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___drone_2), (void*)L_2);
		return L_1;
	}
}
// System.Void Chapter.Strategy.WeavingManeuver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeavingManeuver__ctor_m73195671A69B21DFF8B21D3C59DF3E18A65FF354 (WeavingManeuver_t452FA97D0C15366A0C190B873E4CF4009EB82E59* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chapter.Strategy.WeavingManeuver/<Weave>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWeaveU3Ed__1__ctor_m187817697B201BD3F8D0AFE917E81F8CD289FDA3 (U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Chapter.Strategy.WeavingManeuver/<Weave>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWeaveU3Ed__1_System_IDisposable_Dispose_m73D815B843FD63D050C7FED5D9D75133E9707DCE (U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Chapter.Strategy.WeavingManeuver/<Weave>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWeaveU3Ed__1_MoveNext_mEC630596A5F76CDF68BE024714AAA4C9D1D43FB3 (U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* G_B5_0 = NULL;
	U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* G_B4_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0101;
			}
			case 2:
			{
				goto IL_012f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bool isReverse = false;
		__this->___U3CisReverseU3E5__3_4 = (bool)0;
		// float speed = drone.speed;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_2 = __this->___drone_2;
		float L_3 = L_2->___speed_8;
		__this->___U3CspeedU3E5__4_5 = L_3;
		// Vector3 startPosition = drone.transform.position;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_4 = __this->___drone_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___U3CstartPositionU3E5__5_6 = L_6;
		// Vector3 endPosition = startPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___U3CstartPositionU3E5__5_6;
		__this->___U3CendPositionU3E5__6_7 = L_7;
		// endPosition.x = drone.weavingDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___U3CendPositionU3E5__6_7);
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_9 = __this->___drone_2;
		float L_10 = L_9->___weavingDistance_10;
		L_8->___x_2 = L_10;
	}

IL_0072:
	{
		// time = 0;
		__this->___U3CtimeU3E5__2_3 = (0.0f);
		// Vector3 start = drone.transform.position;
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_11 = __this->___drone_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		__this->___U3CstartU3E5__7_8 = L_13;
		// Vector3 end =
		//     (isReverse) ? startPosition : endPosition;
		bool L_14 = __this->___U3CisReverseU3E5__3_4;
		G_B4_0 = __this;
		if (L_14)
		{
			G_B5_0 = __this;
			goto IL_00a4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___U3CendPositionU3E5__6_7;
		G_B6_0 = L_15;
		G_B6_1 = G_B4_0;
		goto IL_00aa;
	}

IL_00a4:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___U3CstartPositionU3E5__5_6;
		G_B6_0 = L_16;
		G_B6_1 = G_B5_0;
	}

IL_00aa:
	{
		G_B6_1->___U3CendU3E5__8_9 = G_B6_0;
		goto IL_0108;
	}

IL_00b1:
	{
		// drone.transform.position =
		//     Vector3.Lerp(start, end, time / speed);
		Drone_t489091E572DA0E7234873811B728A3820740914E* L_17 = __this->___drone_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___U3CstartU3E5__7_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___U3CendU3E5__8_9;
		float L_21 = __this->___U3CtimeU3E5__2_3;
		float L_22 = __this->___U3CspeedU3E5__4_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_19, L_20, ((float)(L_21/L_22)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_23, NULL);
		// time += Time.deltaTime;
		float L_24 = __this->___U3CtimeU3E5__2_3;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_24, L_25));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0101:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0108:
	{
		// while (time < speed) {
		float L_26 = __this->___U3CtimeU3E5__2_3;
		float L_27 = __this->___U3CspeedU3E5__4_5;
		if ((((float)L_26) < ((float)L_27)))
		{
			goto IL_00b1;
		}
	}
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_28 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_28, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_012f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isReverse = !isReverse;
		bool L_29 = __this->___U3CisReverseU3E5__3_4;
		__this->___U3CisReverseU3E5__3_4 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->___U3CstartU3E5__7_8);
		il2cpp_codegen_initobj(L_30, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___U3CendU3E5__8_9);
		il2cpp_codegen_initobj(L_31, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// while (true) {
		goto IL_0072;
	}
}
// System.Object Chapter.Strategy.WeavingManeuver/<Weave>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWeaveU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCE93BE3DA626CF25FF54333618FFFF643219F4E5 (U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Chapter.Strategy.WeavingManeuver/<Weave>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWeaveU3Ed__1_System_Collections_IEnumerator_Reset_m9762887D2A3E575A541CEF752011DD515A6C8AB7 (U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWeaveU3Ed__1_System_Collections_IEnumerator_Reset_m9762887D2A3E575A541CEF752011DD515A6C8AB7_RuntimeMethod_var)));
	}
}
// System.Object Chapter.Strategy.WeavingManeuver/<Weave>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWeaveU3Ed__1_System_Collections_IEnumerator_get_Current_m978EA00ADC0D466702BB26120846668D14EFA0BD (U3CWeaveU3Ed__1_t1A0566DD31BA194A5500CF41D2D898C4366EA335* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
