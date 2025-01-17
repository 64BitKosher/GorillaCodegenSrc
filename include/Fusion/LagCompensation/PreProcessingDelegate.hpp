// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::LagCompensation
namespace Fusion::LagCompensation {
  // Forward declaring type: Query
  struct Query;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: HitboxRoot
  class HitboxRoot;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Fusion.LagCompensation
namespace Fusion::LagCompensation {
  // Forward declaring type: PreProcessingDelegate
  class PreProcessingDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::LagCompensation::PreProcessingDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::LagCompensation::PreProcessingDelegate*, "Fusion.LagCompensation", "PreProcessingDelegate");
// Type namespace: Fusion.LagCompensation
namespace Fusion::LagCompensation {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.LagCompensation.PreProcessingDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class PreProcessingDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2B895B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreProcessingDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::LagCompensation::PreProcessingDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreProcessingDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref Fusion.LagCompensation.Query query, System.Collections.Generic.List`1<Fusion.HitboxRoot> rootCandidates, System.Collections.Generic.HashSet`1<System.Int32> processedColliderIndices)
    // Offset: 0x2B89664
    void Invoke(ByRef<::Fusion::LagCompensation::Query> query, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>* rootCandidates, ::System::Collections::Generic::HashSet_1<int>* processedColliderIndices);
    // public System.IAsyncResult BeginInvoke(ref Fusion.LagCompensation.Query query, System.Collections.Generic.List`1<Fusion.HitboxRoot> rootCandidates, System.Collections.Generic.HashSet`1<System.Int32> processedColliderIndices, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2B89678
    ::System::IAsyncResult* BeginInvoke(ByRef<::Fusion::LagCompensation::Query> query, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>* rootCandidates, ::System::Collections::Generic::HashSet_1<int>* processedColliderIndices, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Fusion.LagCompensation.Query query, System.IAsyncResult result)
    // Offset: 0x2B89718
    void EndInvoke(ByRef<::Fusion::LagCompensation::Query> query, ::System::IAsyncResult* result);
  }; // Fusion.LagCompensation.PreProcessingDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::LagCompensation::PreProcessingDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::LagCompensation::PreProcessingDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::LagCompensation::PreProcessingDelegate::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>*, ::System::Collections::Generic::HashSet_1<int>*)>(&Fusion::LagCompensation::PreProcessingDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* rootCandidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")})->byval_arg;
    static auto* processedColliderIndices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensation::PreProcessingDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, rootCandidates, processedColliderIndices});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensation::PreProcessingDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Fusion::LagCompensation::PreProcessingDelegate::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>*, ::System::Collections::Generic::HashSet_1<int>*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Fusion::LagCompensation::PreProcessingDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* rootCandidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")})->byval_arg;
    static auto* processedColliderIndices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensation::PreProcessingDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, rootCandidates, processedColliderIndices, callback, object});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensation::PreProcessingDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::LagCompensation::PreProcessingDelegate::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::IAsyncResult*)>(&Fusion::LagCompensation::PreProcessingDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensation::PreProcessingDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, result});
  }
};
