#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Plugins.Instabug.IBGBugReportingInvocationOption[]
struct IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// IBGAndroidCallbacks
struct IBGAndroidCallbacks_t9B17F75ED7390208D9D71C7D5E32BECF9980D092;
// Plugins.Instabug.IBGConstants
struct IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F;
// Plugins.Instabug.IBGEventDetector
struct IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Plugins.Instabug.Instabug
struct Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t061C10CACBEC6902AE620F38433C63286935DB58;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.Physics2DRaycaster
struct Physics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3;
// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// IBGAndroidCallbacks/AndroidOnSDKDismissedCallback
struct AndroidOnSDKDismissedCallback_t9CE4A6D560B1A63EF4963BFB9984CA88CAEA8362;
// Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37
struct U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D;
// Plugins.Instabug.Instabug/PostInvocationCallbackDelegate
struct PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209;
// Plugins.Instabug.Instabug/PreInvocationCallbackDelegate
struct PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31;
// Plugins.Instabug.Instabug/PreSendingCallbackDelegate
struct PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBGDismissType_t341E254C4D84261F575844363658D8308BD52795_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBGReportType_t3AFC20C15567113357DE522AD61571D8A0552771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0169E1B41927AD62366FE93ADD191DFF761FEAD2;
IL2CPP_EXTERN_C String_t* _stringLiteral07246539696106AE36CD5F777E6EB1C7245E1CFE;
IL2CPP_EXTERN_C String_t* _stringLiteral14B44AFDF4C069934D89D4F88DCFA2FE5AD74AE2;
IL2CPP_EXTERN_C String_t* _stringLiteral27B1AEB24E6D2B53697EC563051927D25A556ED8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5F4AAFCE6E5384D539C6F26A32C9F0BFF1A3CB21;
IL2CPP_EXTERN_C String_t* _stringLiteral69F0E88C5C4353A3DF385EB4D0191B83402BEB25;
IL2CPP_EXTERN_C String_t* _stringLiteral6A865A5A891F5E8F52BBACFE7BAF418EFEC864B2;
IL2CPP_EXTERN_C String_t* _stringLiteral716CE26E7CF46AAE13B1AC33A5D98DF29C4356FA;
IL2CPP_EXTERN_C String_t* _stringLiteral7FEB2FD489F3096B7F017BB5CEBA820C787EC250;
IL2CPP_EXTERN_C String_t* _stringLiteral9CF45CAAD184C9FF56B8448D9B568CF797F6A8E4;
IL2CPP_EXTERN_C String_t* _stringLiteralAFE2125CD09A8041BB97AB3B5A14CAD86FFECA68;
IL2CPP_EXTERN_C String_t* _stringLiteralBA32D15C04F9299B5039855559E5922196DD798F;
IL2CPP_EXTERN_C String_t* _stringLiteralBF3D93F37D5E2A9BEEFE4B6A79DE33941367F76B;
IL2CPP_EXTERN_C String_t* _stringLiteralD3073B1D170D5A638AEEBDC086E6FF892933E101;
IL2CPP_EXTERN_C String_t* _stringLiteralDFC8A5C3AC9E75D9C702664348B1F790FCFCB561;
IL2CPP_EXTERN_C String_t* _stringLiteralFE4A99C35DB609AFE3FDE44EB05F367946EB5884;
IL2CPP_EXTERN_C String_t* _stringLiteralFF0F13DDB498AE32AC81B7B733EEF169625F1794;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPhysics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3_m2E4D7B7BA681FC6EEB1444603D5C4BBC3DFE6610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823_mF446FA168ABAC41CAFF2374996DB31785DC78F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Instabug_OnSceneChanged_mB958A0B07385267ED81CD902FB6354B853B5415D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPhysics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3_mC8AB6001A844A3373E5DFBEF073CD60B686D9D97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823_mD0AB1787735F631B6928F6FF4EA3D1504C3C294A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteAfterTimeU3Ed__37_System_Collections_IEnumerator_Reset_m269208A3ABFAEDFF76B22901A4CAD281367BD95C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// IBGAndroidCallbacks
struct IBGAndroidCallbacks_t9B17F75ED7390208D9D71C7D5E32BECF9980D092  : public RuntimeObject
{
public:

public:
};


// Plugins.Instabug.IBGConstants
struct IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F  : public RuntimeObject
{
public:

public:
};

struct IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F_StaticFields
{
public:
	// System.String Plugins.Instabug.IBGConstants::JAVA_UNITYPLAYER_CLASS
	String_t* ___JAVA_UNITYPLAYER_CLASS_0;
	// System.String Plugins.Instabug.IBGConstants::JAVA_INSTABUGUNITYPLUGIN_CLASS
	String_t* ___JAVA_INSTABUGUNITYPLUGIN_CLASS_1;

public:
	inline static int32_t get_offset_of_JAVA_UNITYPLAYER_CLASS_0() { return static_cast<int32_t>(offsetof(IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F_StaticFields, ___JAVA_UNITYPLAYER_CLASS_0)); }
	inline String_t* get_JAVA_UNITYPLAYER_CLASS_0() const { return ___JAVA_UNITYPLAYER_CLASS_0; }
	inline String_t** get_address_of_JAVA_UNITYPLAYER_CLASS_0() { return &___JAVA_UNITYPLAYER_CLASS_0; }
	inline void set_JAVA_UNITYPLAYER_CLASS_0(String_t* value)
	{
		___JAVA_UNITYPLAYER_CLASS_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JAVA_UNITYPLAYER_CLASS_0), (void*)value);
	}

	inline static int32_t get_offset_of_JAVA_INSTABUGUNITYPLUGIN_CLASS_1() { return static_cast<int32_t>(offsetof(IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F_StaticFields, ___JAVA_INSTABUGUNITYPLUGIN_CLASS_1)); }
	inline String_t* get_JAVA_INSTABUGUNITYPLUGIN_CLASS_1() const { return ___JAVA_INSTABUGUNITYPLUGIN_CLASS_1; }
	inline String_t** get_address_of_JAVA_INSTABUGUNITYPLUGIN_CLASS_1() { return &___JAVA_INSTABUGUNITYPLUGIN_CLASS_1; }
	inline void set_JAVA_INSTABUGUNITYPLUGIN_CLASS_1(String_t* value)
	{
		___JAVA_INSTABUGUNITYPLUGIN_CLASS_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JAVA_INSTABUGUNITYPLUGIN_CLASS_1), (void*)value);
	}
};


// Plugins.Instabug.IBGHelpers
struct IBGHelpers_t6ED6A7B48FC63901B73121E9DDF2643B088A2395  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t061C10CACBEC6902AE620F38433C63286935DB58  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type MonoPInvokeCallbackAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_t061C10CACBEC6902AE620F38433C63286935DB58, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Plugins.Instabug.IBGBugReportingInvocationOption
struct IBGBugReportingInvocationOption_t25FB91E8BE0DE6EC21320F3AD21A5FADAFB85FDE 
{
public:
	// System.Int32 Plugins.Instabug.IBGBugReportingInvocationOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IBGBugReportingInvocationOption_t25FB91E8BE0DE6EC21320F3AD21A5FADAFB85FDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Plugins.Instabug.IBGBugReportingReportType
struct IBGBugReportingReportType_t0ADEA75025CFD796E83D8BD0804E4B19E3CC4959 
{
public:
	// System.Int32 Plugins.Instabug.IBGBugReportingReportType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IBGBugReportingReportType_t0ADEA75025CFD796E83D8BD0804E4B19E3CC4959, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Plugins.Instabug.IBGDismissType
struct IBGDismissType_t341E254C4D84261F575844363658D8308BD52795 
{
public:
	// System.Int32 Plugins.Instabug.IBGDismissType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IBGDismissType_t341E254C4D84261F575844363658D8308BD52795, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Plugins.Instabug.IBGInvocationEvent
struct IBGInvocationEvent_tF6AE27A1BEE62BFE6F17CA22E6246AD7C5EA5AEB 
{
public:
	// System.Int32 Plugins.Instabug.IBGInvocationEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IBGInvocationEvent_tF6AE27A1BEE62BFE6F17CA22E6246AD7C5EA5AEB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Plugins.Instabug.IBGReportType
struct IBGReportType_t3AFC20C15567113357DE522AD61571D8A0552771 
{
public:
	// System.Int32 Plugins.Instabug.IBGReportType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IBGReportType_t3AFC20C15567113357DE522AD61571D8A0552771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Plugins.Instabug.IBGWelcomeMessageMode
struct IBGWelcomeMessageMode_t5E0643B7F98B42C646DB18A0BBE24FC74EDBBD6F 
{
public:
	// System.Int32 Plugins.Instabug.IBGWelcomeMessageMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IBGWelcomeMessageMode_t5E0643B7F98B42C646DB18A0BBE24FC74EDBBD6F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37
struct U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D  : public RuntimeObject
{
public:
	// System.Int32 Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::time
	float ___time_2;
	// UnityEngine.SceneManagement.Scene Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::scene
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_scene_3() { return static_cast<int32_t>(offsetof(U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D, ___scene_3)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_scene_3() const { return ___scene_3; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_scene_3() { return &___scene_3; }
	inline void set_scene_3(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___scene_3 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// IBGAndroidCallbacks/AndroidOnSDKDismissedCallback
struct AndroidOnSDKDismissedCallback_t9CE4A6D560B1A63EF4963BFB9984CA88CAEA8362  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// Plugins.Instabug.Instabug/PostInvocationCallbackDelegate IBGAndroidCallbacks/AndroidOnSDKDismissedCallback::postInvocationCallback
	PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * ___postInvocationCallback_4;

public:
	inline static int32_t get_offset_of_postInvocationCallback_4() { return static_cast<int32_t>(offsetof(AndroidOnSDKDismissedCallback_t9CE4A6D560B1A63EF4963BFB9984CA88CAEA8362, ___postInvocationCallback_4)); }
	inline PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * get_postInvocationCallback_4() const { return ___postInvocationCallback_4; }
	inline PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 ** get_address_of_postInvocationCallback_4() { return &___postInvocationCallback_4; }
	inline void set_postInvocationCallback_4(PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * value)
	{
		___postInvocationCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postInvocationCallback_4), (void*)value);
	}
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Plugins.Instabug.Instabug/PostInvocationCallbackDelegate
struct PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209  : public MulticastDelegate_t
{
public:

public:
};


// Plugins.Instabug.Instabug/PreInvocationCallbackDelegate
struct PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31  : public MulticastDelegate_t
{
public:

public:
};


// Plugins.Instabug.Instabug/PreSendingCallbackDelegate
struct PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Plugins.Instabug.IBGEventDetector
struct IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Plugins.Instabug.Instabug
struct Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Plugins.Instabug.Instabug::appToken
	String_t* ___appToken_5;
	// Plugins.Instabug.IBGInvocationEvent Plugins.Instabug.Instabug::invocationEvent
	int32_t ___invocationEvent_6;

public:
	inline static int32_t get_offset_of_appToken_5() { return static_cast<int32_t>(offsetof(Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E, ___appToken_5)); }
	inline String_t* get_appToken_5() const { return ___appToken_5; }
	inline String_t** get_address_of_appToken_5() { return &___appToken_5; }
	inline void set_appToken_5(String_t* value)
	{
		___appToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appToken_5), (void*)value);
	}

	inline static int32_t get_offset_of_invocationEvent_6() { return static_cast<int32_t>(offsetof(Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E, ___invocationEvent_6)); }
	inline int32_t get_invocationEvent_6() const { return ___invocationEvent_6; }
	inline int32_t* get_address_of_invocationEvent_6() { return &___invocationEvent_6; }
	inline void set_invocationEvent_6(int32_t value)
	{
		___invocationEvent_6 = value;
	}
};

struct Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E_StaticFields
{
public:
	// Plugins.Instabug.Instabug Plugins.Instabug.Instabug::instance
	Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E_StaticFields, ___instance_4)); }
	inline Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * get_instance_4() const { return ___instance_4; }
	inline Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___m_RootRaycaster_4;

public:
	inline static int32_t get_offset_of_m_RootRaycaster_4() { return static_cast<int32_t>(offsetof(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876, ___m_RootRaycaster_4)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_m_RootRaycaster_4() const { return ___m_RootRaycaster_4; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_m_RootRaycaster_4() { return &___m_RootRaycaster_4; }
	inline void set_m_RootRaycaster_4(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___m_RootRaycaster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootRaycaster_4), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823  : public BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876
{
public:
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_EventCamera_6;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_EventMask_7;
	// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::m_MaxRayIntersections
	int32_t ___m_MaxRayIntersections_8;
	// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::m_LastMaxRayIntersections
	int32_t ___m_LastMaxRayIntersections_9;
	// UnityEngine.RaycastHit[] UnityEngine.EventSystems.PhysicsRaycaster::m_Hits
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___m_Hits_10;

public:
	inline static int32_t get_offset_of_m_EventCamera_6() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823, ___m_EventCamera_6)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_EventCamera_6() const { return ___m_EventCamera_6; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_EventCamera_6() { return &___m_EventCamera_6; }
	inline void set_m_EventCamera_6(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_EventCamera_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventCamera_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventMask_7() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823, ___m_EventMask_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_EventMask_7() const { return ___m_EventMask_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_EventMask_7() { return &___m_EventMask_7; }
	inline void set_m_EventMask_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_EventMask_7 = value;
	}

	inline static int32_t get_offset_of_m_MaxRayIntersections_8() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823, ___m_MaxRayIntersections_8)); }
	inline int32_t get_m_MaxRayIntersections_8() const { return ___m_MaxRayIntersections_8; }
	inline int32_t* get_address_of_m_MaxRayIntersections_8() { return &___m_MaxRayIntersections_8; }
	inline void set_m_MaxRayIntersections_8(int32_t value)
	{
		___m_MaxRayIntersections_8 = value;
	}

	inline static int32_t get_offset_of_m_LastMaxRayIntersections_9() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823, ___m_LastMaxRayIntersections_9)); }
	inline int32_t get_m_LastMaxRayIntersections_9() const { return ___m_LastMaxRayIntersections_9; }
	inline int32_t* get_address_of_m_LastMaxRayIntersections_9() { return &___m_LastMaxRayIntersections_9; }
	inline void set_m_LastMaxRayIntersections_9(int32_t value)
	{
		___m_LastMaxRayIntersections_9 = value;
	}

	inline static int32_t get_offset_of_m_Hits_10() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823, ___m_Hits_10)); }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* get_m_Hits_10() const { return ___m_Hits_10; }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09** get_address_of_m_Hits_10() { return &___m_Hits_10; }
	inline void set_m_Hits_10(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* value)
	{
		___m_Hits_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hits_10), (void*)value);
	}
};


// UnityEngine.EventSystems.Physics2DRaycaster
struct Physics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3  : public PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823
{
public:
	// UnityEngine.RaycastHit2D[] UnityEngine.EventSystems.Physics2DRaycaster::m_Hits
	RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* ___m_Hits_11;

public:
	inline static int32_t get_offset_of_m_Hits_11() { return static_cast<int32_t>(offsetof(Physics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3, ___m_Hits_11)); }
	inline RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* get_m_Hits_11() const { return ___m_Hits_11; }
	inline RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09** get_address_of_m_Hits_11() { return &___m_Hits_11; }
	inline void set_m_Hits_11(RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* value)
	{
		___m_Hits_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hits_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Plugins.Instabug.IBGBugReportingInvocationOption[]
struct IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Plugins.Instabug.IBGEventDetector::addPhysicsRaycaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector_addPhysicsRaycaster_m2F557437ADC0767C366AF46DE6F0D3F78AB0D22C (IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0 * __this, const RuntimeMethod* method);
// System.Void Plugins.Instabug.IBGEventDetector::addPhysics2DRaycaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector_addPhysics2DRaycaster_m9F440E3E9E4455F70B09493A232F301D8F10B6F8 (IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.PhysicsRaycaster>()
inline PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823 * Object_FindObjectOfType_TisPhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823_mD0AB1787735F631B6928F6FF4EA3D1504C3C294A (const RuntimeMethod* method)
{
	return ((  PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.PhysicsRaycaster>()
inline PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823 * GameObject_AddComponent_TisPhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823_mF446FA168ABAC41CAFF2374996DB31785DC78F15 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.Physics2DRaycaster>()
inline Physics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3 * Object_FindObjectOfType_TisPhysics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3_mC8AB6001A844A3373E5DFBEF073CD60B686D9D97 (const RuntimeMethod* method)
{
	return ((  Physics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.Physics2DRaycaster>()
inline Physics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3 * GameObject_AddComponent_TisPhysics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3_m2E4D7B7BA681FC6EEB1444603D5C4BBC3DFE6610 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Physics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.IBGEventDetector::Instabug_recordUserStep(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector_Instabug_recordUserStep_m9485BD68BB0D07D37E639E8425AC5A1DC1F74721 (String_t* ___stepName0, String_t* ___objectName1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::PreInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_PreInit_m111197DD9199BCA2C6387C22FA9A45C8DBFDAB01 (const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::InitializeInstabug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_InitializeInstabug_m6ABA3AD5CD673A3C3635A36C357118A15AFCADC1 (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::CaptureTouchEventsOnGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_CaptureTouchEventsOnGameObjects_mD44EC06A84AE0FE684D4211025896906A4AF0EDE (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1 (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_activeSceneChanged(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_activeSceneChanged_mB22B18FD4F7F719CDDD9AF3947CDC63AB689F712 (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::remove_activeSceneChanged(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_activeSceneChanged_m393D580B1E306AE2A549810D409E64A226EFCF8D (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator Plugins.Instabug.Instabug::ExecuteAfterTime(System.Single,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Instabug_ExecuteAfterTime_mF5D31D739A8663B724E67895FFF3A61C01E3D66A (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, float ___time0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAfterTimeU3Ed__37__ctor_mCBF9A52CFE44B5D5D7BD4DD53B26101D9F5D756A (U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_InitializeInstabug(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_InitializeInstabug_m2A421C22E9C18D015FEB853DD021652051A5B1D2 (String_t* ___appToken0, int32_t ___invocationEvent1, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_Show_m3DF014602910ED2CA3CF778C63B49F2979255172 (const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_showWithReportTypeAndOptions(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_showWithReportTypeAndOptions_m608BA6F015939274E3273EE9F4BDEA6C51649469 (int32_t ___reportType0, int32_t ___options1, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_setBugReportingOptions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_setBugReportingOptions_m34555B17F284030214A2365D1ACB659D10505FFD (int32_t ___options0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_Dismiss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_Dismiss_m8812A1E168B2592594B15973D64A94A6C46348E9 (const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_AddFileAttachmentWithURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_AddFileAttachmentWithURL_mD03FC2043D4571F029592946C653994EE9992E39 (String_t* ___url0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_AddFileAttachmentWithData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_AddFileAttachmentWithData_mB909454121C9557055F46F0008480C50A438C328 (String_t* ___data0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_ClearFileAttachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_ClearFileAttachments_mFF45B50457F44D2AD6D5C4846EE61DAD690019D8 (const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_SetUserData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetUserData_mFD526BB8D92438A0E34B62AB8FBAE9B7CCF9D527 (String_t* ___userData0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_SetPreSendingHandler(Plugins.Instabug.Instabug/PreSendingCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetPreSendingHandler_mF0B05826DE8331A17B0E9E9E14907FDD7E3C5AF9 (PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF * ___callback0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_SetPreInvocationHandler(Plugins.Instabug.Instabug/PreInvocationCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetPreInvocationHandler_mC6F34402C644DD389343D1F51F024298D4D721DD (PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31 * ___callback0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_SetPostInvocationHandler(Plugins.Instabug.Instabug/PostInvocationCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetPostInvocationHandler_mB0E6E945B4568FD55E99CA2E8A8E8E6D487F35D1 (PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * ___callback0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_IdentifyUserWithEmail(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_IdentifyUserWithEmail_mC8CBB810438C532C3E8897BD10BAED33253C06C3 (String_t* ___email0, String_t* ___name1, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_LogOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogOut_mD2833F922348FDAA7D7DD74FFB0D7038CCCA0C17 (const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_ShowWelcomeMessageWithMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_ShowWelcomeMessageWithMode_m957969A591BCC2DAE42604724E9AC7F29AD8DC6C (int32_t ___welcomeMessageMode0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_SetAttachmentTypesEnabled(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetAttachmentTypesEnabled_mFDA74203390A5F5C7E31DC2B9BE516FFBF0502F4 (bool ___screenshot0, bool ___extraScreenshot1, bool ___galleryImage2, bool ___screenRecording3, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_LogDebug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogDebug_mD80A7D771EB3CAF859AF98F77F36619973377D71 (String_t* ___log0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_LogVerbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogVerbose_mD99ECAF6B205C9C93D401B5404C99038BD24A9A2 (String_t* ___log0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_LogInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogInfo_m8D48110510BE07C805B9417CEA8BB410010795C3 (String_t* ___log0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_LogWarn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogWarn_m0E89E7185FA1FEE0CBABD622A9246A99C8C3624D (String_t* ___log0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogError_m7197B88E1B43A1D001F0034FB5E4A9E8A7878BC3 (String_t* ___log0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_SetAutoScreenRecordingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetAutoScreenRecordingEnabled_m39CA040B7193D7625AC3D322B0597B43A29AE2AD (bool ___isEnabled0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_SetWelcomeMessageMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetWelcomeMessageMode_m9719148FCECFD8D2E095EB8F192D58DBC0159936 (int32_t ___mode0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_SetAutoScreenRecordingAudioCapturingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetAutoScreenRecordingAudioCapturingEnabled_m49CEA603374FA170F8326F60403EFB9257F35C86 (bool ___isEnabled0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_SetAutoScreenRecordingDuration(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetAutoScreenRecordingDuration_m1626A974DA7363FCBD44845DEBF226C9A89B9D34 (int32_t ___duration0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_recordUserStep(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_recordUserStep_mC04A60575BC68182C53FFC0B616418719F106855 (String_t* ___stepName0, String_t* ___objectName1, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mCED0E66949120E69BFE9294DC0A11A6F9FDBD129 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mE7043E54617B8289C81A1C7342FBE0AE448C9E3A (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, int32_t ___pointerId0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::GetRayIntersection(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_GetRayIntersection_m64AD7C20DBE590CF7D435869FEA8C5FAAB2AE22B (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, const RuntimeMethod* method);
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___hit0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_mC755099095AD16869BE0345652DE2F64218A9E6A (String_t* ___filename0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// Plugins.Instabug.IBGDismissType Plugins.Instabug.IBGHelpers::GetDismissType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IBGHelpers_GetDismissType_m8342887AF62A284396E2DA283BC0D8C06136E04C (String_t* ___dismissType0, const RuntimeMethod* method);
// Plugins.Instabug.IBGReportType Plugins.Instabug.IBGHelpers::GetReportType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IBGHelpers_GetReportType_m83208C4B9FA998DF27AC926D3475238078E412E5 (String_t* ___reportType0, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug/PostInvocationCallbackDelegate::Invoke(Plugins.Instabug.IBGDismissType,Plugins.Instabug.IBGReportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostInvocationCallbackDelegate_Invoke_mA766A7B24007D2308232E0860363F4FB437CC582 (PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * __this, int32_t ___dismissType0, int32_t ___reportType1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void Plugins.Instabug.Instabug::Instabug_recordVisualUserStepForView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_recordVisualUserStepForView_mE62528A2A082F1C60E1C4FE77B60FC8A0A68DE81 (String_t* ___viewName0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_recordUserStep(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_InitializeInstabug(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_Show();
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_showWithReportTypeAndOptions(int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_setBugReportingOptions(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_Dismiss();
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_AddFileAttachmentWithURL(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_ClearFileAttachments();
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_SetUserData(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_SetPreSendingHandler(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_SetPreInvocationHandler(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_SetPostInvocationHandler(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_IdentifyUserWithEmail(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_LogOut();
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_SetAttachmentTypesEnabled(int32_t, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_ShowWelcomeMessageWithMode(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_LogDebug(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_LogVerbose(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_LogWarn(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_LogInfo(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_LogError(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_SetAutoScreenRecordingEnabled(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_SetAutoScreenRecordingAudioCapturingEnabled(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_SetAutoScreenRecordingDuration(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_recordVisualUserStepForView(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_SetWelcomeMessageMode(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Instabug_AddFileAttachmentWithData(char*);
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
// System.Void IBGAndroidCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGAndroidCallbacks__ctor_mC16FDDCFB190E7A01313C7A78AE1CE7BBB61F0FF (IBGAndroidCallbacks_t9B17F75ED7390208D9D71C7D5E32BECF9980D092 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Plugins.Instabug.IBGConstants::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGConstants__ctor_m00B24D795971294FA24F6FC4779402FA0DB1C3ED (IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Plugins.Instabug.IBGConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGConstants__cctor_mCCF57B12F667DD782FAEF567E7765C346E7C3647 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFE2125CD09A8041BB97AB3B5A14CAD86FFECA68);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly string JAVA_UNITYPLAYER_CLASS = "com.unity3d.player.UnityPlayer";
		((IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F_StaticFields*)il2cpp_codegen_static_fields_for(IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F_il2cpp_TypeInfo_var))->set_JAVA_UNITYPLAYER_CLASS_0(_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		// internal static readonly string JAVA_INSTABUGUNITYPLUGIN_CLASS = "com.example.unityandroid.InstabugPlugin";
		((IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F_StaticFields*)il2cpp_codegen_static_fields_for(IBGConstants_t4067E4F18E94BF4B6722D3AD19F2A54B8681762F_il2cpp_TypeInfo_var))->set_JAVA_INSTABUGUNITYPLUGIN_CLASS_1(_stringLiteralAFE2125CD09A8041BB97AB3B5A14CAD86FFECA68);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Plugins.Instabug.IBGEventDetector::Instabug_recordUserStep(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector_Instabug_recordUserStep_m9485BD68BB0D07D37E639E8425AC5A1DC1F74721 (String_t* ___stepName0, String_t* ___objectName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___stepName0' to native representation
	char* ____stepName0_marshaled = NULL;
	____stepName0_marshaled = il2cpp_codegen_marshal_string(___stepName0);

	// Marshaling of parameter '___objectName1' to native representation
	char* ____objectName1_marshaled = NULL;
	____objectName1_marshaled = il2cpp_codegen_marshal_string(___objectName1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_recordUserStep)(____stepName0_marshaled, ____objectName1_marshaled);

	// Marshaling cleanup of parameter '___stepName0' native representation
	il2cpp_codegen_marshal_free(____stepName0_marshaled);
	____stepName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___objectName1' native representation
	il2cpp_codegen_marshal_free(____objectName1_marshaled);
	____objectName1_marshaled = NULL;

}
// System.Void Plugins.Instabug.IBGEventDetector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector_Start_m202D766684122DE395B89359BB41ACEE2714D8C4 (IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0 * __this, const RuntimeMethod* method)
{
	{
		// addPhysicsRaycaster();
		IBGEventDetector_addPhysicsRaycaster_m2F557437ADC0767C366AF46DE6F0D3F78AB0D22C(__this, /*hidden argument*/NULL);
		// addPhysics2DRaycaster();
		IBGEventDetector_addPhysics2DRaycaster_m9F440E3E9E4455F70B09493A232F301D8F10B6F8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.IBGEventDetector::addPhysicsRaycaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector_addPhysicsRaycaster_m2F557437ADC0767C366AF46DE6F0D3F78AB0D22C (IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823_mF446FA168ABAC41CAFF2374996DB31785DC78F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823_mD0AB1787735F631B6928F6FF4EA3D1504C3C294A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhysicsRaycaster physicsRaycaster = UnityEngine.Object.FindObjectOfType<PhysicsRaycaster>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823 * L_0;
		L_0 = Object_FindObjectOfType_TisPhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823_mD0AB1787735F631B6928F6FF4EA3D1504C3C294A(/*hidden argument*/Object_FindObjectOfType_TisPhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823_mD0AB1787735F631B6928F6FF4EA3D1504C3C294A_RuntimeMethod_var);
		// if (physicsRaycaster == null)
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Camera.main.gameObject.AddComponent<PhysicsRaycaster>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		PhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823 * L_4;
		L_4 = GameObject_AddComponent_TisPhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823_mF446FA168ABAC41CAFF2374996DB31785DC78F15(L_3, /*hidden argument*/GameObject_AddComponent_TisPhysicsRaycaster_t30CAABC8B439EB2F455D320192635CFD2BD89823_mF446FA168ABAC41CAFF2374996DB31785DC78F15_RuntimeMethod_var);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Plugins.Instabug.IBGEventDetector::addPhysics2DRaycaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector_addPhysics2DRaycaster_m9F440E3E9E4455F70B09493A232F301D8F10B6F8 (IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPhysics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3_m2E4D7B7BA681FC6EEB1444603D5C4BBC3DFE6610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPhysics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3_mC8AB6001A844A3373E5DFBEF073CD60B686D9D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Physics2DRaycaster physicsRaycaster = UnityEngine.Object.FindObjectOfType<Physics2DRaycaster>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Physics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3 * L_0;
		L_0 = Object_FindObjectOfType_TisPhysics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3_mC8AB6001A844A3373E5DFBEF073CD60B686D9D97(/*hidden argument*/Object_FindObjectOfType_TisPhysics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3_mC8AB6001A844A3373E5DFBEF073CD60B686D9D97_RuntimeMethod_var);
		// if (physicsRaycaster == null)
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Camera.main.gameObject.AddComponent<Physics2DRaycaster>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Physics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3 * L_4;
		L_4 = GameObject_AddComponent_TisPhysics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3_m2E4D7B7BA681FC6EEB1444603D5C4BBC3DFE6610(L_3, /*hidden argument*/GameObject_AddComponent_TisPhysics2DRaycaster_t0A86A26E1B770FECE956F4B4FD773887AF66C4C3_m2E4D7B7BA681FC6EEB1444603D5C4BBC3DFE6610_RuntimeMethod_var);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Plugins.Instabug.IBGEventDetector::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector_OnDrag_m20E4B8E5B781EF3C4A1D1640E0C5ECF0603BBA7B (IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07246539696106AE36CD5F777E6EB1C7245E1CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA32D15C04F9299B5039855559E5922196DD798F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string objectName = eventData.pointerCurrentRaycast.gameObject.name;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		NullCheck(L_0);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_1;
		L_1 = PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (objectName != null)
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.Log("Drag happened on object: " + objectName);
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral07246539696106AE36CD5F777E6EB1C7245E1CFE, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// Instabug_recordUserStep("swipe", objectName);
		String_t* L_7 = V_0;
		IBGEventDetector_Instabug_recordUserStep_m9485BD68BB0D07D37E639E8425AC5A1DC1F74721(_stringLiteralBA32D15C04F9299B5039855559E5922196DD798F, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Plugins.Instabug.IBGEventDetector::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector_OnPointerClick_m6E285B28A67C61C515AD832509E0D389C2E28CD9 (IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3073B1D170D5A638AEEBDC086E6FF892933E101);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFC8A5C3AC9E75D9C702664348B1F790FCFCB561);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string objectName = eventData.pointerCurrentRaycast.gameObject.name;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		NullCheck(L_0);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_1;
		L_1 = PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (objectName != null)
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.Log("Click happened on object: " + objectName);
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD3073B1D170D5A638AEEBDC086E6FF892933E101, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// Instabug_recordUserStep("tap", objectName);
		String_t* L_7 = V_0;
		IBGEventDetector_Instabug_recordUserStep_m9485BD68BB0D07D37E639E8425AC5A1DC1F74721(_stringLiteralDFC8A5C3AC9E75D9C702664348B1F790FCFCB561, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Plugins.Instabug.IBGEventDetector::OnScroll(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector_OnScroll_m0B1E801F6B02F1BD1707A26F5DAEF29582F98706 (IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B1AEB24E6D2B53697EC563051927D25A556ED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F4AAFCE6E5384D539C6F26A32C9F0BFF1A3CB21);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string objectName = eventData.pointerCurrentRaycast.gameObject.name;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		NullCheck(L_0);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_1;
		L_1 = PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (objectName != null)
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.Log("Scroll happened on object: " + objectName);
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5F4AAFCE6E5384D539C6F26A32C9F0BFF1A3CB21, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// Instabug_recordUserStep("scroll", objectName);
		String_t* L_7 = V_0;
		IBGEventDetector_Instabug_recordUserStep_m9485BD68BB0D07D37E639E8425AC5A1DC1F74721(_stringLiteral27B1AEB24E6D2B53697EC563051927D25A556ED8, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Plugins.Instabug.IBGEventDetector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBGEventDetector__ctor_m8FAC891979C7F093A7B04830910748B147F1DC8B (IBGEventDetector_t64DD0B352838AF301D8F03D332A06ED2FD8F23C0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Plugins.Instabug.IBGDismissType Plugins.Instabug.IBGHelpers::GetDismissType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IBGHelpers_GetDismissType_m8342887AF62A284396E2DA283BC0D8C06136E04C (String_t* ___dismissType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FEB2FD489F3096B7F017BB5CEBA820C787EC250);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CF45CAAD184C9FF56B8448D9B568CF797F6A8E4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___dismissType0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_1 = ___dismissType0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral9CF45CAAD184C9FF56B8448D9B568CF797F6A8E4, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = ___dismissType0;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral7FEB2FD489F3096B7F017BB5CEBA820C787EC250, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0027;
	}

IL_001f:
	{
		// case "submit": eDismissType = IBGDismissType.Submit; break;
		V_0 = 0;
		// case "submit": eDismissType = IBGDismissType.Submit; break;
		goto IL_0029;
	}

IL_0023:
	{
		// case "add_attachment": eDismissType = IBGDismissType.AddAttachment; break;
		V_0 = 2;
		// case "add_attachment": eDismissType = IBGDismissType.AddAttachment; break;
		goto IL_0029;
	}

IL_0027:
	{
		// default: eDismissType = IBGDismissType.Cancel; break;
		V_0 = 1;
	}

IL_0029:
	{
		// return eDismissType;
		int32_t L_5 = V_0;
		return L_5;
	}
}
// Plugins.Instabug.IBGReportType Plugins.Instabug.IBGHelpers::GetReportType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IBGHelpers_GetReportType_m83208C4B9FA998DF27AC926D3475238078E412E5 (String_t* ___reportType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE4A99C35DB609AFE3FDE44EB05F367946EB5884);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reportType.Equals("feedback"))
		String_t* L_0 = ___reportType0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, _stringLiteralFE4A99C35DB609AFE3FDE44EB05F367946EB5884, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return IBGReportType.Feedback;
		return (int32_t)(1);
	}

IL_000f:
	{
		// return IBGReportType.Bug;
		return (int32_t)(0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Plugins.Instabug.Instabug::Instabug_InitializeInstabug(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_InitializeInstabug_m2A421C22E9C18D015FEB853DD021652051A5B1D2 (String_t* ___appToken0, int32_t ___invocationEvent1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___appToken0' to native representation
	char* ____appToken0_marshaled = NULL;
	____appToken0_marshaled = il2cpp_codegen_marshal_string(___appToken0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_InitializeInstabug)(____appToken0_marshaled, ___invocationEvent1);

	// Marshaling cleanup of parameter '___appToken0' native representation
	il2cpp_codegen_marshal_free(____appToken0_marshaled);
	____appToken0_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_Show_m3DF014602910ED2CA3CF778C63B49F2979255172 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_Show)();

}
// System.Void Plugins.Instabug.Instabug::Instabug_showWithReportTypeAndOptions(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_showWithReportTypeAndOptions_m608BA6F015939274E3273EE9F4BDEA6C51649469 (int32_t ___reportType0, int32_t ___options1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_showWithReportTypeAndOptions)(___reportType0, ___options1);

}
// System.Void Plugins.Instabug.Instabug::Instabug_setBugReportingOptions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_setBugReportingOptions_m34555B17F284030214A2365D1ACB659D10505FFD (int32_t ___options0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_setBugReportingOptions)(___options0);

}
// System.Void Plugins.Instabug.Instabug::Instabug_Dismiss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_Dismiss_m8812A1E168B2592594B15973D64A94A6C46348E9 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_Dismiss)();

}
// System.Void Plugins.Instabug.Instabug::Instabug_AddFileAttachmentWithURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_AddFileAttachmentWithURL_mD03FC2043D4571F029592946C653994EE9992E39 (String_t* ___url0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_AddFileAttachmentWithURL)(____url0_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_ClearFileAttachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_ClearFileAttachments_mFF45B50457F44D2AD6D5C4846EE61DAD690019D8 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_ClearFileAttachments)();

}
// System.Void Plugins.Instabug.Instabug::Instabug_SetUserData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetUserData_mFD526BB8D92438A0E34B62AB8FBAE9B7CCF9D527 (String_t* ___userData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___userData0' to native representation
	char* ____userData0_marshaled = NULL;
	____userData0_marshaled = il2cpp_codegen_marshal_string(___userData0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_SetUserData)(____userData0_marshaled);

	// Marshaling cleanup of parameter '___userData0' native representation
	il2cpp_codegen_marshal_free(____userData0_marshaled);
	____userData0_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_SetPreSendingHandler(Plugins.Instabug.Instabug/PreSendingCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetPreSendingHandler_mF0B05826DE8331A17B0E9E9E14907FDD7E3C5AF9 (PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_SetPreSendingHandler)(____callback0_marshaled);

}
// System.Void Plugins.Instabug.Instabug::Instabug_SetPreInvocationHandler(Plugins.Instabug.Instabug/PreInvocationCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetPreInvocationHandler_mC6F34402C644DD389343D1F51F024298D4D721DD (PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_SetPreInvocationHandler)(____callback0_marshaled);

}
// System.Void Plugins.Instabug.Instabug::Instabug_SetPostInvocationHandler(Plugins.Instabug.Instabug/PostInvocationCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetPostInvocationHandler_mB0E6E945B4568FD55E99CA2E8A8E8E6D487F35D1 (PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_SetPostInvocationHandler)(____callback0_marshaled);

}
// System.Void Plugins.Instabug.Instabug::Instabug_IdentifyUserWithEmail(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_IdentifyUserWithEmail_mC8CBB810438C532C3E8897BD10BAED33253C06C3 (String_t* ___email0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___email0' to native representation
	char* ____email0_marshaled = NULL;
	____email0_marshaled = il2cpp_codegen_marshal_string(___email0);

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_IdentifyUserWithEmail)(____email0_marshaled, ____name1_marshaled);

	// Marshaling cleanup of parameter '___email0' native representation
	il2cpp_codegen_marshal_free(____email0_marshaled);
	____email0_marshaled = NULL;

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_LogOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogOut_mD2833F922348FDAA7D7DD74FFB0D7038CCCA0C17 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_LogOut)();

}
// System.Void Plugins.Instabug.Instabug::Instabug_SetAttachmentTypesEnabled(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetAttachmentTypesEnabled_mFDA74203390A5F5C7E31DC2B9BE516FFBF0502F4 (bool ___screenshot0, bool ___extraScreenshot1, bool ___galleryImage2, bool ___screenRecording3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_SetAttachmentTypesEnabled)(static_cast<int32_t>(___screenshot0), static_cast<int32_t>(___extraScreenshot1), static_cast<int32_t>(___galleryImage2), static_cast<int32_t>(___screenRecording3));

}
// System.Void Plugins.Instabug.Instabug::Instabug_ShowWelcomeMessageWithMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_ShowWelcomeMessageWithMode_m957969A591BCC2DAE42604724E9AC7F29AD8DC6C (int32_t ___welcomeMessageMode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_ShowWelcomeMessageWithMode)(___welcomeMessageMode0);

}
// System.Void Plugins.Instabug.Instabug::Instabug_LogDebug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogDebug_mD80A7D771EB3CAF859AF98F77F36619973377D71 (String_t* ___log0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___log0' to native representation
	char* ____log0_marshaled = NULL;
	____log0_marshaled = il2cpp_codegen_marshal_string(___log0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_LogDebug)(____log0_marshaled);

	// Marshaling cleanup of parameter '___log0' native representation
	il2cpp_codegen_marshal_free(____log0_marshaled);
	____log0_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_LogVerbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogVerbose_mD99ECAF6B205C9C93D401B5404C99038BD24A9A2 (String_t* ___log0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___log0' to native representation
	char* ____log0_marshaled = NULL;
	____log0_marshaled = il2cpp_codegen_marshal_string(___log0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_LogVerbose)(____log0_marshaled);

	// Marshaling cleanup of parameter '___log0' native representation
	il2cpp_codegen_marshal_free(____log0_marshaled);
	____log0_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_LogWarn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogWarn_m0E89E7185FA1FEE0CBABD622A9246A99C8C3624D (String_t* ___log0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___log0' to native representation
	char* ____log0_marshaled = NULL;
	____log0_marshaled = il2cpp_codegen_marshal_string(___log0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_LogWarn)(____log0_marshaled);

	// Marshaling cleanup of parameter '___log0' native representation
	il2cpp_codegen_marshal_free(____log0_marshaled);
	____log0_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_LogInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogInfo_m8D48110510BE07C805B9417CEA8BB410010795C3 (String_t* ___log0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___log0' to native representation
	char* ____log0_marshaled = NULL;
	____log0_marshaled = il2cpp_codegen_marshal_string(___log0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_LogInfo)(____log0_marshaled);

	// Marshaling cleanup of parameter '___log0' native representation
	il2cpp_codegen_marshal_free(____log0_marshaled);
	____log0_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_LogError_m7197B88E1B43A1D001F0034FB5E4A9E8A7878BC3 (String_t* ___log0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___log0' to native representation
	char* ____log0_marshaled = NULL;
	____log0_marshaled = il2cpp_codegen_marshal_string(___log0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_LogError)(____log0_marshaled);

	// Marshaling cleanup of parameter '___log0' native representation
	il2cpp_codegen_marshal_free(____log0_marshaled);
	____log0_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_SetAutoScreenRecordingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetAutoScreenRecordingEnabled_m39CA040B7193D7625AC3D322B0597B43A29AE2AD (bool ___isEnabled0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_SetAutoScreenRecordingEnabled)(static_cast<int32_t>(___isEnabled0));

}
// System.Void Plugins.Instabug.Instabug::Instabug_SetAutoScreenRecordingAudioCapturingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetAutoScreenRecordingAudioCapturingEnabled_m49CEA603374FA170F8326F60403EFB9257F35C86 (bool ___isEnabled0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_SetAutoScreenRecordingAudioCapturingEnabled)(static_cast<int32_t>(___isEnabled0));

}
// System.Void Plugins.Instabug.Instabug::Instabug_SetAutoScreenRecordingDuration(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetAutoScreenRecordingDuration_m1626A974DA7363FCBD44845DEBF226C9A89B9D34 (int32_t ___duration0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_SetAutoScreenRecordingDuration)(___duration0);

}
// System.Void Plugins.Instabug.Instabug::Instabug_recordVisualUserStepForView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_recordVisualUserStepForView_mE62528A2A082F1C60E1C4FE77B60FC8A0A68DE81 (String_t* ___viewName0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___viewName0' to native representation
	char* ____viewName0_marshaled = NULL;
	____viewName0_marshaled = il2cpp_codegen_marshal_string(___viewName0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_recordVisualUserStepForView)(____viewName0_marshaled);

	// Marshaling cleanup of parameter '___viewName0' native representation
	il2cpp_codegen_marshal_free(____viewName0_marshaled);
	____viewName0_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_recordUserStep(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_recordUserStep_mC04A60575BC68182C53FFC0B616418719F106855 (String_t* ___stepName0, String_t* ___objectName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___stepName0' to native representation
	char* ____stepName0_marshaled = NULL;
	____stepName0_marshaled = il2cpp_codegen_marshal_string(___stepName0);

	// Marshaling of parameter '___objectName1' to native representation
	char* ____objectName1_marshaled = NULL;
	____objectName1_marshaled = il2cpp_codegen_marshal_string(___objectName1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_recordUserStep)(____stepName0_marshaled, ____objectName1_marshaled);

	// Marshaling cleanup of parameter '___stepName0' native representation
	il2cpp_codegen_marshal_free(____stepName0_marshaled);
	____stepName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___objectName1' native representation
	il2cpp_codegen_marshal_free(____objectName1_marshaled);
	____objectName1_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Instabug_SetWelcomeMessageMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_SetWelcomeMessageMode_m9719148FCECFD8D2E095EB8F192D58DBC0159936 (int32_t ___mode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_SetWelcomeMessageMode)(___mode0);

}
// System.Void Plugins.Instabug.Instabug::Instabug_AddFileAttachmentWithData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Instabug_AddFileAttachmentWithData_mB909454121C9557055F46F0008480C50A438C328 (String_t* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___data0' to native representation
	char* ____data0_marshaled = NULL;
	____data0_marshaled = il2cpp_codegen_marshal_string(___data0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Instabug_AddFileAttachmentWithData)(____data0_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	il2cpp_codegen_marshal_free(____data0_marshaled);
	____data0_marshaled = NULL;

}
// System.Void Plugins.Instabug.Instabug::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Awake_mC0BAC1772233838926F3951A14E0A89C19E6EF21 (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null) {
		Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * L_0 = ((Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E_StaticFields*)il2cpp_codegen_static_fields_for(Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_OnEnable_m4F50BF7F0ABF18F1A513C18093E0FFBD92D4184B (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instabug_OnSceneChanged_mB958A0B07385267ED81CD902FB6354B853B5415D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PreInit();
		Instabug_PreInit_m111197DD9199BCA2C6387C22FA9A45C8DBFDAB01(/*hidden argument*/NULL);
		// InitializeInstabug();
		Instabug_InitializeInstabug_m6ABA3AD5CD673A3C3635A36C357118A15AFCADC1(__this, /*hidden argument*/NULL);
		// instance = this;
		((Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E_StaticFields*)il2cpp_codegen_static_fields_for(Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// CaptureTouchEventsOnGameObjects();
		Instabug_CaptureTouchEventsOnGameObjects_mD44EC06A84AE0FE684D4211025896906A4AF0EDE(__this, /*hidden argument*/NULL);
		// SceneManager.activeSceneChanged += OnSceneChanged;
		UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * L_0 = (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 *)il2cpp_codegen_object_new(UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1(L_0, __this, (intptr_t)((intptr_t)Instabug_OnSceneChanged_mB958A0B07385267ED81CD902FB6354B853B5415D_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_activeSceneChanged_mB22B18FD4F7F719CDDD9AF3947CDC63AB689F712(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_OnDisable_mBFCF97E0D4D8626CA447819E9310561E0DC78C58 (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instabug_OnSceneChanged_mB958A0B07385267ED81CD902FB6354B853B5415D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.activeSceneChanged -= OnSceneChanged;
		UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * L_0 = (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 *)il2cpp_codegen_object_new(UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1(L_0, __this, (intptr_t)((intptr_t)Instabug_OnSceneChanged_mB958A0B07385267ED81CD902FB6354B853B5415D_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_remove_activeSceneChanged_m393D580B1E306AE2A549810D409E64A226EFCF8D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::OnSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_OnSceneChanged_mB958A0B07385267ED81CD902FB6354B853B5415D (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___current0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___next1, const RuntimeMethod* method)
{
	{
		// StartCoroutine(ExecuteAfterTime(0.5f, next));
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0 = ___next1;
		RuntimeObject* L_1;
		L_1 = Instabug_ExecuteAfterTime_mF5D31D739A8663B724E67895FFF3A61C01E3D66A(__this, (0.5f), L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Plugins.Instabug.Instabug::ExecuteAfterTime(System.Single,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Instabug_ExecuteAfterTime_mF5D31D739A8663B724E67895FFF3A61C01E3D66A (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, float ___time0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D * L_0 = (U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D *)il2cpp_codegen_object_new(U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D_il2cpp_TypeInfo_var);
		U3CExecuteAfterTimeU3Ed__37__ctor_mCBF9A52CFE44B5D5D7BD4DD53B26101D9F5D756A(L_0, 0, /*hidden argument*/NULL);
		U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D * L_1 = L_0;
		float L_2 = ___time0;
		NullCheck(L_1);
		L_1->set_time_2(L_2);
		U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D * L_3 = L_1;
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4 = ___scene1;
		NullCheck(L_3);
		L_3->set_scene_3(L_4);
		return L_3;
	}
}
// System.Void Plugins.Instabug.Instabug::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Update_m93EB850F8F3ABF984457E37F94EF64428B5DC8BC (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, const RuntimeMethod* method)
{
	{
		// CaptureTouchEventsOnGameObjects();
		Instabug_CaptureTouchEventsOnGameObjects_mD44EC06A84AE0FE684D4211025896906A4AF0EDE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::InitializeInstabug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_InitializeInstabug_m6ABA3AD5CD673A3C3635A36C357118A15AFCADC1 (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, const RuntimeMethod* method)
{
	{
		// Instabug_InitializeInstabug(appToken, (int)invocationEvent);
		String_t* L_0 = __this->get_appToken_5();
		int32_t L_1 = __this->get_invocationEvent_6();
		Instabug_Instabug_InitializeInstabug_m2A421C22E9C18D015FEB853DD021652051A5B1D2(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::PreInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_PreInit_m111197DD9199BCA2C6387C22FA9A45C8DBFDAB01 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Invoke_m7867199F32D6B4F3B815E8083037D6EE0268BF91 (const RuntimeMethod* method)
{
	{
		// Instabug_Show();
		Instabug_Instabug_Show_m3DF014602910ED2CA3CF778C63B49F2979255172(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::ShowWithReportTypeAndOptions(Plugins.Instabug.IBGBugReportingReportType,Plugins.Instabug.IBGBugReportingInvocationOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_ShowWithReportTypeAndOptions_mEC4AA830919378EE39317AA7F3FF8E508B291C00 (int32_t ___reportType0, IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071* ___options1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int optionsEnum = 0;
		V_0 = 0;
		// foreach (IBGBugReportingInvocationOption o in options)
		IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071* L_0 = ___options1;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0014;
	}

IL_0008:
	{
		// foreach (IBGBugReportingInvocationOption o in options)
		IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (int32_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// optionsEnum |= (int)o;
		int32_t L_5 = V_0;
		int32_t L_6 = V_3;
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)L_6));
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0014:
	{
		// foreach (IBGBugReportingInvocationOption o in options)
		int32_t L_8 = V_2;
		IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		// Instabug_showWithReportTypeAndOptions((int)reportType, optionsEnum);
		int32_t L_10 = ___reportType0;
		int32_t L_11 = V_0;
		Instabug_Instabug_showWithReportTypeAndOptions_m608BA6F015939274E3273EE9F4BDEA6C51649469(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::SetBugReportOptions(Plugins.Instabug.IBGBugReportingInvocationOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_SetBugReportOptions_m37C5A96E11C6156F0C48742A84E6CD8C32D4C7BC (IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071* ___options0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int optionsEnum = 0;
		V_0 = 0;
		// foreach (IBGBugReportingInvocationOption o in options)
		IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071* L_0 = ___options0;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0014;
	}

IL_0008:
	{
		// foreach (IBGBugReportingInvocationOption o in options)
		IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (int32_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// optionsEnum |= (int)o;
		int32_t L_5 = V_0;
		int32_t L_6 = V_3;
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)L_6));
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0014:
	{
		// foreach (IBGBugReportingInvocationOption o in options)
		int32_t L_8 = V_2;
		IBGBugReportingInvocationOptionU5BU5D_tBFF5A9703E1B736A1AD9DD6C64D47331279A2071* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		// Instabug_setBugReportingOptions(optionsEnum);
		int32_t L_10 = V_0;
		Instabug_Instabug_setBugReportingOptions_m34555B17F284030214A2365D1ACB659D10505FFD(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::Dismiss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_Dismiss_m2FDDB7219F95948D062C45BA573850665559D4C0 (const RuntimeMethod* method)
{
	{
		// Instabug_Dismiss();
		Instabug_Instabug_Dismiss_m8812A1E168B2592594B15973D64A94A6C46348E9(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::AddFileAttachmentWithURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_AddFileAttachmentWithURL_mA0F91B2691BAB0302D7822A7B63E802413ABB651 (String_t* ___url0, const RuntimeMethod* method)
{
	{
		// Instabug_AddFileAttachmentWithURL(url);
		String_t* L_0 = ___url0;
		Instabug_Instabug_AddFileAttachmentWithURL_mD03FC2043D4571F029592946C653994EE9992E39(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::AddFileAttachmentWithData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_AddFileAttachmentWithData_m56392CF2683229526450FFC4ED3EE24F101D8391 (String_t* ___data0, String_t* ___fileName1, const RuntimeMethod* method)
{
	{
		// Instabug_AddFileAttachmentWithData(data);
		String_t* L_0 = ___data0;
		Instabug_Instabug_AddFileAttachmentWithData_mB909454121C9557055F46F0008480C50A438C328(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::ClearFileAttachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_ClearFileAttachments_m862424A4BA95E99F527D17A9BFCCA2077EF9FA3F (const RuntimeMethod* method)
{
	{
		// Instabug_ClearFileAttachments();
		Instabug_Instabug_ClearFileAttachments_mFF45B50457F44D2AD6D5C4846EE61DAD690019D8(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::SetUserData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_SetUserData_mBCE8CA1A3E458785B47065387718CD426B242EC4 (String_t* ___userData0, const RuntimeMethod* method)
{
	{
		// Instabug_SetUserData(userData);
		String_t* L_0 = ___userData0;
		Instabug_Instabug_SetUserData_mFD526BB8D92438A0E34B62AB8FBAE9B7CCF9D527(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::SetPreSendingHandler(Plugins.Instabug.Instabug/PreSendingCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_SetPreSendingHandler_mBC9E60B8C742B01EEA8873C1677799B7ADA43458 (PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF * ___preSendingCallback0, const RuntimeMethod* method)
{
	{
		// Instabug_SetPreSendingHandler(preSendingCallback);
		PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF * L_0 = ___preSendingCallback0;
		Instabug_Instabug_SetPreSendingHandler_mF0B05826DE8331A17B0E9E9E14907FDD7E3C5AF9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::SetPreInvocationHandler(Plugins.Instabug.Instabug/PreInvocationCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_SetPreInvocationHandler_m716BB66B0181B9E1832C85E61E03525A667E634C (PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31 * ___preInvocationCallback0, const RuntimeMethod* method)
{
	{
		// Instabug_SetPreInvocationHandler(preInvocationCallback);
		PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31 * L_0 = ___preInvocationCallback0;
		Instabug_Instabug_SetPreInvocationHandler_mC6F34402C644DD389343D1F51F024298D4D721DD(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::SetPostInvocationHandler(Plugins.Instabug.Instabug/PostInvocationCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_SetPostInvocationHandler_m199B4A5A09C692BA404E927A9ABCAA5337C4758B (PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * ___postInvocationCallback0, const RuntimeMethod* method)
{
	{
		// Instabug_SetPostInvocationHandler(postInvocationCallback);
		PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * L_0 = ___postInvocationCallback0;
		Instabug_Instabug_SetPostInvocationHandler_mB0E6E945B4568FD55E99CA2E8A8E8E6D487F35D1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::IdentifyUserWithEmail(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_IdentifyUserWithEmail_mC349DBE350684D3323D75598336B6B1C1D3CE60B (String_t* ___email0, String_t* ___name1, const RuntimeMethod* method)
{
	{
		// Instabug_IdentifyUserWithEmail(email, name);
		String_t* L_0 = ___email0;
		String_t* L_1 = ___name1;
		Instabug_Instabug_IdentifyUserWithEmail_mC8CBB810438C532C3E8897BD10BAED33253C06C3(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::LogOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_LogOut_m7FDB8A319F4FAF7E1D0BF04929AAA7BEB2BE1526 (const RuntimeMethod* method)
{
	{
		// Instabug_LogOut();
		Instabug_Instabug_LogOut_mD2833F922348FDAA7D7DD74FFB0D7038CCCA0C17(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::ShowWelcomeMessageWithMode(Plugins.Instabug.IBGWelcomeMessageMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_ShowWelcomeMessageWithMode_m89E2D73B5D8EBB1AE335F2A127399A8D4BAF11A6 (int32_t ___welcomeMessageMode0, const RuntimeMethod* method)
{
	{
		// Instabug_ShowWelcomeMessageWithMode((int)welcomeMessageMode);
		int32_t L_0 = ___welcomeMessageMode0;
		Instabug_Instabug_ShowWelcomeMessageWithMode_m957969A591BCC2DAE42604724E9AC7F29AD8DC6C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::SetAttachmentTypesEnabled(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_SetAttachmentTypesEnabled_m39B5430F79C37D099773247143114A1DAA5618E3 (bool ___screenshot0, bool ___extraScreenshot1, bool ___galleryImage2, bool ___screenRecording3, const RuntimeMethod* method)
{
	{
		// Instabug_SetAttachmentTypesEnabled(screenshot, extraScreenshot, galleryImage, screenRecording );
		bool L_0 = ___screenshot0;
		bool L_1 = ___extraScreenshot1;
		bool L_2 = ___galleryImage2;
		bool L_3 = ___screenRecording3;
		Instabug_Instabug_SetAttachmentTypesEnabled_mFDA74203390A5F5C7E31DC2B9BE516FFBF0502F4(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::LogDebug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_LogDebug_m09D24D07DDF133ACD2BAAD97466B4D178503C5CF (String_t* ___log0, const RuntimeMethod* method)
{
	{
		// Instabug_LogDebug(log);
		String_t* L_0 = ___log0;
		Instabug_Instabug_LogDebug_mD80A7D771EB3CAF859AF98F77F36619973377D71(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::LogVerbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_LogVerbose_m3485B8345F8915C6CE0877AB33AE5BEE10BE9EE7 (String_t* ___log0, const RuntimeMethod* method)
{
	{
		// Instabug_LogVerbose(log);
		String_t* L_0 = ___log0;
		Instabug_Instabug_LogVerbose_mD99ECAF6B205C9C93D401B5404C99038BD24A9A2(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::LogInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_LogInfo_m7CDC6101A7E4A3DE8B8300BDB466AE7ACB1B81A2 (String_t* ___log0, const RuntimeMethod* method)
{
	{
		// Instabug_LogInfo(log);
		String_t* L_0 = ___log0;
		Instabug_Instabug_LogInfo_m8D48110510BE07C805B9417CEA8BB410010795C3(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::LogWarn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_LogWarn_mD60E93BF9A3F2F259B42C4BAE0F8B2A9FB3A57EA (String_t* ___log0, const RuntimeMethod* method)
{
	{
		// Instabug_LogWarn(log);
		String_t* L_0 = ___log0;
		Instabug_Instabug_LogWarn_m0E89E7185FA1FEE0CBABD622A9246A99C8C3624D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_LogError_m6FE2FBFA25DE2772F335C022C9972863E8E19973 (String_t* ___log0, const RuntimeMethod* method)
{
	{
		// Instabug_LogError(log);
		String_t* L_0 = ___log0;
		Instabug_Instabug_LogError_m7197B88E1B43A1D001F0034FB5E4A9E8A7878BC3(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::SetAutoScreenRecordingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_SetAutoScreenRecordingEnabled_m70E88A6BB75AB80F9464C6A5978B6C7F28C17DE3 (bool ___isEnabled0, const RuntimeMethod* method)
{
	{
		// Instabug_SetAutoScreenRecordingEnabled(isEnabled);
		bool L_0 = ___isEnabled0;
		Instabug_Instabug_SetAutoScreenRecordingEnabled_m39CA040B7193D7625AC3D322B0597B43A29AE2AD(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::SetWelcomeMessageMode(Plugins.Instabug.IBGWelcomeMessageMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_SetWelcomeMessageMode_m0D784336B72378BB24C4327815BA83659397BC9A (int32_t ___welcomeMessageMode0, const RuntimeMethod* method)
{
	{
		// Instabug_SetWelcomeMessageMode((int) welcomeMessageMode);
		int32_t L_0 = ___welcomeMessageMode0;
		Instabug_Instabug_SetWelcomeMessageMode_m9719148FCECFD8D2E095EB8F192D58DBC0159936(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::SetAutoScreenRecordingAudioCapturingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_SetAutoScreenRecordingAudioCapturingEnabled_mDB0CA0594A119EB803F454858F650C6CB8036A60 (bool ___isEnabled0, const RuntimeMethod* method)
{
	{
		// Instabug_SetAutoScreenRecordingAudioCapturingEnabled(isEnabled);
		bool L_0 = ___isEnabled0;
		Instabug_Instabug_SetAutoScreenRecordingAudioCapturingEnabled_m49CEA603374FA170F8326F60403EFB9257F35C86(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::SetAutoScreenRecordingDuration(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_SetAutoScreenRecordingDuration_mFC60ABFF7AE1CB6DCC5E13D341E8E39684BE1A5D (int32_t ___duration0, const RuntimeMethod* method)
{
	{
		// Instabug_SetAutoScreenRecordingDuration(duration);
		int32_t L_0 = ___duration0;
		Instabug_Instabug_SetAutoScreenRecordingDuration_m1626A974DA7363FCBD44845DEBF226C9A89B9D34(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::CaptureTouchEventsOnGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_CaptureTouchEventsOnGameObjects_mD44EC06A84AE0FE684D4211025896906A4AF0EDE (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69F0E88C5C4353A3DF385EB4D0191B83402BEB25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFC8A5C3AC9E75D9C702664348B1F790FCFCB561);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF0F13DDB498AE32AC81B7B733EEF169625F1794);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0136;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1;
		L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0136;
		}
	}
	{
		// Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_4;
		L_4 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_7;
		L_7 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_3, L_6, /*hidden argument*/NULL);
		// if (Physics.Raycast(raycast, out raycastHit))
		bool L_8;
		L_8 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_7, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0076;
		}
	}
	{
		// Debug.Log("3D gameObject was hit: " + raycastHit.collider.ToString());
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_9;
		L_9 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFF0F13DDB498AE32AC81B7B733EEF169625F1794, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_11, /*hidden argument*/NULL);
		// Instabug_recordUserStep ("tap", raycastHit.collider.ToString ());
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_12;
		L_12 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		Instabug_Instabug_recordUserStep_mC04A60575BC68182C53FFC0B616418719F106855(_stringLiteralDFC8A5C3AC9E75D9C702664348B1F790FCFCB561, L_13, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0076:
	{
		// if (EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_14;
		L_14 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_15;
		L_15 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_15;
		int32_t L_16;
		L_16 = Touch_get_fingerId_mCED0E66949120E69BFE9294DC0A11A6F9FDBD129((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_17;
		L_17 = EventSystem_IsPointerOverGameObject_mE7043E54617B8289C81A1C7342FBE0AE448C9E3A(L_14, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		// Instabug_recordUserStep ("tap", EventSystem.current.currentSelectedGameObject.name);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_18;
		L_18 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_19, /*hidden argument*/NULL);
		Instabug_Instabug_recordUserStep_mC04A60575BC68182C53FFC0B616418719F106855(_stringLiteralDFC8A5C3AC9E75D9C702664348B1F790FCFCB561, L_20, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00aa:
	{
		// Vector3 touchPosition = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21;
		L_21 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_22;
		L_22 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_22;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_21, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		// Vector2 touchPosition2D = new Vector2(touchPosition.x, touchPosition.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_2;
		float L_27 = L_26.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_2;
		float L_29 = L_28.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_30), L_27, L_29, /*hidden argument*/NULL);
		// RaycastHit2D rayHit = Physics2D.GetRayIntersection(Camera.main.ScreenPointToRay(Input.GetTouch(0).position));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_31;
		L_31 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_32;
		L_32 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_32;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_35;
		L_35 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_31, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_36;
		L_36 = Physics2D_GetRayIntersection_m64AD7C20DBE590CF7D435869FEA8C5FAAB2AE22B(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		// if (rayHit)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_37 = V_3;
		bool L_38;
		L_38 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0136;
		}
	}
	{
		// Debug.Log("2D gameObject was hit: " + rayHit.collider.ToString());
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_39;
		L_39 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		String_t* L_41;
		L_41 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral69F0E88C5C4353A3DF385EB4D0191B83402BEB25, L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_41, /*hidden argument*/NULL);
		// Instabug_recordUserStep ("tap", rayHit.collider.ToString ());
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_42;
		L_42 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		Instabug_Instabug_recordUserStep_mC04A60575BC68182C53FFC0B616418719F106855(_stringLiteralDFC8A5C3AC9E75D9C702664348B1F790FCFCB561, L_43, /*hidden argument*/NULL);
	}

IL_0136:
	{
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::CaptureScreenshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug_CaptureScreenshot_mA80AC5049FFD1F3CC6BBC18DC3C580DAFC99CCBB (String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0169E1B41927AD62366FE93ADD191DFF761FEAD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B44AFDF4C069934D89D4F88DCFA2FE5AD74AE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string filePath = Application.persistentDataPath + "/ibgImage";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral0169E1B41927AD62366FE93ADD191DFF761FEAD2, /*hidden argument*/NULL);
		// ScreenCapture.CaptureScreenshot("ibgImage");
		ScreenCapture_CaptureScreenshot_mC755099095AD16869BE0345652DE2F64218A9E6A(_stringLiteral14B44AFDF4C069934D89D4F88DCFA2FE5AD74AE2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Plugins.Instabug.Instabug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instabug__ctor_m8D61DD704D5CB80EB5801A2C4C77A8145D6F807E (Instabug_t0D14B90E5906275A2EDE934A8AC64E5CC947341E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral716CE26E7CF46AAE13B1AC33A5D98DF29C4356FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string appToken = "your-instabug-app-token";
		__this->set_appToken_5(_stringLiteral716CE26E7CF46AAE13B1AC33A5D98DF29C4356FA);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m0795B26445F62A9A988B0DAB25A85B5D86A87B17 (MonoPInvokeCallbackAttribute_t061C10CACBEC6902AE620F38433C63286935DB58 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		// public MonoPInvokeCallbackAttribute( Type t ) { type = t; }
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// public MonoPInvokeCallbackAttribute( Type t ) { type = t; }
		Type_t * L_0 = ___t0;
		__this->set_type_0(L_0);
		// public MonoPInvokeCallbackAttribute( Type t ) { type = t; }
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
// System.Void IBGAndroidCallbacks/AndroidOnSDKDismissedCallback::.ctor(Plugins.Instabug.Instabug/PostInvocationCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidOnSDKDismissedCallback__ctor_mB55AD7B02AC052205C921273657EA7ABD5233607 (AndroidOnSDKDismissedCallback_t9CE4A6D560B1A63EF4963BFB9984CA88CAEA8362 * __this, PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * ___postInvocationCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A865A5A891F5E8F52BBACFE7BAF418EFEC864B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidOnSDKDismissedCallback(Instabug.PostInvocationCallbackDelegate postInvocationCallback) : base("com.example.unityandroid.OnUnitySdkDismissed")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral6A865A5A891F5E8F52BBACFE7BAF418EFEC864B2, /*hidden argument*/NULL);
		// this.postInvocationCallback = postInvocationCallback;
		PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * L_0 = ___postInvocationCallback0;
		__this->set_postInvocationCallback_4(L_0);
		// }
		return;
	}
}
// System.Void IBGAndroidCallbacks/AndroidOnSDKDismissedCallback::onSdkDismissed(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidOnSDKDismissedCallback_onSdkDismissed_m300465AA81863D6FC630B4197274E26E665BC0C6 (AndroidOnSDKDismissedCallback_t9CE4A6D560B1A63EF4963BFB9984CA88CAEA8362 * __this, String_t* ___dismissType0, String_t* ___reportType1, const RuntimeMethod* method)
{
	{
		// postInvocationCallback(IBGHelpers.GetDismissType(dismissType), IBGHelpers.GetReportType(reportType));
		PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * L_0 = __this->get_postInvocationCallback_4();
		String_t* L_1 = ___dismissType0;
		int32_t L_2;
		L_2 = IBGHelpers_GetDismissType_m8342887AF62A284396E2DA283BC0D8C06136E04C(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___reportType1;
		int32_t L_4;
		L_4 = IBGHelpers_GetReportType_m83208C4B9FA998DF27AC926D3475238078E412E5(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		PostInvocationCallbackDelegate_Invoke_mA766A7B24007D2308232E0860363F4FB437CC582(L_0, L_2, L_4, /*hidden argument*/NULL);
		// }
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
// System.Void Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAfterTimeU3Ed__37__ctor_mCBF9A52CFE44B5D5D7BD4DD53B26101D9F5D756A (U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAfterTimeU3Ed__37_System_IDisposable_Dispose_mCE217D03D497205A75926175DC552C71E4FEA624 (U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteAfterTimeU3Ed__37_MoveNext_m0E2C3D05E927B700EF0F49B95FBEBD76162D8E0A (U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF3D93F37D5E2A9BEEFE4B6A79DE33941367F76B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(time);
		float L_3 = __this->get_time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("OnSceneLoaded: " + scene.name);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * L_5 = __this->get_address_of_scene_3();
		String_t* L_6;
		L_6 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBF3D93F37D5E2A9BEEFE4B6A79DE33941367F76B, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// Instabug_recordVisualUserStepForView(scene.name);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * L_8 = __this->get_address_of_scene_3();
		String_t* L_9;
		L_9 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)L_8, /*hidden argument*/NULL);
		Instabug_Instabug_recordVisualUserStepForView_mE62528A2A082F1C60E1C4FE77B60FC8A0A68DE81(L_9, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteAfterTimeU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE18FA6C5D55772C5D84A72345434B681624BD572 (U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAfterTimeU3Ed__37_System_Collections_IEnumerator_Reset_m269208A3ABFAEDFF76B22901A4CAD281367BD95C (U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteAfterTimeU3Ed__37_System_Collections_IEnumerator_Reset_m269208A3ABFAEDFF76B22901A4CAD281367BD95C_RuntimeMethod_var)));
	}
}
// System.Object Plugins.Instabug.Instabug/<ExecuteAfterTime>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteAfterTimeU3Ed__37_System_Collections_IEnumerator_get_Current_mA61E62A5BD4B598EFBCC63D43AE7FBC7D71A7233 (U3CExecuteAfterTimeU3Ed__37_t9C4D6E63A3571E1C6BE37D1201961190EADBF79D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 (PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * __this, int32_t ___dismissType0, int32_t ___reportType1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___dismissType0, ___reportType1);

}
// System.Void Plugins.Instabug.Instabug/PostInvocationCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostInvocationCallbackDelegate__ctor_mF991C86DE426D4C8FA1C759A9AC291F5B1737422 (PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Plugins.Instabug.Instabug/PostInvocationCallbackDelegate::Invoke(Plugins.Instabug.IBGDismissType,Plugins.Instabug.IBGReportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostInvocationCallbackDelegate_Invoke_mA766A7B24007D2308232E0860363F4FB437CC582 (PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * __this, int32_t ___dismissType0, int32_t ___reportType1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___dismissType0, ___reportType1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___dismissType0, ___reportType1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___dismissType0, ___reportType1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___dismissType0, ___reportType1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___dismissType0, ___reportType1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___dismissType0, ___reportType1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___dismissType0) - 1), ___reportType1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___dismissType0, ___reportType1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Plugins.Instabug.Instabug/PostInvocationCallbackDelegate::BeginInvoke(Plugins.Instabug.IBGDismissType,Plugins.Instabug.IBGReportType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PostInvocationCallbackDelegate_BeginInvoke_m58CCDA1114DA690242F76303002C6FBCA002EC03 (PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * __this, int32_t ___dismissType0, int32_t ___reportType1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBGDismissType_t341E254C4D84261F575844363658D8308BD52795_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBGReportType_t3AFC20C15567113357DE522AD61571D8A0552771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IBGDismissType_t341E254C4D84261F575844363658D8308BD52795_il2cpp_TypeInfo_var, &___dismissType0);
	__d_args[1] = Box(IBGReportType_t3AFC20C15567113357DE522AD61571D8A0552771_il2cpp_TypeInfo_var, &___reportType1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Plugins.Instabug.Instabug/PostInvocationCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostInvocationCallbackDelegate_EndInvoke_mDEDAA5F05CA37836814A89CF6F27AF7CB37E3FE6 (PostInvocationCallbackDelegate_t715044B11A848D5919265C2A218F0761F77CC209 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31 (PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Plugins.Instabug.Instabug/PreInvocationCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreInvocationCallbackDelegate__ctor_mBF662F7B125B3143642E2ECB1CE65BED5BC67208 (PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Plugins.Instabug.Instabug/PreInvocationCallbackDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreInvocationCallbackDelegate_Invoke_m05CD3C2F6329593F92DC1248318219ADAD5E77ED (PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Plugins.Instabug.Instabug/PreInvocationCallbackDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PreInvocationCallbackDelegate_BeginInvoke_m4AA0E68F8FECFCDFCFCCBCF2844A665A436319E8 (PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Plugins.Instabug.Instabug/PreInvocationCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreInvocationCallbackDelegate_EndInvoke_mA9740D84E7E26A235D87A431334932C3D8CE8C83 (PreInvocationCallbackDelegate_t937778B33C6D28475FAA854FF07F0B6823783F31 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF (PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Plugins.Instabug.Instabug/PreSendingCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendingCallbackDelegate__ctor_mA0FD9751011E05DF97D6F596E3A7CF34F540D08D (PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Plugins.Instabug.Instabug/PreSendingCallbackDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendingCallbackDelegate_Invoke_m3328012BA961058C1E60A7EFBB86146817EA0DC7 (PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Plugins.Instabug.Instabug/PreSendingCallbackDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PreSendingCallbackDelegate_BeginInvoke_mE66CEB136802584E11D955E4F3D9AEFCB9AA556F (PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Plugins.Instabug.Instabug/PreSendingCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendingCallbackDelegate_EndInvoke_mBBD425423D54AEF5D4CE2D56E8FC3A45D3D3F31F (PreSendingCallbackDelegate_tE973156E856F02451DD90444AC884B61C699A5AF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_0 = __this->get_U3CpointerCurrentRaycastU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_GameObject; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_GameObject_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentSelected; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CurrentSelected_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
