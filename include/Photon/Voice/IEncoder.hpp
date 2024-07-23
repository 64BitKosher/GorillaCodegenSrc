// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.ArraySegment`1
#include "System/ArraySegment_1.hpp"
// Including type: Photon.Voice.FrameFlags
#include "Photon/Voice/FrameFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: IEncoder
  class IEncoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::IEncoder);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::IEncoder*, "Photon.Voice", "IEncoder");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.IEncoder
  // [TokenAttribute] Offset: FFFFFFFF
  class IEncoder/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // public System.String get_Error()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Error();
    // public System.Void set_Output(System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Output(::System::Action_2<::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags>* value);
    // public System.ArraySegment`1<System.Byte> DequeueOutput(out Photon.Voice.FrameFlags flags)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ArraySegment_1<uint8_t> DequeueOutput(ByRef<::Photon::Voice::FrameFlags> flags);
    // public System.Void EndOfStream()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EndOfStream();
    // public I GetPlatformAPI()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class I>
    I GetPlatformAPI() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::IEncoder::GetPlatformAPI");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::IEncoder*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<I>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<I, false>(this, ___generic__method);
    }
  }; // Photon.Voice.IEncoder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::IEncoder::get_Error
// Il2CppName: get_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::IEncoder::*)()>(&Photon::Voice::IEncoder::get_Error)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IEncoder*), "get_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::IEncoder::set_Output
// Il2CppName: set_Output
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::IEncoder::*)(::System::Action_2<::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags>*)>(&Photon::Voice::IEncoder::set_Output)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ArraySegment`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")}), ::il2cpp_utils::GetClassFromName("Photon.Voice", "FrameFlags")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IEncoder*), "set_Output", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::IEncoder::DequeueOutput
// Il2CppName: DequeueOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ArraySegment_1<uint8_t> (Photon::Voice::IEncoder::*)(ByRef<::Photon::Voice::FrameFlags>)>(&Photon::Voice::IEncoder::DequeueOutput)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("Photon.Voice", "FrameFlags")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IEncoder*), "DequeueOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: Photon::Voice::IEncoder::EndOfStream
// Il2CppName: EndOfStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::IEncoder::*)()>(&Photon::Voice::IEncoder::EndOfStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IEncoder*), "EndOfStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::IEncoder::GetPlatformAPI
// Il2CppName: GetPlatformAPI
// Cannot write MetadataGetter for generic methods!
