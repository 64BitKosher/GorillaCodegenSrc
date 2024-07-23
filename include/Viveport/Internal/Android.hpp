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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
  // Forward declaring type: AndroidJavaClass
  class AndroidJavaClass;
}
// Completed forward declares
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Forward declaring type: Android
  class Android;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::Internal::Android);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Internal::Android*, "Viveport.Internal", "Android");
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Internal.Android
  // [TokenAttribute] Offset: FFFFFFFF
  class Android : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.AndroidJavaObject _api
    static ::UnityEngine::AndroidJavaObject* _get__api();
    // Set static field: static private UnityEngine.AndroidJavaObject _api
    static void _set__api(::UnityEngine::AndroidJavaObject* value);
    // Get static field: static private UnityEngine.AndroidJavaObject _iAPurchase
    static ::UnityEngine::AndroidJavaObject* _get__iAPurchase();
    // Set static field: static private UnityEngine.AndroidJavaObject _iAPurchase
    static void _set__iAPurchase(::UnityEngine::AndroidJavaObject* value);
    // Get static field: static private UnityEngine.AndroidJavaClass _unityPlayer
    static ::UnityEngine::AndroidJavaClass* _get__unityPlayer();
    // Set static field: static private UnityEngine.AndroidJavaClass _unityPlayer
    static void _set__unityPlayer(::UnityEngine::AndroidJavaClass* value);
    // Get static field: static private UnityEngine.AndroidJavaObject _user
    static ::UnityEngine::AndroidJavaObject* _get__user();
    // Set static field: static private UnityEngine.AndroidJavaObject _user
    static void _set__user(::UnityEngine::AndroidJavaObject* value);
    // Get static field: static private UnityEngine.AndroidJavaObject _userStats
    static ::UnityEngine::AndroidJavaObject* _get__userStats();
    // Set static field: static private UnityEngine.AndroidJavaObject _userStats
    static void _set__userStats(::UnityEngine::AndroidJavaObject* value);
    // Get static field: static private UnityEngine.AndroidJavaObject _subscription
    static ::UnityEngine::AndroidJavaObject* _get__subscription();
    // Set static field: static private UnityEngine.AndroidJavaObject _subscription
    static void _set__subscription(::UnityEngine::AndroidJavaObject* value);
    // Get static field: static private UnityEngine.AndroidJavaObject _sessionToken
    static ::UnityEngine::AndroidJavaObject* _get__sessionToken();
    // Set static field: static private UnityEngine.AndroidJavaObject _sessionToken
    static void _set__sessionToken(::UnityEngine::AndroidJavaObject* value);
    // Get static field: static private UnityEngine.AndroidJavaObject _deeplink
    static ::UnityEngine::AndroidJavaObject* _get__deeplink();
    // Set static field: static private UnityEngine.AndroidJavaObject _deeplink
    static void _set__deeplink(::UnityEngine::AndroidJavaObject* value);
    // static UnityEngine.AndroidJavaObject GetJavaAPI()
    // Offset: 0x27B8ED8
    static ::UnityEngine::AndroidJavaObject* GetJavaAPI();
    // static UnityEngine.AndroidJavaObject GetJavaUser()
    // Offset: 0x27B8FF4
    static ::UnityEngine::AndroidJavaObject* GetJavaUser();
    // static UnityEngine.AndroidJavaObject GetJavaUserStats()
    // Offset: 0x27B9108
    static ::UnityEngine::AndroidJavaObject* GetJavaUserStats();
    // static UnityEngine.AndroidJavaObject GetJavaIAPurchase()
    // Offset: 0x27B7034
    static ::UnityEngine::AndroidJavaObject* GetJavaIAPurchase();
    // static UnityEngine.AndroidJavaObject GetJavaSubscription()
    // Offset: 0x27B85F8
    static ::UnityEngine::AndroidJavaObject* GetJavaSubscription();
    // static UnityEngine.AndroidJavaObject GetJavaSessionToken()
    // Offset: 0x27B8BF0
    static ::UnityEngine::AndroidJavaObject* GetJavaSessionToken();
    // static UnityEngine.AndroidJavaObject GetDeeplink()
    // Offset: 0x27B921C
    static ::UnityEngine::AndroidJavaObject* GetDeeplink();
    // static UnityEngine.AndroidJavaClass get_UnityPlayer()
    // Offset: 0x27B9330
    static ::UnityEngine::AndroidJavaClass* get_UnityPlayer();
    // static UnityEngine.AndroidJavaObject get_CurrentActivity()
    // Offset: 0x27B93DC
    static ::UnityEngine::AndroidJavaObject* get_CurrentActivity();
    // static UnityEngine.AndroidJavaObject get_CurrentContext()
    // Offset: 0x27B7148
    static ::UnityEngine::AndroidJavaObject* get_CurrentContext();
    // public System.Void .ctor()
    // Offset: 0x27B9438
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Android* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::Internal::Android::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Android*, creationType>()));
    }
  }; // Viveport.Internal.Android
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::Internal::Android::GetJavaAPI
// Il2CppName: GetJavaAPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&Viveport::Internal::Android::GetJavaAPI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Android*), "GetJavaAPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Android::GetJavaUser
// Il2CppName: GetJavaUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&Viveport::Internal::Android::GetJavaUser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Android*), "GetJavaUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Android::GetJavaUserStats
// Il2CppName: GetJavaUserStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&Viveport::Internal::Android::GetJavaUserStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Android*), "GetJavaUserStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Android::GetJavaIAPurchase
// Il2CppName: GetJavaIAPurchase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&Viveport::Internal::Android::GetJavaIAPurchase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Android*), "GetJavaIAPurchase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Android::GetJavaSubscription
// Il2CppName: GetJavaSubscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&Viveport::Internal::Android::GetJavaSubscription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Android*), "GetJavaSubscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Android::GetJavaSessionToken
// Il2CppName: GetJavaSessionToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&Viveport::Internal::Android::GetJavaSessionToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Android*), "GetJavaSessionToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Android::GetDeeplink
// Il2CppName: GetDeeplink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&Viveport::Internal::Android::GetDeeplink)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Android*), "GetDeeplink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Android::get_UnityPlayer
// Il2CppName: get_UnityPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaClass* (*)()>(&Viveport::Internal::Android::get_UnityPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Android*), "get_UnityPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Android::get_CurrentActivity
// Il2CppName: get_CurrentActivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&Viveport::Internal::Android::get_CurrentActivity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Android*), "get_CurrentActivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Android::get_CurrentContext
// Il2CppName: get_CurrentContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&Viveport::Internal::Android::get_CurrentContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Android*), "get_CurrentContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Android::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
