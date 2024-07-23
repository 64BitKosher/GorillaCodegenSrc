// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Forward declaring type: ArraySlice`1<T>
  template<typename T>
  struct ArraySlice_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::Universal::UTess::ArraySlice_1, "UnityEngine.Rendering.Universal.UTess", "ArraySlice`1");
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.UTess.ArraySlice`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  template<typename T>
  struct ArraySlice_1/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>>*/ {
    public:
    public:
    // System.Byte* m_Buffer
    // Size: 0x8
    // Offset: 0x0
    uint8_t* m_Buffer;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // System.Int32 m_Stride
    // Size: 0x4
    // Offset: 0x0
    int m_Stride;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_Length
    // Size: 0x4
    // Offset: 0x0
    int m_Length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ArraySlice_1
    constexpr ArraySlice_1(uint8_t* m_Buffer_ = {}, int m_Stride_ = {}, int m_Length_ = {}) noexcept : m_Buffer{m_Buffer_}, m_Stride{m_Stride_}, m_Length{m_Length_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Byte* m_Buffer
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_m_Buffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::dyn_m_Buffer");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Buffer"))->offset;
      return *reinterpret_cast<uint8_t**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 m_Stride
    [[deprecated("Use field access instead!")]] int& dyn_m_Stride() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::dyn_m_Stride");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Stride"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 m_Length
    [[deprecated("Use field access instead!")]] int& dyn_m_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::dyn_m_Length");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Length"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Unity.Collections.NativeArray`1<T> array, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ArraySlice_1(::Unity::Collections::NativeArray_1<T> array, int start, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(length)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, start, length);
    }
    // public System.Boolean Equals(UnityEngine.Rendering.Universal.UTess.ArraySlice`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // static public UnityEngine.Rendering.Universal.UTess.ArraySlice`1<T> ConvertExistingDataToArraySlice(System.Void* dataPointer, System.Int32 stride, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T> ConvertExistingDataToArraySlice(void* dataPointer, int stride, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::ConvertExistingDataToArraySlice");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySlice_1<T>>::get(), "ConvertExistingDataToArraySlice", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dataPointer), ::il2cpp_utils::ExtractType(stride), ::il2cpp_utils::ExtractType(length)})));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, dataPointer, stride, length);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // System.Void* GetUnsafeReadOnlyPtr()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void* GetUnsafeReadOnlyPtr() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::GetUnsafeReadOnlyPtr");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetUnsafeReadOnlyPtr", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<void*, false>(this, ___internal__method);
    }
    // System.Void CopyTo(T[] array)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyTo(::ArrayW<T> array) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::CopyTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array);
    }
    // T[] ToArray()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> ToArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // public System.Int32 get_Stride()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Stride() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::get_Stride");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Stride", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::get_Length");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
  }; // UnityEngine.Rendering.Universal.UTess.ArraySlice`1
  // Could not write size check! Type: UnityEngine.Rendering.Universal.UTess.ArraySlice`1 is generic, or has no fields that are valid for size checks!
  // static public System.Boolean op_Equality(UnityEngine.Rendering.Universal.UTess.ArraySlice`1<T> left, UnityEngine.Rendering.Universal.UTess.ArraySlice`1<T> right)
  // Offset: 0xFFFFFFFFFFFFFFFF
  inline bool operator ==(const ::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>& left, const ::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>& right) {
    static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::op_Equality");
    static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySlice_1<T>>::get(), "op_Equality", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(left), ::il2cpp_utils::ExtractType(right)})));
    return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, left, right);
  }
  // static public System.Boolean op_Inequality(UnityEngine.Rendering.Universal.UTess.ArraySlice`1<T> left, UnityEngine.Rendering.Universal.UTess.ArraySlice`1<T> right)
  // Offset: 0xFFFFFFFFFFFFFFFF
  inline bool operator !=(const ::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>& left, const ::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>& right) {
    static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySlice_1::op_Inequality");
    static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySlice_1<T>>::get(), "op_Inequality", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(left), ::il2cpp_utils::ExtractType(right)})));
    return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, left, right);
  }
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"