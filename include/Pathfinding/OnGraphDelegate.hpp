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
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NavGraph
  class NavGraph;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: OnGraphDelegate
  class OnGraphDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::OnGraphDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::OnGraphDelegate*, "Pathfinding", "OnGraphDelegate");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.OnGraphDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class OnGraphDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x299A860
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnGraphDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::OnGraphDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnGraphDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(Pathfinding.NavGraph graph)
    // Offset: 0x299A968
    void Invoke(::Pathfinding::NavGraph* graph);
    // public System.IAsyncResult BeginInvoke(Pathfinding.NavGraph graph, System.AsyncCallback callback, System.Object object)
    // Offset: 0x299A97C
    ::System::IAsyncResult* BeginInvoke(::Pathfinding::NavGraph* graph, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x299A99C
    void EndInvoke(::System::IAsyncResult* result);
  }; // Pathfinding.OnGraphDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::OnGraphDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::OnGraphDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::OnGraphDelegate::*)(::Pathfinding::NavGraph*)>(&Pathfinding::OnGraphDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("Pathfinding", "NavGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::OnGraphDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph});
  }
};
// Writing MetadataGetter for method: Pathfinding::OnGraphDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Pathfinding::OnGraphDelegate::*)(::Pathfinding::NavGraph*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Pathfinding::OnGraphDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("Pathfinding", "NavGraph")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::OnGraphDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, callback, object});
  }
};
// Writing MetadataGetter for method: Pathfinding::OnGraphDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::OnGraphDelegate::*)(::System::IAsyncResult*)>(&Pathfinding::OnGraphDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::OnGraphDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
