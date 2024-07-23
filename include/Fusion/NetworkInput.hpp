// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: INetworkInput
  class INetworkInput;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkInput
  struct NetworkInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkInput, "Fusion", "NetworkInput");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkInput
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkInput/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32* _ptr
    // Size: 0x8
    // Offset: 0x0
    int* ptr;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // private System.Int32 _wordCount
    // Size: 0x4
    // Offset: 0x8
    int wordCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetworkInput
    constexpr NetworkInput(int* ptr_ = {}, int wordCount_ = {}) noexcept : ptr{ptr_}, wordCount{wordCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32* _ptr
    [[deprecated("Use field access instead!")]] int*& dyn__ptr();
    // Get instance field reference: private System.Int32 _wordCount
    [[deprecated("Use field access instead!")]] int& dyn__wordCount();
    // private System.Int32 get_Type()
    // Offset: 0x2B30C20
    int get_Type();
    // private System.Void set_Type(System.Int32 value)
    // Offset: 0x2B30C38
    void set_Type(int value);
    // public System.Int32* get_Data()
    // Offset: 0x2B30C48
    int* get_Data();
    // private System.Boolean get_Valid()
    // Offset: 0x2B30C5C
    bool get_Valid();
    // public System.Void .ctor(System.Int32* ptr, System.Int32 wordCount)
    // Offset: 0x2B30C6C
    // ABORTED: conflicts with another method.  NetworkInput(int* ptr, int wordCount);
    // public System.Boolean TryGet(out T input)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool TryGet(ByRef<T> input) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Fusion::INetworkInput>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkInput::TryGet");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "TryGet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, byref(input));
    }
    // public System.Boolean TrySet(T input)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool TrySet(T input) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Fusion::INetworkInput>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkInput::TrySet");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "TrySet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(input)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, input);
    }
    // public T Get()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T Get() {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Fusion::INetworkInput>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkInput::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // public System.Void Set(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Set(T value) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Fusion::INetworkInput>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkInput::Set");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Set", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, value);
    }
    // public System.Void Convert()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Convert() {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Fusion::INetworkInput>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkInput::Convert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Convert", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method);
    }
    // public System.Boolean Is()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool Is() {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Fusion::INetworkInput>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkInput::Is");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Is", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method);
    }
  }; // Fusion.NetworkInput
  #pragma pack(pop)
  static check_size<sizeof(NetworkInput), 8 + sizeof(int)> __Fusion_NetworkInputSizeCheck;
  static_assert(sizeof(NetworkInput) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkInput::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkInput::*)()>(&Fusion::NetworkInput::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkInput), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkInput::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkInput::*)(int)>(&Fusion::NetworkInput::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkInput), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkInput::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int* (Fusion::NetworkInput::*)()>(&Fusion::NetworkInput::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkInput), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkInput::get_Valid
// Il2CppName: get_Valid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkInput::*)()>(&Fusion::NetworkInput::get_Valid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkInput), "get_Valid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkInput::NetworkInput
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkInput::TryGet
// Il2CppName: TryGet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::NetworkInput::TrySet
// Il2CppName: TrySet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::NetworkInput::Get
// Il2CppName: Get
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::NetworkInput::Set
// Il2CppName: Set
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::NetworkInput::Convert
// Il2CppName: Convert
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::NetworkInput::Is
// Il2CppName: Is
// Cannot write MetadataGetter for generic methods!