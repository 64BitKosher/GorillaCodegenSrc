// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombiner
#include "DigitalOpus/MB/Core/MB3_TextureCombiner.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: CombineTexturesIntoAtlasesCoroutineResult
  class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult;
  // Forward declaring type: ProgressUpdateDelegate
  class ProgressUpdateDelegate;
  // Forward declaring type: MB2_EditorMethodsInterface
  class MB2_EditorMethodsInterface;
  // Forward declaring type: AtlasPackingResult
  class AtlasPackingResult;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MB_AtlasesAndRects
  class MB_AtlasesAndRects;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81*, "DigitalOpus.MB.Core", "MB3_TextureCombiner/<CombineTexturesIntoAtlasesCoroutine>d__81");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x7A
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombiner/<CombineTexturesIntoAtlasesCoroutine>d__81
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult coroutineResult
    // Size: 0x8
    // Offset: 0x20
    ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* coroutineResult;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*) == 0x8);
    // public System.Single maxTimePerFrame
    // Size: 0x4
    // Offset: 0x28
    float maxTimePerFrame;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxTimePerFrame and: $$4__this
    char __padding3[0x4] = {};
    // public DigitalOpus.MB.Core.MB3_TextureCombiner <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::DigitalOpus::MB::Core::MB3_TextureCombiner* $$4__this;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner*) == 0x8);
    // public DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo
    // Size: 0x8
    // Offset: 0x38
    ::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::ProgressUpdateDelegate*) == 0x8);
    // public MB_AtlasesAndRects resultAtlasesAndRects
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::MB_AtlasesAndRects* resultAtlasesAndRects;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MB_AtlasesAndRects*) == 0x8);
    // public UnityEngine.Material resultMaterial
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Material* resultMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> objsToMesh
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Material> allowedMaterialsFilter
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::UnityEngine::Material*>* allowedMaterialsFilter;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Material*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> texPropsToIgnore
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::StringW>* texPropsToIgnore;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods
    // Size: 0x8
    // Offset: 0x68
    ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*) == 0x8);
    // public System.Collections.Generic.List`1<DigitalOpus.MB.Core.AtlasPackingResult> packingResults
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* packingResults;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*) == 0x8);
    // public System.Boolean onlyPackRects
    // Size: 0x1
    // Offset: 0x78
    bool onlyPackRects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean splitAtlasWhenPackingIfTooBig
    // Size: 0x1
    // Offset: 0x79
    bool splitAtlasWhenPackingIfTooBig;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult coroutineResult
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& dyn_coroutineResult();
    // Get instance field reference: public System.Single maxTimePerFrame
    [[deprecated("Use field access instead!")]] float& dyn_maxTimePerFrame();
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_TextureCombiner <>4__this
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_TextureCombiner*& dyn_$$4__this();
    // Get instance field reference: public DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& dyn_progressInfo();
    // Get instance field reference: public MB_AtlasesAndRects resultAtlasesAndRects
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MB_AtlasesAndRects*& dyn_resultAtlasesAndRects();
    // Get instance field reference: public UnityEngine.Material resultMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_resultMaterial();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> objsToMesh
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_objsToMesh();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Material> allowedMaterialsFilter
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& dyn_allowedMaterialsFilter();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> texPropsToIgnore
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_texPropsToIgnore();
    // Get instance field reference: public DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& dyn_textureEditorMethods();
    // Get instance field reference: public System.Collections.Generic.List`1<DigitalOpus.MB.Core.AtlasPackingResult> packingResults
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*& dyn_packingResults();
    // Get instance field reference: public System.Boolean onlyPackRects
    [[deprecated("Use field access instead!")]] bool& dyn_onlyPackRects();
    // Get instance field reference: public System.Boolean splitAtlasWhenPackingIfTooBig
    [[deprecated("Use field access instead!")]] bool& dyn_splitAtlasWhenPackingIfTooBig();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x43DE1E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x43E13B4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x43E13B8
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x43E15A4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x43E15AC
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x43E15E4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // DigitalOpus.MB.Core.MB3_TextureCombiner/<CombineTexturesIntoAtlasesCoroutine>d__81
  #pragma pack(pop)
  static check_size<sizeof(MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81), 121 + sizeof(bool)> __DigitalOpus_MB_Core_MB3_TextureCombiner_$CombineTexturesIntoAtlasesCoroutine$d__81SizeCheck;
  static_assert(sizeof(MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81) == 0x7A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombiner::$CombineTexturesIntoAtlasesCoroutine$d__81*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
