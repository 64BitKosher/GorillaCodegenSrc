// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Buffers.ReadOnlySequence`1
#include "System/Buffers/ReadOnlySequence_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Buffers
namespace System::Buffers {
  // Forward declaring type: BuffersExtensions
  class BuffersExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Buffers::BuffersExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::BuffersExtensions*, "System.Buffers", "BuffersExtensions");
// Type namespace: System.Buffers
namespace System::Buffers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Buffers.BuffersExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BuffersExtensions : public ::Il2CppObject {
    public:
    // static public System.Void CopyTo(in System.Buffers.ReadOnlySequence`1<T> source, System.Span`1<T> destination)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void CopyTo(ByRef<::System::Buffers::ReadOnlySequence_1<T>> source, ::System::Span_1<T> destination) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::BuffersExtensions::CopyTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Buffers", "BuffersExtensions", "CopyTo", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(destination)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(source), destination);
    }
    // static private System.Void CopyToMultiSegment(in System.Buffers.ReadOnlySequence`1<T> sequence, System.Span`1<T> destination)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void CopyToMultiSegment(ByRef<::System::Buffers::ReadOnlySequence_1<T>> sequence, ::System::Span_1<T> destination) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::BuffersExtensions::CopyToMultiSegment");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Buffers", "BuffersExtensions", "CopyToMultiSegment", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(sequence), ::il2cpp_utils::ExtractType(destination)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(sequence), destination);
    }
  }; // System.Buffers.BuffersExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Buffers::BuffersExtensions::CopyTo
// Il2CppName: CopyTo
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Buffers::BuffersExtensions::CopyToMultiSegment
// Il2CppName: CopyToMultiSegment
// Cannot write MetadataGetter for generic methods!
