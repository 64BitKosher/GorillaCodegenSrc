// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.ITuple
#include "System/Runtime/CompilerServices/ITuple.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IValueTupleInternal
  class IValueTupleInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IValueTupleInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::IValueTupleInternal*, "System", "IValueTupleInternal");
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.IValueTupleInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class IValueTupleInternal/*, public ::System::Runtime::CompilerServices::ITuple*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::ITuple
    operator ::System::Runtime::CompilerServices::ITuple() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::ITuple*>(this);
    }
    // public System.Int32 GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetHashCode(::System::Collections::IEqualityComparer* comparer);
    // public System.String ToStringEnd()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW ToStringEnd();
  }; // System.IValueTupleInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IValueTupleInternal::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IValueTupleInternal::*)(::System::Collections::IEqualityComparer*)>(&System::IValueTupleInternal::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* comparer = &::il2cpp_utils::GetClassFromName("System.Collections", "IEqualityComparer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IValueTupleInternal*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparer});
  }
};
// Writing MetadataGetter for method: System::IValueTupleInternal::ToStringEnd
// Il2CppName: ToStringEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IValueTupleInternal::*)()>(&System::IValueTupleInternal::ToStringEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IValueTupleInternal*), "ToStringEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
