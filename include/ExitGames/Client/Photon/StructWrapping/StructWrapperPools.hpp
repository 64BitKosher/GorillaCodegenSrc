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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IDisposable
  class IDisposable;
}
// Forward declaring namespace: ExitGames::Client::Photon::StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // Forward declaring type: StructWrapperPool
  class StructWrapperPool;
  // Forward declaring type: StructWrapper`1<T>
  template<typename T>
  class StructWrapper_1;
  // Forward declaring type: StructWrapperPool`1<T>
  template<typename T>
  class StructWrapperPool_1;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon.StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // Forward declaring type: StructWrapperPools
  class StructWrapperPools;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::StructWrapping::StructWrapperPools);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*, "ExitGames.Client.Photon.StructWrapping", "StructWrapperPools");
// Type namespace: ExitGames.Client.Photon.StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.StructWrapping.StructWrapperPools
  // [TokenAttribute] Offset: FFFFFFFF
  class StructWrapperPools : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.StructWrapping.StructWrapperPool> pools
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>* pools;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.IDisposable> used
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::System::IDisposable*>* used;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::IDisposable*>*) == 0x8);
    public:
    // Get static field: static public readonly ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte>[] mappedByteWrappers
    static ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*> _get_mappedByteWrappers();
    // Set static field: static public readonly ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte>[] mappedByteWrappers
    static void _set_mappedByteWrappers(::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*> value);
    // Get static field: static public readonly ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean>[] mappedBoolWrappers
    static ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*> _get_mappedBoolWrappers();
    // Set static field: static public readonly ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean>[] mappedBoolWrappers
    static void _set_mappedBoolWrappers(::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*> value);
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.StructWrapping.StructWrapperPool> pools
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>*& dyn_pools();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.IDisposable> used
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::IDisposable*>*& dyn_used();
    // private ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> GetPoolForType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* GetPoolForType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::GetPoolForType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetPoolForType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*, false>(this, ___generic__method);
    }
    // public ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte> Acquire(System.Byte value)
    // Offset: 0x4A01BE4
    ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>* Acquire(uint8_t value);
    // public ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean> Acquire(System.Boolean value)
    // Offset: 0x4A01C60
    ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>* Acquire(bool value);
    // public ExitGames.Client.Photon.StructWrapping.StructWrapper`1<T> Acquire(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* Acquire(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Acquire", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*, false>(this, ___generic__method, value);
    }
    // public System.Void Clear()
    // Offset: 0x4A01CE4
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x4A01EDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StructWrapperPools* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StructWrapperPools*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4A01FB8
    static void _cctor();
  }; // ExitGames.Client.Photon.StructWrapping.StructWrapperPools
  #pragma pack(pop)
  static check_size<sizeof(StructWrapperPools), 24 + sizeof(::System::Collections::Generic::List_1<::System::IDisposable*>*)> __ExitGames_Client_Photon_StructWrapping_StructWrapperPoolsSizeCheck;
  static_assert(sizeof(StructWrapperPools) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::StructWrapping::StructWrapperPools::GetPoolForType
// Il2CppName: GetPoolForType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire
// Il2CppName: Acquire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>* (ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)(uint8_t)>(&ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StructWrapping::StructWrapperPools*), "Acquire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire
// Il2CppName: Acquire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>* (ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)(bool)>(&ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StructWrapping::StructWrapperPools*), "Acquire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire
// Il2CppName: Acquire
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)()>(&ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StructWrapping::StructWrapperPools*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StructWrapping::StructWrapperPools::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::StructWrapping::StructWrapperPools::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ExitGames::Client::Photon::StructWrapping::StructWrapperPools::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StructWrapping::StructWrapperPools*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
