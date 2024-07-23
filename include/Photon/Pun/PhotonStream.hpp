// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonStream
  class PhotonStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::PhotonStream);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonStream*, "Photon.Pun", "PhotonStream");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.PhotonStream
  // [TokenAttribute] Offset: FFFFFFFF
  class PhotonStream : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<System.Object> writeData
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Il2CppObject*>* writeData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // private System.Object[] readData
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> readData;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Int32 currentItem
    // Size: 0x4
    // Offset: 0x20
    int currentItem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <IsWriting>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool IsWriting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<System.Object> writeData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn_writeData();
    // Get instance field reference: private System.Object[] readData
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_readData();
    // Get instance field reference: private System.Int32 currentItem
    [[deprecated("Use field access instead!")]] int& dyn_currentItem();
    // Get instance field reference: private System.Boolean <IsWriting>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsWriting$k__BackingField();
    // public System.Boolean get_IsWriting()
    // Offset: 0x4A47AF4
    bool get_IsWriting();
    // private System.Void set_IsWriting(System.Boolean value)
    // Offset: 0x4A47AFC
    void set_IsWriting(bool value);
    // public System.Boolean get_IsReading()
    // Offset: 0x4A47B08
    bool get_IsReading();
    // public System.Int32 get_Count()
    // Offset: 0x4A426BC
    int get_Count();
    // public System.Void .ctor(System.Boolean write, System.Object[] incomingData)
    // Offset: 0x4A33284
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotonStream* New_ctor(bool write, ::ArrayW<::Il2CppObject*> incomingData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::PhotonStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotonStream*, creationType>(write, incomingData)));
    }
    // public System.Void SetReadStream(System.Object[] incomingData, System.Int32 pos)
    // Offset: 0x4A42E4C
    void SetReadStream(::ArrayW<::Il2CppObject*> incomingData, int pos);
    // System.Void SetWriteStream(System.Collections.Generic.List`1<System.Object> newWriteData, System.Int32 pos)
    // Offset: 0x4A42370
    void SetWriteStream(::System::Collections::Generic::List_1<::Il2CppObject*>* newWriteData, int pos);
    // System.Collections.Generic.List`1<System.Object> GetWriteStream()
    // Offset: 0x4A47B18
    ::System::Collections::Generic::List_1<::Il2CppObject*>* GetWriteStream();
    // System.Void ResetWriteStream()
    // Offset: 0x4A47B20
    void ResetWriteStream();
    // public System.Object ReceiveNext()
    // Offset: 0x4A45DE4
    ::Il2CppObject* ReceiveNext();
    // public System.Object PeekNext()
    // Offset: 0x4A47B90
    ::Il2CppObject* PeekNext();
    // public System.Void SendNext(System.Object obj)
    // Offset: 0x4A4249C
    void SendNext(::Il2CppObject* obj);
    // public System.Boolean CopyToListAndClear(System.Collections.Generic.List`1<System.Object> target)
    // Offset: 0x4A47C38
    bool CopyToListAndClear(::System::Collections::Generic::List_1<::Il2CppObject*>* target);
    // public System.Object[] ToArray()
    // Offset: 0x4A47CDC
    ::ArrayW<::Il2CppObject*> ToArray();
    // public System.Void Serialize(ref System.Boolean myBool)
    // Offset: 0x4A47D44
    void Serialize(ByRef<bool> myBool);
    // public System.Void Serialize(ref System.Int32 myInt)
    // Offset: 0x4A47E94
    void Serialize(ByRef<int> myInt);
    // public System.Void Serialize(ref System.String value)
    // Offset: 0x4A47FDC
    void Serialize(ByRef<::StringW> value);
    // public System.Void Serialize(ref System.Char value)
    // Offset: 0x4A48124
    void Serialize(ByRef<::Il2CppChar> value);
    // public System.Void Serialize(ref System.Int16 value)
    // Offset: 0x4A4826C
    void Serialize(ByRef<int16_t> value);
    // public System.Void Serialize(ref System.Single obj)
    // Offset: 0x4A483B4
    void Serialize(ByRef<float> obj);
    // public System.Void Serialize(ref Photon.Realtime.Player obj)
    // Offset: 0x4A484FC
    void Serialize(ByRef<::Photon::Realtime::Player*> obj);
    // public System.Void Serialize(ref UnityEngine.Vector3 obj)
    // Offset: 0x4A4867C
    void Serialize(ByRef<::UnityEngine::Vector3> obj);
    // public System.Void Serialize(ref UnityEngine.Vector2 obj)
    // Offset: 0x4A487D4
    void Serialize(ByRef<::UnityEngine::Vector2> obj);
    // public System.Void Serialize(ref UnityEngine.Quaternion obj)
    // Offset: 0x4A4891C
    void Serialize(ByRef<::UnityEngine::Quaternion> obj);
  }; // Photon.Pun.PhotonStream
  #pragma pack(pop)
  static check_size<sizeof(PhotonStream), 36 + sizeof(bool)> __Photon_Pun_PhotonStreamSizeCheck;
  static_assert(sizeof(PhotonStream) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::get_IsWriting
// Il2CppName: get_IsWriting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Pun::PhotonStream::*)()>(&Photon::Pun::PhotonStream::get_IsWriting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "get_IsWriting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::set_IsWriting
// Il2CppName: set_IsWriting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(bool)>(&Photon::Pun::PhotonStream::set_IsWriting)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "set_IsWriting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::get_IsReading
// Il2CppName: get_IsReading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Pun::PhotonStream::*)()>(&Photon::Pun::PhotonStream::get_IsReading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "get_IsReading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Pun::PhotonStream::*)()>(&Photon::Pun::PhotonStream::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::SetReadStream
// Il2CppName: SetReadStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(::ArrayW<::Il2CppObject*>, int)>(&Photon::Pun::PhotonStream::SetReadStream)> {
  static const MethodInfo* get() {
    static auto* incomingData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "SetReadStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{incomingData, pos});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::SetWriteStream
// Il2CppName: SetWriteStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(::System::Collections::Generic::List_1<::Il2CppObject*>*, int)>(&Photon::Pun::PhotonStream::SetWriteStream)> {
  static const MethodInfo* get() {
    static auto* newWriteData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "SetWriteStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newWriteData, pos});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::GetWriteStream
// Il2CppName: GetWriteStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Il2CppObject*>* (Photon::Pun::PhotonStream::*)()>(&Photon::Pun::PhotonStream::GetWriteStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "GetWriteStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::ResetWriteStream
// Il2CppName: ResetWriteStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)()>(&Photon::Pun::PhotonStream::ResetWriteStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "ResetWriteStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::ReceiveNext
// Il2CppName: ReceiveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Photon::Pun::PhotonStream::*)()>(&Photon::Pun::PhotonStream::ReceiveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "ReceiveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::PeekNext
// Il2CppName: PeekNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Photon::Pun::PhotonStream::*)()>(&Photon::Pun::PhotonStream::PeekNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "PeekNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::SendNext
// Il2CppName: SendNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(::Il2CppObject*)>(&Photon::Pun::PhotonStream::SendNext)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "SendNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::CopyToListAndClear
// Il2CppName: CopyToListAndClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Pun::PhotonStream::*)(::System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Photon::Pun::PhotonStream::CopyToListAndClear)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "CopyToListAndClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (Photon::Pun::PhotonStream::*)()>(&Photon::Pun::PhotonStream::ToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(ByRef<bool>)>(&Photon::Pun::PhotonStream::Serialize)> {
  static const MethodInfo* get() {
    static auto* myBool = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{myBool});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(ByRef<int>)>(&Photon::Pun::PhotonStream::Serialize)> {
  static const MethodInfo* get() {
    static auto* myInt = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{myInt});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(ByRef<::StringW>)>(&Photon::Pun::PhotonStream::Serialize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(ByRef<::Il2CppChar>)>(&Photon::Pun::PhotonStream::Serialize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(ByRef<int16_t>)>(&Photon::Pun::PhotonStream::Serialize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(ByRef<float>)>(&Photon::Pun::PhotonStream::Serialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(ByRef<::Photon::Realtime::Player*>)>(&Photon::Pun::PhotonStream::Serialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(ByRef<::UnityEngine::Vector3>)>(&Photon::Pun::PhotonStream::Serialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(ByRef<::UnityEngine::Vector2>)>(&Photon::Pun::PhotonStream::Serialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonStream::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonStream::*)(ByRef<::UnityEngine::Quaternion>)>(&Photon::Pun::PhotonStream::Serialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonStream*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};