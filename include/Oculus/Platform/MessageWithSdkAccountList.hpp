// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: SdkAccountList
  class SdkAccountList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithSdkAccountList
  class MessageWithSdkAccountList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithSdkAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSdkAccountList*, "Oculus.Platform", "MessageWithSdkAccountList");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithSdkAccountList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithSdkAccountList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SdkAccountList*> {
    public:
    // protected Oculus.Platform.Models.SdkAccountList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x4876B2C
    ::Oculus::Platform::Models::SdkAccountList* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x4872C28
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithSdkAccountList* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithSdkAccountList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithSdkAccountList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.SdkAccountList GetSdkAccountList()
    // Offset: 0x4876AF0
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.SdkAccountList Message::GetSdkAccountList()
    ::Oculus::Platform::Models::SdkAccountList* GetSdkAccountList();
  }; // Oculus.Platform.MessageWithSdkAccountList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithSdkAccountList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SdkAccountList* (Oculus::Platform::MessageWithSdkAccountList::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithSdkAccountList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithSdkAccountList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithSdkAccountList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithSdkAccountList::GetSdkAccountList
// Il2CppName: GetSdkAccountList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SdkAccountList* (Oculus::Platform::MessageWithSdkAccountList::*)()>(&Oculus::Platform::MessageWithSdkAccountList::GetSdkAccountList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithSdkAccountList*), "GetSdkAccountList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
