// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: Volatile
  class Volatile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Volatile);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Volatile*, "System.Threading", "Volatile");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Volatile
  // [TokenAttribute] Offset: FFFFFFFF
  class Volatile : public ::Il2CppObject {
    public:
    // Nested type: ::System::Threading::Volatile::VolatileBoolean
    struct VolatileBoolean;
    // Nested type: ::System::Threading::Volatile::VolatileInt32
    struct VolatileInt32;
    // Nested type: ::System::Threading::Volatile::VolatileIntPtr
    struct VolatileIntPtr;
    // Nested type: ::System::Threading::Volatile::VolatileObject
    struct VolatileObject;
    // static public System.Boolean Read(ref System.Boolean location)
    // Offset: 0x46D0FEC
    static bool Read(ByRef<bool> location);
    // static public System.Int32 Read(ref System.Int32 location)
    // Offset: 0x46D1004
    static int Read(ByRef<int> location);
    // static public System.Void Write(ref System.Int32 location, System.Int32 value)
    // Offset: 0x46D101C
    static void Write(ByRef<int> location, int value);
    // static public System.IntPtr Read(ref System.IntPtr location)
    // Offset: 0x46D1040
    static ::System::IntPtr Read(ByRef<::System::IntPtr> location);
    // static public T Read(ref T location)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Read(ByRef<T> location) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Volatile::Read");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Threading", "Volatile", "Read", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(location)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(location));
    }
    // static public System.Void Write(ref T location, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Write(ByRef<T> location, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Volatile::Write");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Threading", "Volatile", "Write", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(location), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(location), value);
    }
    // static public System.Void Write(ref System.Int64 location, System.Int64 value)
    // Offset: 0x46D1058
    static void Write(ByRef<int64_t> location, int64_t value);
  }; // System.Threading.Volatile
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Volatile::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<bool>)>(&System::Threading::Volatile::Read)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Volatile*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: System::Threading::Volatile::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<int>)>(&System::Threading::Volatile::Read)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Volatile*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: System::Threading::Volatile::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int>, int)>(&System::Threading::Volatile::Write)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Volatile*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, value});
  }
};
// Writing MetadataGetter for method: System::Threading::Volatile::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(ByRef<::System::IntPtr>)>(&System::Threading::Volatile::Read)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Volatile*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: System::Threading::Volatile::Read
// Il2CppName: Read
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Threading::Volatile::Write
// Il2CppName: Write
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Threading::Volatile::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int64_t>, int64_t)>(&System::Threading::Volatile::Write)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Volatile*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, value});
  }
};
