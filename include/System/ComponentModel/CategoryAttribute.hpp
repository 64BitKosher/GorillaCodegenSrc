// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: CategoryAttribute
  class CategoryAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::CategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CategoryAttribute*, "System.ComponentModel", "CategoryAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.CategoryAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class CategoryAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Boolean localized
    // Size: 0x1
    // Offset: 0x10
    bool localized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: localized and: categoryValue
    char __padding0[0x7] = {};
    // private System.String categoryValue
    // Size: 0x8
    // Offset: 0x18
    ::StringW categoryValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.ComponentModel.CategoryAttribute appearance
    static ::System::ComponentModel::CategoryAttribute* _get_appearance();
    // Set static field: static private System.ComponentModel.CategoryAttribute appearance
    static void _set_appearance(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute asynchronous
    static ::System::ComponentModel::CategoryAttribute* _get_asynchronous();
    // Set static field: static private System.ComponentModel.CategoryAttribute asynchronous
    static void _set_asynchronous(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute behavior
    static ::System::ComponentModel::CategoryAttribute* _get_behavior();
    // Set static field: static private System.ComponentModel.CategoryAttribute behavior
    static void _set_behavior(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute data
    static ::System::ComponentModel::CategoryAttribute* _get_data();
    // Set static field: static private System.ComponentModel.CategoryAttribute data
    static void _set_data(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute design
    static ::System::ComponentModel::CategoryAttribute* _get_design();
    // Set static field: static private System.ComponentModel.CategoryAttribute design
    static void _set_design(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute action
    static ::System::ComponentModel::CategoryAttribute* _get_action();
    // Set static field: static private System.ComponentModel.CategoryAttribute action
    static void _set_action(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute format
    static ::System::ComponentModel::CategoryAttribute* _get_format();
    // Set static field: static private System.ComponentModel.CategoryAttribute format
    static void _set_format(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute layout
    static ::System::ComponentModel::CategoryAttribute* _get_layout();
    // Set static field: static private System.ComponentModel.CategoryAttribute layout
    static void _set_layout(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute mouse
    static ::System::ComponentModel::CategoryAttribute* _get_mouse();
    // Set static field: static private System.ComponentModel.CategoryAttribute mouse
    static void _set_mouse(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute key
    static ::System::ComponentModel::CategoryAttribute* _get_key();
    // Set static field: static private System.ComponentModel.CategoryAttribute key
    static void _set_key(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute focus
    static ::System::ComponentModel::CategoryAttribute* _get_focus();
    // Set static field: static private System.ComponentModel.CategoryAttribute focus
    static void _set_focus(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute windowStyle
    static ::System::ComponentModel::CategoryAttribute* _get_windowStyle();
    // Set static field: static private System.ComponentModel.CategoryAttribute windowStyle
    static void _set_windowStyle(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute dragDrop
    static ::System::ComponentModel::CategoryAttribute* _get_dragDrop();
    // Set static field: static private System.ComponentModel.CategoryAttribute dragDrop
    static void _set_dragDrop(::System::ComponentModel::CategoryAttribute* value);
    // Get static field: static private System.ComponentModel.CategoryAttribute defAttr
    static ::System::ComponentModel::CategoryAttribute* _get_defAttr();
    // Set static field: static private System.ComponentModel.CategoryAttribute defAttr
    static void _set_defAttr(::System::ComponentModel::CategoryAttribute* value);
    // Get instance field reference: private System.Boolean localized
    [[deprecated("Use field access instead!")]] bool& dyn_localized();
    // Get instance field reference: private System.String categoryValue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_categoryValue();
    // static public System.ComponentModel.CategoryAttribute get_Action()
    // Offset: 0x4F1AA94
    static ::System::ComponentModel::CategoryAttribute* get_Action();
    // static public System.ComponentModel.CategoryAttribute get_Appearance()
    // Offset: 0x4F1AB88
    static ::System::ComponentModel::CategoryAttribute* get_Appearance();
    // static public System.ComponentModel.CategoryAttribute get_Asynchronous()
    // Offset: 0x4F1AC4C
    static ::System::ComponentModel::CategoryAttribute* get_Asynchronous();
    // static public System.ComponentModel.CategoryAttribute get_Behavior()
    // Offset: 0x4F1AD08
    static ::System::ComponentModel::CategoryAttribute* get_Behavior();
    // static public System.ComponentModel.CategoryAttribute get_Data()
    // Offset: 0x4F1ADC4
    static ::System::ComponentModel::CategoryAttribute* get_Data();
    // static public System.ComponentModel.CategoryAttribute get_Default()
    // Offset: 0x4F1AE80
    static ::System::ComponentModel::CategoryAttribute* get_Default();
    // static public System.ComponentModel.CategoryAttribute get_Design()
    // Offset: 0x4F1AF70
    static ::System::ComponentModel::CategoryAttribute* get_Design();
    // static public System.ComponentModel.CategoryAttribute get_DragDrop()
    // Offset: 0x4F1B02C
    static ::System::ComponentModel::CategoryAttribute* get_DragDrop();
    // static public System.ComponentModel.CategoryAttribute get_Focus()
    // Offset: 0x4F1B0E8
    static ::System::ComponentModel::CategoryAttribute* get_Focus();
    // static public System.ComponentModel.CategoryAttribute get_Format()
    // Offset: 0x4F1B1A4
    static ::System::ComponentModel::CategoryAttribute* get_Format();
    // static public System.ComponentModel.CategoryAttribute get_Key()
    // Offset: 0x4F1B260
    static ::System::ComponentModel::CategoryAttribute* get_Key();
    // static public System.ComponentModel.CategoryAttribute get_Layout()
    // Offset: 0x4F1B31C
    static ::System::ComponentModel::CategoryAttribute* get_Layout();
    // static public System.ComponentModel.CategoryAttribute get_Mouse()
    // Offset: 0x4F1B3D8
    static ::System::ComponentModel::CategoryAttribute* get_Mouse();
    // static public System.ComponentModel.CategoryAttribute get_WindowStyle()
    // Offset: 0x4F1B494
    static ::System::ComponentModel::CategoryAttribute* get_WindowStyle();
    // public System.Void .ctor()
    // Offset: 0x4F1AF0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CategoryAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::CategoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CategoryAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.String category)
    // Offset: 0x4F1AB50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CategoryAttribute* New_ctor(::StringW category) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::CategoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CategoryAttribute*, creationType>(category)));
    }
    // public System.String get_Category()
    // Offset: 0x4F1B550
    ::StringW get_Category();
    // protected System.String GetLocalizedString(System.String value)
    // Offset: 0x4F1B6B8
    ::StringW GetLocalizedString(::StringW value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4F1B5A8
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4F1B698
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
    // public override System.Boolean IsDefaultAttribute()
    // Offset: 0x4F1BA34
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::IsDefaultAttribute()
    bool IsDefaultAttribute();
  }; // System.ComponentModel.CategoryAttribute
  #pragma pack(pop)
  static check_size<sizeof(CategoryAttribute), 24 + sizeof(::StringW)> __System_ComponentModel_CategoryAttributeSizeCheck;
  static_assert(sizeof(CategoryAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Action
// Il2CppName: get_Action
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Action)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Action", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Appearance
// Il2CppName: get_Appearance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Appearance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Appearance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Asynchronous
// Il2CppName: get_Asynchronous
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Asynchronous)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Asynchronous", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Behavior
// Il2CppName: get_Behavior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Behavior)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Behavior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Design
// Il2CppName: get_Design
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Design)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Design", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_DragDrop
// Il2CppName: get_DragDrop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_DragDrop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_DragDrop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Focus
// Il2CppName: get_Focus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Focus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Focus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Format
// Il2CppName: get_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Layout
// Il2CppName: get_Layout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Layout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Layout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Mouse
// Il2CppName: get_Mouse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_Mouse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Mouse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_WindowStyle
// Il2CppName: get_WindowStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&System::ComponentModel::CategoryAttribute::get_WindowStyle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_WindowStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::get_Category
// Il2CppName: get_Category
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::CategoryAttribute::*)()>(&System::ComponentModel::CategoryAttribute::get_Category)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "get_Category", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::GetLocalizedString
// Il2CppName: GetLocalizedString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::CategoryAttribute::*)(::StringW)>(&System::ComponentModel::CategoryAttribute::GetLocalizedString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "GetLocalizedString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::CategoryAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::CategoryAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::CategoryAttribute::*)()>(&System::ComponentModel::CategoryAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::CategoryAttribute::IsDefaultAttribute
// Il2CppName: IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::CategoryAttribute::*)()>(&System::ComponentModel::CategoryAttribute::IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CategoryAttribute*), "IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
