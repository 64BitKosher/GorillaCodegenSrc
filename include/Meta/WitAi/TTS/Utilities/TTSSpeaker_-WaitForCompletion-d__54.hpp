// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.TTS.Utilities.TTSSpeaker
#include "Meta/WitAi/TTS/Utilities/TTSSpeaker.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`2<T0, T1>
  template<typename T0, typename T1>
  class UnityAction_2;
}
// Forward declaring namespace: Meta::WitAi::TTS::Data
namespace Meta::WitAi::TTS::Data {
  // Forward declaring type: TTSClipData
  class TTSClipData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<WaitForCompletion>d__54");
// Type namespace: Meta.WitAi.TTS.Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__54
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TTSSpeaker::$WaitForCompletion$d__54 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Collections.Generic.List`1<Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData> requestData
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData>* requestData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData>*) == 0x8);
    // public Meta.WitAi.TTS.Utilities.TTSSpeaker <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::Meta::WitAi::TTS::Utilities::TTSSpeaker* $$4__this;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker*) == 0x8);
    // private System.Int32 <count>5__2
    // Size: 0x4
    // Offset: 0x30
    int $count$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $count$5__2 and: $onComplete$5__3
    char __padding4[0x4] = {};
    // private UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData> <onComplete>5__3
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Events::UnityAction_2<::Meta::WitAi::TTS::Utilities::TTSSpeaker*, ::Meta::WitAi::TTS::Data::TTSClipData*>* $onComplete$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction_2<::Meta::WitAi::TTS::Utilities::TTSSpeaker*, ::Meta::WitAi::TTS::Data::TTSClipData*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.Collections.Generic.List`1<Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData> requestData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData>*& dyn_requestData();
    // Get instance field reference: public Meta.WitAi.TTS.Utilities.TTSSpeaker <>4__this
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeaker*& dyn_$$4__this();
    // Get instance field reference: private System.Int32 <count>5__2
    [[deprecated("Use field access instead!")]] int& dyn_$count$5__2();
    // Get instance field reference: private UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData> <onComplete>5__3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityAction_2<::Meta::WitAi::TTS::Utilities::TTSSpeaker*, ::Meta::WitAi::TTS::Data::TTSClipData*>*& dyn_$onComplete$5__3();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x445D244
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSSpeaker::$WaitForCompletion$d__54* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSSpeaker::$WaitForCompletion$d__54*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4462974
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x4462978
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x4462C70
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x4462C78
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x4462CB0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__54
  #pragma pack(pop)
  static check_size<sizeof(TTSSpeaker::$WaitForCompletion$d__54), 56 + sizeof(::UnityEngine::Events::UnityAction_2<::Meta::WitAi::TTS::Utilities::TTSSpeaker*, ::Meta::WitAi::TTS::Data::TTSClipData*>*)> __Meta_WitAi_TTS_Utilities_TTSSpeaker_$WaitForCompletion$d__54SizeCheck;
  static_assert(sizeof(TTSSpeaker::$WaitForCompletion$d__54) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$WaitForCompletion$d__54*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
