// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Input.DataSource`1
#include "Oculus/Interaction/Input/DataSource_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: ICopyFrom`1<TSelfType>
  template<typename TSelfType>
  class ICopyFrom_1;
  // Skipping declaration: IDataSource`1 because it is already included!
  // Skipping declaration: IDataSource because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: DataModifier`1<TData>
  template<typename TData>
  class DataModifier_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Interaction::Input::DataModifier_1, "Oculus.Interaction.Input", "DataModifier`1");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.Input.DataModifier`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TData>
  class DataModifier_1 : public ::Oculus::Interaction::Input::DataSource_1<TData> {
    public:
    public:
    // protected UnityEngine.Object _iModifyDataFromSourceMono
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Object* iModifyDataFromSourceMono;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IDataSource`1<TData> _modifyDataFromSource
    // Size: 0x8
    // Offset: 0x0
    ::Oculus::Interaction::Input::IDataSource_1<TData>* modifyDataFromSource;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IDataSource_1<TData>*) == 0x8);
    // private System.Boolean _applyModifier
    // Size: 0x1
    // Offset: 0x0
    bool applyModifier;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private TData _thisDataAsset
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TData thisDataAsset;
    // private TData _currentDataAsset
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TData currentDataAsset;
    public:
    // Autogenerated static field getter
    // Get static field: static private readonly TData <InvalidAsset>k__BackingField
    static TData _get_$InvalidAsset$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::_get_$InvalidAsset$k__BackingField");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<TData>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModifier_1<TData>*>::get(), "<InvalidAsset>k__BackingField")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly TData <InvalidAsset>k__BackingField
    static void _set_$InvalidAsset$k__BackingField(TData value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::_set_$InvalidAsset$k__BackingField");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModifier_1<TData>*>::get(), "<InvalidAsset>k__BackingField", value)));
    }
    // Autogenerated instance field getter
    // Get instance field: protected UnityEngine.Object _iModifyDataFromSourceMono
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__iModifyDataFromSourceMono() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::dyn__iModifyDataFromSourceMono");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_iModifyDataFromSourceMono"))->offset;
      return *reinterpret_cast<::UnityEngine::Object**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Oculus.Interaction.Input.IDataSource`1<TData> _modifyDataFromSource
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IDataSource_1<TData>*& dyn__modifyDataFromSource() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::dyn__modifyDataFromSource");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_modifyDataFromSource"))->offset;
      return *reinterpret_cast<::Oculus::Interaction::Input::IDataSource_1<TData>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean _applyModifier
    [[deprecated("Use field access instead!")]] bool& dyn__applyModifier() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::dyn__applyModifier");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_applyModifier"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TData _thisDataAsset
    [[deprecated("Use field access instead!")]] TData& dyn__thisDataAsset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::dyn__thisDataAsset");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_thisDataAsset"))->offset;
      return *reinterpret_cast<TData*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TData _currentDataAsset
    [[deprecated("Use field access instead!")]] TData& dyn__currentDataAsset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::dyn__currentDataAsset");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_currentDataAsset"))->offset;
      return *reinterpret_cast<TData*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // static private TData get_InvalidAsset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static TData get_InvalidAsset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::get_InvalidAsset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModifier_1<TData>*>::get(), "get_InvalidAsset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TData, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public Oculus.Interaction.Input.IDataSource`1<TData> get_ModifyDataFromSource()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Oculus::Interaction::Input::IDataSource_1<TData>* get_ModifyDataFromSource() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::get_ModifyDataFromSource");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::DataModifier_1<TData>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Oculus::Interaction::Input::IDataSource_1<TData>*, false>(this, ___internal__method);
    }
    // public System.Void ResetSources(Oculus.Interaction.Input.IDataSource`1<TData> modifyDataFromSource, Oculus.Interaction.Input.IDataSource updateAfter, Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> updateMode)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResetSources(::Oculus::Interaction::Input::IDataSource_1<TData>* modifyDataFromSource, ::Oculus::Interaction::Input::IDataSource* updateAfter, typename ::Oculus::Interaction::Input::DataSource_1<TData>::UpdateModeFlags updateMode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::ResetSources");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ResetSources", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(modifyDataFromSource), ::il2cpp_utils::ExtractType(updateAfter), ::il2cpp_utils::ExtractType(updateMode)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, modifyDataFromSource, updateAfter, updateMode);
    }
    // protected System.Void Apply(TData data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Apply(TData data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::Apply");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::DataModifier_1<TData>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, data);
    }
    // public System.Void InjectAllDataModifier(Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> updateMode, Oculus.Interaction.Input.IDataSource updateAfter, Oculus.Interaction.Input.IDataSource`1<TData> modifyDataFromSource, System.Boolean applyModifier)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InjectAllDataModifier(typename ::Oculus::Interaction::Input::DataSource_1<TData>::UpdateModeFlags updateMode, ::Oculus::Interaction::Input::IDataSource* updateAfter, ::Oculus::Interaction::Input::IDataSource_1<TData>* modifyDataFromSource, bool applyModifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::InjectAllDataModifier");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InjectAllDataModifier", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(updateMode), ::il2cpp_utils::ExtractType(updateAfter), ::il2cpp_utils::ExtractType(modifyDataFromSource), ::il2cpp_utils::ExtractType(applyModifier)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, updateMode, updateAfter, modifyDataFromSource, applyModifier);
    }
    // public System.Void InjectModifyDataFromSource(Oculus.Interaction.Input.IDataSource`1<TData> modifyDataFromSource)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InjectModifyDataFromSource(::Oculus::Interaction::Input::IDataSource_1<TData>* modifyDataFromSource) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::InjectModifyDataFromSource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InjectModifyDataFromSource", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(modifyDataFromSource)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, modifyDataFromSource);
    }
    // public System.Void InjectApplyModifier(System.Boolean applyModifier)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InjectApplyModifier(bool applyModifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::InjectApplyModifier");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InjectApplyModifier", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(applyModifier)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, applyModifier);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModifier_1<TData>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // private System.Void <Start>b__17_0()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $Start$b__17_0() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::<Start>b__17_0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Start>b__17_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected override TData get_DataAsset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Interaction.Input.DataSource`1
    // Base method: TData DataSource_1::get_DataAsset()
    TData get_DataAsset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::get_DataAsset");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::DataSource_1<TData>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TData, false>(this, ___internal__method);
    }
    // public override System.Int32 get_CurrentDataVersion()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Interaction.Input.DataSource`1
    // Base method: System.Int32 DataSource_1::get_CurrentDataVersion()
    int get_CurrentDataVersion() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::get_CurrentDataVersion");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::DataSource_1<TData>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // protected override System.Void UpdateData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Interaction.Input.DataSource`1
    // Base method: System.Void DataSource_1::UpdateData()
    void UpdateData() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::UpdateData");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::DataSource_1<TData>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected override System.Void Start()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Interaction.Input.DataSource`1
    // Base method: System.Void DataSource_1::Start()
    void Start() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::Start");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::DataSource_1<TData>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Interaction.Input.DataSource`1
    // Base method: System.Void DataSource_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataModifier_1<TData>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::DataModifier_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataModifier_1<TData>*, creationType>()));
    }
  }; // Oculus.Interaction.Input.DataModifier`1
  // Could not write size check! Type: Oculus.Interaction.Input.DataModifier`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
