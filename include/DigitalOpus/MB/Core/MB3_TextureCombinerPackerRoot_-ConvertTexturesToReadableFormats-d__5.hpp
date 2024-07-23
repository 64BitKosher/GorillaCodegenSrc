// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot
#include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerRoot.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline
#include "DigitalOpus/MB/Core/MB3_TextureCombinerPipeline.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB2_EditorMethodsInterface
  class MB2_EditorMethodsInterface;
  // Forward declaring type: ProgressUpdateDelegate
  class ProgressUpdateDelegate;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerRoot/<ConvertTexturesToReadableFormats>d__5");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot/<ConvertTexturesToReadableFormats>d__5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data
    // Size: 0x8
    // Offset: 0x20
    ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*) == 0x8);
    // public DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods
    // Size: 0x8
    // Offset: 0x28
    ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*) == 0x8);
    // public DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo
    // Size: 0x8
    // Offset: 0x30
    ::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::ProgressUpdateDelegate*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*& dyn_data();
    // Get instance field reference: public DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& dyn_textureEditorMethods();
    // Get instance field reference: public DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& dyn_progressInfo();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x43DD3E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x43DD420
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x43DD424
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x43DD760
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x43DD768
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x43DD7A0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot/<ConvertTexturesToReadableFormats>d__5
  #pragma pack(pop)
  static check_size<sizeof(MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5), 48 + sizeof(::DigitalOpus::MB::Core::ProgressUpdateDelegate*)> __DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_$ConvertTexturesToReadableFormats$d__5SizeCheck;
  static_assert(sizeof(MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot::$ConvertTexturesToReadableFormats$d__5*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};