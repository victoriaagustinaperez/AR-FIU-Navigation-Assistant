﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>>
struct Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995;
// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>>
struct Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B;
// System.Func`2<System.Threading.CancellationToken,System.Object>
struct Func_2_tFB4752E44FC81929027C0874E2CC5BC203FB9299;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>
struct TaskCompletionSource_1_tA4F2D12802A86238A6B0FC63EABD6B8063A89649;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3;
// System.Threading.Tasks.TaskCompletionSource`1<System.Net.WebRequestStream>
struct TaskCompletionSource_1_tAF27606417C7EB40F6CABFF758970F72CCCB83D5;
// System.Threading.Tasks.TaskCompletionSource`1<System.Net.WebResponseStream>
struct TaskCompletionSource_1_t326763FDCC1EDF46DBC85450D97C3918281217E5;
// System.Threading.Tasks.TaskCompletionSource`1<System.Net.WebCompletionSource/Result>
struct TaskCompletionSource_1_tA588E53E06778CC5F619F80119BBF9704F1A73D1;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task>
struct TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E;
// System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Net.BindIPEndPoint
struct BindIPEndPoint_t05F17E8ACBB2C324EF8EA367FB2899690F2E0D32;
// System.Net.BufferOffsetSize
struct BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Net.IPHostEntry
struct IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Net.MonoChunkStream
struct MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.ServicePoint
struct ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0;
// System.Net.ServicePointScheduler
struct ServicePointScheduler_t06FFEEFEFBD2B726733E6E27E2529742FA4DB1A7;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Net.WebCompletionSource
struct WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E;
// System.Net.WebConnection
struct WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88;
// System.Net.WebConnectionStream
struct WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918;
// System.Net.WebException
struct WebException_t824617203133537D3B05BF786C22AECE0E2DBD08;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// System.Net.WebOperation
struct WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00;
// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887;
// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0;
// System.Net.WebResponseStream
struct WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// System.Net.ServicePointScheduler/AsyncManualResetEvent
struct AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8;
// Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
struct unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC;
// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
struct unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E;
// Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
struct unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B;
// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback
struct unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A;
// Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
struct unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC;
// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C;
// System.Net.WebResponseStream/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2;
// System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper
struct MyNativeHelper_t9E78ECADEC33A3AFF81DEF8E43A27DDFD5187F6D;
// System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c
struct U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
struct unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
struct unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
struct unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
struct unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
struct unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
struct unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
struct unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
struct unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
struct unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
struct unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
struct unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
struct unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
struct unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
struct unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
struct unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
struct unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
struct unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
struct unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
struct unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
struct unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
struct unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
struct unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
struct unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
struct unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
struct unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
struct unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
struct unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
struct unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpVersion_t15E4A5DA9E037A055F4630E01EB12A988915448E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebException_t824617203133537D3B05BF786C22AECE0E2DBD08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06;
IL2CPP_EXTERN_C String_t* _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3;
IL2CPP_EXTERN_C String_t* _stringLiteral075AB3197F91A738C7F3165FDD3E48AE8A1CEE1D;
IL2CPP_EXTERN_C String_t* _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D;
IL2CPP_EXTERN_C String_t* _stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E;
IL2CPP_EXTERN_C String_t* _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92;
IL2CPP_EXTERN_C String_t* _stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631;
IL2CPP_EXTERN_C String_t* _stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D;
IL2CPP_EXTERN_C String_t* _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4;
IL2CPP_EXTERN_C String_t* _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03;
IL2CPP_EXTERN_C String_t* _stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7;
IL2CPP_EXTERN_C String_t* _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8;
IL2CPP_EXTERN_C String_t* _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556;
IL2CPP_EXTERN_C String_t* _stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0;
IL2CPP_EXTERN_C String_t* _stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC;
IL2CPP_EXTERN_C String_t* _stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD;
IL2CPP_EXTERN_C String_t* _stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018;
IL2CPP_EXTERN_C String_t* _stringLiteral7145DB000FB7A15A3BC887316484C05C47DF929F;
IL2CPP_EXTERN_C String_t* _stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF;
IL2CPP_EXTERN_C String_t* _stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D;
IL2CPP_EXTERN_C String_t* _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2;
IL2CPP_EXTERN_C String_t* _stringLiteral8C5B5A80C04C3A4ACA2BEED3EDD587DD1F5398C6;
IL2CPP_EXTERN_C String_t* _stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5;
IL2CPP_EXTERN_C String_t* _stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962;
IL2CPP_EXTERN_C String_t* _stringLiteralB1AFC5175681A5803F9B41B41F5AF69045524DBE;
IL2CPP_EXTERN_C String_t* _stringLiteralB89B6412820F91A4B3CC83A1320EEC4B02967797;
IL2CPP_EXTERN_C String_t* _stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6;
IL2CPP_EXTERN_C String_t* _stringLiteralCFE25B37C16B0E4BB7D218D140551332C7027A1D;
IL2CPP_EXTERN_C String_t* _stringLiteralD14FF2660F471CFECF0ABEABE1AB4F546D87BDBB;
IL2CPP_EXTERN_C String_t* _stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA;
IL2CPP_EXTERN_C String_t* _stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF2718390EE473280CB1AC9DB1591547C00DF0E;
IL2CPP_EXTERN_C String_t* _stringLiteralF0ACB78DD0CBEFD7DD81D25C5219DDB4067ECBD2;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504;
IL2CPP_EXTERN_C String_t* _stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_m430D5945C7165F8C1E69E490C8F5DA0ED78C093A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0_mEFB2C074B5A8CE33DB0B717E32BAFB653A74F85F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301_m85B7C24474B01910C07620928758C80E4D7BC9BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_mEAECCCC75DD29B38C6BC6643945C194D011E5BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_m5A2482D3FF3CA89DAFC9824284A2DC3863CB9A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m580CEDB88630842EC930931623D55DCD1798F9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE09CB38D97C0FD3078E779C7E407CA3FD5007BD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m9FD6EED600C4CA2E4A4D88DE26BB7BF08DBCFDDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mCB3888D71D919D6F3C7B7614284540B4DA69B9F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m372A69DE6DC4741415143865DC93AC0DC819C010_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3BF46E17B8E97680CE0AEEBE04DB0CA7E8BE6D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233_m3E72CAE08FDF5EC5AF1D8AD15766D509470323F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_m24482642409847A218481EEAA05FE49C44E65AB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_mFDC08E90931D4046F2E6EB0E5ED313192850B844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m1B62E85A536E6E4E19A92B456C0A9DF6C7DC8608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m3EBA101FA97CBAE74D9AAD26D82A3E545541FAAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m74B83D463AB86ABF1D3D06694190C03A03D04885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m7D187749416370C6CBBBA5B3688C6562E34C1D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m235A147B81620F741B9F832F8FF827260B05DEAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m40F69DF89220BA5A35E234EE9740FFEC9BF0CE30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA00B92A4DF19FAF8E179965B169EC8FEEB5D072D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequest_RunWithTimeout_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mB3DF52FA80C8BC06E1DD2360EB85C2FEABE5E43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m28783226ECE7EBFBBF7FBBEBDD5B4933FEFE24AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_mEEE46CCCCC629B162C32D55D75B3048E93FE674B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__0_mB934112FF09A00740DDB288784335322994E1A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__1_m658C4F1F07AD671D65CFB20E7814E8AB63585340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8;;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Net.BufferOffsetSize
struct BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F  : public RuntimeObject
{
public:
	// System.Byte[] System.Net.BufferOffsetSize::Buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Buffer_0;
	// System.Int32 System.Net.BufferOffsetSize::Offset
	int32_t ___Offset_1;
	// System.Int32 System.Net.BufferOffsetSize::Size
	int32_t ___Size_2;

public:
	inline static int32_t get_offset_of_Buffer_0() { return static_cast<int32_t>(offsetof(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F, ___Buffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Buffer_0() const { return ___Buffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Buffer_0() { return &___Buffer_0; }
	inline void set_Buffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F, ___Offset_1)); }
	inline int32_t get_Offset_1() const { return ___Offset_1; }
	inline int32_t* get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(int32_t value)
	{
		___Offset_1 = value;
	}

	inline static int32_t get_offset_of_Size_2() { return static_cast<int32_t>(offsetof(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F, ___Size_2)); }
	inline int32_t get_Size_2() const { return ___Size_2; }
	inline int32_t* get_address_of_Size_2() { return &___Size_2; }
	inline void set_Size_2(int32_t value)
	{
		___Size_2 = value;
	}
};


// System.Collections.CollectionBase
struct CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB, ___list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_list_0() const { return ___list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Net.HttpVersion
struct HttpVersion_t15E4A5DA9E037A055F4630E01EB12A988915448E  : public RuntimeObject
{
public:

public:
};

struct HttpVersion_t15E4A5DA9E037A055F4630E01EB12A988915448E_StaticFields
{
public:
	// System.Version System.Net.HttpVersion::Version10
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___Version10_0;
	// System.Version System.Net.HttpVersion::Version11
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___Version11_1;

public:
	inline static int32_t get_offset_of_Version10_0() { return static_cast<int32_t>(offsetof(HttpVersion_t15E4A5DA9E037A055F4630E01EB12A988915448E_StaticFields, ___Version10_0)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_Version10_0() const { return ___Version10_0; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_Version10_0() { return &___Version10_0; }
	inline void set_Version10_0(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___Version10_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Version10_0), (void*)value);
	}

	inline static int32_t get_offset_of_Version11_1() { return static_cast<int32_t>(offsetof(HttpVersion_t15E4A5DA9E037A055F4630E01EB12A988915448E_StaticFields, ___Version11_1)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_Version11_1() const { return ___Version11_1; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_Version11_1() { return &___Version11_1; }
	inline void set_Version11_1(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___Version11_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Version11_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_2), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_3), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_4)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_4), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_5)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_5() const { return ____serializationInfo_5; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_5() { return &____serializationInfo_5; }
	inline void set__serializationInfo_5(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_6)); }
	inline int32_t get__version_6() const { return ____version_6; }
	inline int32_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int32_t value)
	{
		____version_6 = value;
	}
};

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_7;

public:
	inline static int32_t get_offset_of_defaultComparer_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_7)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_7() const { return ___defaultComparer_7; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_7() { return &___defaultComparer_7; }
	inline void set_defaultComparer_7(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_7), (void*)value);
	}
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

// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// System.Net.WebCompletionSource
struct WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.Net.WebCompletionSource/Result> System.Net.WebCompletionSource::completion
	TaskCompletionSource_1_tA588E53E06778CC5F619F80119BBF9704F1A73D1 * ___completion_0;

public:
	inline static int32_t get_offset_of_completion_0() { return static_cast<int32_t>(offsetof(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E, ___completion_0)); }
	inline TaskCompletionSource_1_tA588E53E06778CC5F619F80119BBF9704F1A73D1 * get_completion_0() const { return ___completion_0; }
	inline TaskCompletionSource_1_tA588E53E06778CC5F619F80119BBF9704F1A73D1 ** get_address_of_completion_0() { return &___completion_0; }
	inline void set_completion_0(TaskCompletionSource_1_tA588E53E06778CC5F619F80119BBF9704F1A73D1 * value)
	{
		___completion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completion_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___impl_0)); }
	inline X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_name_3), (void*)value);
	}
};


// System.Net.ServicePointScheduler/AsyncManualResetEvent
struct AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.ServicePointScheduler/AsyncManualResetEvent::m_tcs
	TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * ___m_tcs_0;

public:
	inline static int32_t get_offset_of_m_tcs_0() { return static_cast<int32_t>(offsetof(AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0, ___m_tcs_0)); }
	inline TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * get_m_tcs_0() const { return ___m_tcs_0; }
	inline TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 ** get_address_of_m_tcs_0() { return &___m_tcs_0; }
	inline void set_m_tcs_0(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * value)
	{
		___m_tcs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_tcs_0), (void*)value);
	}
};


// System.Net.WebResponseStream/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940  : public RuntimeObject
{
public:
	// System.Net.WebResponseStream System.Net.WebResponseStream/<>c__DisplayClass48_0::<>4__this
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * ___U3CU3E4__this_0;
	// System.Byte[] System.Net.WebResponseStream/<>c__DisplayClass48_0::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_1;
	// System.Int32 System.Net.WebResponseStream/<>c__DisplayClass48_0::offset
	int32_t ___offset_2;
	// System.Int32 System.Net.WebResponseStream/<>c__DisplayClass48_0::size
	int32_t ___size_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940, ___U3CU3E4__this_0)); }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940, ___buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper
struct MyNativeHelper_t9E78ECADEC33A3AFF81DEF8E43A27DDFD5187F6D  : public RuntimeObject
{
public:

public:
};


// System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c
struct U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields
{
public:
	// System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<>9
	U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Boolean> System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<>9__4_0
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID
struct HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D  : public RuntimeObject
{
public:

public:
};

struct HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields
{
public:
	// System.String[] System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID::m_Strings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_Strings_0;

public:
	inline static int32_t get_offset_of_m_Strings_0() { return static_cast<int32_t>(offsetof(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields, ___m_Strings_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_Strings_0() const { return ___m_Strings_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_Strings_0() { return &___m_Strings_0; }
	inline void set_m_Strings_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_Strings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Strings_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ValueTuple`2<System.Int32,System.Int32>>
struct ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E, ___m_task_0)); }
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean>
struct ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task>
struct ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78, ___m_task_0)); }
	inline Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_8;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_9;

public:
	inline static int32_t get_offset_of__all_8() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_8() const { return ____all_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_8() { return &____all_8; }
	inline void set__all_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_8), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_9() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_9() const { return ____allKeys_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_9() { return &____allKeys_9; }
	inline void set__allKeys_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_9), (void*)value);
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};


// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// Mono.Unity.UnityTls/unitytls_key
struct unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_key_tCCB86243887B79F39458152647B04B94699985D2__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_key_ref
struct unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_key_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_tlsctx
struct unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 
{
public:
	// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::read
	unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * ___read_0;
	// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::write
	unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * ___write_1;
	// System.Void* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::data
	void* ___data_2;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___read_0)); }
	inline unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * get_read_0() const { return ___read_0; }
	inline unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}

	inline static int32_t get_offset_of_write_1() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___write_1)); }
	inline unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * get_write_1() const { return ___write_1; }
	inline unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A ** get_address_of_write_1() { return &___write_1; }
	inline void set_write_1(unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * value)
	{
		___write_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___data_2)); }
	inline void* get_data_2() const { return ___data_2; }
	inline void** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(void* value)
	{
		___data_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke
{
	Il2CppMethodPointer ___read_0;
	Il2CppMethodPointer ___write_1;
	void* ___data_2;
};
// Native definition for COM marshalling of Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_com
{
	Il2CppMethodPointer ___read_0;
	Il2CppMethodPointer ___write_1;
	void* ___data_2;
};

// Mono.Unity.UnityTls/unitytls_x509_ref
struct unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509list
struct unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509name
struct unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90, ___m_task_2)); }
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_task_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A, ___m_task_2)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Boolean>
struct ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>
struct ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.Task>
struct ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_com
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com ___m_configuredTaskAwaiter_0;
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

// System.Net.HttpStatusCode
struct HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// System.Net.ServicePoint
struct ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0  : public RuntimeObject
{
public:
	// System.Uri System.Net.ServicePoint::uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri_0;
	// System.DateTime System.Net.ServicePoint::lastDnsResolve
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___lastDnsResolve_1;
	// System.Version System.Net.ServicePoint::protocolVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___protocolVersion_2;
	// System.Net.IPHostEntry System.Net.ServicePoint::host
	IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * ___host_3;
	// System.Boolean System.Net.ServicePoint::usesProxy
	bool ___usesProxy_4;
	// System.Boolean System.Net.ServicePoint::sendContinue
	bool ___sendContinue_5;
	// System.Boolean System.Net.ServicePoint::useConnect
	bool ___useConnect_6;
	// System.Object System.Net.ServicePoint::hostE
	RuntimeObject * ___hostE_7;
	// System.Boolean System.Net.ServicePoint::useNagle
	bool ___useNagle_8;
	// System.Net.BindIPEndPoint System.Net.ServicePoint::endPointCallback
	BindIPEndPoint_t05F17E8ACBB2C324EF8EA367FB2899690F2E0D32 * ___endPointCallback_9;
	// System.Boolean System.Net.ServicePoint::tcp_keepalive
	bool ___tcp_keepalive_10;
	// System.Int32 System.Net.ServicePoint::tcp_keepalive_time
	int32_t ___tcp_keepalive_time_11;
	// System.Int32 System.Net.ServicePoint::tcp_keepalive_interval
	int32_t ___tcp_keepalive_interval_12;
	// System.Net.ServicePointScheduler System.Net.ServicePoint::<Scheduler>k__BackingField
	ServicePointScheduler_t06FFEEFEFBD2B726733E6E27E2529742FA4DB1A7 * ___U3CSchedulerU3Ek__BackingField_13;
	// System.Object System.Net.ServicePoint::m_ServerCertificateOrBytes
	RuntimeObject * ___m_ServerCertificateOrBytes_14;
	// System.Object System.Net.ServicePoint::m_ClientCertificateOrBytes
	RuntimeObject * ___m_ClientCertificateOrBytes_15;

public:
	inline static int32_t get_offset_of_uri_0() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___uri_0)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_uri_0() const { return ___uri_0; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_uri_0() { return &___uri_0; }
	inline void set_uri_0(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___uri_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastDnsResolve_1() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___lastDnsResolve_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_lastDnsResolve_1() const { return ___lastDnsResolve_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_lastDnsResolve_1() { return &___lastDnsResolve_1; }
	inline void set_lastDnsResolve_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___lastDnsResolve_1 = value;
	}

	inline static int32_t get_offset_of_protocolVersion_2() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___protocolVersion_2)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_protocolVersion_2() const { return ___protocolVersion_2; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_protocolVersion_2() { return &___protocolVersion_2; }
	inline void set_protocolVersion_2(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___protocolVersion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocolVersion_2), (void*)value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___host_3)); }
	inline IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * get_host_3() const { return ___host_3; }
	inline IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA ** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___host_3), (void*)value);
	}

	inline static int32_t get_offset_of_usesProxy_4() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___usesProxy_4)); }
	inline bool get_usesProxy_4() const { return ___usesProxy_4; }
	inline bool* get_address_of_usesProxy_4() { return &___usesProxy_4; }
	inline void set_usesProxy_4(bool value)
	{
		___usesProxy_4 = value;
	}

	inline static int32_t get_offset_of_sendContinue_5() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___sendContinue_5)); }
	inline bool get_sendContinue_5() const { return ___sendContinue_5; }
	inline bool* get_address_of_sendContinue_5() { return &___sendContinue_5; }
	inline void set_sendContinue_5(bool value)
	{
		___sendContinue_5 = value;
	}

	inline static int32_t get_offset_of_useConnect_6() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___useConnect_6)); }
	inline bool get_useConnect_6() const { return ___useConnect_6; }
	inline bool* get_address_of_useConnect_6() { return &___useConnect_6; }
	inline void set_useConnect_6(bool value)
	{
		___useConnect_6 = value;
	}

	inline static int32_t get_offset_of_hostE_7() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___hostE_7)); }
	inline RuntimeObject * get_hostE_7() const { return ___hostE_7; }
	inline RuntimeObject ** get_address_of_hostE_7() { return &___hostE_7; }
	inline void set_hostE_7(RuntimeObject * value)
	{
		___hostE_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostE_7), (void*)value);
	}

	inline static int32_t get_offset_of_useNagle_8() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___useNagle_8)); }
	inline bool get_useNagle_8() const { return ___useNagle_8; }
	inline bool* get_address_of_useNagle_8() { return &___useNagle_8; }
	inline void set_useNagle_8(bool value)
	{
		___useNagle_8 = value;
	}

	inline static int32_t get_offset_of_endPointCallback_9() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___endPointCallback_9)); }
	inline BindIPEndPoint_t05F17E8ACBB2C324EF8EA367FB2899690F2E0D32 * get_endPointCallback_9() const { return ___endPointCallback_9; }
	inline BindIPEndPoint_t05F17E8ACBB2C324EF8EA367FB2899690F2E0D32 ** get_address_of_endPointCallback_9() { return &___endPointCallback_9; }
	inline void set_endPointCallback_9(BindIPEndPoint_t05F17E8ACBB2C324EF8EA367FB2899690F2E0D32 * value)
	{
		___endPointCallback_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endPointCallback_9), (void*)value);
	}

	inline static int32_t get_offset_of_tcp_keepalive_10() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___tcp_keepalive_10)); }
	inline bool get_tcp_keepalive_10() const { return ___tcp_keepalive_10; }
	inline bool* get_address_of_tcp_keepalive_10() { return &___tcp_keepalive_10; }
	inline void set_tcp_keepalive_10(bool value)
	{
		___tcp_keepalive_10 = value;
	}

	inline static int32_t get_offset_of_tcp_keepalive_time_11() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___tcp_keepalive_time_11)); }
	inline int32_t get_tcp_keepalive_time_11() const { return ___tcp_keepalive_time_11; }
	inline int32_t* get_address_of_tcp_keepalive_time_11() { return &___tcp_keepalive_time_11; }
	inline void set_tcp_keepalive_time_11(int32_t value)
	{
		___tcp_keepalive_time_11 = value;
	}

	inline static int32_t get_offset_of_tcp_keepalive_interval_12() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___tcp_keepalive_interval_12)); }
	inline int32_t get_tcp_keepalive_interval_12() const { return ___tcp_keepalive_interval_12; }
	inline int32_t* get_address_of_tcp_keepalive_interval_12() { return &___tcp_keepalive_interval_12; }
	inline void set_tcp_keepalive_interval_12(int32_t value)
	{
		___tcp_keepalive_interval_12 = value;
	}

	inline static int32_t get_offset_of_U3CSchedulerU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___U3CSchedulerU3Ek__BackingField_13)); }
	inline ServicePointScheduler_t06FFEEFEFBD2B726733E6E27E2529742FA4DB1A7 * get_U3CSchedulerU3Ek__BackingField_13() const { return ___U3CSchedulerU3Ek__BackingField_13; }
	inline ServicePointScheduler_t06FFEEFEFBD2B726733E6E27E2529742FA4DB1A7 ** get_address_of_U3CSchedulerU3Ek__BackingField_13() { return &___U3CSchedulerU3Ek__BackingField_13; }
	inline void set_U3CSchedulerU3Ek__BackingField_13(ServicePointScheduler_t06FFEEFEFBD2B726733E6E27E2529742FA4DB1A7 * value)
	{
		___U3CSchedulerU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSchedulerU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServerCertificateOrBytes_14() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___m_ServerCertificateOrBytes_14)); }
	inline RuntimeObject * get_m_ServerCertificateOrBytes_14() const { return ___m_ServerCertificateOrBytes_14; }
	inline RuntimeObject ** get_address_of_m_ServerCertificateOrBytes_14() { return &___m_ServerCertificateOrBytes_14; }
	inline void set_m_ServerCertificateOrBytes_14(RuntimeObject * value)
	{
		___m_ServerCertificateOrBytes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerCertificateOrBytes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClientCertificateOrBytes_15() { return static_cast<int32_t>(offsetof(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0, ___m_ClientCertificateOrBytes_15)); }
	inline RuntimeObject * get_m_ClientCertificateOrBytes_15() const { return ___m_ClientCertificateOrBytes_15; }
	inline RuntimeObject ** get_address_of_m_ClientCertificateOrBytes_15() { return &___m_ClientCertificateOrBytes_15; }
	inline void set_m_ClientCertificateOrBytes_15(RuntimeObject * value)
	{
		___m_ClientCertificateOrBytes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientCertificateOrBytes_15), (void*)value);
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Net.WebConnectionStream
struct WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Boolean System.Net.WebConnectionStream::closed
	bool ___closed_4;
	// System.Boolean System.Net.WebConnectionStream::disposed
	bool ___disposed_5;
	// System.Object System.Net.WebConnectionStream::locker
	RuntimeObject * ___locker_6;
	// System.Int32 System.Net.WebConnectionStream::read_timeout
	int32_t ___read_timeout_7;
	// System.Int32 System.Net.WebConnectionStream::write_timeout
	int32_t ___write_timeout_8;
	// System.Boolean System.Net.WebConnectionStream::IgnoreIOErrors
	bool ___IgnoreIOErrors_9;
	// System.Net.HttpWebRequest System.Net.WebConnectionStream::<Request>k__BackingField
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___U3CRequestU3Ek__BackingField_10;
	// System.Net.WebConnection System.Net.WebConnectionStream::<Connection>k__BackingField
	WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * ___U3CConnectionU3Ek__BackingField_11;
	// System.Net.WebOperation System.Net.WebConnectionStream::<Operation>k__BackingField
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___U3COperationU3Ek__BackingField_12;
	// System.IO.Stream System.Net.WebConnectionStream::<InnerStream>k__BackingField
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___U3CInnerStreamU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_closed_4() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___closed_4)); }
	inline bool get_closed_4() const { return ___closed_4; }
	inline bool* get_address_of_closed_4() { return &___closed_4; }
	inline void set_closed_4(bool value)
	{
		___closed_4 = value;
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}

	inline static int32_t get_offset_of_locker_6() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___locker_6)); }
	inline RuntimeObject * get_locker_6() const { return ___locker_6; }
	inline RuntimeObject ** get_address_of_locker_6() { return &___locker_6; }
	inline void set_locker_6(RuntimeObject * value)
	{
		___locker_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_6), (void*)value);
	}

	inline static int32_t get_offset_of_read_timeout_7() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___read_timeout_7)); }
	inline int32_t get_read_timeout_7() const { return ___read_timeout_7; }
	inline int32_t* get_address_of_read_timeout_7() { return &___read_timeout_7; }
	inline void set_read_timeout_7(int32_t value)
	{
		___read_timeout_7 = value;
	}

	inline static int32_t get_offset_of_write_timeout_8() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___write_timeout_8)); }
	inline int32_t get_write_timeout_8() const { return ___write_timeout_8; }
	inline int32_t* get_address_of_write_timeout_8() { return &___write_timeout_8; }
	inline void set_write_timeout_8(int32_t value)
	{
		___write_timeout_8 = value;
	}

	inline static int32_t get_offset_of_IgnoreIOErrors_9() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___IgnoreIOErrors_9)); }
	inline bool get_IgnoreIOErrors_9() const { return ___IgnoreIOErrors_9; }
	inline bool* get_address_of_IgnoreIOErrors_9() { return &___IgnoreIOErrors_9; }
	inline void set_IgnoreIOErrors_9(bool value)
	{
		___IgnoreIOErrors_9 = value;
	}

	inline static int32_t get_offset_of_U3CRequestU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CRequestU3Ek__BackingField_10)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get_U3CRequestU3Ek__BackingField_10() const { return ___U3CRequestU3Ek__BackingField_10; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of_U3CRequestU3Ek__BackingField_10() { return &___U3CRequestU3Ek__BackingField_10; }
	inline void set_U3CRequestU3Ek__BackingField_10(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		___U3CRequestU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CConnectionU3Ek__BackingField_11)); }
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * get_U3CConnectionU3Ek__BackingField_11() const { return ___U3CConnectionU3Ek__BackingField_11; }
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 ** get_address_of_U3CConnectionU3Ek__BackingField_11() { return &___U3CConnectionU3Ek__BackingField_11; }
	inline void set_U3CConnectionU3Ek__BackingField_11(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * value)
	{
		___U3CConnectionU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectionU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3COperationU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3COperationU3Ek__BackingField_12)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_U3COperationU3Ek__BackingField_12() const { return ___U3COperationU3Ek__BackingField_12; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_U3COperationU3Ek__BackingField_12() { return &___U3COperationU3Ek__BackingField_12; }
	inline void set_U3COperationU3Ek__BackingField_12(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___U3COperationU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COperationU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInnerStreamU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CInnerStreamU3Ek__BackingField_13)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_U3CInnerStreamU3Ek__BackingField_13() const { return ___U3CInnerStreamU3Ek__BackingField_13; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_U3CInnerStreamU3Ek__BackingField_13() { return &___U3CInnerStreamU3Ek__BackingField_13; }
	inline void set_U3CInnerStreamU3Ek__BackingField_13(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___U3CInnerStreamU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInnerStreamU3Ek__BackingField_13), (void*)value);
	}
};


// System.Net.WebExceptionInternalStatus
struct WebExceptionInternalStatus_t5A2FD55F96B6C62DE1354CCB0A4B3787597D2F57 
{
public:
	// System.Int32 System.Net.WebExceptionInternalStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebExceptionInternalStatus_t5A2FD55F96B6C62DE1354CCB0A4B3787597D2F57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebExceptionStatus
struct WebExceptionStatus_tF76E8FAA116C43DDF96AF8C8CE2D75C3587F31D9 
{
public:
	// System.Int32 System.Net.WebExceptionStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebExceptionStatus_tF76E8FAA116C43DDF96AF8C8CE2D75C3587F31D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebHeaderCollectionType
struct WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736 
{
public:
	// System.UInt16 System.Net.WebHeaderCollectionType::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebOperation
struct WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00  : public RuntimeObject
{
public:
	// System.Net.HttpWebRequest System.Net.WebOperation::<Request>k__BackingField
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___U3CRequestU3Ek__BackingField_0;
	// System.Net.WebConnection System.Net.WebOperation::<Connection>k__BackingField
	WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * ___U3CConnectionU3Ek__BackingField_1;
	// System.Net.ServicePoint System.Net.WebOperation::<ServicePoint>k__BackingField
	ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * ___U3CServicePointU3Ek__BackingField_2;
	// System.Net.BufferOffsetSize System.Net.WebOperation::<WriteBuffer>k__BackingField
	BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * ___U3CWriteBufferU3Ek__BackingField_3;
	// System.Boolean System.Net.WebOperation::<IsNtlmChallenge>k__BackingField
	bool ___U3CIsNtlmChallengeU3Ek__BackingField_4;
	// System.Threading.CancellationTokenSource System.Net.WebOperation::cts
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___cts_5;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Net.WebRequestStream> System.Net.WebOperation::requestTask
	TaskCompletionSource_1_tAF27606417C7EB40F6CABFF758970F72CCCB83D5 * ___requestTask_6;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Net.WebRequestStream> System.Net.WebOperation::requestWrittenTask
	TaskCompletionSource_1_tAF27606417C7EB40F6CABFF758970F72CCCB83D5 * ___requestWrittenTask_7;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Net.WebResponseStream> System.Net.WebOperation::responseTask
	TaskCompletionSource_1_t326763FDCC1EDF46DBC85450D97C3918281217E5 * ___responseTask_8;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> System.Net.WebOperation::completeResponseReadTask
	TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * ___completeResponseReadTask_9;
	// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>> System.Net.WebOperation::finishedTask
	TaskCompletionSource_1_tA4F2D12802A86238A6B0FC63EABD6B8063A89649 * ___finishedTask_10;
	// System.Net.WebRequestStream System.Net.WebOperation::writeStream
	WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * ___writeStream_11;
	// System.Net.WebResponseStream System.Net.WebOperation::responseStream
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * ___responseStream_12;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Net.WebOperation::disposedInfo
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ___disposedInfo_13;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Net.WebOperation::closedInfo
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ___closedInfo_14;
	// System.Net.WebOperation System.Net.WebOperation::priorityRequest
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___priorityRequest_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebOperation::finishedReading
	bool ___finishedReading_16;
	// System.Int32 System.Net.WebOperation::requestSent
	int32_t ___requestSent_17;

public:
	inline static int32_t get_offset_of_U3CRequestU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___U3CRequestU3Ek__BackingField_0)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get_U3CRequestU3Ek__BackingField_0() const { return ___U3CRequestU3Ek__BackingField_0; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of_U3CRequestU3Ek__BackingField_0() { return &___U3CRequestU3Ek__BackingField_0; }
	inline void set_U3CRequestU3Ek__BackingField_0(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		___U3CRequestU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___U3CConnectionU3Ek__BackingField_1)); }
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * get_U3CConnectionU3Ek__BackingField_1() const { return ___U3CConnectionU3Ek__BackingField_1; }
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 ** get_address_of_U3CConnectionU3Ek__BackingField_1() { return &___U3CConnectionU3Ek__BackingField_1; }
	inline void set_U3CConnectionU3Ek__BackingField_1(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * value)
	{
		___U3CConnectionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServicePointU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___U3CServicePointU3Ek__BackingField_2)); }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * get_U3CServicePointU3Ek__BackingField_2() const { return ___U3CServicePointU3Ek__BackingField_2; }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 ** get_address_of_U3CServicePointU3Ek__BackingField_2() { return &___U3CServicePointU3Ek__BackingField_2; }
	inline void set_U3CServicePointU3Ek__BackingField_2(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * value)
	{
		___U3CServicePointU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServicePointU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWriteBufferU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___U3CWriteBufferU3Ek__BackingField_3)); }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * get_U3CWriteBufferU3Ek__BackingField_3() const { return ___U3CWriteBufferU3Ek__BackingField_3; }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F ** get_address_of_U3CWriteBufferU3Ek__BackingField_3() { return &___U3CWriteBufferU3Ek__BackingField_3; }
	inline void set_U3CWriteBufferU3Ek__BackingField_3(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * value)
	{
		___U3CWriteBufferU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWriteBufferU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsNtlmChallengeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___U3CIsNtlmChallengeU3Ek__BackingField_4)); }
	inline bool get_U3CIsNtlmChallengeU3Ek__BackingField_4() const { return ___U3CIsNtlmChallengeU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsNtlmChallengeU3Ek__BackingField_4() { return &___U3CIsNtlmChallengeU3Ek__BackingField_4; }
	inline void set_U3CIsNtlmChallengeU3Ek__BackingField_4(bool value)
	{
		___U3CIsNtlmChallengeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_cts_5() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___cts_5)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_cts_5() const { return ___cts_5; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_cts_5() { return &___cts_5; }
	inline void set_cts_5(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___cts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cts_5), (void*)value);
	}

	inline static int32_t get_offset_of_requestTask_6() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___requestTask_6)); }
	inline TaskCompletionSource_1_tAF27606417C7EB40F6CABFF758970F72CCCB83D5 * get_requestTask_6() const { return ___requestTask_6; }
	inline TaskCompletionSource_1_tAF27606417C7EB40F6CABFF758970F72CCCB83D5 ** get_address_of_requestTask_6() { return &___requestTask_6; }
	inline void set_requestTask_6(TaskCompletionSource_1_tAF27606417C7EB40F6CABFF758970F72CCCB83D5 * value)
	{
		___requestTask_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestTask_6), (void*)value);
	}

	inline static int32_t get_offset_of_requestWrittenTask_7() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___requestWrittenTask_7)); }
	inline TaskCompletionSource_1_tAF27606417C7EB40F6CABFF758970F72CCCB83D5 * get_requestWrittenTask_7() const { return ___requestWrittenTask_7; }
	inline TaskCompletionSource_1_tAF27606417C7EB40F6CABFF758970F72CCCB83D5 ** get_address_of_requestWrittenTask_7() { return &___requestWrittenTask_7; }
	inline void set_requestWrittenTask_7(TaskCompletionSource_1_tAF27606417C7EB40F6CABFF758970F72CCCB83D5 * value)
	{
		___requestWrittenTask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestWrittenTask_7), (void*)value);
	}

	inline static int32_t get_offset_of_responseTask_8() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___responseTask_8)); }
	inline TaskCompletionSource_1_t326763FDCC1EDF46DBC85450D97C3918281217E5 * get_responseTask_8() const { return ___responseTask_8; }
	inline TaskCompletionSource_1_t326763FDCC1EDF46DBC85450D97C3918281217E5 ** get_address_of_responseTask_8() { return &___responseTask_8; }
	inline void set_responseTask_8(TaskCompletionSource_1_t326763FDCC1EDF46DBC85450D97C3918281217E5 * value)
	{
		___responseTask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseTask_8), (void*)value);
	}

	inline static int32_t get_offset_of_completeResponseReadTask_9() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___completeResponseReadTask_9)); }
	inline TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * get_completeResponseReadTask_9() const { return ___completeResponseReadTask_9; }
	inline TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 ** get_address_of_completeResponseReadTask_9() { return &___completeResponseReadTask_9; }
	inline void set_completeResponseReadTask_9(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * value)
	{
		___completeResponseReadTask_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completeResponseReadTask_9), (void*)value);
	}

	inline static int32_t get_offset_of_finishedTask_10() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___finishedTask_10)); }
	inline TaskCompletionSource_1_tA4F2D12802A86238A6B0FC63EABD6B8063A89649 * get_finishedTask_10() const { return ___finishedTask_10; }
	inline TaskCompletionSource_1_tA4F2D12802A86238A6B0FC63EABD6B8063A89649 ** get_address_of_finishedTask_10() { return &___finishedTask_10; }
	inline void set_finishedTask_10(TaskCompletionSource_1_tA4F2D12802A86238A6B0FC63EABD6B8063A89649 * value)
	{
		___finishedTask_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___finishedTask_10), (void*)value);
	}

	inline static int32_t get_offset_of_writeStream_11() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___writeStream_11)); }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * get_writeStream_11() const { return ___writeStream_11; }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 ** get_address_of_writeStream_11() { return &___writeStream_11; }
	inline void set_writeStream_11(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * value)
	{
		___writeStream_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeStream_11), (void*)value);
	}

	inline static int32_t get_offset_of_responseStream_12() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___responseStream_12)); }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * get_responseStream_12() const { return ___responseStream_12; }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F ** get_address_of_responseStream_12() { return &___responseStream_12; }
	inline void set_responseStream_12(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * value)
	{
		___responseStream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseStream_12), (void*)value);
	}

	inline static int32_t get_offset_of_disposedInfo_13() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___disposedInfo_13)); }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * get_disposedInfo_13() const { return ___disposedInfo_13; }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 ** get_address_of_disposedInfo_13() { return &___disposedInfo_13; }
	inline void set_disposedInfo_13(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * value)
	{
		___disposedInfo_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposedInfo_13), (void*)value);
	}

	inline static int32_t get_offset_of_closedInfo_14() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___closedInfo_14)); }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * get_closedInfo_14() const { return ___closedInfo_14; }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 ** get_address_of_closedInfo_14() { return &___closedInfo_14; }
	inline void set_closedInfo_14(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * value)
	{
		___closedInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closedInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of_priorityRequest_15() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___priorityRequest_15)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_priorityRequest_15() const { return ___priorityRequest_15; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_priorityRequest_15() { return &___priorityRequest_15; }
	inline void set_priorityRequest_15(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___priorityRequest_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___priorityRequest_15), (void*)value);
	}

	inline static int32_t get_offset_of_finishedReading_16() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___finishedReading_16)); }
	inline bool get_finishedReading_16() const { return ___finishedReading_16; }
	inline bool* get_address_of_finishedReading_16() { return &___finishedReading_16; }
	inline void set_finishedReading_16(bool value)
	{
		___finishedReading_16 = value;
	}

	inline static int32_t get_offset_of_requestSent_17() { return static_cast<int32_t>(offsetof(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00, ___requestSent_17)); }
	inline int32_t get_requestSent_17() const { return ___requestSent_17; }
	inline int32_t* get_address_of_requestSent_17() { return &___requestSent_17; }
	inline void set_requestSent_17(int32_t value)
	{
		___requestSent_17 = value;
	}
};


// System.Net.MonoChunkStream/State
struct State_t1C501DCF526F904526559900726F9EA9FB708871 
{
public:
	// System.Int32 System.Net.MonoChunkStream/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t1C501DCF526F904526559900726F9EA9FB708871, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_ciphersuite
struct unitytls_ciphersuite_t3D7B347610D6F27E84245DA98B2A3DB13E4CC663 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_ciphersuite::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_ciphersuite_t3D7B347610D6F27E84245DA98B2A3DB13E4CC663, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_error_code
struct unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_error_code::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_protocol
struct unitytls_protocol_t8E18DBA7D28280F405CA3104F9936BE9B543B89A 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_protocol::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_protocol_t8E18DBA7D28280F405CA3104F9936BE9B543B89A, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509verify_result
struct unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_x509verify_result::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.TimerThread/TimerNode/TimerState
struct TimerState_t8BD0BCEC970BC18F9E52AC1DE03D34629F097B22 
{
public:
	// System.Int32 System.Net.TimerThread/TimerNode/TimerState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimerState_t8BD0BCEC970BC18F9E52AC1DE03D34629F097B22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F, ___m_result_22)); }
	inline ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  get_m_result_22() const { return ___m_result_22; }
	inline ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284, ___m_result_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_result_22() const { return ___m_result_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// System.Net.MonoChunkStream
struct MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7  : public RuntimeObject
{
public:
	// System.Net.WebHeaderCollection System.Net.MonoChunkStream::headers
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___headers_0;
	// System.Int32 System.Net.MonoChunkStream::chunkSize
	int32_t ___chunkSize_1;
	// System.Int32 System.Net.MonoChunkStream::chunkRead
	int32_t ___chunkRead_2;
	// System.Int32 System.Net.MonoChunkStream::totalWritten
	int32_t ___totalWritten_3;
	// System.Net.MonoChunkStream/State System.Net.MonoChunkStream::state
	int32_t ___state_4;
	// System.Text.StringBuilder System.Net.MonoChunkStream::saved
	StringBuilder_t * ___saved_5;
	// System.Boolean System.Net.MonoChunkStream::sawCR
	bool ___sawCR_6;
	// System.Boolean System.Net.MonoChunkStream::gotit
	bool ___gotit_7;
	// System.Int32 System.Net.MonoChunkStream::trailerState
	int32_t ___trailerState_8;
	// System.Collections.ArrayList System.Net.MonoChunkStream::chunks
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___chunks_9;

public:
	inline static int32_t get_offset_of_headers_0() { return static_cast<int32_t>(offsetof(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7, ___headers_0)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_headers_0() const { return ___headers_0; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_headers_0() { return &___headers_0; }
	inline void set_headers_0(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___headers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_0), (void*)value);
	}

	inline static int32_t get_offset_of_chunkSize_1() { return static_cast<int32_t>(offsetof(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7, ___chunkSize_1)); }
	inline int32_t get_chunkSize_1() const { return ___chunkSize_1; }
	inline int32_t* get_address_of_chunkSize_1() { return &___chunkSize_1; }
	inline void set_chunkSize_1(int32_t value)
	{
		___chunkSize_1 = value;
	}

	inline static int32_t get_offset_of_chunkRead_2() { return static_cast<int32_t>(offsetof(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7, ___chunkRead_2)); }
	inline int32_t get_chunkRead_2() const { return ___chunkRead_2; }
	inline int32_t* get_address_of_chunkRead_2() { return &___chunkRead_2; }
	inline void set_chunkRead_2(int32_t value)
	{
		___chunkRead_2 = value;
	}

	inline static int32_t get_offset_of_totalWritten_3() { return static_cast<int32_t>(offsetof(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7, ___totalWritten_3)); }
	inline int32_t get_totalWritten_3() const { return ___totalWritten_3; }
	inline int32_t* get_address_of_totalWritten_3() { return &___totalWritten_3; }
	inline void set_totalWritten_3(int32_t value)
	{
		___totalWritten_3 = value;
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_saved_5() { return static_cast<int32_t>(offsetof(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7, ___saved_5)); }
	inline StringBuilder_t * get_saved_5() const { return ___saved_5; }
	inline StringBuilder_t ** get_address_of_saved_5() { return &___saved_5; }
	inline void set_saved_5(StringBuilder_t * value)
	{
		___saved_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saved_5), (void*)value);
	}

	inline static int32_t get_offset_of_sawCR_6() { return static_cast<int32_t>(offsetof(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7, ___sawCR_6)); }
	inline bool get_sawCR_6() const { return ___sawCR_6; }
	inline bool* get_address_of_sawCR_6() { return &___sawCR_6; }
	inline void set_sawCR_6(bool value)
	{
		___sawCR_6 = value;
	}

	inline static int32_t get_offset_of_gotit_7() { return static_cast<int32_t>(offsetof(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7, ___gotit_7)); }
	inline bool get_gotit_7() const { return ___gotit_7; }
	inline bool* get_address_of_gotit_7() { return &___gotit_7; }
	inline void set_gotit_7(bool value)
	{
		___gotit_7 = value;
	}

	inline static int32_t get_offset_of_trailerState_8() { return static_cast<int32_t>(offsetof(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7, ___trailerState_8)); }
	inline int32_t get_trailerState_8() const { return ___trailerState_8; }
	inline int32_t* get_address_of_trailerState_8() { return &___trailerState_8; }
	inline void set_trailerState_8(int32_t value)
	{
		___trailerState_8 = value;
	}

	inline static int32_t get_offset_of_chunks_9() { return static_cast<int32_t>(offsetof(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7, ___chunks_9)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_chunks_9() const { return ___chunks_9; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_chunks_9() { return &___chunks_9; }
	inline void set_chunks_9(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___chunks_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chunks_9), (void*)value);
	}
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4  : public NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D
{
public:
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_CommonHeaders_11;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_12;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * ___m_InnerCollection_15;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_16;

public:
	inline static int32_t get_offset_of_m_CommonHeaders_11() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_CommonHeaders_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_CommonHeaders_11() const { return ___m_CommonHeaders_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_CommonHeaders_11() { return &___m_CommonHeaders_11; }
	inline void set_m_CommonHeaders_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_CommonHeaders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonHeaders_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumCommonHeaders_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_NumCommonHeaders_12)); }
	inline int32_t get_m_NumCommonHeaders_12() const { return ___m_NumCommonHeaders_12; }
	inline int32_t* get_address_of_m_NumCommonHeaders_12() { return &___m_NumCommonHeaders_12; }
	inline void set_m_NumCommonHeaders_12(int32_t value)
	{
		___m_NumCommonHeaders_12 = value;
	}

	inline static int32_t get_offset_of_m_InnerCollection_15() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_InnerCollection_15)); }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * get_m_InnerCollection_15() const { return ___m_InnerCollection_15; }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D ** get_address_of_m_InnerCollection_15() { return &___m_InnerCollection_15; }
	inline void set_m_InnerCollection_15(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * value)
	{
		___m_InnerCollection_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InnerCollection_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_16() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_Type_16)); }
	inline uint16_t get_m_Type_16() const { return ___m_Type_16; }
	inline uint16_t* get_address_of_m_Type_16() { return &___m_Type_16; }
	inline void set_m_Type_16(uint16_t value)
	{
		___m_Type_16 = value;
	}
};

struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields
{
public:
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * ___HInfo_10;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_CommonHeaderNames_13;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___s_CommonHeaderHints_14;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HttpTrimCharacters_17;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* ___RfcCharMap_18;

public:
	inline static int32_t get_offset_of_HInfo_10() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HInfo_10)); }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * get_HInfo_10() const { return ___HInfo_10; }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 ** get_address_of_HInfo_10() { return &___HInfo_10; }
	inline void set_HInfo_10(HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * value)
	{
		___HInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderNames_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderNames_13)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_CommonHeaderNames_13() const { return ___s_CommonHeaderNames_13; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_CommonHeaderNames_13() { return &___s_CommonHeaderNames_13; }
	inline void set_s_CommonHeaderNames_13(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_CommonHeaderNames_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderNames_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderHints_14() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderHints_14)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_s_CommonHeaderHints_14() const { return ___s_CommonHeaderHints_14; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_s_CommonHeaderHints_14() { return &___s_CommonHeaderHints_14; }
	inline void set_s_CommonHeaderHints_14(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___s_CommonHeaderHints_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderHints_14), (void*)value);
	}

	inline static int32_t get_offset_of_HttpTrimCharacters_17() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HttpTrimCharacters_17)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HttpTrimCharacters_17() const { return ___HttpTrimCharacters_17; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HttpTrimCharacters_17() { return &___HttpTrimCharacters_17; }
	inline void set_HttpTrimCharacters_17(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HttpTrimCharacters_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpTrimCharacters_17), (void*)value);
	}

	inline static int32_t get_offset_of_RfcCharMap_18() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___RfcCharMap_18)); }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* get_RfcCharMap_18() const { return ___RfcCharMap_18; }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3** get_address_of_RfcCharMap_18() { return &___RfcCharMap_18; }
	inline void set_RfcCharMap_18(RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* value)
	{
		___RfcCharMap_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RfcCharMap_18), (void*)value);
	}
};


// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887  : public WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918
{
public:
	// System.IO.MemoryStream System.Net.WebRequestStream::writeBuffer
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___writeBuffer_15;
	// System.Boolean System.Net.WebRequestStream::requestWritten
	bool ___requestWritten_16;
	// System.Boolean System.Net.WebRequestStream::allowBuffering
	bool ___allowBuffering_17;
	// System.Boolean System.Net.WebRequestStream::sendChunked
	bool ___sendChunked_18;
	// System.Net.WebCompletionSource System.Net.WebRequestStream::pendingWrite
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___pendingWrite_19;
	// System.Int64 System.Net.WebRequestStream::totalWritten
	int64_t ___totalWritten_20;
	// System.Byte[] System.Net.WebRequestStream::headers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___headers_21;
	// System.Boolean System.Net.WebRequestStream::headersSent
	bool ___headersSent_22;
	// System.Int32 System.Net.WebRequestStream::completeRequestWritten
	int32_t ___completeRequestWritten_23;
	// System.Int32 System.Net.WebRequestStream::chunkTrailerWritten
	int32_t ___chunkTrailerWritten_24;
	// System.Boolean System.Net.WebRequestStream::<KeepAlive>k__BackingField
	bool ___U3CKeepAliveU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_writeBuffer_15() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___writeBuffer_15)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get_writeBuffer_15() const { return ___writeBuffer_15; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of_writeBuffer_15() { return &___writeBuffer_15; }
	inline void set_writeBuffer_15(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		___writeBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_requestWritten_16() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___requestWritten_16)); }
	inline bool get_requestWritten_16() const { return ___requestWritten_16; }
	inline bool* get_address_of_requestWritten_16() { return &___requestWritten_16; }
	inline void set_requestWritten_16(bool value)
	{
		___requestWritten_16 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_17() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___allowBuffering_17)); }
	inline bool get_allowBuffering_17() const { return ___allowBuffering_17; }
	inline bool* get_address_of_allowBuffering_17() { return &___allowBuffering_17; }
	inline void set_allowBuffering_17(bool value)
	{
		___allowBuffering_17 = value;
	}

	inline static int32_t get_offset_of_sendChunked_18() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___sendChunked_18)); }
	inline bool get_sendChunked_18() const { return ___sendChunked_18; }
	inline bool* get_address_of_sendChunked_18() { return &___sendChunked_18; }
	inline void set_sendChunked_18(bool value)
	{
		___sendChunked_18 = value;
	}

	inline static int32_t get_offset_of_pendingWrite_19() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___pendingWrite_19)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_pendingWrite_19() const { return ___pendingWrite_19; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_pendingWrite_19() { return &___pendingWrite_19; }
	inline void set_pendingWrite_19(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___pendingWrite_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingWrite_19), (void*)value);
	}

	inline static int32_t get_offset_of_totalWritten_20() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___totalWritten_20)); }
	inline int64_t get_totalWritten_20() const { return ___totalWritten_20; }
	inline int64_t* get_address_of_totalWritten_20() { return &___totalWritten_20; }
	inline void set_totalWritten_20(int64_t value)
	{
		___totalWritten_20 = value;
	}

	inline static int32_t get_offset_of_headers_21() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___headers_21)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_headers_21() const { return ___headers_21; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_headers_21() { return &___headers_21; }
	inline void set_headers_21(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___headers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_21), (void*)value);
	}

	inline static int32_t get_offset_of_headersSent_22() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___headersSent_22)); }
	inline bool get_headersSent_22() const { return ___headersSent_22; }
	inline bool* get_address_of_headersSent_22() { return &___headersSent_22; }
	inline void set_headersSent_22(bool value)
	{
		___headersSent_22 = value;
	}

	inline static int32_t get_offset_of_completeRequestWritten_23() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___completeRequestWritten_23)); }
	inline int32_t get_completeRequestWritten_23() const { return ___completeRequestWritten_23; }
	inline int32_t* get_address_of_completeRequestWritten_23() { return &___completeRequestWritten_23; }
	inline void set_completeRequestWritten_23(int32_t value)
	{
		___completeRequestWritten_23 = value;
	}

	inline static int32_t get_offset_of_chunkTrailerWritten_24() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___chunkTrailerWritten_24)); }
	inline int32_t get_chunkTrailerWritten_24() const { return ___chunkTrailerWritten_24; }
	inline int32_t* get_address_of_chunkTrailerWritten_24() { return &___chunkTrailerWritten_24; }
	inline void set_chunkTrailerWritten_24(int32_t value)
	{
		___chunkTrailerWritten_24 = value;
	}

	inline static int32_t get_offset_of_U3CKeepAliveU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___U3CKeepAliveU3Ek__BackingField_25)); }
	inline bool get_U3CKeepAliveU3Ek__BackingField_25() const { return ___U3CKeepAliveU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CKeepAliveU3Ek__BackingField_25() { return &___U3CKeepAliveU3Ek__BackingField_25; }
	inline void set_U3CKeepAliveU3Ek__BackingField_25(bool value)
	{
		___U3CKeepAliveU3Ek__BackingField_25 = value;
	}
};

struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_StaticFields
{
public:
	// System.Byte[] System.Net.WebRequestStream::crlf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___crlf_14;

public:
	inline static int32_t get_offset_of_crlf_14() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_StaticFields, ___crlf_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_crlf_14() const { return ___crlf_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_crlf_14() { return &___crlf_14; }
	inline void set_crlf_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___crlf_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crlf_14), (void*)value);
	}
};


// System.Net.WebResponseStream
struct WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F  : public WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918
{
public:
	// System.Net.BufferOffsetSize System.Net.WebResponseStream::readBuffer
	BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * ___readBuffer_14;
	// System.Int64 System.Net.WebResponseStream::contentLength
	int64_t ___contentLength_15;
	// System.Int64 System.Net.WebResponseStream::totalRead
	int64_t ___totalRead_16;
	// System.Boolean System.Net.WebResponseStream::nextReadCalled
	bool ___nextReadCalled_17;
	// System.Int32 System.Net.WebResponseStream::stream_length
	int32_t ___stream_length_18;
	// System.Net.WebCompletionSource System.Net.WebResponseStream::pendingRead
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___pendingRead_19;
	// System.Object System.Net.WebResponseStream::locker
	RuntimeObject * ___locker_20;
	// System.Int32 System.Net.WebResponseStream::nestedRead
	int32_t ___nestedRead_21;
	// System.Boolean System.Net.WebResponseStream::read_eof
	bool ___read_eof_22;
	// System.Net.WebRequestStream System.Net.WebResponseStream::<RequestStream>k__BackingField
	WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * ___U3CRequestStreamU3Ek__BackingField_23;
	// System.Net.WebHeaderCollection System.Net.WebResponseStream::<Headers>k__BackingField
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___U3CHeadersU3Ek__BackingField_24;
	// System.Net.HttpStatusCode System.Net.WebResponseStream::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_25;
	// System.String System.Net.WebResponseStream::<StatusDescription>k__BackingField
	String_t* ___U3CStatusDescriptionU3Ek__BackingField_26;
	// System.Version System.Net.WebResponseStream::<Version>k__BackingField
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___U3CVersionU3Ek__BackingField_27;
	// System.Boolean System.Net.WebResponseStream::<KeepAlive>k__BackingField
	bool ___U3CKeepAliveU3Ek__BackingField_28;
	// System.Boolean System.Net.WebResponseStream::<ChunkedRead>k__BackingField
	bool ___U3CChunkedReadU3Ek__BackingField_29;
	// System.Net.MonoChunkStream System.Net.WebResponseStream::<ChunkStream>k__BackingField
	MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * ___U3CChunkStreamU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_readBuffer_14() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___readBuffer_14)); }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * get_readBuffer_14() const { return ___readBuffer_14; }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F ** get_address_of_readBuffer_14() { return &___readBuffer_14; }
	inline void set_readBuffer_14(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * value)
	{
		___readBuffer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readBuffer_14), (void*)value);
	}

	inline static int32_t get_offset_of_contentLength_15() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___contentLength_15)); }
	inline int64_t get_contentLength_15() const { return ___contentLength_15; }
	inline int64_t* get_address_of_contentLength_15() { return &___contentLength_15; }
	inline void set_contentLength_15(int64_t value)
	{
		___contentLength_15 = value;
	}

	inline static int32_t get_offset_of_totalRead_16() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___totalRead_16)); }
	inline int64_t get_totalRead_16() const { return ___totalRead_16; }
	inline int64_t* get_address_of_totalRead_16() { return &___totalRead_16; }
	inline void set_totalRead_16(int64_t value)
	{
		___totalRead_16 = value;
	}

	inline static int32_t get_offset_of_nextReadCalled_17() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___nextReadCalled_17)); }
	inline bool get_nextReadCalled_17() const { return ___nextReadCalled_17; }
	inline bool* get_address_of_nextReadCalled_17() { return &___nextReadCalled_17; }
	inline void set_nextReadCalled_17(bool value)
	{
		___nextReadCalled_17 = value;
	}

	inline static int32_t get_offset_of_stream_length_18() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___stream_length_18)); }
	inline int32_t get_stream_length_18() const { return ___stream_length_18; }
	inline int32_t* get_address_of_stream_length_18() { return &___stream_length_18; }
	inline void set_stream_length_18(int32_t value)
	{
		___stream_length_18 = value;
	}

	inline static int32_t get_offset_of_pendingRead_19() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___pendingRead_19)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_pendingRead_19() const { return ___pendingRead_19; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_pendingRead_19() { return &___pendingRead_19; }
	inline void set_pendingRead_19(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___pendingRead_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingRead_19), (void*)value);
	}

	inline static int32_t get_offset_of_locker_20() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___locker_20)); }
	inline RuntimeObject * get_locker_20() const { return ___locker_20; }
	inline RuntimeObject ** get_address_of_locker_20() { return &___locker_20; }
	inline void set_locker_20(RuntimeObject * value)
	{
		___locker_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_20), (void*)value);
	}

	inline static int32_t get_offset_of_nestedRead_21() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___nestedRead_21)); }
	inline int32_t get_nestedRead_21() const { return ___nestedRead_21; }
	inline int32_t* get_address_of_nestedRead_21() { return &___nestedRead_21; }
	inline void set_nestedRead_21(int32_t value)
	{
		___nestedRead_21 = value;
	}

	inline static int32_t get_offset_of_read_eof_22() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___read_eof_22)); }
	inline bool get_read_eof_22() const { return ___read_eof_22; }
	inline bool* get_address_of_read_eof_22() { return &___read_eof_22; }
	inline void set_read_eof_22(bool value)
	{
		___read_eof_22 = value;
	}

	inline static int32_t get_offset_of_U3CRequestStreamU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CRequestStreamU3Ek__BackingField_23)); }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * get_U3CRequestStreamU3Ek__BackingField_23() const { return ___U3CRequestStreamU3Ek__BackingField_23; }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 ** get_address_of_U3CRequestStreamU3Ek__BackingField_23() { return &___U3CRequestStreamU3Ek__BackingField_23; }
	inline void set_U3CRequestStreamU3Ek__BackingField_23(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * value)
	{
		___U3CRequestStreamU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestStreamU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CHeadersU3Ek__BackingField_24)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_U3CHeadersU3Ek__BackingField_24() const { return ___U3CHeadersU3Ek__BackingField_24; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_U3CHeadersU3Ek__BackingField_24() { return &___U3CHeadersU3Ek__BackingField_24; }
	inline void set_U3CHeadersU3Ek__BackingField_24(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___U3CHeadersU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CStatusCodeU3Ek__BackingField_25)); }
	inline int32_t get_U3CStatusCodeU3Ek__BackingField_25() const { return ___U3CStatusCodeU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CStatusCodeU3Ek__BackingField_25() { return &___U3CStatusCodeU3Ek__BackingField_25; }
	inline void set_U3CStatusCodeU3Ek__BackingField_25(int32_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CStatusDescriptionU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CStatusDescriptionU3Ek__BackingField_26)); }
	inline String_t* get_U3CStatusDescriptionU3Ek__BackingField_26() const { return ___U3CStatusDescriptionU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CStatusDescriptionU3Ek__BackingField_26() { return &___U3CStatusDescriptionU3Ek__BackingField_26; }
	inline void set_U3CStatusDescriptionU3Ek__BackingField_26(String_t* value)
	{
		___U3CStatusDescriptionU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStatusDescriptionU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CVersionU3Ek__BackingField_27)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_U3CVersionU3Ek__BackingField_27() const { return ___U3CVersionU3Ek__BackingField_27; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_U3CVersionU3Ek__BackingField_27() { return &___U3CVersionU3Ek__BackingField_27; }
	inline void set_U3CVersionU3Ek__BackingField_27(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___U3CVersionU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeepAliveU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CKeepAliveU3Ek__BackingField_28)); }
	inline bool get_U3CKeepAliveU3Ek__BackingField_28() const { return ___U3CKeepAliveU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CKeepAliveU3Ek__BackingField_28() { return &___U3CKeepAliveU3Ek__BackingField_28; }
	inline void set_U3CKeepAliveU3Ek__BackingField_28(bool value)
	{
		___U3CKeepAliveU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CChunkedReadU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CChunkedReadU3Ek__BackingField_29)); }
	inline bool get_U3CChunkedReadU3Ek__BackingField_29() const { return ___U3CChunkedReadU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CChunkedReadU3Ek__BackingField_29() { return &___U3CChunkedReadU3Ek__BackingField_29; }
	inline void set_U3CChunkedReadU3Ek__BackingField_29(bool value)
	{
		___U3CChunkedReadU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CChunkStreamU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CChunkStreamU3Ek__BackingField_30)); }
	inline MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * get_U3CChunkStreamU3Ek__BackingField_30() const { return ___U3CChunkStreamU3Ek__BackingField_30; }
	inline MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 ** get_address_of_U3CChunkStreamU3Ek__BackingField_30() { return &___U3CChunkStreamU3Ek__BackingField_30; }
	inline void set_U3CChunkStreamU3Ek__BackingField_30(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * value)
	{
		___U3CChunkStreamU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChunkStreamU3Ek__BackingField_30), (void*)value);
	}
};


// Mono.Unity.UnityTls/unitytls_errorstate
struct unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_errorstate::magic
	uint32_t ___magic_0;
	// Mono.Unity.UnityTls/unitytls_error_code Mono.Unity.UnityTls/unitytls_errorstate::code
	uint32_t ___code_1;
	// System.UInt64 Mono.Unity.UnityTls/unitytls_errorstate::reserved
	uint64_t ___reserved_2;

public:
	inline static int32_t get_offset_of_magic_0() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___magic_0)); }
	inline uint32_t get_magic_0() const { return ___magic_0; }
	inline uint32_t* get_address_of_magic_0() { return &___magic_0; }
	inline void set_magic_0(uint32_t value)
	{
		___magic_0 = value;
	}

	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___code_1)); }
	inline uint32_t get_code_1() const { return ___code_1; }
	inline uint32_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(uint32_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___reserved_2)); }
	inline uint64_t get_reserved_2() const { return ___reserved_2; }
	inline uint64_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(uint64_t value)
	{
		___reserved_2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange
struct unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 
{
public:
	// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange::min
	uint32_t ___min_0;
	// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange::max
	uint32_t ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68, ___min_0)); }
	inline uint32_t get_min_0() const { return ___min_0; }
	inline uint32_t* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(uint32_t value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68, ___max_1)); }
	inline uint32_t get_max_1() const { return ___max_1; }
	inline uint32_t* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(uint32_t value)
	{
		___max_1 = value;
	}
};


// System.Net.WebResponseStream/<InnerReadAsync>d__50
struct U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 
{
public:
	// System.Int32 System.Net.WebResponseStream/<InnerReadAsync>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> System.Net.WebResponseStream/<InnerReadAsync>d__50::<>t__builder
	AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A  ___U3CU3Et__builder_1;
	// System.Net.WebResponseStream System.Net.WebResponseStream/<InnerReadAsync>d__50::<>4__this
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * ___U3CU3E4__this_2;
	// System.Threading.CancellationToken System.Net.WebResponseStream/<InnerReadAsync>d__50::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Byte[] System.Net.WebResponseStream/<InnerReadAsync>d__50::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_4;
	// System.Int32 System.Net.WebResponseStream/<InnerReadAsync>d__50::offset
	int32_t ___offset_5;
	// System.Int32 System.Net.WebResponseStream/<InnerReadAsync>d__50::size
	int32_t ___size_6;
	// System.Boolean System.Net.WebResponseStream/<InnerReadAsync>d__50::<done>5__1
	bool ___U3CdoneU3E5__1_7;
	// System.Int32 System.Net.WebResponseStream/<InnerReadAsync>d__50::<nbytes>5__2
	int32_t ___U3CnbytesU3E5__2_8;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> System.Net.WebResponseStream/<InnerReadAsync>d__50::<>u__1
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___U3CU3Eu__1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0, ___U3CU3E4__this_2)); }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_buffer_4() { return static_cast<int32_t>(offsetof(U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0, ___buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_4() const { return ___buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_4() { return &___buffer_4; }
	inline void set_buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0, ___offset_5)); }
	inline int32_t get_offset_5() const { return ___offset_5; }
	inline int32_t* get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(int32_t value)
	{
		___offset_5 = value;
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}

	inline static int32_t get_offset_of_U3CdoneU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0, ___U3CdoneU3E5__1_7)); }
	inline bool get_U3CdoneU3E5__1_7() const { return ___U3CdoneU3E5__1_7; }
	inline bool* get_address_of_U3CdoneU3E5__1_7() { return &___U3CdoneU3E5__1_7; }
	inline void set_U3CdoneU3E5__1_7(bool value)
	{
		___U3CdoneU3E5__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CnbytesU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0, ___U3CnbytesU3E5__2_8)); }
	inline int32_t get_U3CnbytesU3E5__2_8() const { return ___U3CnbytesU3E5__2_8; }
	inline int32_t* get_address_of_U3CnbytesU3E5__2_8() { return &___U3CnbytesU3E5__2_8; }
	inline void set_U3CnbytesU3E5__2_8(int32_t value)
	{
		___U3CnbytesU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0, ___U3CU3Eu__1_9)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
	}
};


// System.Net.WebResponseStream/<ProcessRead>d__49
struct U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 
{
public:
	// System.Int32 System.Net.WebResponseStream/<ProcessRead>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.Int32,System.Int32>> System.Net.WebResponseStream/<ProcessRead>d__49::<>t__builder
	AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.Net.WebResponseStream/<ProcessRead>d__49::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Net.WebResponseStream System.Net.WebResponseStream/<ProcessRead>d__49::<>4__this
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * ___U3CU3E4__this_3;
	// System.Int32 System.Net.WebResponseStream/<ProcessRead>d__49::size
	int32_t ___size_4;
	// System.Byte[] System.Net.WebResponseStream/<ProcessRead>d__49::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_5;
	// System.Int32 System.Net.WebResponseStream/<ProcessRead>d__49::offset
	int32_t ___offset_6;
	// System.Int32 System.Net.WebResponseStream/<ProcessRead>d__49::<oldBytes>5__1
	int32_t ___U3ColdBytesU3E5__1_7;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> System.Net.WebResponseStream/<ProcessRead>d__49::<>u__1
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301, ___U3CU3E4__this_3)); }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301, ___size_4)); }
	inline int32_t get_size_4() const { return ___size_4; }
	inline int32_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(int32_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301, ___buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301, ___offset_6)); }
	inline int32_t get_offset_6() const { return ___offset_6; }
	inline int32_t* get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(int32_t value)
	{
		___offset_6 = value;
	}

	inline static int32_t get_offset_of_U3ColdBytesU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301, ___U3ColdBytesU3E5__1_7)); }
	inline int32_t get_U3ColdBytesU3E5__1_7() const { return ___U3ColdBytesU3E5__1_7; }
	inline int32_t* get_address_of_U3ColdBytesU3E5__1_7() { return &___U3ColdBytesU3E5__1_7; }
	inline void set_U3ColdBytesU3E5__1_7(int32_t value)
	{
		___U3ColdBytesU3E5__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301, ___U3CU3Eu__1_8)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}
};


// System.Net.WebResponseStream/<ReadAsync>d__48
struct U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF 
{
public:
	// System.Int32 System.Net.WebResponseStream/<ReadAsync>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> System.Net.WebResponseStream/<ReadAsync>d__48::<>t__builder
	AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A  ___U3CU3Et__builder_1;
	// System.Net.WebResponseStream System.Net.WebResponseStream/<ReadAsync>d__48::<>4__this
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * ___U3CU3E4__this_2;
	// System.Byte[] System.Net.WebResponseStream/<ReadAsync>d__48::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_3;
	// System.Int32 System.Net.WebResponseStream/<ReadAsync>d__48::offset
	int32_t ___offset_4;
	// System.Int32 System.Net.WebResponseStream/<ReadAsync>d__48::size
	int32_t ___size_5;
	// System.Threading.CancellationToken System.Net.WebResponseStream/<ReadAsync>d__48::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_6;
	// System.Net.WebCompletionSource System.Net.WebResponseStream/<ReadAsync>d__48::<completion>5__1
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___U3CcompletionU3E5__1_7;
	// System.Net.WebResponseStream/<>c__DisplayClass48_0 System.Net.WebResponseStream/<ReadAsync>d__48::<>8__2
	U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * ___U3CU3E8__2_8;
	// System.Exception System.Net.WebResponseStream/<ReadAsync>d__48::<throwMe>5__3
	Exception_t * ___U3CthrowMeU3E5__3_9;
	// System.Int32 System.Net.WebResponseStream/<ReadAsync>d__48::<oldBytes>5__4
	int32_t ___U3ColdBytesU3E5__4_10;
	// System.Int32 System.Net.WebResponseStream/<ReadAsync>d__48::<nbytes>5__5
	int32_t ___U3CnbytesU3E5__5_11;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean> System.Net.WebResponseStream/<ReadAsync>d__48::<>u__1
	ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  ___U3CU3Eu__1_12;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ValueTuple`2<System.Int32,System.Int32>> System.Net.WebResponseStream/<ReadAsync>d__48::<>u__2
	ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  ___U3CU3Eu__2_13;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___U3CU3E4__this_2)); }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___buffer_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_size_5() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___size_5)); }
	inline int32_t get_size_5() const { return ___size_5; }
	inline int32_t* get_address_of_size_5() { return &___size_5; }
	inline void set_size_5(int32_t value)
	{
		___size_5 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___cancellationToken_6)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_6))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CcompletionU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___U3CcompletionU3E5__1_7)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_U3CcompletionU3E5__1_7() const { return ___U3CcompletionU3E5__1_7; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_U3CcompletionU3E5__1_7() { return &___U3CcompletionU3E5__1_7; }
	inline void set_U3CcompletionU3E5__1_7(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___U3CcompletionU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcompletionU3E5__1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__2_8() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___U3CU3E8__2_8)); }
	inline U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * get_U3CU3E8__2_8() const { return ___U3CU3E8__2_8; }
	inline U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 ** get_address_of_U3CU3E8__2_8() { return &___U3CU3E8__2_8; }
	inline void set_U3CU3E8__2_8(U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * value)
	{
		___U3CU3E8__2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__2_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CthrowMeU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___U3CthrowMeU3E5__3_9)); }
	inline Exception_t * get_U3CthrowMeU3E5__3_9() const { return ___U3CthrowMeU3E5__3_9; }
	inline Exception_t ** get_address_of_U3CthrowMeU3E5__3_9() { return &___U3CthrowMeU3E5__3_9; }
	inline void set_U3CthrowMeU3E5__3_9(Exception_t * value)
	{
		___U3CthrowMeU3E5__3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthrowMeU3E5__3_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3ColdBytesU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___U3ColdBytesU3E5__4_10)); }
	inline int32_t get_U3ColdBytesU3E5__4_10() const { return ___U3ColdBytesU3E5__4_10; }
	inline int32_t* get_address_of_U3ColdBytesU3E5__4_10() { return &___U3ColdBytesU3E5__4_10; }
	inline void set_U3ColdBytesU3E5__4_10(int32_t value)
	{
		___U3ColdBytesU3E5__4_10 = value;
	}

	inline static int32_t get_offset_of_U3CnbytesU3E5__5_11() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___U3CnbytesU3E5__5_11)); }
	inline int32_t get_U3CnbytesU3E5__5_11() const { return ___U3CnbytesU3E5__5_11; }
	inline int32_t* get_address_of_U3CnbytesU3E5__5_11() { return &___U3CnbytesU3E5__5_11; }
	inline void set_U3CnbytesU3E5__5_11(int32_t value)
	{
		___U3CnbytesU3E5__5_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_12() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___U3CU3Eu__1_12)); }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  get_U3CU3Eu__1_12() const { return ___U3CU3Eu__1_12; }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * get_address_of_U3CU3Eu__1_12() { return &___U3CU3Eu__1_12; }
	inline void set_U3CU3Eu__1_12(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  value)
	{
		___U3CU3Eu__1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_12))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_13() { return static_cast<int32_t>(offsetof(U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF, ___U3CU3Eu__2_13)); }
	inline ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  get_U3CU3Eu__2_13() const { return ___U3CU3Eu__2_13; }
	inline ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E * get_address_of_U3CU3Eu__2_13() { return &___U3CU3Eu__2_13; }
	inline void set_U3CU3Eu__2_13(ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  value)
	{
		___U3CU3Eu__2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_13))->___m_task_0), (void*)NULL);
	}
};


// System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3
struct U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 
{
public:
	// System.Int32 System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// System.Int32 System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::millisecondTimeout
	int32_t ___millisecondTimeout_2;
	// System.Net.ServicePointScheduler/AsyncManualResetEvent System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::<>4__this
	AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * ___U3CU3E4__this_3;
	// System.Threading.Tasks.Task System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::<timeoutTask>5__1
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___U3CtimeoutTaskU3E5__1_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task> System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::<>u__1
	ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_millisecondTimeout_2() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___millisecondTimeout_2)); }
	inline int32_t get_millisecondTimeout_2() const { return ___millisecondTimeout_2; }
	inline int32_t* get_address_of_millisecondTimeout_2() { return &___millisecondTimeout_2; }
	inline void set_millisecondTimeout_2(int32_t value)
	{
		___millisecondTimeout_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___U3CU3E4__this_3)); }
	inline AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeoutTaskU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___U3CtimeoutTaskU3E5__1_4)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_U3CtimeoutTaskU3E5__1_4() const { return ___U3CtimeoutTaskU3E5__1_4; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_U3CtimeoutTaskU3E5__1_4() { return &___U3CtimeoutTaskU3E5__1_4; }
	inline void set_U3CtimeoutTaskU3E5__1_4(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___U3CtimeoutTaskU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtimeoutTaskU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>>
struct Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB, ____cancellationToken_17)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
struct unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
struct unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
struct unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C  : public MulticastDelegate_t
{
public:

public:
};


// System.Net.WebResponseStream/<Initialize>d__56
struct U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 
{
public:
	// System.Int32 System.Net.WebResponseStream/<Initialize>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Net.WebResponseStream/<Initialize>d__56::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Net.WebResponseStream System.Net.WebResponseStream/<Initialize>d__56::<>4__this
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * ___U3CU3E4__this_2;
	// System.Net.BufferOffsetSize System.Net.WebResponseStream/<Initialize>d__56::buffer
	BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * ___buffer_3;
	// System.Threading.CancellationToken System.Net.WebResponseStream/<Initialize>d__56::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// System.String System.Net.WebResponseStream/<Initialize>d__56::<me>5__1
	String_t* ___U3CmeU3E5__1_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Net.WebResponseStream/<Initialize>d__56::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233, ___U3CU3E4__this_2)); }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233, ___buffer_3)); }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * get_buffer_3() const { return ___buffer_3; }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F ** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CmeU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233, ___U3CmeU3E5__1_5)); }
	inline String_t* get_U3CmeU3E5__1_5() const { return ___U3CmeU3E5__1_5; }
	inline String_t** get_address_of_U3CmeU3E5__1_5() { return &___U3CmeU3E5__1_5; }
	inline void set_U3CmeU3E5__1_5(String_t* value)
	{
		___U3CmeU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeU3E5__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// System.Net.WebResponseStream/<ReadAllAsync>d__57
struct U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE 
{
public:
	// System.Int32 System.Net.WebResponseStream/<ReadAllAsync>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Net.WebResponseStream/<ReadAllAsync>d__57::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Net.WebResponseStream System.Net.WebResponseStream/<ReadAllAsync>d__57::<>4__this
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * ___U3CU3E4__this_2;
	// System.Threading.CancellationToken System.Net.WebResponseStream/<ReadAllAsync>d__57::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Net.WebCompletionSource System.Net.WebResponseStream/<ReadAllAsync>d__57::<completion>5__1
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___U3CcompletionU3E5__1_4;
	// System.Threading.Tasks.Task System.Net.WebResponseStream/<ReadAllAsync>d__57::<timeoutTask>5__2
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___U3CtimeoutTaskU3E5__2_5;
	// System.Boolean System.Net.WebResponseStream/<ReadAllAsync>d__57::resending
	bool ___resending_6;
	// System.IO.MemoryStream System.Net.WebResponseStream/<ReadAllAsync>d__57::<ms>5__3
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___U3CmsU3E5__3_7;
	// System.Net.BufferOffsetSize System.Net.WebResponseStream/<ReadAllAsync>d__57::<buffer>5__4
	BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * ___U3CbufferU3E5__4_8;
	// System.Int32 System.Net.WebResponseStream/<ReadAllAsync>d__57::<read>5__5
	int32_t ___U3CreadU3E5__5_9;
	// System.Byte[] System.Net.WebResponseStream/<ReadAllAsync>d__57::<b>5__6
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CbU3E5__6_10;
	// System.Int32 System.Net.WebResponseStream/<ReadAllAsync>d__57::<remaining>5__7
	int32_t ___U3CremainingU3E5__7_11;
	// System.Int32 System.Net.WebResponseStream/<ReadAllAsync>d__57::<readSize>5__8
	int32_t ___U3CreadSizeU3E5__8_12;
	// System.Int32 System.Net.WebResponseStream/<ReadAllAsync>d__57::<new_size>5__9
	int32_t ___U3Cnew_sizeU3E5__9_13;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task> System.Net.WebResponseStream/<ReadAllAsync>d__57::<>u__1
	ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  ___U3CU3Eu__1_14;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> System.Net.WebResponseStream/<ReadAllAsync>d__57::<>u__2
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  ___U3CU3Eu__2_15;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CU3E4__this_2)); }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CcompletionU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CcompletionU3E5__1_4)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_U3CcompletionU3E5__1_4() const { return ___U3CcompletionU3E5__1_4; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_U3CcompletionU3E5__1_4() { return &___U3CcompletionU3E5__1_4; }
	inline void set_U3CcompletionU3E5__1_4(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___U3CcompletionU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcompletionU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeoutTaskU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CtimeoutTaskU3E5__2_5)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_U3CtimeoutTaskU3E5__2_5() const { return ___U3CtimeoutTaskU3E5__2_5; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_U3CtimeoutTaskU3E5__2_5() { return &___U3CtimeoutTaskU3E5__2_5; }
	inline void set_U3CtimeoutTaskU3E5__2_5(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___U3CtimeoutTaskU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtimeoutTaskU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_resending_6() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___resending_6)); }
	inline bool get_resending_6() const { return ___resending_6; }
	inline bool* get_address_of_resending_6() { return &___resending_6; }
	inline void set_resending_6(bool value)
	{
		___resending_6 = value;
	}

	inline static int32_t get_offset_of_U3CmsU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CmsU3E5__3_7)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get_U3CmsU3E5__3_7() const { return ___U3CmsU3E5__3_7; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of_U3CmsU3E5__3_7() { return &___U3CmsU3E5__3_7; }
	inline void set_U3CmsU3E5__3_7(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		___U3CmsU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmsU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbufferU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CbufferU3E5__4_8)); }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * get_U3CbufferU3E5__4_8() const { return ___U3CbufferU3E5__4_8; }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F ** get_address_of_U3CbufferU3E5__4_8() { return &___U3CbufferU3E5__4_8; }
	inline void set_U3CbufferU3E5__4_8(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * value)
	{
		___U3CbufferU3E5__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbufferU3E5__4_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreadU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CreadU3E5__5_9)); }
	inline int32_t get_U3CreadU3E5__5_9() const { return ___U3CreadU3E5__5_9; }
	inline int32_t* get_address_of_U3CreadU3E5__5_9() { return &___U3CreadU3E5__5_9; }
	inline void set_U3CreadU3E5__5_9(int32_t value)
	{
		___U3CreadU3E5__5_9 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E5__6_10() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CbU3E5__6_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CbU3E5__6_10() const { return ___U3CbU3E5__6_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CbU3E5__6_10() { return &___U3CbU3E5__6_10; }
	inline void set_U3CbU3E5__6_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CbU3E5__6_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3E5__6_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremainingU3E5__7_11() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CremainingU3E5__7_11)); }
	inline int32_t get_U3CremainingU3E5__7_11() const { return ___U3CremainingU3E5__7_11; }
	inline int32_t* get_address_of_U3CremainingU3E5__7_11() { return &___U3CremainingU3E5__7_11; }
	inline void set_U3CremainingU3E5__7_11(int32_t value)
	{
		___U3CremainingU3E5__7_11 = value;
	}

	inline static int32_t get_offset_of_U3CreadSizeU3E5__8_12() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CreadSizeU3E5__8_12)); }
	inline int32_t get_U3CreadSizeU3E5__8_12() const { return ___U3CreadSizeU3E5__8_12; }
	inline int32_t* get_address_of_U3CreadSizeU3E5__8_12() { return &___U3CreadSizeU3E5__8_12; }
	inline void set_U3CreadSizeU3E5__8_12(int32_t value)
	{
		___U3CreadSizeU3E5__8_12 = value;
	}

	inline static int32_t get_offset_of_U3Cnew_sizeU3E5__9_13() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3Cnew_sizeU3E5__9_13)); }
	inline int32_t get_U3Cnew_sizeU3E5__9_13() const { return ___U3Cnew_sizeU3E5__9_13; }
	inline int32_t* get_address_of_U3Cnew_sizeU3E5__9_13() { return &___U3Cnew_sizeU3E5__9_13; }
	inline void set_U3Cnew_sizeU3E5__9_13(int32_t value)
	{
		___U3Cnew_sizeU3E5__9_13 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_14() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CU3Eu__1_14)); }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  get_U3CU3Eu__1_14() const { return ___U3CU3Eu__1_14; }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * get_address_of_U3CU3Eu__1_14() { return &___U3CU3Eu__1_14; }
	inline void set_U3CU3Eu__1_14(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  value)
	{
		___U3CU3Eu__1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_15() { return static_cast<int32_t>(offsetof(U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE, ___U3CU3Eu__2_15)); }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  get_U3CU3Eu__2_15() const { return ___U3CU3Eu__2_15; }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * get_address_of_U3CU3Eu__2_15() { return &___U3CU3Eu__2_15; }
	inline void set_U3CU3Eu__2_15(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  value)
	{
		___U3CU3Eu__2_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_15))->___m_task_0), (void*)NULL);
	}
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
struct unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
struct unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
struct unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
struct unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
struct unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
struct unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
struct unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
struct unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
struct unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
struct unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
struct unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
struct unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
struct unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
struct unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
struct unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
struct unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
struct unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
struct unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
struct unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
struct unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
struct unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
struct unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
struct unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
struct unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
struct unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
struct unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
struct unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
struct unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.Net.WebException
struct WebException_t824617203133537D3B05BF786C22AECE0E2DBD08  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.Net.WebExceptionStatus System.Net.WebException::m_Status
	int32_t ___m_Status_17;
	// System.Net.WebResponse System.Net.WebException::m_Response
	WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * ___m_Response_18;
	// System.Net.WebExceptionInternalStatus System.Net.WebException::m_InternalStatus
	int32_t ___m_InternalStatus_19;

public:
	inline static int32_t get_offset_of_m_Status_17() { return static_cast<int32_t>(offsetof(WebException_t824617203133537D3B05BF786C22AECE0E2DBD08, ___m_Status_17)); }
	inline int32_t get_m_Status_17() const { return ___m_Status_17; }
	inline int32_t* get_address_of_m_Status_17() { return &___m_Status_17; }
	inline void set_m_Status_17(int32_t value)
	{
		___m_Status_17 = value;
	}

	inline static int32_t get_offset_of_m_Response_18() { return static_cast<int32_t>(offsetof(WebException_t824617203133537D3B05BF786C22AECE0E2DBD08, ___m_Response_18)); }
	inline WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * get_m_Response_18() const { return ___m_Response_18; }
	inline WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 ** get_address_of_m_Response_18() { return &___m_Response_18; }
	inline void set_m_Response_18(WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * value)
	{
		___m_Response_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Response_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalStatus_19() { return static_cast<int32_t>(offsetof(WebException_t824617203133537D3B05BF786C22AECE0E2DBD08, ___m_InternalStatus_19)); }
	inline int32_t get_m_InternalStatus_19() const { return ___m_InternalStatus_19; }
	inline int32_t* get_address_of_m_InternalStatus_19() { return &___m_InternalStatus_19; }
	inline void set_m_InternalStatus_19(int32_t value)
	{
		___m_InternalStatus_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * m_Items[1];

public:
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_back(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled);

// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.Net.WebResponseStream/<Initialize>d__56>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233_m3E72CAE08FDF5EC5AF1D8AD15766D509470323F3_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 * ___stateMachine1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_gshared (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.Net.WebResponseStream/<InnerReadAsync>d__50>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0_mEFB2C074B5A8CE33DB0B717E32BAFB653A74F85F_gshared (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * ___awaiter0, U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_gshared (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m580CEDB88630842EC930931623D55DCD1798F9C3_gshared (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mCB3888D71D919D6F3C7B7614284540B4DA69B9F2_gshared (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, int32_t ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m372A69DE6DC4741415143865DC93AC0DC819C010_gshared (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_gshared (ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.Int32,System.Int32>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.Net.WebResponseStream/<ProcessRead>d__49>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301_m85B7C24474B01910C07620928758C80E4D7BC9BB_gshared (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * __this, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * ___awaiter0, U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.Int32,System.Int32>>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mE09CB38D97C0FD3078E779C7E407CA3FD5007BD9_gshared (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.Int32,System.Int32>>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m9FD6EED600C4CA2E4A4D88DE26BB7BF08DBCFDDB_gshared (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * __this, ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.Int32,System.Int32>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BF46E17B8E97680CE0AEEBE04DB0CA7E8BE6D8D_gshared (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.Net.WebResponseStream/<ReadAllAsync>d__57>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_m3A30BEEFB15A28457EF5260B9F29E96356BE7F2B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,System.Net.WebResponseStream/<ReadAllAsync>d__57>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_mFDC08E90931D4046F2E6EB0E5ED313192850B844_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Boolean>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D  Task_1_ConfigureAwait_mEEE46CCCCC629B162C32D55D75B3048E93FE674B_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Boolean>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  ConfiguredTaskAwaitable_1_GetAwaiter_m1B62E85A536E6E4E19A92B456C0A9DF6C7DC8608_gshared_inline (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m235A147B81620F741B9F832F8FF827260B05DEAF_gshared (ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean>,System.Net.WebResponseStream/<ReadAsync>d__48>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_m430D5945C7165F8C1E69E490C8F5DA0ED78C093A_gshared (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * ___awaiter0, U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_GetResult_m7D187749416370C6CBBBA5B3688C6562E34C1D34_gshared (ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.CancellationToken,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4FDD6D066F0A0D7F7ABA0E4067D0EC7A295FEF9E_gshared (Func_2_tFB4752E44FC81929027C0874E2CC5BC203FB9299 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<T> System.Net.HttpWebRequest::RunWithTimeout<System.ValueTuple`2<System.Int32,System.Int32>>(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>>,System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * HttpWebRequest_RunWithTimeout_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mB3DF52FA80C8BC06E1DD2360EB85C2FEABE5E43F_gshared (Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B * ___func0, int32_t ___timeout1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___abort2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A  Task_1_ConfigureAwait_m28783226ECE7EBFBBF7FBBEBDD5B4933FEFE24AD_gshared (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.ValueTuple`2<System.Int32,System.Int32>>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  ConfiguredTaskAwaitable_1_GetAwaiter_m3EBA101FA97CBAE74D9AAD26D82A3E545541FAAD_gshared_inline (ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ValueTuple`2<System.Int32,System.Int32>>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m40F69DF89220BA5A35E234EE9740FFEC9BF0CE30_gshared (ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ValueTuple`2<System.Int32,System.Int32>>,System.Net.WebResponseStream/<ReadAsync>d__48>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_mEAECCCC75DD29B38C6BC6643945C194D011E5BED_gshared (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E * ___awaiter0, U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ValueTuple`2<System.Int32,System.Int32>>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  ConfiguredTaskAwaiter_GetResult_m74B83D463AB86ABF1D3D06694190C03A03D04885_gshared (ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_gshared (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, bool ___result0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_mF34F895C49AD6B4361F3C2CAE97614BF4F5CC37F_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.Net.WebHeaderCollection System.Net.WebResponseStream::get_Headers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * WebResponseStream_get_Headers_mA7D647A682410D694CC962C67D38EEA488C4A9A3_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method);
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_get_Item_mCA21B55D4454D35073475B2966BA0F9207D16FED (NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Version System.Net.WebResponseStream::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * WebResponseStream_get_Version_m4BBC5EA52F6A9B3FF1EA288ED90E97F17E593356_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method);
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Equality_mB8525AD6D098EE54D9E0E5C9046F24B5CB197662 (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v10, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v21, const RuntimeMethod* method);
// System.Net.WebRequestStream System.Net.WebResponseStream::get_RequestStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * WebResponseStream_get_RequestStream_mEAC92D301B0FCC7519397FD5B4122E130BFE4413_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method);
// System.Boolean System.Net.WebRequestStream::get_KeepAlive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRequestStream_get_KeepAlive_m768D5DBEF1F75A8A4FD093C67756806817E461BC_inline (WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * __this, const RuntimeMethod* method);
// System.Void System.Net.WebResponseStream::set_KeepAlive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebResponseStream_set_KeepAlive_m99646E88AC62918196EF76051F276DB871168FEF_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, bool ___value0, const RuntimeMethod* method);
// System.Net.ServicePoint System.Net.WebConnectionStream::get_ServicePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * WebConnectionStream_get_ServicePoint_m45B010E6F46DD10EC0085D2A755192F7953AF7FE (WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ServicePoint_get_UsesProxy_mE6CE550E4DFEB85A673160DE35CD67AFA87F35BD_inline (ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Net.WebResponseStream::get_ExpectContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebResponseStream_get_ExpectContent_m38071D64A4DF19D2F486F695FF9ED77EDA8343A8 (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method);
// System.Void System.Net.WebResponseStream::set_ChunkedRead(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebResponseStream_set_ChunkedRead_m0C07657582071F1DB3548C0C573F817E177C12E2_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Net.WebResponseStream::get_ChunkedRead()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebResponseStream_get_ChunkedRead_mA8BA2D5C7ABA1ED2FC2582CC1C0245AFB2B53A1D_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method);
// System.Boolean System.Net.WebResponseStream::IsNtlmAuth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebResponseStream_IsNtlmAuth_mB82855DE15357323D65EF46E80A6F350B4F09FD9 (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Net.WebResponseStream::ReadAllAsync(System.Boolean,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebResponseStream_ReadAllAsync_m9FE18AD758116A3DF8BFF50772D4A22AC0055B1A (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, bool ___resending0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.Net.WebResponseStream/<Initialize>d__56>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233_m3E72CAE08FDF5EC5AF1D8AD15766D509470323F3 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233_m3E72CAE08FDF5EC5AF1D8AD15766D509470323F3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Net.WebException System.Net.WebResponseStream::GetReadException(System.Net.WebExceptionStatus,System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 * WebResponseStream_GetReadException_m80701579A74C568DAA903BDCACC10B429140CE7A (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, int32_t ___status0, Exception_t * ___error1, String_t* ___where2, const RuntimeMethod* method);
// System.Net.MonoChunkStream System.Net.WebResponseStream::get_ChunkStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method);
// System.Void System.Net.MonoChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoChunkStream__ctor_m0983391DA1D85F1C99A7156057AC9B4391C80D5A (MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___headers3, const RuntimeMethod* method);
// System.Void System.Net.WebResponseStream::set_ChunkStream(System.Net.MonoChunkStream)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebResponseStream_set_ChunkStream_m476BC1EF1184C69DA6017EE6768B3E5205A8EDC4_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * ___value0, const RuntimeMethod* method);
// System.Void System.Net.MonoChunkStream::ResetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoChunkStream_ResetBuffer_m1378860F1775891DFFD8783EA7D51D9D1EB757AF (MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * __this, const RuntimeMethod* method);
// System.Void System.Net.MonoChunkStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoChunkStream_Write_m137C8C8D13524480B95A13C03AD732BAA179ACDF (MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, const RuntimeMethod* method);
// System.Net.WebOperation System.Net.WebConnectionStream::get_Operation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * WebConnectionStream_get_Operation_mD926B0BCCEBE04C640DE920C22736C109E95FF27_inline (WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918 * __this, const RuntimeMethod* method);
// System.Void System.Net.WebOperation::CompleteResponseRead(System.Boolean,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebOperation_CompleteResponseRead_m2B7B659DD2152E9743269047312830E3A3A99CE3 (WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * __this, bool ___ok0, Exception_t * ___error1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Net.WebResponseStream/<Initialize>d__56::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667 (U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Net.WebResponseStream/<Initialize>d__56::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__56_SetStateMachine_mD354F897FFD078B3C872B614172812143496A96F (U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Net.WebOperation::ThrowIfDisposed(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebOperation_ThrowIfDisposed_m8D3588C44D204F9F74E2CCCE68154895773012A8 (WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// System.Boolean System.Net.MonoChunkStream::get_DataAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoChunkStream_get_DataAvailable_mA4A5DF49C69DA98965B564B7EF510D8B17E4D6DE (MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.MonoChunkStream::get_WantMore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoChunkStream_get_WantMore_m83CC3A4E18F848C35EF9853D7E2FB49A329B8127 (MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * __this, const RuntimeMethod* method);
// System.IO.Stream System.Net.WebConnectionStream::get_InnerStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WebConnectionStream_get_InnerStream_mBDB28CD345C11AF699A2FC0BB23A8BE5344C2392_inline (WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2 (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  (*) (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999 (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.Net.WebResponseStream/<InnerReadAsync>d__50>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0_mEFB2C074B5A8CE33DB0B717E32BAFB653A74F85F (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * ___awaiter0, U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0_mEFB2C074B5A8CE33DB0B717E32BAFB653A74F85F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
inline int32_t ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681 (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_gshared)(__this, method);
}
// System.Void System.Net.MonoChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoChunkStream_WriteAndReadBack_mE6CB867432CBBB655C866E139C16A7FFBD53E45A (MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t* ___read3, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Int32> System.Net.WebResponseStream::EnsureReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * WebResponseStream_EnsureReadAsync_mABC1178EEDDD6B79EB2A462CE9B54F85BB9275BD (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, const RuntimeMethod* method);
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebException__ctor_m7C17EA99B1FE182295AF99B968D67080AD4E2CCE (WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 * __this, String_t* ___message0, Exception_t * ___innerException1, int32_t ___status2, WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * ___response3, const RuntimeMethod* method);
// System.Int32 System.Net.MonoChunkStream::get_ChunkLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoChunkStream_get_ChunkLeft_m5E5FD7651D4CD801F84B2C5FE6DC0953AA332E45 (MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m580CEDB88630842EC930931623D55DCD1798F9C3 (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m580CEDB88630842EC930931623D55DCD1798F9C3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mCB3888D71D919D6F3C7B7614284540B4DA69B9F2 (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, int32_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *, int32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mCB3888D71D919D6F3C7B7614284540B4DA69B9F2_gshared)(__this, ___result0, method);
}
// System.Void System.Net.WebResponseStream/<InnerReadAsync>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20 (U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m372A69DE6DC4741415143865DC93AC0DC819C010 (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m372A69DE6DC4741415143865DC93AC0DC819C010_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Net.WebResponseStream/<InnerReadAsync>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerReadAsyncU3Ed__50_SetStateMachine_m7782CBEBA56C7B21E57E24C75B712ADE8B5F5888 (U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18 (ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E *, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Int32> System.Net.WebResponseStream::InnerReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * WebResponseStream_InnerReadAsync_mF9E73DCB18B268A205C95B53C9D416F5E35D4884 (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.Int32,System.Int32>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.Net.WebResponseStream/<ProcessRead>d__49>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301_m85B7C24474B01910C07620928758C80E4D7BC9BB (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * __this, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * ___awaiter0, U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 *, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301_m85B7C24474B01910C07620928758C80E4D7BC9BB_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.Int32,System.Int32>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE09CB38D97C0FD3078E779C7E407CA3FD5007BD9 (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mE09CB38D97C0FD3078E779C7E407CA3FD5007BD9_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.Int32,System.Int32>>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m9FD6EED600C4CA2E4A4D88DE26BB7BF08DBCFDDB (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * __this, ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 *, ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E , const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m9FD6EED600C4CA2E4A4D88DE26BB7BF08DBCFDDB_gshared)(__this, ___result0, method);
}
// System.Void System.Net.WebResponseStream/<ProcessRead>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessReadU3Ed__49_MoveNext_mB72FF90C92F35FF051CB9E9EC8F64C38321C976B (U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.Int32,System.Int32>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3BF46E17B8E97680CE0AEEBE04DB0CA7E8BE6D8D (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BF46E17B8E97680CE0AEEBE04DB0CA7E8BE6D8D_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Net.WebResponseStream/<ProcessRead>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessReadU3Ed__49_SetStateMachine_mD3CC965225487D75406604D438790F01E548C658 (U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E (int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// System.Void System.Net.WebCompletionSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCompletionSource__ctor_m2A71326ABA55C07D5EA8267C2746590294275593 (WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Boolean> System.Net.WebCompletionSource::WaitForCompletion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * WebCompletionSource_WaitForCompletion_mE44E2AFE7DF56A09C9D208E2A9168E76A946A04F (WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * __this, bool ___throwOnError0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Threading.Tasks.Task[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * Task_WhenAny_m59C7F18DABA670EACF71A2E2917C861ADB9D0341 (TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* ___tasks0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF  Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B (Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF  (*) (Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.Task>::GetAwaiter()
inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_inline (ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  (*) (ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4 (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task>,System.Net.WebResponseStream/<ReadAllAsync>d__57>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_m24482642409847A218481EEAA05FE49C44E65AB4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * ___awaiter0, U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *, U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_m3A30BEEFB15A28457EF5260B9F29E96356BE7F2B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task>::GetResult()
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27 (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * __this, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared)(__this, method);
}
// System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebException__ctor_m4D8BF7D61087F7AA4018215A6DCF7578AEA4DB08 (WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 * __this, String_t* ___message0, int32_t ___status1, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// System.Void System.Net.BufferOffsetSize::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferOffsetSize__ctor_m57DD63EDCC7C4DD3350B00DF86B3F69C8850D996 (BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, bool ___copyBuffer1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3 (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,System.Net.WebResponseStream/<ReadAllAsync>d__57>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_mFDC08E90931D4046F2E6EB0E5ED313192850B844 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_mFDC08E90931D4046F2E6EB0E5ED313192850B844_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared)(__this, method);
}
// System.Void System.Net.BufferOffsetSize::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferOffsetSize__ctor_m34DF650AB658A85943BBEDBB22887D2C3209D9E3 (BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, bool ___copyBuffer3, const RuntimeMethod* method);
// System.Boolean System.Net.WebCompletionSource::TrySetCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_TrySetCompleted_m3309212E1375436FC131FE3A308EF6ADDD7C6D9C (WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * __this, const RuntimeMethod* method);
// System.Boolean System.Net.WebCompletionSource::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_TrySetException_m66055FAA927F564063E03FB9042E9CA12572EF7F (WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * __this, Exception_t * ___error0, const RuntimeMethod* method);
// System.Void System.Net.WebResponseStream/<ReadAllAsync>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077 (U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE * __this, const RuntimeMethod* method);
// System.Void System.Net.WebResponseStream/<ReadAllAsync>d__57::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAllAsyncU3Ed__57_SetStateMachine_mFD1C3562CD2C91EE95511C7737CCFF4140FD30AF (U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Net.WebResponseStream/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m3447721E2745A5C9BE3D784D864C74C452360039 (U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Boolean>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D  Task_1_ConfigureAwait_mEEE46CCCCC629B162C32D55D75B3048E93FE674B (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D  (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_mEEE46CCCCC629B162C32D55D75B3048E93FE674B_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Boolean>::GetAwaiter()
inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  ConfiguredTaskAwaitable_1_GetAwaiter_m1B62E85A536E6E4E19A92B456C0A9DF6C7DC8608_inline (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  (*) (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m1B62E85A536E6E4E19A92B456C0A9DF6C7DC8608_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m235A147B81620F741B9F832F8FF827260B05DEAF (ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m235A147B81620F741B9F832F8FF827260B05DEAF_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean>,System.Net.WebResponseStream/<ReadAsync>d__48>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_m430D5945C7165F8C1E69E490C8F5DA0ED78C093A (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * ___awaiter0, U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *, ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C *, U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_m430D5945C7165F8C1E69E490C8F5DA0ED78C093A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean>::GetResult()
inline bool ConfiguredTaskAwaiter_GetResult_m7D187749416370C6CBBBA5B3688C6562E34C1D34 (ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m7D187749416370C6CBBBA5B3688C6562E34C1D34_gshared)(__this, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA00B92A4DF19FAF8E179965B169EC8FEEB5D072D (Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4FDD6D066F0A0D7F7ABA0E4067D0EC7A295FEF9E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<T> System.Net.HttpWebRequest::RunWithTimeout<System.ValueTuple`2<System.Int32,System.Int32>>(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>>,System.Int32,System.Action)
inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * HttpWebRequest_RunWithTimeout_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mB3DF52FA80C8BC06E1DD2360EB85C2FEABE5E43F (Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B * ___func0, int32_t ___timeout1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___abort2, const RuntimeMethod* method)
{
	return ((  Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * (*) (Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B *, int32_t, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))HttpWebRequest_RunWithTimeout_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mB3DF52FA80C8BC06E1DD2360EB85C2FEABE5E43F_gshared)(___func0, ___timeout1, ___abort2, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A  Task_1_ConfigureAwait_m28783226ECE7EBFBBF7FBBEBDD5B4933FEFE24AD (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A  (*) (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m28783226ECE7EBFBBF7FBBEBDD5B4933FEFE24AD_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.ValueTuple`2<System.Int32,System.Int32>>::GetAwaiter()
inline ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  ConfiguredTaskAwaitable_1_GetAwaiter_m3EBA101FA97CBAE74D9AAD26D82A3E545541FAAD_inline (ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  (*) (ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m3EBA101FA97CBAE74D9AAD26D82A3E545541FAAD_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ValueTuple`2<System.Int32,System.Int32>>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m40F69DF89220BA5A35E234EE9740FFEC9BF0CE30 (ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m40F69DF89220BA5A35E234EE9740FFEC9BF0CE30_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ValueTuple`2<System.Int32,System.Int32>>,System.Net.WebResponseStream/<ReadAsync>d__48>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_mEAECCCC75DD29B38C6BC6643945C194D011E5BED (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * __this, ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E * ___awaiter0, U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *, ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E *, U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_mEAECCCC75DD29B38C6BC6643945C194D011E5BED_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ValueTuple`2<System.Int32,System.Int32>>::GetResult()
inline ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  ConfiguredTaskAwaiter_GetResult_m74B83D463AB86ABF1D3D06694190C03A03D04885 (ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E * __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  (*) (ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m74B83D463AB86ABF1D3D06694190C03A03D04885_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Net.WebResponseStream/<ReadAsync>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06 (U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF * __this, const RuntimeMethod* method);
// System.Void System.Net.WebResponseStream/<ReadAsync>d__48::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__48_SetStateMachine_m58B2F63A13E7EFC239A32B6AB9A60D491513B4DE (U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907 (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(!0)
inline bool TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251 (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, bool ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, bool, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_gshared)(__this, ___result0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task>,System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_m5A2482D3FF3CA89DAFC9824284A2DC3863CB9A69 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * ___awaiter0, U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *, U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_mF34F895C49AD6B4361F3C2CAE97614BF4F5CC37F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared)(__this, ___result0, method);
}
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991 (U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D (U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.WebResponseStream/<Initialize>d__56::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667 (U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233_m3E72CAE08FDF5EC5AF1D8AD15766D509470323F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpVersion_t15E4A5DA9E037A055F4630E01EB12A988915448E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7145DB000FB7A15A3BC887316484C05C47DF929F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C5B5A80C04C3A4ACA2BEED3EDD587DD1F5398C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1AFC5175681A5803F9B41B41F5AF69045524DBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0ACB78DD0CBEFD7DD81D25C5219DDB4067ECBD2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * V_10 = NULL;
	Exception_t * V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	int32_t G_B5_0 = 0;
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * G_B14_0 = NULL;
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * G_B13_0 = NULL;
	String_t* G_B15_0 = NULL;
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * G_B15_1 = NULL;
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * G_B24_0 = NULL;
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * G_B23_0 = NULL;
	int32_t G_B25_0 = 0;
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * G_B25_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0183;
			}
		}

IL_0014:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_3 = V_1;
			NullCheck(L_3);
			WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_4;
			L_4 = WebResponseStream_get_Headers_mA7D647A682410D694CC962C67D38EEA488C4A9A3_inline(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			String_t* L_5;
			L_5 = NameValueCollection_get_Item_mCA21B55D4454D35073475B2966BA0F9207D16FED(L_4, _stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD, /*hidden argument*/NULL);
			V_2 = L_5;
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_003c;
			}
		}

IL_0028:
		{
			String_t* L_7 = V_2;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_7, _stringLiteral7145DB000FB7A15A3BC887316484C05C47DF929F, 5, /*hidden argument*/NULL);
			G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_003d;
		}

IL_003c:
		{
			G_B5_0 = 0;
		}

IL_003d:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_9 = V_1;
			NullCheck(L_9);
			WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_10;
			L_10 = WebResponseStream_get_Headers_mA7D647A682410D694CC962C67D38EEA488C4A9A3_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			String_t* L_11;
			L_11 = NameValueCollection_get_Item_mCA21B55D4454D35073475B2966BA0F9207D16FED(L_10, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2, /*hidden argument*/NULL);
			V_3 = L_11;
			if (G_B5_0)
			{
				goto IL_0077;
			}
		}

IL_0050:
		{
			String_t* L_12 = V_3;
			bool L_13;
			L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0077;
			}
		}

IL_0058:
		{
			String_t* L_14 = V_3;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_15 = V_1;
			NullCheck(L_15);
			int64_t* L_16 = L_15->get_address_of_contentLength_15();
			bool L_17;
			L_17 = Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_14, (int64_t*)L_16, /*hidden argument*/NULL);
			if (L_17)
			{
				goto IL_0086;
			}
		}

IL_0066:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_18 = V_1;
			NullCheck(L_18);
			L_18->set_contentLength_15(((int64_t)(std::numeric_limits<int64_t>::max)()));
			goto IL_0086;
		}

IL_0077:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_19 = V_1;
			NullCheck(L_19);
			L_19->set_contentLength_15(((int64_t)(std::numeric_limits<int64_t>::max)()));
		}

IL_0086:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_20 = V_1;
			NullCheck(L_20);
			Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_21;
			L_21 = WebResponseStream_get_Version_m4BBC5EA52F6A9B3FF1EA288ED90E97F17E593356_inline(L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(HttpVersion_t15E4A5DA9E037A055F4630E01EB12A988915448E_il2cpp_TypeInfo_var);
			Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_22 = ((HttpVersion_t15E4A5DA9E037A055F4630E01EB12A988915448E_StaticFields*)il2cpp_codegen_static_fields_for(HttpVersion_t15E4A5DA9E037A055F4630E01EB12A988915448E_il2cpp_TypeInfo_var))->get_Version11_1();
			IL2CPP_RUNTIME_CLASS_INIT(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
			bool L_23;
			L_23 = Version_op_Equality_mB8525AD6D098EE54D9E0E5C9046F24B5CB197662(L_21, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_010f;
			}
		}

IL_0098:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_24 = V_1;
			NullCheck(L_24);
			WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * L_25;
			L_25 = WebResponseStream_get_RequestStream_mEAC92D301B0FCC7519397FD5B4122E130BFE4413_inline(L_24, /*hidden argument*/NULL);
			NullCheck(L_25);
			bool L_26;
			L_26 = WebRequestStream_get_KeepAlive_m768D5DBEF1F75A8A4FD093C67756806817E461BC_inline(L_25, /*hidden argument*/NULL);
			if (!L_26)
			{
				goto IL_010f;
			}
		}

IL_00a5:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_27 = V_1;
			NullCheck(L_27);
			WebResponseStream_set_KeepAlive_m99646E88AC62918196EF76051F276DB871168FEF_inline(L_27, (bool)1, /*hidden argument*/NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_28 = V_1;
			NullCheck(L_28);
			WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_29;
			L_29 = WebResponseStream_get_Headers_mA7D647A682410D694CC962C67D38EEA488C4A9A3_inline(L_28, /*hidden argument*/NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_30 = V_1;
			NullCheck(L_30);
			ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * L_31;
			L_31 = WebConnectionStream_get_ServicePoint_m45B010E6F46DD10EC0085D2A755192F7953AF7FE(L_30, /*hidden argument*/NULL);
			NullCheck(L_31);
			bool L_32;
			L_32 = ServicePoint_get_UsesProxy_mE6CE550E4DFEB85A673160DE35CD67AFA87F35BD_inline(L_31, /*hidden argument*/NULL);
			G_B13_0 = L_29;
			if (L_32)
			{
				G_B14_0 = L_29;
				goto IL_00c6;
			}
		}

IL_00bf:
		{
			G_B15_0 = _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC;
			G_B15_1 = G_B13_0;
			goto IL_00cb;
		}

IL_00c6:
		{
			G_B15_0 = _stringLiteralF0ACB78DD0CBEFD7DD81D25C5219DDB4067ECBD2;
			G_B15_1 = G_B14_0;
		}

IL_00cb:
		{
			NullCheck(G_B15_1);
			String_t* L_33;
			L_33 = NameValueCollection_get_Item_mCA21B55D4454D35073475B2966BA0F9207D16FED(G_B15_1, G_B15_0, /*hidden argument*/NULL);
			V_5 = L_33;
			String_t* L_34 = V_5;
			if (!L_34)
			{
				goto IL_010f;
			}
		}

IL_00d6:
		{
			String_t* L_35 = V_5;
			NullCheck(L_35);
			String_t* L_36;
			L_36 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_35, /*hidden argument*/NULL);
			V_5 = L_36;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_37 = V_1;
			String_t* L_38 = V_5;
			NullCheck(L_38);
			int32_t L_39;
			L_39 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_38, _stringLiteral8C5B5A80C04C3A4ACA2BEED3EDD587DD1F5398C6, 4, /*hidden argument*/NULL);
			NullCheck(L_37);
			WebResponseStream_set_KeepAlive_m99646E88AC62918196EF76051F276DB871168FEF_inline(L_37, (bool)((((int32_t)((((int32_t)L_39) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
			String_t* L_40 = V_5;
			NullCheck(L_40);
			int32_t L_41;
			L_41 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_40, _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6, 4, /*hidden argument*/NULL);
			if ((((int32_t)L_41) == ((int32_t)(-1))))
			{
				goto IL_010f;
			}
		}

IL_0108:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_42 = V_1;
			NullCheck(L_42);
			WebResponseStream_set_KeepAlive_m99646E88AC62918196EF76051F276DB871168FEF_inline(L_42, (bool)0, /*hidden argument*/NULL);
		}

IL_010f:
		{
			String_t* L_43 = V_3;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_44 = V_1;
			NullCheck(L_44);
			int32_t* L_45 = L_44->get_address_of_stream_length_18();
			bool L_46;
			L_46 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_43, (int32_t*)L_45, /*hidden argument*/NULL);
			if (L_46)
			{
				goto IL_0124;
			}
		}

IL_011d:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_47 = V_1;
			NullCheck(L_47);
			L_47->set_stream_length_18((-1));
		}

IL_0124:
		{
			__this->set_U3CmeU3E5__1_5(_stringLiteralB1AFC5175681A5803F9B41B41F5AF69045524DBE);
			V_4 = (String_t*)NULL;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_48 = V_1;
			NullCheck(L_48);
			bool L_49;
			L_49 = WebResponseStream_get_ExpectContent_m38071D64A4DF19D2F486F695FF9ED77EDA8343A8(L_48, /*hidden argument*/NULL);
			if (!L_49)
			{
				goto IL_014c;
			}
		}

IL_013a:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_50 = V_1;
			NullCheck(L_50);
			WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_51;
			L_51 = WebResponseStream_get_Headers_mA7D647A682410D694CC962C67D38EEA488C4A9A3_inline(L_50, /*hidden argument*/NULL);
			NullCheck(L_51);
			String_t* L_52;
			L_52 = NameValueCollection_get_Item_mCA21B55D4454D35073475B2966BA0F9207D16FED(L_51, _stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD, /*hidden argument*/NULL);
			V_4 = L_52;
		}

IL_014c:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_53 = V_1;
			String_t* L_54 = V_4;
			G_B23_0 = L_53;
			if (!L_54)
			{
				G_B24_0 = L_53;
				goto IL_0166;
			}
		}

IL_0151:
		{
			String_t* L_55 = V_4;
			NullCheck(L_55);
			int32_t L_56;
			L_56 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_55, _stringLiteral7145DB000FB7A15A3BC887316484C05C47DF929F, 5, /*hidden argument*/NULL);
			G_B25_0 = ((((int32_t)((((int32_t)L_56) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			G_B25_1 = G_B23_0;
			goto IL_0167;
		}

IL_0166:
		{
			G_B25_0 = 0;
			G_B25_1 = G_B24_0;
		}

IL_0167:
		{
			NullCheck(G_B25_1);
			WebResponseStream_set_ChunkedRead_m0C07657582071F1DB3548C0C573F817E177C12E2_inline(G_B25_1, (bool)G_B25_0, /*hidden argument*/NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_57 = V_1;
			NullCheck(L_57);
			bool L_58;
			L_58 = WebResponseStream_get_ChunkedRead_mA8BA2D5C7ABA1ED2FC2582CC1C0245AFB2B53A1D_inline(L_57, /*hidden argument*/NULL);
			if (L_58)
			{
				goto IL_0236;
			}
		}

IL_0177:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_59 = V_1;
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_60 = __this->get_buffer_3();
			NullCheck(L_59);
			L_59->set_readBuffer_14(L_60);
		}

IL_0183:
		{
		}

IL_0184:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_61 = V_0;
				if (!L_61)
				{
					goto IL_01fb;
				}
			}

IL_0187:
			{
				WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_62 = V_1;
				NullCheck(L_62);
				int64_t L_63 = L_62->get_contentLength_15();
				if ((((int64_t)L_63) <= ((int64_t)((int64_t)((int64_t)0)))))
				{
					goto IL_021f;
				}
			}

IL_0194:
			{
				WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_64 = V_1;
				NullCheck(L_64);
				BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_65 = L_64->get_readBuffer_14();
				NullCheck(L_65);
				int32_t L_66 = L_65->get_Size_2();
				WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_67 = V_1;
				NullCheck(L_67);
				int64_t L_68 = L_67->get_contentLength_15();
				if ((((int64_t)((int64_t)((int64_t)L_66))) < ((int64_t)L_68)))
				{
					goto IL_021f;
				}
			}

IL_01a8:
			{
				WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_69 = V_1;
				NullCheck(L_69);
				bool L_70;
				L_70 = WebResponseStream_IsNtlmAuth_mB82855DE15357323D65EF46E80A6F350B4F09FD9(L_69, /*hidden argument*/NULL);
				if (L_70)
				{
					goto IL_021f;
				}
			}

IL_01b0:
			{
				WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_71 = V_1;
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_72 = __this->get_cancellationToken_4();
				NullCheck(L_71);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_73;
				L_73 = WebResponseStream_ReadAllAsync_m9FE18AD758116A3DF8BFF50772D4A22AC0055B1A(L_71, (bool)0, L_72, /*hidden argument*/NULL);
				NullCheck(L_73);
				ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_74;
				L_74 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_73, (bool)0, /*hidden argument*/NULL);
				V_7 = L_74;
				ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_75;
				L_75 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_7), /*hidden argument*/NULL);
				V_6 = L_75;
				bool L_76;
				L_76 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_6), /*hidden argument*/NULL);
				if (L_76)
				{
					goto IL_0218;
				}
			}

IL_01d7:
			{
				int32_t L_77 = 0;
				V_0 = L_77;
				__this->set_U3CU3E1__state_0(L_77);
				ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_78 = V_6;
				__this->set_U3CU3Eu__1_6(L_78);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_79 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233_m3E72CAE08FDF5EC5AF1D8AD15766D509470323F3((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_79, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_6), (U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233_m3E72CAE08FDF5EC5AF1D8AD15766D509470323F3_RuntimeMethod_var);
				goto IL_0350;
			}

IL_01fb:
			{
				ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_80 = __this->get_U3CU3Eu__1_6();
				V_6 = L_80;
				ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_81 = __this->get_address_of_U3CU3Eu__1_6();
				il2cpp_codegen_initobj(L_81, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
				int32_t L_82 = (-1);
				V_0 = L_82;
				__this->set_U3CU3E1__state_0(L_82);
			}

IL_0218:
			{
				ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_6), /*hidden argument*/NULL);
			}

IL_021f:
			{
				goto IL_02dd;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0224;
			}
			throw e;
		}

CATCH_0224:
		{ // begin catch(System.Exception)
			V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_83 = V_1;
			Exception_t * L_84 = V_8;
			String_t* L_85 = __this->get_U3CmeU3E5__1_5();
			NullCheck(L_83);
			WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 * L_86;
			L_86 = WebResponseStream_GetReadException_m80701579A74C568DAA903BDCACC10B429140CE7A(L_83, 3, L_84, L_85, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_86, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667_RuntimeMethod_var)));
		} // end catch (depth: 2)

IL_0236:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_87 = V_1;
			NullCheck(L_87);
			MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_88;
			L_88 = WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230_inline(L_87, /*hidden argument*/NULL);
			if (L_88)
			{
				goto IL_0291;
			}
		}

IL_023e:
		try
		{ // begin try (depth: 2)
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_89 = V_1;
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_90 = __this->get_buffer_3();
			NullCheck(L_90);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_91 = L_90->get_Buffer_0();
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_92 = __this->get_buffer_3();
			NullCheck(L_92);
			int32_t L_93 = L_92->get_Offset_1();
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_94 = __this->get_buffer_3();
			NullCheck(L_94);
			int32_t L_95 = L_94->get_Offset_1();
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_96 = __this->get_buffer_3();
			NullCheck(L_96);
			int32_t L_97 = L_96->get_Size_2();
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_98 = V_1;
			NullCheck(L_98);
			WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_99;
			L_99 = WebResponseStream_get_Headers_mA7D647A682410D694CC962C67D38EEA488C4A9A3_inline(L_98, /*hidden argument*/NULL);
			MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_100 = (MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 *)il2cpp_codegen_object_new(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7_il2cpp_TypeInfo_var);
			MonoChunkStream__ctor_m0983391DA1D85F1C99A7156057AC9B4391C80D5A(L_100, L_91, L_93, ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)L_97)), L_99, /*hidden argument*/NULL);
			NullCheck(L_89);
			WebResponseStream_set_ChunkStream_m476BC1EF1184C69DA6017EE6768B3E5205A8EDC4_inline(L_89, L_100, /*hidden argument*/NULL);
			goto IL_02dd;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_027e;
			}
			throw e;
		}

CATCH_027e:
		{ // begin catch(System.Exception)
			V_9 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_101 = V_1;
			Exception_t * L_102 = V_9;
			String_t* L_103 = __this->get_U3CmeU3E5__1_5();
			NullCheck(L_101);
			WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 * L_104;
			L_104 = WebResponseStream_GetReadException_m80701579A74C568DAA903BDCACC10B429140CE7A(L_101, ((int32_t)11), L_102, L_103, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_104, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667_RuntimeMethod_var)));
		} // end catch (depth: 2)

IL_0291:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_105 = V_1;
			NullCheck(L_105);
			MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_106;
			L_106 = WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230_inline(L_105, /*hidden argument*/NULL);
			NullCheck(L_106);
			MonoChunkStream_ResetBuffer_m1378860F1775891DFFD8783EA7D51D9D1EB757AF(L_106, /*hidden argument*/NULL);
		}

IL_029c:
		try
		{ // begin try (depth: 2)
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_107 = V_1;
			NullCheck(L_107);
			MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_108;
			L_108 = WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230_inline(L_107, /*hidden argument*/NULL);
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_109 = __this->get_buffer_3();
			NullCheck(L_109);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_110 = L_109->get_Buffer_0();
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_111 = __this->get_buffer_3();
			NullCheck(L_111);
			int32_t L_112 = L_111->get_Offset_1();
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_113 = __this->get_buffer_3();
			NullCheck(L_113);
			int32_t L_114 = L_113->get_Size_2();
			NullCheck(L_108);
			MonoChunkStream_Write_m137C8C8D13524480B95A13C03AD732BAA179ACDF(L_108, L_110, L_112, L_114, /*hidden argument*/NULL);
			goto IL_02dd;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02ca;
			}
			throw e;
		}

CATCH_02ca:
		{ // begin catch(System.Exception)
			V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_115 = V_1;
			Exception_t * L_116 = V_10;
			String_t* L_117 = __this->get_U3CmeU3E5__1_5();
			NullCheck(L_115);
			WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 * L_118;
			L_118 = WebResponseStream_GetReadException_m80701579A74C568DAA903BDCACC10B429140CE7A(L_115, ((int32_t)11), L_116, L_117, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_118, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667_RuntimeMethod_var)));
		} // end catch (depth: 2)

IL_02dd:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_119 = V_1;
			NullCheck(L_119);
			bool L_120;
			L_120 = WebResponseStream_get_ExpectContent_m38071D64A4DF19D2F486F695FF9ED77EDA8343A8(L_119, /*hidden argument*/NULL);
			if (L_120)
			{
				goto IL_0322;
			}
		}

IL_02e5:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_121 = V_1;
			NullCheck(L_121);
			bool L_122 = ((WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918 *)L_121)->get_closed_4();
			if (L_122)
			{
				goto IL_0315;
			}
		}

IL_02ed:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_123 = V_1;
			NullCheck(L_123);
			bool L_124 = L_123->get_nextReadCalled_17();
			if (L_124)
			{
				goto IL_0315;
			}
		}

IL_02f5:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_125 = V_1;
			NullCheck(L_125);
			int64_t L_126 = L_125->get_contentLength_15();
			if ((!(((uint64_t)L_126) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_030e;
			}
		}

IL_0306:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_127 = V_1;
			NullCheck(L_127);
			L_127->set_contentLength_15(((int64_t)((int64_t)0)));
		}

IL_030e:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_128 = V_1;
			NullCheck(L_128);
			L_128->set_nextReadCalled_17((bool)1);
		}

IL_0315:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_129 = V_1;
			NullCheck(L_129);
			WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * L_130;
			L_130 = WebConnectionStream_get_Operation_mD926B0BCCEBE04C640DE920C22736C109E95FF27_inline(L_129, /*hidden argument*/NULL);
			NullCheck(L_130);
			WebOperation_CompleteResponseRead_m2B7B659DD2152E9743269047312830E3A3A99CE3(L_130, (bool)1, (Exception_t *)NULL, /*hidden argument*/NULL);
		}

IL_0322:
		{
			goto IL_033d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0324;
		}
		throw e;
	}

CATCH_0324:
	{ // begin catch(System.Exception)
		V_11 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_131 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_132 = V_11;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_131, L_132, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0350;
	} // end catch (depth: 1)

IL_033d:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_133 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_133, /*hidden argument*/NULL);
	}

IL_0350:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 * _thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 *>(__this + _offset);
	U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667(_thisAdjusted, method);
}
// System.Void System.Net.WebResponseStream/<Initialize>d__56::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__56_SetStateMachine_mD354F897FFD078B3C872B614172812143496A96F (U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__56_SetStateMachine_mD354F897FFD078B3C872B614172812143496A96F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 * _thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__56_tAB70B42B330318FB1E97982F21A87A9E85BE6233 *>(__this + _offset);
	U3CInitializeU3Ed__56_SetStateMachine_mD354F897FFD078B3C872B614172812143496A96F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.WebResponseStream/<InnerReadAsync>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20 (U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0_mEFB2C074B5A8CE33DB0B717E32BAFB653A74F85F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mCB3888D71D919D6F3C7B7614284540B4DA69B9F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00c3;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0112;
			}
		}

IL_001b:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_4 = V_1;
			NullCheck(L_4);
			WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * L_5;
			L_5 = WebConnectionStream_get_Operation_mD926B0BCCEBE04C640DE920C22736C109E95FF27_inline(L_4, /*hidden argument*/NULL);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_6 = __this->get_cancellationToken_3();
			NullCheck(L_5);
			WebOperation_ThrowIfDisposed_m8D3588C44D204F9F74E2CCCE68154895773012A8(L_5, L_6, /*hidden argument*/NULL);
			__this->set_U3CnbytesU3E5__2_8(0);
			__this->set_U3CdoneU3E5__1_7((bool)0);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_7 = V_1;
			NullCheck(L_7);
			bool L_8;
			L_8 = WebResponseStream_get_ChunkedRead_mA8BA2D5C7ABA1ED2FC2582CC1C0245AFB2B53A1D_inline(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0062;
			}
		}

IL_0042:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_9 = V_1;
			NullCheck(L_9);
			MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_10;
			L_10 = WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			bool L_11;
			L_11 = MonoChunkStream_get_DataAvailable_mA4A5DF49C69DA98965B564B7EF510D8B17E4D6DE(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0112;
			}
		}

IL_0052:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_12 = V_1;
			NullCheck(L_12);
			MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_13;
			L_13 = WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230_inline(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			bool L_14;
			L_14 = MonoChunkStream_get_WantMore_m83CC3A4E18F848C35EF9853D7E2FB49A329B8127(L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_0112;
			}
		}

IL_0062:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_15 = V_1;
			NullCheck(L_15);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_16;
			L_16 = WebConnectionStream_get_InnerStream_mBDB28CD345C11AF699A2FC0BB23A8BE5344C2392_inline(L_15, /*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_buffer_4();
			int32_t L_18 = __this->get_offset_5();
			int32_t L_19 = __this->get_size_6();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_20 = __this->get_cancellationToken_3();
			NullCheck(L_16);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_21;
			L_21 = VirtFuncInvoker4< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(21 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_16, L_17, L_18, L_19, L_20);
			NullCheck(L_21);
			ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  L_22;
			L_22 = Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2(L_21, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
			V_5 = L_22;
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_23;
			L_23 = ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline((ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
			V_4 = L_23;
			bool L_24;
			L_24 = ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00e0;
			}
		}

IL_009f:
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_26 = V_4;
			__this->set_U3CU3Eu__1_9(L_26);
			AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * L_27 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0_mEFB2C074B5A8CE33DB0B717E32BAFB653A74F85F((AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *)L_27, (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_4), (U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0_mEFB2C074B5A8CE33DB0B717E32BAFB653A74F85F_RuntimeMethod_var);
			goto IL_0274;
		}

IL_00c3:
		{
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_28 = __this->get_U3CU3Eu__1_9();
			V_4 = L_28;
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * L_29 = __this->get_address_of_U3CU3Eu__1_9();
			il2cpp_codegen_initobj(L_29, sizeof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 ));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_00e0:
		{
			int32_t L_31;
			L_31 = ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
			V_3 = L_31;
			int32_t L_32 = V_3;
			__this->set_U3CnbytesU3E5__2_8(L_32);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_33 = V_1;
			NullCheck(L_33);
			bool L_34;
			L_34 = WebResponseStream_get_ChunkedRead_mA8BA2D5C7ABA1ED2FC2582CC1C0245AFB2B53A1D_inline(L_33, /*hidden argument*/NULL);
			if (L_34)
			{
				goto IL_0103;
			}
		}

IL_00f7:
		{
			int32_t L_35 = __this->get_U3CnbytesU3E5__2_8();
			V_2 = L_35;
			goto IL_0260;
		}

IL_0103:
		{
			int32_t L_36 = __this->get_U3CnbytesU3E5__2_8();
			__this->set_U3CdoneU3E5__1_7((bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0));
		}

IL_0112:
		{
		}

IL_0113:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_37 = V_0;
				if ((((int32_t)L_37) == ((int32_t)1)))
				{
					goto IL_01bf;
				}
			}

IL_011a:
			{
				WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_38 = V_1;
				NullCheck(L_38);
				MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_39;
				L_39 = WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230_inline(L_38, /*hidden argument*/NULL);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = __this->get_buffer_4();
				int32_t L_41 = __this->get_offset_5();
				int32_t L_42 = __this->get_size_6();
				int32_t* L_43 = __this->get_address_of_U3CnbytesU3E5__2_8();
				NullCheck(L_39);
				MonoChunkStream_WriteAndReadBack_mE6CB867432CBBB655C866E139C16A7FFBD53E45A(L_39, L_40, L_41, L_42, (int32_t*)L_43, /*hidden argument*/NULL);
				bool L_44 = __this->get_U3CdoneU3E5__1_7();
				if (L_44)
				{
					goto IL_01eb;
				}
			}

IL_0148:
			{
				int32_t L_45 = __this->get_U3CnbytesU3E5__2_8();
				if (L_45)
				{
					goto IL_01eb;
				}
			}

IL_0153:
			{
				WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_46 = V_1;
				NullCheck(L_46);
				MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_47;
				L_47 = WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230_inline(L_46, /*hidden argument*/NULL);
				NullCheck(L_47);
				bool L_48;
				L_48 = MonoChunkStream_get_WantMore_m83CC3A4E18F848C35EF9853D7E2FB49A329B8127(L_47, /*hidden argument*/NULL);
				if (!L_48)
				{
					goto IL_01eb;
				}
			}

IL_0163:
			{
				WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_49 = V_1;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = __this->get_buffer_4();
				int32_t L_51 = __this->get_offset_5();
				int32_t L_52 = __this->get_size_6();
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_53 = __this->get_cancellationToken_3();
				NullCheck(L_49);
				Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_54;
				L_54 = WebResponseStream_EnsureReadAsync_mABC1178EEDDD6B79EB2A462CE9B54F85BB9275BD(L_49, L_50, L_51, L_52, L_53, /*hidden argument*/NULL);
				NullCheck(L_54);
				ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  L_55;
				L_55 = Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2(L_54, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
				V_5 = L_55;
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_56;
				L_56 = ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline((ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
				V_4 = L_56;
				bool L_57;
				L_57 = ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
				if (L_57)
				{
					goto IL_01dc;
				}
			}

IL_019b:
			{
				int32_t L_58 = 1;
				V_0 = L_58;
				__this->set_U3CU3E1__state_0(L_58);
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_59 = V_4;
				__this->set_U3CU3Eu__1_9(L_59);
				AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * L_60 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0_mEFB2C074B5A8CE33DB0B717E32BAFB653A74F85F((AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *)L_60, (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_4), (U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0_mEFB2C074B5A8CE33DB0B717E32BAFB653A74F85F_RuntimeMethod_var);
				goto IL_0274;
			}

IL_01bf:
			{
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_61 = __this->get_U3CU3Eu__1_9();
				V_4 = L_61;
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * L_62 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_62, sizeof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 ));
				int32_t L_63 = (-1);
				V_0 = L_63;
				__this->set_U3CU3E1__state_0(L_63);
			}

IL_01dc:
			{
				int32_t L_64;
				L_64 = ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
				V_3 = L_64;
				int32_t L_65 = V_3;
				__this->set_U3CnbytesU3E5__2_8(L_65);
			}

IL_01eb:
			{
				goto IL_0213;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01ed;
			}
			throw e;
		}

CATCH_01ed:
		{ // begin catch(System.Exception)
			{
				V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				Exception_t * L_66 = V_6;
				if (((WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 *)IsInstClass((RuntimeObject*)L_66, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t824617203133537D3B05BF786C22AECE0E2DBD08_il2cpp_TypeInfo_var)))))
				{
					goto IL_0201;
				}
			}

IL_01f8:
			{
				Exception_t * L_67 = V_6;
				if (!((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)IsInstClass((RuntimeObject*)L_67, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var)))))
				{
					goto IL_0203;
				}
			}

IL_0201:
			{
				IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20_RuntimeMethod_var)));
			}

IL_0203:
			{
				Exception_t * L_68 = V_6;
				WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 * L_69 = (WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t824617203133537D3B05BF786C22AECE0E2DBD08_il2cpp_TypeInfo_var)));
				WebException__ctor_m7C17EA99B1FE182295AF99B968D67080AD4E2CCE(L_69, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD14FF2660F471CFECF0ABEABE1AB4F546D87BDBB)), L_68, ((int32_t)11), (WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 *)NULL, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20_RuntimeMethod_var)));
			}
		} // end catch (depth: 2)

IL_0213:
		{
			bool L_70 = __this->get_U3CdoneU3E5__1_7();
			if (L_70)
			{
				goto IL_0223;
			}
		}

IL_021b:
		{
			int32_t L_71 = __this->get_U3CnbytesU3E5__2_8();
			if (L_71)
			{
				goto IL_023e;
			}
		}

IL_0223:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_72 = V_1;
			NullCheck(L_72);
			MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_73;
			L_73 = WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230_inline(L_72, /*hidden argument*/NULL);
			NullCheck(L_73);
			int32_t L_74;
			L_74 = MonoChunkStream_get_ChunkLeft_m5E5FD7651D4CD801F84B2C5FE6DC0953AA332E45(L_73, /*hidden argument*/NULL);
			if (!L_74)
			{
				goto IL_023e;
			}
		}

IL_0230:
		{
			WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 * L_75 = (WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t824617203133537D3B05BF786C22AECE0E2DBD08_il2cpp_TypeInfo_var)));
			WebException__ctor_m7C17EA99B1FE182295AF99B968D67080AD4E2CCE(L_75, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral075AB3197F91A738C7F3165FDD3E48AE8A1CEE1D)), (Exception_t *)NULL, 3, (WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 *)NULL, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20_RuntimeMethod_var)));
		}

IL_023e:
		{
			int32_t L_76 = __this->get_U3CnbytesU3E5__2_8();
			V_2 = L_76;
			goto IL_0260;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0247;
		}
		throw e;
	}

CATCH_0247:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * L_77 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_78 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m580CEDB88630842EC930931623D55DCD1798F9C3((AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *)L_77, L_78, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m580CEDB88630842EC930931623D55DCD1798F9C3_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0274;
	} // end catch (depth: 1)

IL_0260:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * L_79 = __this->get_address_of_U3CU3Et__builder_1();
		int32_t L_80 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mCB3888D71D919D6F3C7B7614284540B4DA69B9F2((AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *)L_79, L_80, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCB3888D71D919D6F3C7B7614284540B4DA69B9F2_RuntimeMethod_var);
	}

IL_0274:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 * _thisAdjusted = reinterpret_cast<U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 *>(__this + _offset);
	U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20(_thisAdjusted, method);
}
// System.Void System.Net.WebResponseStream/<InnerReadAsync>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerReadAsyncU3Ed__50_SetStateMachine_m7782CBEBA56C7B21E57E24C75B712ADE8B5F5888 (U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m372A69DE6DC4741415143865DC93AC0DC819C010_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m372A69DE6DC4741415143865DC93AC0DC819C010((AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m372A69DE6DC4741415143865DC93AC0DC819C010_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInnerReadAsyncU3Ed__50_SetStateMachine_m7782CBEBA56C7B21E57E24C75B712ADE8B5F5888_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 * _thisAdjusted = reinterpret_cast<U3CInnerReadAsyncU3Ed__50_t505254CFA577608B1CF25EFDA3220159E6579BE0 *>(__this + _offset);
	U3CInnerReadAsyncU3Ed__50_SetStateMachine_m7782CBEBA56C7B21E57E24C75B712ADE8B5F5888(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.WebResponseStream/<ProcessRead>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessReadU3Ed__49_MoveNext_mB72FF90C92F35FF051CB9E9EC8F64C38321C976B (U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301_m85B7C24474B01910C07620928758C80E4D7BC9BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m9FD6EED600C4CA2E4A4D88DE26BB7BF08DBCFDDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * V_1 = NULL;
	ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * G_B6_0 = NULL;
	BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_020b;
			}
		}

IL_0014:
		{
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_3 = __this->get_address_of_cancellationToken_2();
			CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_3, /*hidden argument*/NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_4 = V_1;
			NullCheck(L_4);
			int64_t L_5 = L_4->get_totalRead_16();
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_6 = V_1;
			NullCheck(L_6);
			int64_t L_7 = L_6->get_contentLength_15();
			if ((((int64_t)L_5) < ((int64_t)L_7)))
			{
				goto IL_004d;
			}
		}

IL_002d:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_8 = V_1;
			NullCheck(L_8);
			L_8->set_read_eof_22((bool)1);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_9 = V_1;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_10 = V_1;
			NullCheck(L_10);
			int64_t L_11 = L_10->get_totalRead_16();
			NullCheck(L_9);
			L_9->set_contentLength_15(L_11);
			ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_12;
			memset((&L_12), 0, sizeof(L_12));
			ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18((&L_12), 0, 0, /*hidden argument*/ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
			V_2 = L_12;
			goto IL_0291;
		}

IL_004d:
		{
			__this->set_U3ColdBytesU3E5__1_7(0);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_13 = V_1;
			NullCheck(L_13);
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_14 = L_13->get_readBuffer_14();
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_15 = L_14;
			G_B5_0 = L_15;
			if (L_15)
			{
				G_B6_0 = L_15;
				goto IL_0061;
			}
		}

IL_005d:
		{
			G_B7_0 = 0;
			goto IL_0066;
		}

IL_0061:
		{
			NullCheck(G_B6_0);
			int32_t L_16 = G_B6_0->get_Size_2();
			G_B7_0 = L_16;
		}

IL_0066:
		{
			V_3 = G_B7_0;
			int32_t L_17 = V_3;
			if ((((int32_t)L_17) <= ((int32_t)0)))
			{
				goto IL_014e;
			}
		}

IL_006e:
		{
			int32_t L_18 = V_3;
			int32_t L_19 = __this->get_size_4();
			if ((((int32_t)L_18) > ((int32_t)L_19)))
			{
				goto IL_007a;
			}
		}

IL_0077:
		{
			int32_t L_20 = V_3;
			G_B11_0 = L_20;
			goto IL_0080;
		}

IL_007a:
		{
			int32_t L_21 = __this->get_size_4();
			G_B11_0 = L_21;
		}

IL_0080:
		{
			V_5 = G_B11_0;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_22 = V_1;
			NullCheck(L_22);
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_23 = L_22->get_readBuffer_14();
			NullCheck(L_23);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = L_23->get_Buffer_0();
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_25 = V_1;
			NullCheck(L_25);
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_26 = L_25->get_readBuffer_14();
			NullCheck(L_26);
			int32_t L_27 = L_26->get_Offset_1();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = __this->get_buffer_5();
			int32_t L_29 = __this->get_offset_6();
			int32_t L_30 = V_5;
			Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_24, L_27, (RuntimeArray *)(RuntimeArray *)L_28, L_29, L_30, /*hidden argument*/NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_31 = V_1;
			NullCheck(L_31);
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_32 = L_31->get_readBuffer_14();
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_33 = L_32;
			NullCheck(L_33);
			int32_t L_34 = L_33->get_Offset_1();
			int32_t L_35 = V_5;
			NullCheck(L_33);
			L_33->set_Offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35)));
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_36 = V_1;
			NullCheck(L_36);
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_37 = L_36->get_readBuffer_14();
			BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_38 = L_37;
			NullCheck(L_38);
			int32_t L_39 = L_38->get_Size_2();
			int32_t L_40 = V_5;
			NullCheck(L_38);
			L_38->set_Size_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)));
			int32_t L_41 = __this->get_offset_6();
			int32_t L_42 = V_5;
			__this->set_offset_6(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42)));
			int32_t L_43 = __this->get_size_4();
			int32_t L_44 = V_5;
			__this->set_size_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)L_44)));
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_45 = V_1;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_46 = V_1;
			NullCheck(L_46);
			int64_t L_47 = L_46->get_totalRead_16();
			int32_t L_48 = V_5;
			NullCheck(L_45);
			L_45->set_totalRead_16(((int64_t)il2cpp_codegen_add((int64_t)L_47, (int64_t)((int64_t)((int64_t)L_48)))));
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_49 = V_1;
			NullCheck(L_49);
			int64_t L_50 = L_49->get_totalRead_16();
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_51 = V_1;
			NullCheck(L_51);
			int64_t L_52 = L_51->get_contentLength_15();
			if ((((int64_t)L_50) < ((int64_t)L_52)))
			{
				goto IL_0122;
			}
		}

IL_010f:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_53 = V_1;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_54 = V_1;
			NullCheck(L_54);
			int64_t L_55 = L_54->get_totalRead_16();
			NullCheck(L_53);
			L_53->set_contentLength_15(L_55);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_56 = V_1;
			NullCheck(L_56);
			L_56->set_read_eof_22((bool)1);
		}

IL_0122:
		{
			int32_t L_57 = __this->get_size_4();
			if (!L_57)
			{
				goto IL_0138;
			}
		}

IL_012a:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_58 = V_1;
			NullCheck(L_58);
			int64_t L_59 = L_58->get_totalRead_16();
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_60 = V_1;
			NullCheck(L_60);
			int64_t L_61 = L_60->get_contentLength_15();
			if ((((int64_t)L_59) < ((int64_t)L_61)))
			{
				goto IL_0146;
			}
		}

IL_0138:
		{
			int32_t L_62 = V_5;
			ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_63;
			memset((&L_63), 0, sizeof(L_63));
			ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18((&L_63), 0, L_62, /*hidden argument*/ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
			V_2 = L_63;
			goto IL_0291;
		}

IL_0146:
		{
			int32_t L_64 = V_5;
			__this->set_U3ColdBytesU3E5__1_7(L_64);
		}

IL_014e:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_65 = V_1;
			NullCheck(L_65);
			int64_t L_66 = L_65->get_contentLength_15();
			if ((((int64_t)L_66) == ((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()))))
			{
				goto IL_0189;
			}
		}

IL_015f:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_67 = V_1;
			NullCheck(L_67);
			int64_t L_68 = L_67->get_contentLength_15();
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_69 = V_1;
			NullCheck(L_69);
			int64_t L_70 = L_69->get_totalRead_16();
			int32_t L_71 = __this->get_size_4();
			if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_68, (int64_t)L_70))) >= ((int64_t)((int64_t)((int64_t)L_71)))))
			{
				goto IL_0189;
			}
		}

IL_0175:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_72 = V_1;
			NullCheck(L_72);
			int64_t L_73 = L_72->get_contentLength_15();
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_74 = V_1;
			NullCheck(L_74);
			int64_t L_75 = L_74->get_totalRead_16();
			__this->set_size_4(((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_73, (int64_t)L_75)))));
		}

IL_0189:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_76 = V_1;
			NullCheck(L_76);
			bool L_77 = L_76->get_read_eof_22();
			if (!L_77)
			{
				goto IL_01af;
			}
		}

IL_0191:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_78 = V_1;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_79 = V_1;
			NullCheck(L_79);
			int64_t L_80 = L_79->get_totalRead_16();
			NullCheck(L_78);
			L_78->set_contentLength_15(L_80);
			int32_t L_81 = __this->get_U3ColdBytesU3E5__1_7();
			ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_82;
			memset((&L_82), 0, sizeof(L_82));
			ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18((&L_82), L_81, 0, /*hidden argument*/ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
			V_2 = L_82;
			goto IL_0291;
		}

IL_01af:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_83 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_84 = __this->get_buffer_5();
			int32_t L_85 = __this->get_offset_6();
			int32_t L_86 = __this->get_size_4();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_87 = __this->get_cancellationToken_2();
			NullCheck(L_83);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_88;
			L_88 = WebResponseStream_InnerReadAsync_mF9E73DCB18B268A205C95B53C9D416F5E35D4884(L_83, L_84, L_85, L_86, L_87, /*hidden argument*/NULL);
			NullCheck(L_88);
			ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  L_89;
			L_89 = Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2(L_88, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
			V_7 = L_89;
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_90;
			L_90 = ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline((ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *)(&V_7), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
			V_6 = L_90;
			bool L_91;
			L_91 = ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
			if (L_91)
			{
				goto IL_0228;
			}
		}

IL_01e7:
		{
			int32_t L_92 = 0;
			V_0 = L_92;
			__this->set_U3CU3E1__state_0(L_92);
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_93 = V_6;
			__this->set_U3CU3Eu__1_8(L_93);
			AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * L_94 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301_m85B7C24474B01910C07620928758C80E4D7BC9BB((AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 *)L_94, (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_6), (U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301_m85B7C24474B01910C07620928758C80E4D7BC9BB_RuntimeMethod_var);
			goto IL_02a5;
		}

IL_020b:
		{
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_95 = __this->get_U3CU3Eu__1_8();
			V_6 = L_95;
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * L_96 = __this->get_address_of_U3CU3Eu__1_8();
			il2cpp_codegen_initobj(L_96, sizeof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 ));
			int32_t L_97 = (-1);
			V_0 = L_97;
			__this->set_U3CU3E1__state_0(L_97);
		}

IL_0228:
		{
			int32_t L_98;
			L_98 = ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
			V_4 = L_98;
			int32_t L_99 = V_4;
			if ((((int32_t)L_99) > ((int32_t)0)))
			{
				goto IL_0258;
			}
		}

IL_0236:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_100 = V_1;
			NullCheck(L_100);
			L_100->set_read_eof_22((bool)1);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_101 = V_1;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_102 = V_1;
			NullCheck(L_102);
			int64_t L_103 = L_102->get_totalRead_16();
			NullCheck(L_101);
			L_101->set_contentLength_15(L_103);
			int32_t L_104 = __this->get_U3ColdBytesU3E5__1_7();
			ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_105;
			memset((&L_105), 0, sizeof(L_105));
			ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18((&L_105), L_104, 0, /*hidden argument*/ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
			V_2 = L_105;
			goto IL_0291;
		}

IL_0258:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_106 = V_1;
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_107 = V_1;
			NullCheck(L_107);
			int64_t L_108 = L_107->get_totalRead_16();
			int32_t L_109 = V_4;
			NullCheck(L_106);
			L_106->set_totalRead_16(((int64_t)il2cpp_codegen_add((int64_t)L_108, (int64_t)((int64_t)((int64_t)L_109)))));
			int32_t L_110 = __this->get_U3ColdBytesU3E5__1_7();
			int32_t L_111 = V_4;
			ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_112;
			memset((&L_112), 0, sizeof(L_112));
			ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18((&L_112), L_110, L_111, /*hidden argument*/ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
			V_2 = L_112;
			goto IL_0291;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0278;
		}
		throw e;
	}

CATCH_0278:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * L_113 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_114 = V_8;
		AsyncTaskMethodBuilder_1_SetException_mE09CB38D97C0FD3078E779C7E407CA3FD5007BD9((AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 *)L_113, L_114, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE09CB38D97C0FD3078E779C7E407CA3FD5007BD9_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02a5;
	} // end catch (depth: 1)

IL_0291:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * L_115 = __this->get_address_of_U3CU3Et__builder_1();
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_116 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m9FD6EED600C4CA2E4A4D88DE26BB7BF08DBCFDDB((AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 *)L_115, L_116, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m9FD6EED600C4CA2E4A4D88DE26BB7BF08DBCFDDB_RuntimeMethod_var);
	}

IL_02a5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CProcessReadU3Ed__49_MoveNext_mB72FF90C92F35FF051CB9E9EC8F64C38321C976B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 * _thisAdjusted = reinterpret_cast<U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 *>(__this + _offset);
	U3CProcessReadU3Ed__49_MoveNext_mB72FF90C92F35FF051CB9E9EC8F64C38321C976B(_thisAdjusted, method);
}
// System.Void System.Net.WebResponseStream/<ProcessRead>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessReadU3Ed__49_SetStateMachine_mD3CC965225487D75406604D438790F01E548C658 (U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m3BF46E17B8E97680CE0AEEBE04DB0CA7E8BE6D8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3BF46E17B8E97680CE0AEEBE04DB0CA7E8BE6D8D((AsyncTaskMethodBuilder_1_t8F0C92233B04B496E59605865CD38DC019073C90 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m3BF46E17B8E97680CE0AEEBE04DB0CA7E8BE6D8D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CProcessReadU3Ed__49_SetStateMachine_mD3CC965225487D75406604D438790F01E548C658_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 * _thisAdjusted = reinterpret_cast<U3CProcessReadU3Ed__49_tEF6179BA5C79445A90EA2CFA7543B4B3B1ECA301 *>(__this + _offset);
	U3CProcessReadU3Ed__49_SetStateMachine_mD3CC965225487D75406604D438790F01E548C658(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.WebResponseStream/<ReadAllAsync>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077 (U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_m24482642409847A218481EEAA05FE49C44E65AB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_mFDC08E90931D4046F2E6EB0E5ED313192850B844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * V_1 = NULL;
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * V_2 = NULL;
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * V_3 = NULL;
	ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Exception_t * V_10 = NULL;
	Exception_t * V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 10> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00fa;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1))) > ((uint32_t)1))))
			{
				goto IL_0141;
			}
		}

IL_001d:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = L_4->get_read_eof_22();
			if (L_5)
			{
				goto IL_003b;
			}
		}

IL_0025:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_6 = V_1;
			NullCheck(L_6);
			int64_t L_7 = L_6->get_totalRead_16();
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_8 = V_1;
			NullCheck(L_8);
			int64_t L_9 = L_8->get_contentLength_15();
			if ((((int64_t)L_7) >= ((int64_t)L_9)))
			{
				goto IL_003b;
			}
		}

IL_0033:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = L_10->get_nextReadCalled_17();
			if (!L_11)
			{
				goto IL_005c;
			}
		}

IL_003b:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = L_12->get_nextReadCalled_17();
			if (L_13)
			{
				goto IL_0057;
			}
		}

IL_0043:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_14 = V_1;
			NullCheck(L_14);
			L_14->set_nextReadCalled_17((bool)1);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_15 = V_1;
			NullCheck(L_15);
			WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * L_16;
			L_16 = WebConnectionStream_get_Operation_mD926B0BCCEBE04C640DE920C22736C109E95FF27_inline(L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			WebOperation_CompleteResponseRead_m2B7B659DD2152E9743269047312830E3A3A99CE3(L_16, (bool)1, (Exception_t *)NULL, /*hidden argument*/NULL);
		}

IL_0057:
		{
			goto IL_0554;
		}

IL_005c:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_17 = V_1;
			NullCheck(L_17);
			int32_t L_18;
			L_18 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.IO.Stream::get_ReadTimeout() */, L_17);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_19;
			L_19 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(L_18, /*hidden argument*/NULL);
			__this->set_U3CtimeoutTaskU3E5__2_5(L_19);
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_20 = (WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E *)il2cpp_codegen_object_new(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E_il2cpp_TypeInfo_var);
			WebCompletionSource__ctor_m2A71326ABA55C07D5EA8267C2746590294275593(L_20, /*hidden argument*/NULL);
			__this->set_U3CcompletionU3E5__1_4(L_20);
		}

IL_0078:
		{
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_21 = __this->get_address_of_cancellationToken_3();
			CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_21, /*hidden argument*/NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_22 = V_1;
			NullCheck(L_22);
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** L_23 = L_22->get_address_of_pendingRead_19();
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_24 = __this->get_U3CcompletionU3E5__1_4();
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_25;
			L_25 = InterlockedCompareExchangeImpl<WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E *>((WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E **)L_23, L_24, (WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E *)NULL);
			V_2 = L_25;
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_26 = V_2;
			if (!L_26)
			{
				goto IL_0136;
			}
		}

IL_009c:
		{
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_27 = V_2;
			NullCheck(L_27);
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_28;
			L_28 = WebCompletionSource_WaitForCompletion_mE44E2AFE7DF56A09C9D208E2A9168E76A946A04F(L_27, (bool)1, /*hidden argument*/NULL);
			V_3 = L_28;
			TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_29 = (TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478*)(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478*)SZArrayNew(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var, (uint32_t)2);
			TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_30 = L_29;
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_31 = V_3;
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_31);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_31);
			TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_32 = L_30;
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_33 = __this->get_U3CtimeoutTaskU3E5__2_5();
			NullCheck(L_32);
			ArrayElementTypeCheck (L_32, L_33);
			(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_33);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * L_34;
			L_34 = Task_WhenAny_m59C7F18DABA670EACF71A2E2917C861ADB9D0341(L_32, /*hidden argument*/NULL);
			NullCheck(L_34);
			ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF  L_35;
			L_35 = Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B(L_34, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B_RuntimeMethod_var);
			V_5 = L_35;
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  L_36;
			L_36 = ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_inline((ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_RuntimeMethod_var);
			V_4 = L_36;
			bool L_37;
			L_37 = ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4((ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4_RuntimeMethod_var);
			if (L_37)
			{
				goto IL_0117;
			}
		}

IL_00d6:
		{
			int32_t L_38 = 0;
			V_0 = L_38;
			__this->set_U3CU3E1__state_0(L_38);
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  L_39 = V_4;
			__this->set_U3CU3Eu__1_14(L_39);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_40 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_m24482642409847A218481EEAA05FE49C44E65AB4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_40, (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *)(&V_4), (U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_m24482642409847A218481EEAA05FE49C44E65AB4_RuntimeMethod_var);
			goto IL_0567;
		}

IL_00fa:
		{
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  L_41 = __this->get_U3CU3Eu__1_14();
			V_4 = L_41;
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * L_42 = __this->get_address_of_U3CU3Eu__1_14();
			il2cpp_codegen_initobj(L_42, sizeof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 ));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->set_U3CU3E1__state_0(L_43);
		}

IL_0117:
		{
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_44;
			L_44 = ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27((ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27_RuntimeMethod_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_45 = __this->get_U3CtimeoutTaskU3E5__2_5();
			if ((!(((RuntimeObject*)(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_44) == ((RuntimeObject*)(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_45))))
			{
				goto IL_0078;
			}
		}

IL_0129:
		{
			WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 * L_46 = (WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t824617203133537D3B05BF786C22AECE0E2DBD08_il2cpp_TypeInfo_var)));
			WebException__ctor_m4D8BF7D61087F7AA4018215A6DCF7578AEA4DB08(L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBF2718390EE473280CB1AC9DB1591547C00DF0E)), ((int32_t)14), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077_RuntimeMethod_var)));
		}

IL_0136:
		{
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_47 = __this->get_address_of_cancellationToken_3();
			CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_47, /*hidden argument*/NULL);
		}

IL_0141:
		{
		}

IL_0142:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				{
					int32_t L_48 = V_0;
					if ((((int32_t)L_48) == ((int32_t)1)))
					{
						goto IL_02f1;
					}
				}

IL_0149:
				{
					int32_t L_49 = V_0;
					if ((((int32_t)L_49) == ((int32_t)2)))
					{
						goto IL_047b;
					}
				}

IL_0150:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_50 = V_1;
					NullCheck(L_50);
					int64_t L_51 = L_50->get_totalRead_16();
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_52 = V_1;
					NullCheck(L_52);
					int64_t L_53 = L_52->get_contentLength_15();
					if ((((int64_t)L_51) < ((int64_t)L_53)))
					{
						goto IL_0163;
					}
				}

IL_015e:
				{
					IL2CPP_LEAVE(0x554, FINALLY_0520);
				}

IL_0163:
				{
					__this->set_U3CbU3E5__6_10((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_54 = V_1;
					NullCheck(L_54);
					int64_t L_55 = L_54->get_contentLength_15();
					if ((!(((uint64_t)L_55) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
					{
						goto IL_019d;
					}
				}

IL_017b:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_56 = V_1;
					NullCheck(L_56);
					bool L_57;
					L_57 = WebResponseStream_get_ChunkedRead_mA8BA2D5C7ABA1ED2FC2582CC1C0245AFB2B53A1D_inline(L_56, /*hidden argument*/NULL);
					if (L_57)
					{
						goto IL_019d;
					}
				}

IL_0183:
				{
					bool L_58 = __this->get_resending_6();
					if (!L_58)
					{
						goto IL_0196;
					}
				}

IL_018b:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_59 = V_1;
					NullCheck(L_59);
					VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_59);
					IL2CPP_LEAVE(0x554, FINALLY_0520);
				}

IL_0196:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_60 = V_1;
					NullCheck(L_60);
					WebResponseStream_set_KeepAlive_m99646E88AC62918196EF76051F276DB871168FEF_inline(L_60, (bool)0, /*hidden argument*/NULL);
				}

IL_019d:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_61 = V_1;
					NullCheck(L_61);
					int64_t L_62 = L_61->get_contentLength_15();
					if ((!(((uint64_t)L_62) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
					{
						goto IL_0379;
					}
				}

IL_01b1:
				{
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_63 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
					MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_63, /*hidden argument*/NULL);
					__this->set_U3CmsU3E5__3_7(L_63);
					__this->set_U3CbufferU3E5__4_8((BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F *)NULL);
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_64 = V_1;
					NullCheck(L_64);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_65 = L_64->get_readBuffer_14();
					if (!L_65)
					{
						goto IL_0249;
					}
				}

IL_01cb:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_66 = V_1;
					NullCheck(L_66);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_67 = L_66->get_readBuffer_14();
					NullCheck(L_67);
					int32_t L_68 = L_67->get_Size_2();
					if ((((int32_t)L_68) <= ((int32_t)0)))
					{
						goto IL_0249;
					}
				}

IL_01d9:
				{
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_69 = __this->get_U3CmsU3E5__3_7();
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_70 = V_1;
					NullCheck(L_70);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_71 = L_70->get_readBuffer_14();
					NullCheck(L_71);
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = L_71->get_Buffer_0();
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_73 = V_1;
					NullCheck(L_73);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_74 = L_73->get_readBuffer_14();
					NullCheck(L_74);
					int32_t L_75 = L_74->get_Offset_1();
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_76 = V_1;
					NullCheck(L_76);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_77 = L_76->get_readBuffer_14();
					NullCheck(L_77);
					int32_t L_78 = L_77->get_Size_2();
					NullCheck(L_69);
					VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_69, L_72, L_75, L_78);
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_79 = V_1;
					NullCheck(L_79);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_80 = L_79->get_readBuffer_14();
					NullCheck(L_80);
					L_80->set_Offset_1(0);
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_81 = V_1;
					NullCheck(L_81);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_82 = L_81->get_readBuffer_14();
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_83 = V_1;
					NullCheck(L_83);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_84 = L_83->get_readBuffer_14();
					NullCheck(L_84);
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_85 = L_84->get_Buffer_0();
					NullCheck(L_85);
					NullCheck(L_82);
					L_82->set_Size_2(((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length))));
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_86 = V_1;
					NullCheck(L_86);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_87 = L_86->get_readBuffer_14();
					NullCheck(L_87);
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_88 = L_87->get_Buffer_0();
					NullCheck(L_88);
					if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_88)->max_length)))) < ((int32_t)((int32_t)8192))))
					{
						goto IL_0249;
					}
				}

IL_023d:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_89 = V_1;
					NullCheck(L_89);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_90 = L_89->get_readBuffer_14();
					__this->set_U3CbufferU3E5__4_8(L_90);
				}

IL_0249:
				{
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_91 = __this->get_U3CbufferU3E5__4_8();
					if (L_91)
					{
						goto IL_0290;
					}
				}

IL_0251:
				{
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_92 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_93 = (BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F *)il2cpp_codegen_object_new(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F_il2cpp_TypeInfo_var);
					BufferOffsetSize__ctor_m57DD63EDCC7C4DD3350B00DF86B3F69C8850D996(L_93, L_92, (bool)0, /*hidden argument*/NULL);
					__this->set_U3CbufferU3E5__4_8(L_93);
					goto IL_0290;
				}

IL_0269:
				{
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_94 = __this->get_U3CmsU3E5__3_7();
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_95 = __this->get_U3CbufferU3E5__4_8();
					NullCheck(L_95);
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = L_95->get_Buffer_0();
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_97 = __this->get_U3CbufferU3E5__4_8();
					NullCheck(L_97);
					int32_t L_98 = L_97->get_Offset_1();
					int32_t L_99 = __this->get_U3CreadU3E5__5_9();
					NullCheck(L_94);
					VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_94, L_96, L_98, L_99);
				}

IL_0290:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_100 = V_1;
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_101 = __this->get_U3CbufferU3E5__4_8();
					NullCheck(L_101);
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_102 = L_101->get_Buffer_0();
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_103 = __this->get_U3CbufferU3E5__4_8();
					NullCheck(L_103);
					int32_t L_104 = L_103->get_Offset_1();
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_105 = __this->get_U3CbufferU3E5__4_8();
					NullCheck(L_105);
					int32_t L_106 = L_105->get_Size_2();
					CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_107 = __this->get_cancellationToken_3();
					NullCheck(L_100);
					Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_108;
					L_108 = WebResponseStream_InnerReadAsync_mF9E73DCB18B268A205C95B53C9D416F5E35D4884(L_100, L_102, L_104, L_106, L_107, /*hidden argument*/NULL);
					NullCheck(L_108);
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_109;
					L_109 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_108, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
					V_7 = L_109;
					bool L_110;
					L_110 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
					if (L_110)
					{
						goto IL_030e;
					}
				}

IL_02cd:
				{
					int32_t L_111 = 1;
					V_0 = L_111;
					__this->set_U3CU3E1__state_0(L_111);
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_112 = V_7;
					__this->set_U3CU3Eu__2_15(L_112);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_113 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_mFDC08E90931D4046F2E6EB0E5ED313192850B844((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_113, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_7), (U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_mFDC08E90931D4046F2E6EB0E5ED313192850B844_RuntimeMethod_var);
					IL2CPP_LEAVE(0x567, FINALLY_0520);
				}

IL_02f1:
				{
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_114 = __this->get_U3CU3Eu__2_15();
					V_7 = L_114;
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_115 = __this->get_address_of_U3CU3Eu__2_15();
					il2cpp_codegen_initobj(L_115, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
					int32_t L_116 = (-1);
					V_0 = L_116;
					__this->set_U3CU3E1__state_0(L_116);
				}

IL_030e:
				{
					int32_t L_117;
					L_117 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
					V_6 = L_117;
					int32_t L_118 = V_6;
					int32_t L_119 = L_118;
					V_8 = L_119;
					__this->set_U3CreadU3E5__5_9(L_119);
					int32_t L_120 = V_8;
					if (L_120)
					{
						goto IL_0269;
					}
				}

IL_0329:
				{
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_121 = __this->get_U3CmsU3E5__3_7();
					NullCheck(L_121);
					int64_t L_122;
					L_122 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_121);
					__this->set_U3Cnew_sizeU3E5__9_13(((int32_t)((int32_t)L_122)));
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_123 = V_1;
					int32_t L_124 = __this->get_U3Cnew_sizeU3E5__9_13();
					NullCheck(L_123);
					L_123->set_contentLength_15(((int64_t)((int64_t)L_124)));
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_125 = V_1;
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_126 = __this->get_U3CmsU3E5__3_7();
					NullCheck(L_126);
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_127;
					L_127 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_126);
					int32_t L_128 = __this->get_U3Cnew_sizeU3E5__9_13();
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_129 = (BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F *)il2cpp_codegen_object_new(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F_il2cpp_TypeInfo_var);
					BufferOffsetSize__ctor_m34DF650AB658A85943BBEDBB22887D2C3209D9E3(L_129, L_127, 0, L_128, (bool)0, /*hidden argument*/NULL);
					NullCheck(L_125);
					L_125->set_readBuffer_14(L_129);
					__this->set_U3CmsU3E5__3_7((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)NULL);
					__this->set_U3CbufferU3E5__4_8((BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F *)NULL);
					goto IL_04e8;
				}

IL_0379:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_130 = V_1;
					NullCheck(L_130);
					int64_t L_131 = L_130->get_contentLength_15();
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_132 = V_1;
					NullCheck(L_132);
					int64_t L_133 = L_132->get_totalRead_16();
					__this->set_U3Cnew_sizeU3E5__9_13(((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_131, (int64_t)L_133)))));
					int32_t L_134 = __this->get_U3Cnew_sizeU3E5__9_13();
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_135 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_134);
					__this->set_U3CbU3E5__6_10(L_135);
					__this->set_U3CreadSizeU3E5__8_12(0);
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_136 = V_1;
					NullCheck(L_136);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_137 = L_136->get_readBuffer_14();
					if (!L_137)
					{
						goto IL_040e;
					}
				}

IL_03ad:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_138 = V_1;
					NullCheck(L_138);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_139 = L_138->get_readBuffer_14();
					NullCheck(L_139);
					int32_t L_140 = L_139->get_Size_2();
					if ((((int32_t)L_140) <= ((int32_t)0)))
					{
						goto IL_040e;
					}
				}

IL_03bb:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_141 = V_1;
					NullCheck(L_141);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_142 = L_141->get_readBuffer_14();
					NullCheck(L_142);
					int32_t L_143 = L_142->get_Size_2();
					__this->set_U3CreadSizeU3E5__8_12(L_143);
					int32_t L_144 = __this->get_U3CreadSizeU3E5__8_12();
					int32_t L_145 = __this->get_U3Cnew_sizeU3E5__9_13();
					if ((((int32_t)L_144) <= ((int32_t)L_145)))
					{
						goto IL_03e6;
					}
				}

IL_03da:
				{
					int32_t L_146 = __this->get_U3Cnew_sizeU3E5__9_13();
					__this->set_U3CreadSizeU3E5__8_12(L_146);
				}

IL_03e6:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_147 = V_1;
					NullCheck(L_147);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_148 = L_147->get_readBuffer_14();
					NullCheck(L_148);
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_149 = L_148->get_Buffer_0();
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_150 = V_1;
					NullCheck(L_150);
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_151 = L_150->get_readBuffer_14();
					NullCheck(L_151);
					int32_t L_152 = L_151->get_Offset_1();
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_153 = __this->get_U3CbU3E5__6_10();
					int32_t L_154 = __this->get_U3CreadSizeU3E5__8_12();
					Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_149, L_152, (RuntimeArray *)(RuntimeArray *)L_153, 0, L_154, /*hidden argument*/NULL);
				}

IL_040e:
				{
					int32_t L_155 = __this->get_U3Cnew_sizeU3E5__9_13();
					int32_t L_156 = __this->get_U3CreadSizeU3E5__8_12();
					__this->set_U3CremainingU3E5__7_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)L_156)));
					V_9 = (-1);
					goto IL_04bf;
				}

IL_0429:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_157 = V_1;
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_158 = __this->get_U3CbU3E5__6_10();
					int32_t L_159 = __this->get_U3CreadSizeU3E5__8_12();
					int32_t L_160 = __this->get_U3CremainingU3E5__7_11();
					CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_161 = __this->get_cancellationToken_3();
					NullCheck(L_157);
					Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_162;
					L_162 = WebResponseStream_InnerReadAsync_mF9E73DCB18B268A205C95B53C9D416F5E35D4884(L_157, L_158, L_159, L_160, L_161, /*hidden argument*/NULL);
					NullCheck(L_162);
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_163;
					L_163 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_162, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
					V_7 = L_163;
					bool L_164;
					L_164 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
					if (L_164)
					{
						goto IL_0498;
					}
				}

IL_0457:
				{
					int32_t L_165 = 2;
					V_0 = L_165;
					__this->set_U3CU3E1__state_0(L_165);
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_166 = V_7;
					__this->set_U3CU3Eu__2_15(L_166);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_167 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_mFDC08E90931D4046F2E6EB0E5ED313192850B844((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_167, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_7), (U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE_mFDC08E90931D4046F2E6EB0E5ED313192850B844_RuntimeMethod_var);
					IL2CPP_LEAVE(0x567, FINALLY_0520);
				}

IL_047b:
				{
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_168 = __this->get_U3CU3Eu__2_15();
					V_7 = L_168;
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_169 = __this->get_address_of_U3CU3Eu__2_15();
					il2cpp_codegen_initobj(L_169, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
					int32_t L_170 = (-1);
					V_0 = L_170;
					__this->set_U3CU3E1__state_0(L_170);
				}

IL_0498:
				{
					int32_t L_171;
					L_171 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
					V_9 = L_171;
					int32_t L_172 = __this->get_U3CremainingU3E5__7_11();
					int32_t L_173 = V_9;
					__this->set_U3CremainingU3E5__7_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_172, (int32_t)L_173)));
					int32_t L_174 = __this->get_U3CreadSizeU3E5__8_12();
					int32_t L_175 = V_9;
					__this->set_U3CreadSizeU3E5__8_12(((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)L_175)));
				}

IL_04bf:
				{
					int32_t L_176 = __this->get_U3CremainingU3E5__7_11();
					if ((((int32_t)L_176) <= ((int32_t)0)))
					{
						goto IL_04cf;
					}
				}

IL_04c8:
				{
					int32_t L_177 = V_9;
					if (L_177)
					{
						goto IL_0429;
					}
				}

IL_04cf:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_178 = V_1;
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_179 = __this->get_U3CbU3E5__6_10();
					int32_t L_180 = __this->get_U3Cnew_sizeU3E5__9_13();
					BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * L_181 = (BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F *)il2cpp_codegen_object_new(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F_il2cpp_TypeInfo_var);
					BufferOffsetSize__ctor_m34DF650AB658A85943BBEDBB22887D2C3209D9E3(L_181, L_179, 0, L_180, (bool)0, /*hidden argument*/NULL);
					NullCheck(L_178);
					L_178->set_readBuffer_14(L_181);
				}

IL_04e8:
				{
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_182 = V_1;
					NullCheck(L_182);
					L_182->set_totalRead_16(((int64_t)((int64_t)0)));
					WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_183 = V_1;
					NullCheck(L_183);
					L_183->set_nextReadCalled_17((bool)1);
					WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_184 = __this->get_U3CcompletionU3E5__1_4();
					NullCheck(L_184);
					bool L_185;
					L_185 = WebCompletionSource_TrySetCompleted_m3309212E1375436FC131FE3A308EF6ADDD7C6D9C(L_184, /*hidden argument*/NULL);
					__this->set_U3CbU3E5__6_10((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
					goto IL_051e;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_050c;
				}
				throw e;
			}

CATCH_050c:
			{ // begin catch(System.Exception)
				V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_186 = __this->get_U3CcompletionU3E5__1_4();
				Exception_t * L_187 = V_10;
				NullCheck(L_186);
				bool L_188;
				L_188 = WebCompletionSource_TrySetException_m66055FAA927F564063E03FB9042E9CA12572EF7F(L_186, L_187, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077_RuntimeMethod_var)));
			} // end catch (depth: 3)

IL_051e:
			{
				IL2CPP_LEAVE(0x52C, FINALLY_0520);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0520;
		}

FINALLY_0520:
		{ // begin finally (depth: 2)
			{
				int32_t L_189 = V_0;
				if ((((int32_t)L_189) >= ((int32_t)0)))
				{
					goto IL_052b;
				}
			}

IL_0524:
			{
				WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_190 = V_1;
				NullCheck(L_190);
				L_190->set_pendingRead_19((WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E *)NULL);
			}

IL_052b:
			{
				IL2CPP_END_FINALLY(1312)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(1312)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x554, IL_0554)
			IL2CPP_JUMP_TBL(0x567, IL_0567)
			IL2CPP_JUMP_TBL(0x52C, IL_052c)
		}

IL_052c:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_191 = V_1;
			NullCheck(L_191);
			WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * L_192;
			L_192 = WebConnectionStream_get_Operation_mD926B0BCCEBE04C640DE920C22736C109E95FF27_inline(L_191, /*hidden argument*/NULL);
			NullCheck(L_192);
			WebOperation_CompleteResponseRead_m2B7B659DD2152E9743269047312830E3A3A99CE3(L_192, (bool)1, (Exception_t *)NULL, /*hidden argument*/NULL);
			goto IL_0554;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_053b;
		}
		throw e;
	}

CATCH_053b:
	{ // begin catch(System.Exception)
		V_11 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_193 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_194 = V_11;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_193, L_194, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0567;
	} // end catch (depth: 1)

IL_0554:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_195 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_195, /*hidden argument*/NULL);
	}

IL_0567:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE * _thisAdjusted = reinterpret_cast<U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE *>(__this + _offset);
	U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077(_thisAdjusted, method);
}
// System.Void System.Net.WebResponseStream/<ReadAllAsync>d__57::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAllAsyncU3Ed__57_SetStateMachine_mFD1C3562CD2C91EE95511C7737CCFF4140FD30AF (U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAllAsyncU3Ed__57_SetStateMachine_mFD1C3562CD2C91EE95511C7737CCFF4140FD30AF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE * _thisAdjusted = reinterpret_cast<U3CReadAllAsyncU3Ed__57_tC16110EF4466ED2F5D9C75851A1E1411E14C7CEE *>(__this + _offset);
	U3CReadAllAsyncU3Ed__57_SetStateMachine_mFD1C3562CD2C91EE95511C7737CCFF4140FD30AF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.WebResponseStream/<ReadAsync>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06 (U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_m430D5945C7165F8C1E69E490C8F5DA0ED78C093A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_mEAECCCC75DD29B38C6BC6643945C194D011E5BED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mCB3888D71D919D6F3C7B7614284540B4DA69B9F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m1B62E85A536E6E4E19A92B456C0A9DF6C7DC8608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m3EBA101FA97CBAE74D9AAD26D82A3E545541FAAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m74B83D463AB86ABF1D3D06694190C03A03D04885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m7D187749416370C6CBBBA5B3688C6562E34C1D34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m235A147B81620F741B9F832F8FF827260B05DEAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m40F69DF89220BA5A35E234EE9740FFEC9BF0CE30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mA00B92A4DF19FAF8E179965B169EC8FEEB5D072D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_RunWithTimeout_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mB3DF52FA80C8BC06E1DD2360EB85C2FEABE5E43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m28783226ECE7EBFBBF7FBBEBDD5B4933FEFE24AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mEEE46CCCCC629B162C32D55D75B3048E93FE674B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__0_mB934112FF09A00740DDB288784335322994E1A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__1_m658C4F1F07AD671D65CFB20E7814E8AB63585340_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * V_4 = NULL;
	ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	RuntimeObject * V_11 = NULL;
	bool V_12 = false;
	Exception_t * V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 8> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_017d;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_01c7;
			}
		}

IL_001b:
		{
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_4 = (U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass48_0__ctor_m3447721E2745A5C9BE3D784D864C74C452360039(L_4, /*hidden argument*/NULL);
			__this->set_U3CU3E8__2_8(L_4);
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_5 = __this->get_U3CU3E8__2_8();
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_6 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			L_5->set_U3CU3E4__this_0(L_6);
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_7 = __this->get_U3CU3E8__2_8();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_buffer_3();
			NullCheck(L_7);
			L_7->set_buffer_1(L_8);
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_9 = __this->get_U3CU3E8__2_8();
			int32_t L_10 = __this->get_offset_4();
			NullCheck(L_9);
			L_9->set_offset_2(L_10);
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_11 = __this->get_U3CU3E8__2_8();
			int32_t L_12 = __this->get_size_5();
			NullCheck(L_11);
			L_11->set_size_3(L_12);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_13 = __this->get_address_of_cancellationToken_6();
			CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_13, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_14 = __this->get_U3CU3E8__2_8();
			NullCheck(L_14);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = L_14->get_buffer_1();
			if (L_15)
			{
				goto IL_008d;
			}
		}

IL_0082:
		{
			ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_16 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
			ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06_RuntimeMethod_var)));
		}

IL_008d:
		{
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_17 = __this->get_U3CU3E8__2_8();
			NullCheck(L_17);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = L_17->get_buffer_1();
			NullCheck(L_18);
			V_3 = ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)));
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_19 = __this->get_U3CU3E8__2_8();
			NullCheck(L_19);
			int32_t L_20 = L_19->get_offset_2();
			if ((((int32_t)L_20) < ((int32_t)0)))
			{
				goto IL_00b7;
			}
		}

IL_00a9:
		{
			int32_t L_21 = V_3;
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_22 = __this->get_U3CU3E8__2_8();
			NullCheck(L_22);
			int32_t L_23 = L_22->get_offset_2();
			if ((((int32_t)L_21) >= ((int32_t)L_23)))
			{
				goto IL_00c2;
			}
		}

IL_00b7:
		{
			ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_24 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
			ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06_RuntimeMethod_var)));
		}

IL_00c2:
		{
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_25 = __this->get_U3CU3E8__2_8();
			NullCheck(L_25);
			int32_t L_26 = L_25->get_size_3();
			if ((((int32_t)L_26) < ((int32_t)0)))
			{
				goto IL_00ea;
			}
		}

IL_00d0:
		{
			int32_t L_27 = V_3;
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_28 = __this->get_U3CU3E8__2_8();
			NullCheck(L_28);
			int32_t L_29 = L_28->get_offset_2();
			U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_30 = __this->get_U3CU3E8__2_8();
			NullCheck(L_30);
			int32_t L_31 = L_30->get_size_3();
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_29))) >= ((int32_t)L_31)))
			{
				goto IL_00f5;
			}
		}

IL_00ea:
		{
			ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_32 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
			ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06_RuntimeMethod_var)));
		}

IL_00f5:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_33 = V_1;
			NullCheck(L_33);
			int32_t* L_34 = L_33->get_address_of_nestedRead_21();
			int32_t L_35;
			L_35 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_34, 1, 0, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_010f;
			}
		}

IL_0104:
		{
			InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_36 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
			InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFE25B37C16B0E4BB7D218D140551332C7027A1D)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06_RuntimeMethod_var)));
		}

IL_010f:
		{
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_37 = (WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E *)il2cpp_codegen_object_new(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E_il2cpp_TypeInfo_var);
			WebCompletionSource__ctor_m2A71326ABA55C07D5EA8267C2746590294275593(L_37, /*hidden argument*/NULL);
			__this->set_U3CcompletionU3E5__1_7(L_37);
			goto IL_01a2;
		}

IL_011f:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_38 = V_1;
			NullCheck(L_38);
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** L_39 = L_38->get_address_of_pendingRead_19();
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_40 = __this->get_U3CcompletionU3E5__1_7();
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_41;
			L_41 = InterlockedCompareExchangeImpl<WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E *>((WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E **)L_39, L_40, (WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E *)NULL);
			V_4 = L_41;
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_42 = V_4;
			if (!L_42)
			{
				goto IL_01b2;
			}
		}

IL_0137:
		{
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_43 = V_4;
			NullCheck(L_43);
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_44;
			L_44 = WebCompletionSource_WaitForCompletion_mE44E2AFE7DF56A09C9D208E2A9168E76A946A04F(L_43, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_44);
			ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D  L_45;
			L_45 = Task_1_ConfigureAwait_mEEE46CCCCC629B162C32D55D75B3048E93FE674B(L_44, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mEEE46CCCCC629B162C32D55D75B3048E93FE674B_RuntimeMethod_var);
			V_6 = L_45;
			ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  L_46;
			L_46 = ConfiguredTaskAwaitable_1_GetAwaiter_m1B62E85A536E6E4E19A92B456C0A9DF6C7DC8608_inline((ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D *)(&V_6), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m1B62E85A536E6E4E19A92B456C0A9DF6C7DC8608_RuntimeMethod_var);
			V_5 = L_46;
			bool L_47;
			L_47 = ConfiguredTaskAwaiter_get_IsCompleted_m235A147B81620F741B9F832F8FF827260B05DEAF((ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m235A147B81620F741B9F832F8FF827260B05DEAF_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_019a;
			}
		}

IL_0159:
		{
			int32_t L_48 = 0;
			V_0 = L_48;
			__this->set_U3CU3E1__state_0(L_48);
			ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  L_49 = V_5;
			__this->set_U3CU3Eu__1_12(L_49);
			AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * L_50 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_m430D5945C7165F8C1E69E490C8F5DA0ED78C093A((AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *)L_50, (ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C *)(&V_5), (U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_m430D5945C7165F8C1E69E490C8F5DA0ED78C093A_RuntimeMethod_var);
			goto IL_03ae;
		}

IL_017d:
		{
			ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  L_51 = __this->get_U3CU3Eu__1_12();
			V_5 = L_51;
			ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * L_52 = __this->get_address_of_U3CU3Eu__1_12();
			il2cpp_codegen_initobj(L_52, sizeof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C ));
			int32_t L_53 = (-1);
			V_0 = L_53;
			__this->set_U3CU3E1__state_0(L_53);
		}

IL_019a:
		{
			bool L_54;
			L_54 = ConfiguredTaskAwaiter_GetResult_m7D187749416370C6CBBBA5B3688C6562E34C1D34((ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m7D187749416370C6CBBBA5B3688C6562E34C1D34_RuntimeMethod_var);
		}

IL_01a2:
		{
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_55 = __this->get_address_of_cancellationToken_6();
			bool L_56;
			L_56 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_55, /*hidden argument*/NULL);
			if (!L_56)
			{
				goto IL_011f;
			}
		}

IL_01b2:
		{
			__this->set_U3ColdBytesU3E5__4_10(0);
			__this->set_U3CnbytesU3E5__5_11(0);
			__this->set_U3CthrowMeU3E5__3_9((Exception_t *)NULL);
		}

IL_01c7:
		{
		}

IL_01c8:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_57 = V_0;
				if ((((int32_t)L_57) == ((int32_t)1)))
				{
					goto IL_0237;
				}
			}

IL_01cc:
			{
				U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_58 = __this->get_U3CU3E8__2_8();
				Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B * L_59 = (Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B *)il2cpp_codegen_object_new(Func_2_tB70063A15836D0CD7D40205391AE05CAC43B1F1B_il2cpp_TypeInfo_var);
				Func_2__ctor_mA00B92A4DF19FAF8E179965B169EC8FEEB5D072D(L_59, L_58, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__0_mB934112FF09A00740DDB288784335322994E1A2A_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA00B92A4DF19FAF8E179965B169EC8FEEB5D072D_RuntimeMethod_var);
				WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_60 = V_1;
				NullCheck(L_60);
				int32_t L_61;
				L_61 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.IO.Stream::get_ReadTimeout() */, L_60);
				U3CU3Ec__DisplayClass48_0_t8FBC00A045A521F6295900CFB44394D4883EC940 * L_62 = __this->get_U3CU3E8__2_8();
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_63 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
				Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_63, L_62, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__1_m658C4F1F07AD671D65CFB20E7814E8AB63585340_RuntimeMethod_var), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_il2cpp_TypeInfo_var);
				Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * L_64;
				L_64 = HttpWebRequest_RunWithTimeout_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mB3DF52FA80C8BC06E1DD2360EB85C2FEABE5E43F(L_59, L_61, L_63, /*hidden argument*/HttpWebRequest_RunWithTimeout_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mB3DF52FA80C8BC06E1DD2360EB85C2FEABE5E43F_RuntimeMethod_var);
				NullCheck(L_64);
				ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A  L_65;
				L_65 = Task_1_ConfigureAwait_m28783226ECE7EBFBBF7FBBEBDD5B4933FEFE24AD(L_64, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m28783226ECE7EBFBBF7FBBEBDD5B4933FEFE24AD_RuntimeMethod_var);
				V_9 = L_65;
				ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  L_66;
				L_66 = ConfiguredTaskAwaitable_1_GetAwaiter_m3EBA101FA97CBAE74D9AAD26D82A3E545541FAAD_inline((ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A *)(&V_9), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m3EBA101FA97CBAE74D9AAD26D82A3E545541FAAD_RuntimeMethod_var);
				V_8 = L_66;
				bool L_67;
				L_67 = ConfiguredTaskAwaiter_get_IsCompleted_m40F69DF89220BA5A35E234EE9740FFEC9BF0CE30((ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E *)(&V_8), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m40F69DF89220BA5A35E234EE9740FFEC9BF0CE30_RuntimeMethod_var);
				if (L_67)
				{
					goto IL_0254;
				}
			}

IL_0213:
			{
				int32_t L_68 = 1;
				V_0 = L_68;
				__this->set_U3CU3E1__state_0(L_68);
				ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  L_69 = V_8;
				__this->set_U3CU3Eu__2_13(L_69);
				AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * L_70 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_mEAECCCC75DD29B38C6BC6643945C194D011E5BED((AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *)L_70, (ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E *)(&V_8), (U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E_TisU3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF_mEAECCCC75DD29B38C6BC6643945C194D011E5BED_RuntimeMethod_var);
				goto IL_03ae;
			}

IL_0237:
			{
				ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  L_71 = __this->get_U3CU3Eu__2_13();
				V_8 = L_71;
				ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E * L_72 = __this->get_address_of_U3CU3Eu__2_13();
				il2cpp_codegen_initobj(L_72, sizeof(ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E ));
				int32_t L_73 = (-1);
				V_0 = L_73;
				__this->set_U3CU3E1__state_0(L_73);
			}

IL_0254:
			{
				ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_74;
				L_74 = ConfiguredTaskAwaiter_GetResult_m74B83D463AB86ABF1D3D06694190C03A03D04885((ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E *)(&V_8), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m74B83D463AB86ABF1D3D06694190C03A03D04885_RuntimeMethod_var);
				V_7 = L_74;
				ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_75 = V_7;
				int32_t L_76 = L_75.get_Item1_0();
				__this->set_U3ColdBytesU3E5__4_10(L_76);
				ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_77 = V_7;
				int32_t L_78 = L_77.get_Item2_1();
				__this->set_U3CnbytesU3E5__5_11(L_78);
				goto IL_0291;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0279;
			}
			throw e;
		}

CATCH_0279:
		{ // begin catch(System.Exception)
			V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_79 = V_1;
			Exception_t * L_80 = V_10;
			NullCheck(L_79);
			WebException_t824617203133537D3B05BF786C22AECE0E2DBD08 * L_81;
			L_81 = WebResponseStream_GetReadException_m80701579A74C568DAA903BDCACC10B429140CE7A(L_79, 3, L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB89B6412820F91A4B3CC83A1320EEC4B02967797)), /*hidden argument*/NULL);
			__this->set_U3CthrowMeU3E5__3_9(L_81);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0291;
		} // end catch (depth: 2)

IL_0291:
		{
			Exception_t * L_82 = __this->get_U3CthrowMeU3E5__3_9();
			if (!L_82)
			{
				goto IL_02ff;
			}
		}

IL_0299:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_83 = V_1;
			NullCheck(L_83);
			RuntimeObject * L_84 = L_83->get_locker_20();
			V_11 = L_84;
			V_12 = (bool)0;
		}

IL_02a4:
		try
		{ // begin try (depth: 2)
			RuntimeObject * L_85 = V_11;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_85, (bool*)(&V_12), /*hidden argument*/NULL);
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_86 = __this->get_U3CcompletionU3E5__1_7();
			Exception_t * L_87 = __this->get_U3CthrowMeU3E5__3_9();
			NullCheck(L_86);
			bool L_88;
			L_88 = WebCompletionSource_TrySetException_m66055FAA927F564063E03FB9042E9CA12572EF7F(L_86, L_87, /*hidden argument*/NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_89 = V_1;
			NullCheck(L_89);
			L_89->set_pendingRead_19((WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E *)NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_90 = V_1;
			NullCheck(L_90);
			L_90->set_nestedRead_21(0);
			IL2CPP_LEAVE(0x2DF, FINALLY_02cf);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_02cf;
		}

FINALLY_02cf:
		{ // begin finally (depth: 2)
			{
				int32_t L_91 = V_0;
				if ((((int32_t)L_91) >= ((int32_t)0)))
				{
					goto IL_02de;
				}
			}

IL_02d3:
			{
				bool L_92 = V_12;
				if (!L_92)
				{
					goto IL_02de;
				}
			}

IL_02d7:
			{
				RuntimeObject * L_93 = V_11;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_93, /*hidden argument*/NULL);
			}

IL_02de:
			{
				IL2CPP_END_FINALLY(719)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(719)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x2DF, IL_02df)
		}

IL_02df:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_94 = V_1;
			NullCheck(L_94);
			((WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918 *)L_94)->set_closed_4((bool)1);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_95 = V_1;
			NullCheck(L_95);
			WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * L_96;
			L_96 = WebConnectionStream_get_Operation_mD926B0BCCEBE04C640DE920C22736C109E95FF27_inline(L_95, /*hidden argument*/NULL);
			Exception_t * L_97 = __this->get_U3CthrowMeU3E5__3_9();
			NullCheck(L_96);
			WebOperation_CompleteResponseRead_m2B7B659DD2152E9743269047312830E3A3A99CE3(L_96, (bool)0, L_97, /*hidden argument*/NULL);
			Exception_t * L_98 = __this->get_U3CthrowMeU3E5__3_9();
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06_RuntimeMethod_var)));
		}

IL_02ff:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_99 = V_1;
			NullCheck(L_99);
			RuntimeObject * L_100 = L_99->get_locker_20();
			V_11 = L_100;
			V_12 = (bool)0;
		}

IL_030a:
		try
		{ // begin try (depth: 2)
			RuntimeObject * L_101 = V_11;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_101, (bool*)(&V_12), /*hidden argument*/NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_102 = V_1;
			NullCheck(L_102);
			WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * L_103 = L_102->get_pendingRead_19();
			NullCheck(L_103);
			bool L_104;
			L_104 = WebCompletionSource_TrySetCompleted_m3309212E1375436FC131FE3A308EF6ADDD7C6D9C(L_103, /*hidden argument*/NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_105 = V_1;
			NullCheck(L_105);
			L_105->set_pendingRead_19((WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E *)NULL);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_106 = V_1;
			NullCheck(L_106);
			L_106->set_nestedRead_21(0);
			IL2CPP_LEAVE(0x33F, FINALLY_032f);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_032f;
		}

FINALLY_032f:
		{ // begin finally (depth: 2)
			{
				int32_t L_107 = V_0;
				if ((((int32_t)L_107) >= ((int32_t)0)))
				{
					goto IL_033e;
				}
			}

IL_0333:
			{
				bool L_108 = V_12;
				if (!L_108)
				{
					goto IL_033e;
				}
			}

IL_0337:
			{
				RuntimeObject * L_109 = V_11;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_109, /*hidden argument*/NULL);
			}

IL_033e:
			{
				IL2CPP_END_FINALLY(815)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(815)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x33F, IL_033f)
		}

IL_033f:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_110 = V_1;
			NullCheck(L_110);
			int64_t L_111 = L_110->get_totalRead_16();
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_112 = V_1;
			NullCheck(L_112);
			int64_t L_113 = L_112->get_contentLength_15();
			if ((((int64_t)L_111) < ((int64_t)L_113)))
			{
				goto IL_0371;
			}
		}

IL_034d:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_114 = V_1;
			NullCheck(L_114);
			bool L_115 = L_114->get_nextReadCalled_17();
			if (L_115)
			{
				goto IL_0371;
			}
		}

IL_0355:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_116 = V_1;
			NullCheck(L_116);
			bool L_117 = L_116->get_nextReadCalled_17();
			if (L_117)
			{
				goto IL_0371;
			}
		}

IL_035d:
		{
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_118 = V_1;
			NullCheck(L_118);
			L_118->set_nextReadCalled_17((bool)1);
			WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * L_119 = V_1;
			NullCheck(L_119);
			WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * L_120;
			L_120 = WebConnectionStream_get_Operation_mD926B0BCCEBE04C640DE920C22736C109E95FF27_inline(L_119, /*hidden argument*/NULL);
			NullCheck(L_120);
			WebOperation_CompleteResponseRead_m2B7B659DD2152E9743269047312830E3A3A99CE3(L_120, (bool)1, (Exception_t *)NULL, /*hidden argument*/NULL);
		}

IL_0371:
		{
			int32_t L_121 = __this->get_U3ColdBytesU3E5__4_10();
			int32_t L_122 = __this->get_U3CnbytesU3E5__5_11();
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)L_122));
			goto IL_039a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0381;
		}
		throw e;
	}

CATCH_0381:
	{ // begin catch(System.Exception)
		V_13 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * L_123 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_124 = V_13;
		AsyncTaskMethodBuilder_1_SetException_m580CEDB88630842EC930931623D55DCD1798F9C3((AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *)L_123, L_124, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m580CEDB88630842EC930931623D55DCD1798F9C3_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03ae;
	} // end catch (depth: 1)

IL_039a:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * L_125 = __this->get_address_of_U3CU3Et__builder_1();
		int32_t L_126 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mCB3888D71D919D6F3C7B7614284540B4DA69B9F2((AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *)L_125, L_126, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCB3888D71D919D6F3C7B7614284540B4DA69B9F2_RuntimeMethod_var);
	}

IL_03ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF * _thisAdjusted = reinterpret_cast<U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF *>(__this + _offset);
	U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06(_thisAdjusted, method);
}
// System.Void System.Net.WebResponseStream/<ReadAsync>d__48::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__48_SetStateMachine_m58B2F63A13E7EFC239A32B6AB9A60D491513B4DE (U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m372A69DE6DC4741415143865DC93AC0DC819C010_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m372A69DE6DC4741415143865DC93AC0DC819C010((AsyncTaskMethodBuilder_1_tEBE5FF692FD8B6155AF432D6C43F8D4112CDF36A *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m372A69DE6DC4741415143865DC93AC0DC819C010_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAsyncU3Ed__48_SetStateMachine_m58B2F63A13E7EFC239A32B6AB9A60D491513B4DE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF * _thisAdjusted = reinterpret_cast<U3CReadAsyncU3Ed__48_t27B8D6B2F265F8D5E5EB48F3BD8812861BDD6ECF *>(__this + _offset);
	U3CReadAsyncU3Ed__48_SetStateMachine_m58B2F63A13E7EFC239A32B6AB9A60D491513B4DE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m52095CF67A4A192364C30FF8B0E17FC89BB58640 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___mappings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * L_0 = ___mappings0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		__this->set_enumerator_0(L_1);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 * X509CertificateEnumerator_get_Current_m073AF75A4FCD3173200FF90AB6539B9D82C9EA90 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 *)CastclassClass((RuntimeObject*)L_1, X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_il2cpp_TypeInfo_var));
	}
}
// System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mBE4F1A9CE8C97F506D8F7FDA6F9C18135BA9AE15 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m2B17A1E25AB322A73AFA8E8A368A5B1968F48F71 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m5A185825A08CCA0ED7D6419FA6F6E180061B9555 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_mD24E317796AFDCEE1C381C30AEC85B5B3A486F8C (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Void System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyNativeHelper__ctor_m3C33DA045EB050BE747AD1E3B10DA0C350678EA7 (MyNativeHelper_t9E78ECADEC33A3AFF81DEF8E43A27DDFD5187F6D * __this, const RuntimeMethod* method)
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
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDF074FAF7DCA143BFC6A7650BE9BE6BBC4F05BE7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * L_0 = (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 *)il2cpp_codegen_object_new(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907 (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<Set>b__4_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CSetU3Eb__4_0_m51E1DA417A30BA042DE7A4DA249E0C13FB7E32BD (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * __this, RuntimeObject * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___s0;
		NullCheck(((TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *)CastclassClass((RuntimeObject*)L_0, TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251(((TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *)CastclassClass((RuntimeObject*)L_0, TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var)), (bool)1, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_RuntimeMethod_var);
		return L_1;
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
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991 (U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_m5A2482D3FF3CA89DAFC9824284A2DC3863CB9A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * V_1 = NULL;
	bool V_2 = false;
	ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007f;
			}
		}

IL_0011:
		{
			int32_t L_3 = __this->get_millisecondTimeout_2();
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
			L_4 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(L_3, /*hidden argument*/NULL);
			__this->set_U3CtimeoutTaskU3E5__1_4(L_4);
			TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_5 = (TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478*)(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478*)SZArrayNew(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var, (uint32_t)2);
			TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_6 = L_5;
			AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * L_7 = V_1;
			NullCheck(L_7);
			TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * L_8 = L_7->get_m_tcs_0();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_8);
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_9;
			L_9 = TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_inline(L_8, /*hidden argument*/TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var);
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_9);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_9);
			TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_10 = L_6;
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11 = __this->get_U3CtimeoutTaskU3E5__1_4();
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_11);
			Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * L_12;
			L_12 = Task_WhenAny_m59C7F18DABA670EACF71A2E2917C861ADB9D0341(L_10, /*hidden argument*/NULL);
			NullCheck(L_12);
			ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF  L_13;
			L_13 = Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B(L_12, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B_RuntimeMethod_var);
			V_4 = L_13;
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  L_14;
			L_14 = ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_inline((ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF *)(&V_4), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_RuntimeMethod_var);
			V_3 = L_14;
			bool L_15;
			L_15 = ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4((ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_009b;
			}
		}

IL_005f:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  L_17 = V_3;
			__this->set_U3CU3Eu__1_5(L_17);
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_m5A2482D3FF3CA89DAFC9824284A2DC3863CB9A69((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_18, (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *)(&V_3), (U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_m5A2482D3FF3CA89DAFC9824284A2DC3863CB9A69_RuntimeMethod_var);
			goto IL_00dd;
		}

IL_007f:
		{
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  L_19 = __this->get_U3CU3Eu__1_5();
			V_3 = L_19;
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * L_20 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_20, sizeof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_009b:
		{
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_22;
			L_22 = ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27((ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27_RuntimeMethod_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_23 = __this->get_U3CtimeoutTaskU3E5__1_4();
			V_2 = (bool)((((int32_t)((((RuntimeObject*)(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_22) == ((RuntimeObject*)(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00c9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b0;
		}
		throw e;
	}

CATCH_00b0:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_24, L_25, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00dd;
	} // end catch (depth: 1)

IL_00c9:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_27 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_26, L_27, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * _thisAdjusted = reinterpret_cast<U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 *>(__this + _offset);
	U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991(_thisAdjusted, method);
}
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D (U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * _thisAdjusted = reinterpret_cast<U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 *>(__this + _offset);
	U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D(_thisAdjusted, ___stateMachine0, method);
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
IL2CPP_EXTERN_C  unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  DelegatePInvokeWrapper_unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, const RuntimeMethod* method)
{
	typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, const RuntimeMethod* method)
{
	unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  result;
	memset((&result), 0, sizeof(result));
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
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___errorState0, ___errorCode1);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorState0, ___errorCode1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, ___errorCode1, targetMethod);
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
						GenericInterfaceActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(targetMethod, targetThis, ___errorState0, ___errorCode1);
					else
						GenericVirtActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(targetMethod, targetThis, ___errorState0, ___errorCode1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorState0, ___errorCode1);
					else
						VirtActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorState0, ___errorCode1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorState0, ___errorCode1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, ___errorCode1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51 (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___errorState0;
	__d_args[1] = Box(unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var, &___errorCode1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___key0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::Invoke(Mono.Unity.UnityTls/unitytls_key*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, targetMethod);
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
						GenericInterfaceActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(targetMethod, targetThis, ___key0);
					else
						GenericVirtActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(targetMethod, targetThis, ___key0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___key0);
					else
						VirtActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___key0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___key0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  DelegatePInvokeWrapper_unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (CDECL *PInvokeFunc)(unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  returnValue = il2cppPInvokeFunc(___key0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  result;
	memset((&result), 0, sizeof(result));
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
				typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___key0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, ___errorState1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___key0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___key0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___key0, ___errorState1);
					else
						result = VirtFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___key0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___key0, ___errorState1, targetMethod);
				}
				else
				{
					typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * DelegatePInvokeWrapper_unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (CDECL *PInvokeFunc)(uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * returnValue = il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * result = NULL;
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
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___password2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___passwordLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * DelegatePInvokeWrapper_unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (CDECL *PInvokeFunc)(uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * returnValue = il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * result = NULL;
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
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___password2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___passwordLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::Invoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___errorState2, targetMethod);
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
						GenericInterfaceActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___errorState2);
					else
						GenericVirtActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___errorState2);
					else
						VirtActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::BeginInvoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{


	typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (CDECL *PInvokeFunc)(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___callbacks1' to native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke ____callbacks1_marshaled = {};
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(___callbacks1, ____callbacks1_marshaled);

	// Native function invocation
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * returnValue = il2cppPInvokeFunc(___supportedProtocols0, ____callbacks1_marshaled, ___cn2, ___cnLen3, ___errorState4);

	// Marshaling cleanup of parameter '___callbacks1' native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(____callbacks1_marshaled);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * result = NULL;
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
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (RuntimeObject*, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___supportedProtocols0) - 1), ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var, &___supportedProtocols0);
	__d_args[1] = Box(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var, &___callbacks1);
	__d_args[2] = ___cn2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{


	typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (CDECL *PInvokeFunc)(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke, uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___callbacks1' to native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke ____callbacks1_marshaled = {};
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(___callbacks1, ____callbacks1_marshaled);

	// Native function invocation
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * returnValue = il2cppPInvokeFunc(___supportedProtocols0, ____callbacks1_marshaled, ___certChain2, ___leafCertificateKey3, ___errorState4);

	// Marshaling cleanup of parameter '___callbacks1' native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(____callbacks1_marshaled);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * result = NULL;
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
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (RuntimeObject*, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___supportedProtocols0) - 1), ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var, &___supportedProtocols0);
	__d_args[1] = Box(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var, &___callbacks1);
	__d_args[2] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___certChain2);
	__d_args[3] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___leafCertificateKey3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
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
						GenericInterfaceActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(targetMethod, targetThis, ___ctx0);
					else
						GenericVirtActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(targetMethod, targetThis, ___ctx0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0);
					else
						VirtActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___errorState1);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787 (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
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
						GenericInterfaceActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						GenericVirtActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						VirtActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1 (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61 (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4 (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___ctx0, ___buffer1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___clientAuthCAList1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
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
						GenericInterfaceActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
					else
						GenericVirtActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
					else
						VirtActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___clientAuthCAList1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
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
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244 (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448 (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
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
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9 (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___supportedCiphersuites1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___supportedCiphersuitesLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476 (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
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
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156 (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
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
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___ctx0, ___data1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___data1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___cert0, ___buffer1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___cert0) - 1), ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var, &___cert0);
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___list0, ___buffer1, ___bufferLen2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066 (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
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
						GenericInterfaceActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___list0, ___cert1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, ___cert1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___cert1, ___errorState2, targetMethod);
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
						GenericInterfaceActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___cert1, ___errorState2);
					else
						GenericVirtActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___cert1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___cert1, ___errorState2);
					else
						VirtActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___cert1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, ___cert1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___cert1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = Box(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var, &___cert1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * DelegatePInvokeWrapper_unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, const RuntimeMethod* method)
{
	typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (CDECL *PInvokeFunc)(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * returnValue = il2cppPInvokeFunc(___errorState0);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, const RuntimeMethod* method)
{
	unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * result = NULL;
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
			if (___parameterCount == 1)
			{
				// open
				typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___errorState0, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___errorState0);
					else
						result = GenericVirtFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___errorState0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorState0);
					else
						result = VirtFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorState0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___errorState0, targetMethod);
				}
				else
				{
					typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorState0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___list0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, targetMethod);
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
						GenericInterfaceActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(targetMethod, targetThis, ___list0);
					else
						GenericVirtActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(targetMethod, targetThis, ___list0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0);
					else
						VirtActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___list0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916 (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  returnValue = il2cppPInvokeFunc(___list0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  result;
	memset((&result), 0, sizeof(result));
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
				typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___list0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___errorState1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___errorState1);
					else
						result = VirtFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___list0, ___errorState1, targetMethod);
				}
				else
				{
					typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  returnValue = il2cppPInvokeFunc(___list0, ___index1, ___errorState2);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 3)
			{
				// open
				typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___list0, ___index1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___index1, ___errorState2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___index1, ___errorState2);
					else
						result = GenericVirtFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___index1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___index1, ___errorState2);
					else
						result = VirtFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___index1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (RuntimeObject*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___list0) - 1), ___index1, ___errorState2, targetMethod);
				}
				else
				{
					typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___index1, ___errorState2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___list0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb3' to native representation
	Il2CppMethodPointer ____cb3_marshaled = NULL;
	____cb3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb3));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___chain0, ___cn1, ___cnLen2, ____cb3_marshaled, ___userData4, ___errorState5);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
			if (___parameterCount == 6)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
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
						result = GenericInterfaceFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
					else
						result = GenericVirtFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
					else
						result = VirtFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___chain0) - 1), ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain0);
	__d_args[1] = ___cn1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen2);
	__d_args[3] = ___cb3;
	__d_args[4] = ___userData4;
	__d_args[5] = ___errorState5;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb4' to native representation
	Il2CppMethodPointer ____cb4_marshaled = NULL;
	____cb4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb4));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___chain0, ___trustCA1, ___cn2, ___cnLen3, ____cb4_marshaled, ___userData5, ___errorState6);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
			if (___parameterCount == 7)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
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
						result = GenericInterfaceFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
					else
						result = GenericVirtFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
					else
						result = VirtFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___chain0) - 1), ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback7, RuntimeObject * ___object8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain0);
	__d_args[1] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___trustCA1);
	__d_args[2] = ___cn2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen3);
	__d_args[4] = ___cb4;
	__d_args[5] = ___userData5;
	__d_args[6] = ___errorState6;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HTTP_REQUEST_HEADER_ID_ToString_m1C8B5B5011B051AAF3EB364CC8D3D940A6581F60 (int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields*)il2cpp_codegen_static_fields_for(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var))->get_m_Strings_0();
		int32_t L_1 = ___position0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HTTP_REQUEST_HEADER_ID__cctor_mF6227C1ABC6104B748D7D7FA799EB384DB8EB5AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)41));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		((HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields*)il2cpp_codegen_static_fields_for(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var))->set_m_Strings_0(L_41);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * WebResponseStream_get_Headers_mA7D647A682410D694CC962C67D38EEA488C4A9A3_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method)
{
	{
		WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_0 = __this->get_U3CHeadersU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * WebResponseStream_get_Version_m4BBC5EA52F6A9B3FF1EA288ED90E97F17E593356_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method)
{
	{
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_0 = __this->get_U3CVersionU3Ek__BackingField_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * WebResponseStream_get_RequestStream_mEAC92D301B0FCC7519397FD5B4122E130BFE4413_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method)
{
	{
		WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * L_0 = __this->get_U3CRequestStreamU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRequestStream_get_KeepAlive_m768D5DBEF1F75A8A4FD093C67756806817E461BC_inline (WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CKeepAliveU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebResponseStream_set_KeepAlive_m99646E88AC62918196EF76051F276DB871168FEF_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CKeepAliveU3Ek__BackingField_28(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ServicePoint_get_UsesProxy_mE6CE550E4DFEB85A673160DE35CD67AFA87F35BD_inline (ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_usesProxy_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebResponseStream_set_ChunkedRead_m0C07657582071F1DB3548C0C573F817E177C12E2_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CChunkedReadU3Ek__BackingField_29(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebResponseStream_get_ChunkedRead_mA8BA2D5C7ABA1ED2FC2582CC1C0245AFB2B53A1D_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CChunkedReadU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, const RuntimeMethod* method)
{
	{
		MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_0 = __this->get_U3CChunkStreamU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebResponseStream_set_ChunkStream_m476BC1EF1184C69DA6017EE6768B3E5205A8EDC4_inline (WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * __this, MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * ___value0, const RuntimeMethod* method)
{
	{
		MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * L_0 = ___value0;
		__this->set_U3CChunkStreamU3Ek__BackingField_30(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * WebConnectionStream_get_Operation_mD926B0BCCEBE04C640DE920C22736C109E95FF27_inline (WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918 * __this, const RuntimeMethod* method)
{
	{
		WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * L_0 = __this->get_U3COperationU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WebConnectionStream_get_InnerStream_mBDB28CD345C11AF699A2FC0BB23A8BE5344C2392_inline (WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_U3CInnerStreamU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_0 = (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  L_0 = (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  ConfiguredTaskAwaitable_1_GetAwaiter_m1B62E85A536E6E4E19A92B456C0A9DF6C7DC8608_gshared_inline (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  L_0 = (ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  ConfiguredTaskAwaitable_1_GetAwaiter_m3EBA101FA97CBAE74D9AAD26D82A3E545541FAAD_gshared_inline (ConfiguredTaskAwaitable_1_t6195274A0F529A409D0FE46BF3C9CE7136D9836A * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E  L_0 = (ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_tC9FF48B29CA291E29691D6BD869DE8BEC035DF8E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_0;
	}
}
