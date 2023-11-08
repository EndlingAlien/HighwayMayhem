#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<GameModeSO>
struct List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<GameModeSO>
struct Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// GameModeSO[]
struct GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// ModePersist[]
struct ModePersistU5BU5D_t3FEC1849B7D41B05055DE188339BC7A062179D90;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// RotateWheels[]
struct RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0;
// SavedData[]
struct SavedDataU5BU5D_tB0AD81204AA3E4D403F70B631949BA52BDA47098;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DeathHandler
struct DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DeleteParticle
struct DeleteParticle_tBFCE9D277AD4D66B6F5FA43BCCA5242C079BB7EC;
// DespawnObject
struct DespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0;
// DetectBullets
struct DetectBullets_tCCB923CEB91BFE50AF6D5BB3F8A56BC61F5DB331;
// DetectCollisions
struct DetectCollisions_tBBA78C3D5C2754339AC0A4568335E825A2ECBE8E;
// FollowPlayer
struct FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327;
// GameModeController
struct GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A;
// GameModeSO
struct GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ModePersist
struct ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveOnHighway
struct MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectSpawner
struct ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RepeatHighway
struct RepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79;
// RotateWheels
struct RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SavedData
struct SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C;
// ScoreKeeper
struct ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// DeleteParticle/<Delete>d__1
struct U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// ObjectSpawner/<RangeRandomizer>d__18
struct U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB;
// PlayerController/<BulletCooldown>d__38
struct U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35;
// SavedData/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral099B0CB25DE39FDBECC7EC35C102D4BD3305EA11;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB645EA85B80282F13438ABF6734989E6521741;
IL2CPP_EXTERN_C String_t* _stringLiteral0DA364C5509083DB04203B66C39AAF8FC56A2FCA;
IL2CPP_EXTERN_C String_t* _stringLiteral0E466F59AFF9FCCC2EDF21E09D88C797FB8067F9;
IL2CPP_EXTERN_C String_t* _stringLiteral12B9D5E3B209C878FED546DB16F1C1004DFF8DD3;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral1B935DE8D8A22A4E05EDA9A126002FFC4084F3EF;
IL2CPP_EXTERN_C String_t* _stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A;
IL2CPP_EXTERN_C String_t* _stringLiteral34C62C0EA9964074E2383B62B1E943BBA2405B92;
IL2CPP_EXTERN_C String_t* _stringLiteral46FD867EEBE1CC289A6470816910278798C5CF08;
IL2CPP_EXTERN_C String_t* _stringLiteral4ADAA6EEE074D90049E75B8FBCAFF5599C5D1F29;
IL2CPP_EXTERN_C String_t* _stringLiteral503CFF5146805BD5E5845E74F4630ED095A8F005;
IL2CPP_EXTERN_C String_t* _stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB;
IL2CPP_EXTERN_C String_t* _stringLiteral5D1AB0E992E660615D993190955E1843B07FA77C;
IL2CPP_EXTERN_C String_t* _stringLiteral63E28A159617CF311BC1D119F3DA19395EAD5EEC;
IL2CPP_EXTERN_C String_t* _stringLiteral65A5B1255B26233FE1FC974B833C854CEE786440;
IL2CPP_EXTERN_C String_t* _stringLiteral68968B7B61D59491D6425029DFC0BEE286926FF7;
IL2CPP_EXTERN_C String_t* _stringLiteral6F0FF7C92408FD68085CBC2A6394CD2B5705F703;
IL2CPP_EXTERN_C String_t* _stringLiteral72D9A51F17240E5AB1F6781D0C99EAE5FC6C084F;
IL2CPP_EXTERN_C String_t* _stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDF0CDA340CA6418DEC56D0EAAE6DAA44BC7B6C;
IL2CPP_EXTERN_C String_t* _stringLiteral83D2F031ABC5740B34509DE79CF4B90F814BF8C6;
IL2CPP_EXTERN_C String_t* _stringLiteral8D42C556B0927D392360FD542152835D87F7D1A0;
IL2CPP_EXTERN_C String_t* _stringLiteral951415F9BEA181204E0CF84D8A031B14030F60D4;
IL2CPP_EXTERN_C String_t* _stringLiteral98BAE935753D7F6819F83E94E9BA3A83FD7D108B;
IL2CPP_EXTERN_C String_t* _stringLiteral9B0787F0EEE8A3166CB4A40A69EEC1662E62F8F7;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralA117248972D97717D001B12BB39193CC877DE611;
IL2CPP_EXTERN_C String_t* _stringLiteralA341B98A9A8954ED89D12EA12F99F43D3A7081A1;
IL2CPP_EXTERN_C String_t* _stringLiteralA568342354134F2C1750F573FBEEE8A799E523EB;
IL2CPP_EXTERN_C String_t* _stringLiteralAB90DFED03453BE200AD750C6467CE2C13F1DCE8;
IL2CPP_EXTERN_C String_t* _stringLiteralB7A57E525CFD9267FB80BF60EBC8042718A04BE0;
IL2CPP_EXTERN_C String_t* _stringLiteralBA51D1739B21CFC417EA41091B04A3B8CEC730C5;
IL2CPP_EXTERN_C String_t* _stringLiteralBE8B7D8B1118CC392A73D29BBEA293B6D5FF2976;
IL2CPP_EXTERN_C String_t* _stringLiteralC3052E910402145F6BE0EE5080DA81D71E93129C;
IL2CPP_EXTERN_C String_t* _stringLiteralC93DE711C27E711CBBB8545BB77856B62320F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralCCDF22F0BA1FC534FC6656104D7D41A8D396BCE5;
IL2CPP_EXTERN_C String_t* _stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E;
IL2CPP_EXTERN_C String_t* _stringLiteralD4057E3FE03751881EC1181AD006623717064F80;
IL2CPP_EXTERN_C String_t* _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
IL2CPP_EXTERN_C String_t* _stringLiteralE3E1CF5DC0D4C4ECDF3BB121DE417485EF312F4B;
IL2CPP_EXTERN_C String_t* _stringLiteralE55D03E15CFD849C6369DD407E889D80EAEB401A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712_m6DF3A32D4E2D984F2406990CC83928FDCCF7258F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4DCF23FA32BC5B8AD285EB6595CBDF2A680BF533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m154143BDC6445669EC31BBB060C8C650CF25BBF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDA4ED016AC045E16739ED8BA685617ADEC39DBEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m742B95F9AD4B4B471B3D8C08FF3997B6BD91D686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mCBE7D7807A8E970F710981022178C0902B75346F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD587A3E317B3D9B63D16DA6B2C63C4DBD43256E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0_mFF57B46902C1E6C60D7E338923366AE0016208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m5A66E49CFB8F2476BF23BAB1F3E5AC33CD950A35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisRepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79_m4AE1F97D7B705D2DA0DF3FDBA69FCA967B7283E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C_m69AFCA2C8FBA461DB95D0A875EF2F0844A60E798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m9BE97E6A5F130428F623F9DEA10974EC0CEE11C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisRotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA_mA10F5C66740D16314FB1DB516A5C77A323EF7266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisSavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C_m537C7E60B4B214649ED2555B75B1E42AA4BA30A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m2A505362A7EA975565D34CF2BFEFEBAF54A2AE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m66E77B1857FCD72E1561F5A21795B80950DFB77E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBulletCooldownU3Ed__38_System_Collections_IEnumerator_Reset_m47F842C9A57B4A592132CD39BCE677433536308F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeleteU3Ed__1_System_Collections_IEnumerator_Reset_mA305C15DA79264F46183CDD8BADD2FA7C7256632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRangeRandomizerU3Ed__18_System_Collections_IEnumerator_Reset_mDDCDCF2B04BD029AC67F6FFEB1AB741398864A43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CCanUnlockGamemodeU3Eb__0_m7CC2126D93EE1C1FF460F83BC812B279A5DBCF95_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ModePersistU5BU5D_t3FEC1849B7D41B05055DE188339BC7A062179D90;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0;
struct SavedDataU5BU5D_tB0AD81204AA3E4D403F70B631949BA52BDA47098;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____dictionary_0;
};

// System.Collections.Generic.List`1<GameModeSO>
struct List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// DeleteParticle/<Delete>d__1
struct U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0  : public RuntimeObject
{
	// System.Int32 DeleteParticle/<Delete>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DeleteParticle/<Delete>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DeleteParticle DeleteParticle/<Delete>d__1::<>4__this
	DeleteParticle_tBFCE9D277AD4D66B6F5FA43BCCA5242C079BB7EC* ___U3CU3E4__this_2;
};

// ObjectSpawner/<RangeRandomizer>d__18
struct U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB  : public RuntimeObject
{
	// System.Int32 ObjectSpawner/<RangeRandomizer>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ObjectSpawner/<RangeRandomizer>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ObjectSpawner ObjectSpawner/<RangeRandomizer>d__18::<>4__this
	ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ___U3CU3E4__this_2;
};

// PlayerController/<BulletCooldown>d__38
struct U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35  : public RuntimeObject
{
	// System.Int32 PlayerController/<BulletCooldown>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<BulletCooldown>d__38::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<BulletCooldown>d__38::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// SavedData/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3  : public RuntimeObject
{
	// System.String SavedData/<>c__DisplayClass8_0::modeToUnlock
	String_t* ___modeToUnlock_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
struct Enumerator_t0EF9FB8013961DF612AC6D349B739450CA287820 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>
struct Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Predicate`1<GameModeSO>
struct Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GameModeSO
struct GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GameModeSO::requiredModesAndPoints
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___requiredModesAndPoints_4;
	// System.String GameModeSO::gamemodeName
	String_t* ___gamemodeName_5;
	// System.Int32 GameModeSO::requiredPoints
	int32_t ___requiredPoints_6;
	// System.String GameModeSO::requiredMode
	String_t* ___requiredMode_7;
	// System.Boolean GameModeSO::isGameModeUnlocked
	bool ___isGameModeUnlocked_8;
	// System.Boolean GameModeSO::hasMoreThanOneRequirement
	bool ___hasMoreThanOneRequirement_9;
	// System.Collections.Generic.List`1<System.String> GameModeSO::RequiredModes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___RequiredModes_10;
	// System.Collections.Generic.List`1<System.Int32> GameModeSO::RequiredPoints
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___RequiredPoints_11;
	// System.Single GameModeSO::highwaySpeed
	float ___highwaySpeed_12;
	// System.Single GameModeSO::obstacleSpeed
	float ___obstacleSpeed_13;
	// System.Single GameModeSO::obstacleSpawnDelay
	float ___obstacleSpawnDelay_14;
	// System.Single GameModeSO::playerSpeed
	float ___playerSpeed_15;
	// System.Single GameModeSO::turretSpeed
	float ___turretSpeed_16;
	// System.Boolean GameModeSO::playerHasHealth
	bool ___playerHasHealth_17;
	// System.Boolean GameModeSO::playerHasNewScale
	bool ___playerHasNewScale_18;
	// System.Boolean GameModeSO::playerHasBullets
	bool ___playerHasBullets_19;
	// System.Single GameModeSO::playerHealth
	float ___playerHealth_20;
	// System.Single GameModeSO::playerScale
	float ___playerScale_21;
	// System.Single GameModeSO::bulletSpeed
	float ___bulletSpeed_22;
	// System.Single GameModeSO::cooldownAmount
	float ___cooldownAmount_23;
	// System.Single GameModeSO::cooldownDelay
	float ___cooldownDelay_24;
	// System.Int32 GameModeSO::playerCanShoot
	int32_t ___playerCanShoot_25;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// DeathHandler
struct DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean DeathHandler::isPlayerAlive
	bool ___isPlayerAlive_4;
	// RepeatHighway DeathHandler::repeatHighway
	RepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79* ___repeatHighway_5;
	// DespawnObject DeathHandler::despawnObject
	DespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0* ___despawnObject_6;
	// MoveOnHighway DeathHandler::moveOnHighway
	MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712* ___moveOnHighway_7;
	// PlayerController DeathHandler::playerController
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___playerController_8;
	// RotateWheels[] DeathHandler::rotateWheels
	RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0* ___rotateWheels_9;
	// UIController DeathHandler::UIscript
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* ___UIscript_10;
	// SavedData DeathHandler::savedData
	SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* ___savedData_11;
	// GameModeController DeathHandler::gameMode
	GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* ___gameMode_12;
	// ScoreKeeper DeathHandler::scoreKeeper
	ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* ___scoreKeeper_13;
};

// DeleteParticle
struct DeleteParticle_tBFCE9D277AD4D66B6F5FA43BCCA5242C079BB7EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DespawnObject
struct DespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DespawnObject::killVector
	float ___killVector_4;
};

// DetectBullets
struct DetectBullets_tCCB923CEB91BFE50AF6D5BB3F8A56BC61F5DB331  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem DetectBullets::explosion
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___explosion_4;
	// GameModeController DetectBullets::gameMode
	GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* ___gameMode_5;
	// System.String DetectBullets::canShoot
	String_t* ___canShoot_6;
	// System.Boolean DetectBullets::hasBullets
	bool ___hasBullets_7;
	// ScoreKeeper DetectBullets::scorekeeper
	ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* ___scorekeeper_8;
	// System.Int32 DetectBullets::pointvalue
	int32_t ___pointvalue_9;
};

// DetectCollisions
struct DetectCollisions_tBBA78C3D5C2754339AC0A4568335E825A2ECBE8E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem DetectCollisions::explosion
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___explosion_4;
	// DeathHandler DetectCollisions::deathHandler
	DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* ___deathHandler_5;
	// UIController DetectCollisions::uiScript
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* ___uiScript_6;
	// GameModeController DetectCollisions::gameMode
	GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* ___gameMode_7;
	// System.Boolean DetectCollisions::hasHealth
	bool ___hasHealth_8;
	// System.Single DetectCollisions::playerHealth
	float ___playerHealth_9;
};

// FollowPlayer
struct FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerController FollowPlayer::player
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___player_4;
	// GameModeController FollowPlayer::gameMode
	GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* ___gameMode_5;
	// UnityEngine.Vector3 FollowPlayer::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_6;
	// UnityEngine.Vector3 FollowPlayer::rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation_7;
};

// GameModeController
struct GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String GameModeController::chosenMode
	String_t* ___chosenMode_4;
	// ModePersist GameModeController::modePersist
	ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* ___modePersist_5;
	// GameModeSO GameModeController::currentGameMode
	GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* ___currentGameMode_6;
};

// ModePersist
struct ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ModePersist::chosenGameMode
	String_t* ___chosenGameMode_4;
};

// MoveOnHighway
struct MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MoveOnHighway::speed
	float ___speed_4;
	// GameModeController MoveOnHighway::gameMode
	GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* ___gameMode_5;
};

// ObjectSpawner
struct ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ObjectSpawner::obstaclePrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___obstaclePrefabs_4;
	// UnityEngine.GameObject[] ObjectSpawner::carPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___carPrefabs_5;
	// UnityEngine.Transform[] ObjectSpawner::spawnPoint
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spawnPoint_6;
	// UnityEngine.Transform ObjectSpawner::despawnObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___despawnObject_7;
	// System.Int32 ObjectSpawner::laneRange
	int32_t ___laneRange_8;
	// System.Int32 ObjectSpawner::objectRange
	int32_t ___objectRange_9;
	// System.Int32 ObjectSpawner::obstacleRange
	int32_t ___obstacleRange_10;
	// System.Int32 ObjectSpawner::carRange
	int32_t ___carRange_11;
	// System.Collections.Generic.Queue`1<System.Int32> ObjectSpawner::laneHistory
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___laneHistory_12;
	// System.Int32 ObjectSpawner::maxHistoryLength
	int32_t ___maxHistoryLength_13;
	// System.Int32 ObjectSpawner::previousLane
	int32_t ___previousLane_14;
	// UnityEngine.Transform ObjectSpawner::spawnTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnTransform_15;
	// DeathHandler ObjectSpawner::deathHandler
	DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* ___deathHandler_16;
	// System.Boolean ObjectSpawner::playerAlive
	bool ___playerAlive_17;
	// System.Single ObjectSpawner::spawnDelay
	float ___spawnDelay_18;
	// GameModeController ObjectSpawner::gameMode
	GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* ___gameMode_19;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform PlayerController::tankTurret
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tankTurret_4;
	// UnityEngine.ParticleSystem PlayerController::bulletParticles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___bulletParticles_5;
	// UnityEngine.ParticleSystem PlayerController::turretFlash
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___turretFlash_6;
	// GameModeController PlayerController::gameMode
	GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* ___gameMode_7;
	// System.Single PlayerController::playerSpeed
	float ___playerSpeed_8;
	// System.Single PlayerController::lookSpeed
	float ___lookSpeed_9;
	// System.Boolean PlayerController::hasBullets
	bool ___hasBullets_10;
	// System.Single PlayerController::bulletSpeed
	float ___bulletSpeed_11;
	// System.Boolean PlayerController::hasNewScale
	bool ___hasNewScale_12;
	// System.Single PlayerController::newScale
	float ___newScale_13;
	// System.Single PlayerController::startTime
	float ___startTime_14;
	// System.Boolean PlayerController::hasStartedScaling
	bool ___hasStartedScaling_15;
	// DeathHandler PlayerController::deathHandler
	DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* ___deathHandler_16;
	// System.Boolean PlayerController::playerAlive
	bool ___playerAlive_17;
	// UIController PlayerController::uiScript
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* ___uiScript_18;
	// System.Boolean PlayerController::hasCooldown
	bool ___hasCooldown_19;
	// System.Single PlayerController::cooldownTime
	float ___cooldownTime_20;
	// System.Single PlayerController::cooldownDelay
	float ___cooldownDelay_21;
	// System.Single PlayerController::currentRotation
	float ___currentRotation_22;
	// System.Single PlayerController::minRot
	float ___minRot_23;
	// System.Single PlayerController::maxRot
	float ___maxRot_24;
	// System.Single PlayerController::minX
	float ___minX_25;
	// System.Single PlayerController::maxX
	float ___maxX_26;
	// System.Single PlayerController::rotationFactor
	float ___rotationFactor_27;
	// UnityEngine.Vector2 PlayerController::moveInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___moveInput_28;
	// UnityEngine.Vector2 PlayerController::lookInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lookInput_29;
	// System.Boolean PlayerController::isFiring
	bool ___isFiring_30;
	// System.Single PlayerController::fireInput
	float ___fireInput_31;
};

// RepeatHighway
struct RepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RepeatHighway::repeatWidth
	float ___repeatWidth_4;
	// UnityEngine.Vector3 RepeatHighway::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_5;
	// GameModeController RepeatHighway::gameMode
	GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* ___gameMode_6;
	// System.Single RepeatHighway::speed
	float ___speed_7;
};

// RotateWheels
struct RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RotateWheels::speed
	float ___speed_4;
};

// SavedData
struct SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<GameModeSO> SavedData::lockedGameModes
	List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* ___lockedGameModes_4;
	// System.Collections.Generic.List`1<GameModeSO> SavedData::unlockedGameModes
	List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* ___unlockedGameModes_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SavedData::highScore
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___highScore_6;
	// GameModeSO SavedData::unlockMode
	GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* ___unlockMode_7;
};

// ScoreKeeper
struct ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI ScoreKeeper::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_4;
	// DeathHandler ScoreKeeper::deathHandler
	DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* ___deathHandler_5;
	// System.Single ScoreKeeper::elapsedTime
	float ___elapsedTime_6;
	// System.Int32 ScoreKeeper::pointsPerSecond
	int32_t ___pointsPerSecond_7;
	// System.Int32 ScoreKeeper::points
	int32_t ___points_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] UIController::canvases
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___canvases_4;
	// UnityEngine.GameObject UIController::healthSliderObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___healthSliderObject_5;
	// UnityEngine.GameObject UIController::cooldownSliderObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cooldownSliderObject_6;
	// UnityEngine.UI.Slider UIController::healthSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___healthSlider_7;
	// UnityEngine.UI.Slider UIController::cooldownSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___cooldownSlider_8;
	// System.Boolean UIController::isGamePaused
	bool ___isGamePaused_9;
	// UnityEngine.GameObject UIController::desiredCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___desiredCanvas_10;
	// DeathHandler UIController::deathHandler
	DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* ___deathHandler_11;
	// ModePersist UIController::modePersist
	ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* ___modePersist_12;
	// GameModeController UIController::gameMode
	GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* ___gameMode_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>

// System.Collections.Generic.List`1<GameModeSO>
struct List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GameModeSO>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.Queue`1<System.Int32>

// System.Collections.Generic.Queue`1<System.Int32>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// DeleteParticle/<Delete>d__1

// DeleteParticle/<Delete>d__1

// ObjectSpawner/<RangeRandomizer>d__18

// ObjectSpawner/<RangeRandomizer>d__18

// PlayerController/<BulletCooldown>d__38

// PlayerController/<BulletCooldown>d__38

// SavedData/<>c__DisplayClass8_0

// SavedData/<>c__DisplayClass8_0

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.ParticleSystem/EmissionModule

// UnityEngine.ParticleSystem/EmissionModule

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.ParticleSystem/MinMaxCurve

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.VertexGradient

// TMPro.VertexGradient

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputValue

// UnityEngine.InputSystem.InputValue

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// System.Predicate`1<GameModeSO>

// System.Predicate`1<GameModeSO>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// GameModeSO

// GameModeSO

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// DeathHandler

// DeathHandler

// DeleteParticle

// DeleteParticle

// DespawnObject

// DespawnObject

// DetectBullets

// DetectBullets

// DetectCollisions

// DetectCollisions

// FollowPlayer

// FollowPlayer

// GameModeController

// GameModeController

// ModePersist

// ModePersist

// MoveOnHighway

// MoveOnHighway

// ObjectSpawner

// ObjectSpawner

// PlayerController

// PlayerController

// RepeatHighway

// RepeatHighway

// RotateWheels

// RotateWheels

// SavedData

// SavedData

// ScoreKeeper

// ScoreKeeper

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UIController

// UIController

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// RotateWheels[]
struct RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0  : public RuntimeArray
{
	ALIGN_FIELD (8) RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA* m_Items[1];

	inline RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GameModeSO[]
struct GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524  : public RuntimeArray
{
	ALIGN_FIELD (8) GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* m_Items[1];

	inline GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ModePersist[]
struct ModePersistU5BU5D_t3FEC1849B7D41B05055DE188339BC7A062179D90  : public RuntimeArray
{
	ALIGN_FIELD (8) ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* m_Items[1];

	inline ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SavedData[]
struct SavedDataU5BU5D_tB0AD81204AA3E4D403F70B631949BA52BDA47098  : public RuntimeArray
{
	ALIGN_FIELD (8) SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* m_Items[1];

	inline SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_LoadAll_TisRuntimeObject_m69B3BC41DB42071369375275587F5A5FF5040487_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* Dictionary_2_get_Keys_m241B452A1A7DDE3C7E10D446BE86FFD25EDD160E_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0EF9FB8013961DF612AC6D349B739450CA287820 KeyCollection_GetEnumerator_m7EB7A2C124E02BC3F297362CD18077ECA470C701_gshared (KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m89BC7CBCBE95AFF18628D483E4D0432D278A3841_gshared (Enumerator_t0EF9FB8013961DF612AC6D349B739450CA287820* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m3D1077E7359AFFD5D8B1E52C5E47BA67581D2413_gshared_inline (Enumerator_t0EF9FB8013961DF612AC6D349B739450CA287820* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0C0DFC14DA1852E37FAA48930022510A6D9575F4_gshared (Enumerator_t0EF9FB8013961DF612AC6D349B739450CA287820* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void DeathHandler::StopObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_StopObstacles_m31C3329FB25C68FFB217F84158BDA67D6269EE86 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) ;
// System.Void DeathHandler::PlayerWheels(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_PlayerWheels_mAB25CAD99F11FF32CA0118A386044D018C816AE3 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void DeathHandler::PlayerBullets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_PlayerBullets_m0077665AAF7ECB7F2461258A8BD209F82F5CA7D1 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) ;
// System.Void DeathHandler::ProcessPlayerScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_ProcessPlayerScore_mD471E757647D43FC9C2194B073736AD26EB7EA61 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UIController>()
inline UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D (const RuntimeMethod* method)
{
	return ((  UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UIController::EnableGameOverCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_EnableGameOverCanvas_m877AF5314AC82A35CAA3FB864B47A03B3FCF19B7 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<RepeatHighway>()
inline RepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79* Object_FindObjectOfType_TisRepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79_m4AE1F97D7B705D2DA0DF3FDBA69FCA967B7283E1 (const RuntimeMethod* method)
{
	return ((  RepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<DespawnObject>()
inline DespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0* Object_FindObjectOfType_TisDespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0_mFF57B46902C1E6C60D7E338923366AE0016208F6 (const RuntimeMethod* method)
{
	return ((  DespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void DeathHandler::AccessDespawnChildScript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_AccessDespawnChildScript_mFEB9A481F4E38E8306F905B57623E4ECEFD3285E (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<MoveOnHighway>()
inline MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712* Component_GetComponent_TisMoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712_m6DF3A32D4E2D984F2406990CC83928FDCCF7258F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<RotateWheels>()
inline RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0* Object_FindObjectsOfType_TisRotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA_mA10F5C66740D16314FB1DB516A5C77A323EF7266 (const RuntimeMethod* method)
{
	return ((  RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<PlayerController>()
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9 (const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void PlayerController::StopAllBullets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StopAllBullets_mA97785344CC31B37E5EFE6BFA92D8373ADF52436 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<ScoreKeeper>()
inline ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7 (const RuntimeMethod* method)
{
	return ((  ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<GameModeController>()
inline GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF (const RuntimeMethod* method)
{
	return ((  GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<SavedData>()
inline SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* Object_FindObjectOfType_TisSavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C_m69AFCA2C8FBA461DB95D0A875EF2F0844A60E798 (const RuntimeMethod* method)
{
	return ((  SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// GameModeSO GameModeController::get_CurrentGameMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline (GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* __this, const RuntimeMethod* method) ;
// System.String GameModeSO::GetName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Int32 ScoreKeeper::Points()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreKeeper_Points_m101DF02916B497F7A0D33AA45117C41C338067E0_inline (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean SavedData::CheckAndSetHighscore(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedData_CheckAndSetHighscore_m8FE16E84F254AB2B1795EAB8C7DB0563EC1E2200 (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, String_t* ___0_gameMode, int32_t ___1_score, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<ModePersist>()
inline ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* Object_FindObjectOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m5A66E49CFB8F2476BF23BAB1F3E5AC33CD950A35 (const RuntimeMethod* method)
{
	return ((  ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.String ModePersist::get_ChosenGameMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ModePersist_get_ChosenGameMode_m18E4868F4E8E9C989826DC29D60C24F615545DCB_inline (ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* __this, const RuntimeMethod* method) ;
// System.Void GameModeController::FindGameMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameModeController_FindGameMode_mE0CCB899F95C37656CDAC2C3EAB85CFCCA8D0ACF (GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::LoadAll<GameModeSO>(System.String)
inline GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* Resources_LoadAll_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m2A505362A7EA975565D34CF2BFEFEBAF54A2AE0B (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m69B3BC41DB42071369375275587F5A5FF5040487_gshared)(___0_path, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<GameModeSO>(System.String)
inline GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* Resources_Load_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m66E77B1857FCD72E1561F5A21795B80950DFB77E (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void ModePersist::CheckScripts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModePersist_CheckScripts_mCA7AD44EDE243AFCE7AB459B46F474260FC69032 (ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<ModePersist>()
inline ModePersistU5BU5D_t3FEC1849B7D41B05055DE188339BC7A062179D90* Object_FindObjectsOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m9BE97E6A5F130428F623F9DEA10974EC0CEE11C8 (const RuntimeMethod* method)
{
	return ((  ModePersistU5BU5D_t3FEC1849B7D41B05055DE188339BC7A062179D90* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void SavedData::CheckScripts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedData_CheckScripts_m5ABB5BA97FDAD54A9299A0F023AD773D2006F504 (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, const RuntimeMethod* method) ;
// System.Void SavedData::AddGameModeToList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedData_AddGameModeToList_m4B45F99A7371BED060A5BF19FB2D82DFDE59E62A (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<SavedData>()
inline SavedDataU5BU5D_tB0AD81204AA3E4D403F70B631949BA52BDA47098* Object_FindObjectsOfType_TisSavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C_m537C7E60B4B214649ED2555B75B1E42AA4BA30A2 (const RuntimeMethod* method)
{
	return ((  SavedDataU5BU5D_tB0AD81204AA3E4D403F70B631949BA52BDA47098* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Void GameModeSO::set_IsGameModeUnlocked(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameModeSO_set_IsGameModeUnlocked_mA9AA4A4BF6B83AFD1655331D687C282E54C4134D_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GameModeSO>::Add(T)
inline void List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_inline (List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* __this, GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB*, GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean GameModeSO::get_IsGameModeUnlocked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameModeSO_get_IsGameModeUnlocked_mCA1BA9FEB6D02B0599D0CA90035795EC1A03A536_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared)(__this, ___0_key, method);
}
// System.Void SavedData/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m22F61CB35111D9EB32447F966E5DEACA4E8B495C (U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<GameModeSO>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mCCA093A57A430106381D84D55B9B224B96950ECA (Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// T System.Collections.Generic.List`1<GameModeSO>::Find(System.Predicate`1<T>)
inline GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* List_1_Find_mCBE7D7807A8E970F710981022178C0902B75346F (List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* __this, Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172* ___0_match, const RuntimeMethod* method)
{
	return ((  GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* (*) (List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB*, Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___0_match, method);
}
// System.Boolean SavedData::MoreThanOneRequirement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedData_MoreThanOneRequirement_mFBA623DAE5B041D1BC404233971F3E48BBF38969 (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 GameModeSO::GetRequiredPoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameModeSO_GetRequiredPoints_m9900CEFC1325A0BA4B4E38367F50497C575DEFAD_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean GameModeSO::GetHasMoreThanOneRequirement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameModeSO_GetHasMoreThanOneRequirement_m698742A74CAA914FAF9E89ACE1AE911905E7AFE3_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Keys()
inline KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2_get_Keys_m241B452A1A7DDE3C7E10D446BE86FFD25EDD160E_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::GetEnumerator()
inline Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5 KeyCollection_GetEnumerator_m742B95F9AD4B4B471B3D8C08FF3997B6BD91D686 (KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5 (*) (KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7EB7A2C124E02BC3F297362CD18077ECA470C701_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::Dispose()
inline void Enumerator_Dispose_m4DCF23FA32BC5B8AD285EB6595CBDF2A680BF533 (Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5*, const RuntimeMethod*))Enumerator_Dispose_m89BC7CBCBE95AFF18628D483E4D0432D278A3841_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::get_Current()
inline String_t* Enumerator_get_Current_mDA4ED016AC045E16739ED8BA685617ADEC39DBEF_inline (Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5*, const RuntimeMethod*))Enumerator_get_Current_m3D1077E7359AFFD5D8B1E52C5E47BA67581D2413_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m154143BDC6445669EC31BBB060C8C650CF25BBF7 (Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5*, const RuntimeMethod*))Enumerator_MoveNext_m0C0DFC14DA1852E37FAA48930022510A6D9575F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GameModeSO>::.ctor()
inline void List_1__ctor_mD587A3E317B3D9B63D16DA6B2C63C4DBD43256E6 (List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DeleteParticle::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeleteParticle_Delete_m7CE46B6511F042E3EA5E7537D44D5C2504584E57 (DeleteParticle_tBFCE9D277AD4D66B6F5FA43BCCA5242C079BB7EC* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void DeleteParticle/<Delete>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteU3Ed__1__ctor_mC9BAC158907508012552A83176979F949A18F9AC (U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single GameModeSO::GetObstacleSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetObstacleSpeed_m51160BF6980E6F48351038E81006706F0D1D3281_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<DeathHandler>()
inline DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD (const RuntimeMethod* method)
{
	return ((  DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Single GameModeSO::GetObstacleSpawnDelay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetObstacleSpawnDelay_m23848BCB395F5EA26D33C971F7E681DDBED5F851_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ObjectSpawner::RangeRandomizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectSpawner_RangeRandomizer_mC350EFAF2678C1E91C6A81C90F42B32F07FAC33A (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) ;
// System.Boolean DeathHandler::get_IsPlayerAlive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeathHandler_get_IsPlayerAlive_mA31D83D152977F207A8CE87BEB203ECFBFDB2C33_inline (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) ;
// System.Void ObjectSpawner/<RangeRandomizer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRangeRandomizerU3Ed__18__ctor_mCDE2A576E30E11907928C164F3DE1C91F8353377 (U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void ObjectSpawner::CheckLaneChoice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_CheckLaneChoice_mC28A5DBA3D764D810164837AA56E4D4D7B5AC99F (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) ;
// System.Void ObjectSpawner::CheckObjectChoice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_CheckObjectChoice_m8E9A8DF95E2F81863FEAF60B9580E7A8CFA15AE5 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::Contains(T)
inline bool Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t, const RuntimeMethod*))Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
inline void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t, const RuntimeMethod*))Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
inline int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
inline int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
inline void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ObjectSpawner::SpawnObstacle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_SpawnObstacle_mDA4DE5F7525EF725671AE547D77BFA763AF82AFA (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) ;
// System.Void ObjectSpawner::SpawnCar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_SpawnCar_m980617AD75C9E76190D24503C6DA9370E3E12E69 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
inline void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared)(__this, method);
}
// System.Void ObjectSpawner::SpawnObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_SpawnObject_m1C166D17C9EA8A54A9BBAD9E893035BAE8CE4C47 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) ;
// System.Boolean GameModeSO::GetPlayerHasBullets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameModeSO_GetPlayerHasBullets_mAD96D0D5E3595BFA78AC05FB1985D08FDA214715_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Void DetectBullets::WhatCanPlayerShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectBullets_WhatCanPlayerShoot_m2E5A0572B31E6AED7B39C03CB20E5B8EE49C6E8B (DetectBullets_tCCB923CEB91BFE50AF6D5BB3F8A56BC61F5DB331* __this, const RuntimeMethod* method) ;
// System.Single GameModeSO::GetPlayerCanShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerCanShoot_m8F4A0E7C7AD835873111D3B0B1BC4853F8E990ED (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.ParticleSystem>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void ScoreKeeper::UpdateScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_UpdateScore_mE0D2587DFB5B3EACD90D8B4C44D63FBC69EC2F04 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean GameModeSO::GetPlayerHasHealth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameModeSO_GetPlayerHasHealth_mF0547C99BBE44FAE35247BE0B5714151DE2C7B06_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Single GameModeSO::GetPlayerHealth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerHealth_m61F4A7D0CF41D750B4DF0DB1E4271A6C33FA929F_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void DetectCollisions::ProcessHealth(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectCollisions_ProcessHealth_m7D14E2BAFC2954BF778C1FB7EF11098ACC96748A (DetectCollisions_tBBA78C3D5C2754339AC0A4568335E825A2ECBE8E* __this, String_t* ___0_enemy, const RuntimeMethod* method) ;
// System.Void DeathHandler::ActivateGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_ActivateGameOver_mC31C91646E063AA768EB4347BD6A7F8113F213CA (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) ;
// System.Void UIController::DisplayHealthBar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_DisplayHealthBar_mA0912819A86DADE29954F140E6F77044B3CE35B1 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void FollowPlayer::CheckGameMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_CheckGameMode_m904D483B809EA9749C9DFF4B6E6B23005E40143F (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) ;
// System.Void FollowPlayer::TinyOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_TinyOffset_mF88ECBBD9E35F0EFA4DE79B1C951BF854CFC6D66 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) ;
// System.Void FollowPlayer::FirstOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_FirstOffset_m38DA1358CDCAB4ABE3561862FF1E3B70D43424DE (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) ;
// System.Void FollowPlayer::TopOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_TopOffset_mBF394EC844FEE6CA22D9CAF7FD5E5CA4AE78621E (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) ;
// System.Void FollowPlayer::MightyOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_MightyOffset_m5A06A6184D4858A4DB29BD2A973397F0B6EEA682 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) ;
// System.Void FollowPlayer::TrippyOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_TrippyOffset_m9B5FE34C035219FCF5E62D9482900393AFB559BC (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) ;
// System.Void FollowPlayer::DefaultOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_DefaultOffset_mB8C16CAD98504232B81777807C9C2E8D5C4C7CBB (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::ConfigureGameModeVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ConfigureGameModeVariables_mA02950E0184D9223548F461C2D2F97C4BADF4620 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::CheckIfNewScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CheckIfNewScale_m98D1332AC75758EFA1A0C0E9670F74F0DD29BB0E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void UIController::DisplayBulletCooldown(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_DisplayBulletCooldown_m7394C122CCD9887BEE4808283E8D32885E34E340 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single GameModeSO::GetPlayerSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerSpeed_mF60EB7F1FAAF0A5D72C80B0FA6C838D1F501DA5E_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Single GameModeSO::GetTurretSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetTurretSpeed_mACABF6FCD285D94D711F7134D744EDC29C738BDE_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Single GameModeSO::GetBulletSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetBulletSpeed_mB3B73A6F2FF8C6DF63F85E5B831200F7004A7559_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Single GameModeSO::GetCooldownAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetCooldownAmount_m61B874A8F40EE10326BBFBE14CCAABD4134878B3_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Single GameModeSO::GetCooldownDelay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetCooldownDelay_m6BD63480F18A60CECCEBBBE9D29006DC97E8BB7C_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Boolean GameModeSO::GetPlayerHasNewScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameModeSO_GetPlayerHasNewScale_mE46946F1EE75B31FE43BA0FF08C4FDB52B484E22_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Single GameModeSO::GetPlayerScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerScale_m46FCA63EC314CA5374C20A74882AF699FA4EEEDC_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void PlayerController::MoveTank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveTank_m2DA8F5548F93E818702F99BEA38AE547EC479B70 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::TinyToMightyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_TinyToMightyScale_m9ED8E9ADA5529DDD28DC1288AC4EEEC085450A49 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::ProcessShootingAndCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ProcessShootingAndCooldown_m663D802367CCC958AA69FB37B0B705E9EF3A1AD9 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::BulletCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_BulletCooldown_m3D37F3D70B10D0C6FA650F423F9FA1B072202170 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::MoveTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveTurret_m9F46D65368A9E851061C39BD9413F34866A0FB77 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::ShootTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ShootTurret_m2010D284983B7A280EE6832F0D9FF904F3258675 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::PlayTurretFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_PlayTurretFlash_m7E3113CFC3185A7390E83633EB205C99381CA620 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::SetCurrentRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetCurrentRotation_m712D47F1567219272D1CB6CFD80CE73F4C56B55D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___0_rot, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MinMaxCurve_op_Implicit_m133028E91CF2F823F5E20F6B19A3332A02404086 (float ___0_constant, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverTime_m71BF3C0A80EA572CD87EFF5944E8FA680F51DC20 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void PlayerController/<BulletCooldown>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCooldownU3Ed__38__ctor_m6EC645B8595A565EC7C1F76FB4AD08FBA8EB7883 (U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 PlayerController::ProcessMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlayerController_ProcessMovement_m224D9A8D7F134CBB388F273033E648CA67CA98D0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::ProcessRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ProcessRotation_mA778231AFD4B3AEB616393EBAC94198498A7139E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___0_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_from, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_to, float ___2_maxDegreesDelta, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputValue::Get<System.Single>()
inline float InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// System.Single GameModeSO::GetHighwaySpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetHighwaySpeed_m7B302FFE645B5E6C9E1B4AB61B090A47046DC030_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// System.Void ScoreKeeper::UpdateTimePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_UpdateTimePoints_m13CA52E4917C29B38B2134502DA9F8519809FD20 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UIController::ConfigureHealthSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ConfigureHealthSlider_m419909AE738E9DA00085CC752851AF2FF7F6DFA0 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::ConfigureCooldownSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ConfigureCooldownSlider_mCEA6D7B20699BB036EB0B5B1459B12E47A12C6B9 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UIController::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_PauseGame_mF7C0B01D5C997ECA3E9EC2E21EC182E05BECCB02 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::UnpauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UnpauseGame_m0F991BC445B0B523DBC1E1D06CE9D6214AA8AF4B (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void ModePersist::ResetScenePersist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModePersist_ResetScenePersist_mD9F966E2DFD24750695CB490C7FD23BD0DDFAC63 (ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* __this, const RuntimeMethod* method) ;
// System.Void UIController::LoadCorrectScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_LoadCorrectScene_m1C4ABDA00BBBEAC46E6E62095490A963F54DD795 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UIController::FindAndEnableCorrectCanvas(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_FindAndEnableCorrectCanvas_m7F1DFCBFC3ABE29AE3E04E315BE5F270EC76C1FB (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, String_t* ___0_desiredTag, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mAE7F4DF2F239831CCAA1DFB52F313E5AED52D32D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DeathHandler::get_IsPlayerAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeathHandler_get_IsPlayerAlive_mA31D83D152977F207A8CE87BEB203ECFBFDB2C33 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPlayerAlive { get { return isPlayerAlive; } }
		bool L_0 = __this->___isPlayerAlive_4;
		return L_0;
	}
}
// System.Void DeathHandler::ActivateGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_ActivateGameOver_mC31C91646E063AA768EB4347BD6A7F8113F213CA (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopObstacles();
		DeathHandler_StopObstacles_m31C3329FB25C68FFB217F84158BDA67D6269EE86(__this, NULL);
		// PlayerWheels(false);
		DeathHandler_PlayerWheels_mAB25CAD99F11FF32CA0118A386044D018C816AE3(__this, (bool)0, NULL);
		// PlayerBullets();
		DeathHandler_PlayerBullets_m0077665AAF7ECB7F2461258A8BD209F82F5CA7D1(__this, NULL);
		// ProcessPlayerScore();
		DeathHandler_ProcessPlayerScore_mD471E757647D43FC9C2194B073736AD26EB7EA61(__this, NULL);
		// UIscript = FindObjectOfType<UIController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_0;
		L_0 = Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D(Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D_RuntimeMethod_var);
		__this->___UIscript_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UIscript_10), (void*)L_0);
		// UIscript.EnableGameOverCanvas();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_1 = __this->___UIscript_10;
		UIController_EnableGameOverCanvas_m877AF5314AC82A35CAA3FB864B47A03B3FCF19B7(L_1, NULL);
		// }
		return;
	}
}
// System.Void DeathHandler::StopObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_StopObstacles_m31C3329FB25C68FFB217F84158BDA67D6269EE86 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0_mFF57B46902C1E6C60D7E338923366AE0016208F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisRepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79_m4AE1F97D7B705D2DA0DF3FDBA69FCA967B7283E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// repeatHighway = FindObjectOfType<RepeatHighway>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79* L_0;
		L_0 = Object_FindObjectOfType_TisRepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79_m4AE1F97D7B705D2DA0DF3FDBA69FCA967B7283E1(Object_FindObjectOfType_TisRepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79_m4AE1F97D7B705D2DA0DF3FDBA69FCA967B7283E1_RuntimeMethod_var);
		__this->___repeatHighway_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___repeatHighway_5), (void*)L_0);
		// despawnObject = FindObjectOfType<DespawnObject>();
		DespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0* L_1;
		L_1 = Object_FindObjectOfType_TisDespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0_mFF57B46902C1E6C60D7E338923366AE0016208F6(Object_FindObjectOfType_TisDespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0_mFF57B46902C1E6C60D7E338923366AE0016208F6_RuntimeMethod_var);
		__this->___despawnObject_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___despawnObject_6), (void*)L_1);
		// repeatHighway.enabled = false;
		RepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79* L_2 = __this->___repeatHighway_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// isPlayerAlive = false;
		__this->___isPlayerAlive_4 = (bool)0;
		// AccessDespawnChildScript();
		DeathHandler_AccessDespawnChildScript_mFEB9A481F4E38E8306F905B57623E4ECEFD3285E(__this, NULL);
		// }
		return;
	}
}
// System.Void DeathHandler::AccessDespawnChildScript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_AccessDespawnChildScript_mFEB9A481F4E38E8306F905B57623E4ECEFD3285E (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712_m6DF3A32D4E2D984F2406990CC83928FDCCF7258F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// for (int i = despawnObject.transform.childCount - 1; i >= 0; i--)
		DespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0* L_0 = __this->___despawnObject_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_0083;
	}

IL_0015:
	{
		// Transform despawnChild = despawnObject.transform.GetChild(i);
		DespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0* L_3 = __this->___despawnObject_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		int32_t L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, L_5, NULL);
		V_1 = L_6;
		// foreach (Transform child in despawnChild)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
		RuntimeObject* L_8;
		L_8 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_7, NULL);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_2;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_10 = V_3;
					if (!L_10)
					{
						goto IL_007e;
					}
				}
				{
					RuntimeObject* L_11 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_007e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0064_1;
			}

IL_0030_1:
			{
				// foreach (Transform child in despawnChild)
				RuntimeObject* L_12 = V_2;
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				// moveOnHighway = despawnChild.GetComponent<MoveOnHighway>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_1;
				MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712* L_15;
				L_15 = Component_GetComponent_TisMoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712_m6DF3A32D4E2D984F2406990CC83928FDCCF7258F(L_14, Component_GetComponent_TisMoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712_m6DF3A32D4E2D984F2406990CC83928FDCCF7258F_RuntimeMethod_var);
				__this->___moveOnHighway_7 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___moveOnHighway_7), (void*)L_15);
				// if (moveOnHighway == null) { return; }
				MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712* L_16 = __this->___moveOnHighway_7;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_17)
				{
					goto IL_0058_1;
				}
			}
			{
				// if (moveOnHighway == null) { return; }
				goto IL_0087;
			}

IL_0058_1:
			{
				// moveOnHighway.enabled = false;
				MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712* L_18 = __this->___moveOnHighway_7;
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)0, NULL);
			}

IL_0064_1:
			{
				// foreach (Transform child in despawnChild)
				RuntimeObject* L_19 = V_2;
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_007f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		// for (int i = despawnObject.transform.childCount - 1; i >= 0; i--)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0083:
	{
		// for (int i = despawnObject.transform.childCount - 1; i >= 0; i--)
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void DeathHandler::PlayerWheels(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_PlayerWheels_mAB25CAD99F11FF32CA0118A386044D018C816AE3 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisRotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA_mA10F5C66740D16314FB1DB516A5C77A323EF7266_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// rotateWheels = FindObjectsOfType<RotateWheels>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0* L_0;
		L_0 = Object_FindObjectsOfType_TisRotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA_mA10F5C66740D16314FB1DB516A5C77A323EF7266(Object_FindObjectsOfType_TisRotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA_mA10F5C66740D16314FB1DB516A5C77A323EF7266_RuntimeMethod_var);
		__this->___rotateWheels_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rotateWheels_9), (void*)L_0);
		// foreach (RotateWheels wheel in rotateWheels)
		RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0* L_1 = __this->___rotateWheels_9;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0023;
	}

IL_0016:
	{
		// foreach (RotateWheels wheel in rotateWheels)
		RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		// wheel.enabled = value;
		bool L_6 = ___0_value;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0023:
	{
		// foreach (RotateWheels wheel in rotateWheels)
		int32_t L_8 = V_1;
		RotateWheelsU5BU5D_tF96514476B929A678BBFE264C54808162653F6C0* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DeathHandler::PlayerBullets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_PlayerBullets_m0077665AAF7ECB7F2461258A8BD209F82F5CA7D1 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerController = FindObjectOfType<PlayerController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0;
		L_0 = Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9(Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9_RuntimeMethod_var);
		__this->___playerController_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerController_8), (void*)L_0);
		// playerController.StopAllBullets();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___playerController_8;
		PlayerController_StopAllBullets_mA97785344CC31B37E5EFE6BFA92D8373ADF52436(L_1, NULL);
		// }
		return;
	}
}
// System.Void DeathHandler::ProcessPlayerScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_ProcessPlayerScore_mD471E757647D43FC9C2194B073736AD26EB7EA61 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C_m69AFCA2C8FBA461DB95D0A875EF2F0844A60E798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DA364C5509083DB04203B66C39AAF8FC56A2FCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D9A51F17240E5AB1F6781D0C99EAE5FC6C084F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scoreKeeper = FindObjectOfType<ScoreKeeper>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_0;
		L_0 = Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7(Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		__this->___scoreKeeper_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreKeeper_13), (void*)L_0);
		// gameMode = FindObjectOfType<GameModeController>();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_1;
		L_1 = Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF(Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		__this->___gameMode_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameMode_12), (void*)L_1);
		// savedData = FindObjectOfType<SavedData>();
		SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* L_2;
		L_2 = Object_FindObjectOfType_TisSavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C_m69AFCA2C8FBA461DB95D0A875EF2F0844A60E798(Object_FindObjectOfType_TisSavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C_m69AFCA2C8FBA461DB95D0A875EF2F0844A60E798_RuntimeMethod_var);
		__this->___savedData_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savedData_11), (void*)L_2);
		// Debug.Log("Checking score for, GameMode: " + gameMode.CurrentGameMode.GetName() + " with a score of: " + scoreKeeper.Points());
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_3 = __this->___gameMode_12;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_4;
		L_4 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_3, NULL);
		String_t* L_5;
		L_5 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_4, NULL);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_6 = __this->___scoreKeeper_13;
		int32_t L_7;
		L_7 = ScoreKeeper_Points_m101DF02916B497F7A0D33AA45117C41C338067E0_inline(L_6, NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_9;
		L_9 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral72D9A51F17240E5AB1F6781D0C99EAE5FC6C084F, L_5, _stringLiteral0DA364C5509083DB04203B66C39AAF8FC56A2FCA, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// savedData.CheckAndSetHighscore(gameMode.CurrentGameMode.GetName(), scoreKeeper.Points());
		SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* L_10 = __this->___savedData_11;
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_11 = __this->___gameMode_12;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_12;
		L_12 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_11, NULL);
		String_t* L_13;
		L_13 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_12, NULL);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_14 = __this->___scoreKeeper_13;
		int32_t L_15;
		L_15 = ScoreKeeper_Points_m101DF02916B497F7A0D33AA45117C41C338067E0_inline(L_14, NULL);
		bool L_16;
		L_16 = SavedData_CheckAndSetHighscore_m8FE16E84F254AB2B1795EAB8C7DB0563EC1E2200(L_10, L_13, L_15, NULL);
		// }
		return;
	}
}
// System.Void DeathHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler__ctor_m0F684AF4DE15E36093370421B471144DD0AD48BA (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) 
{
	{
		// bool isPlayerAlive = true;
		__this->___isPlayerAlive_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GameModeSO GameModeController::get_CurrentGameMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0 (GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* __this, const RuntimeMethod* method) 
{
	{
		// public GameModeSO CurrentGameMode { get { return currentGameMode; } }
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_0 = __this->___currentGameMode_6;
		return L_0;
	}
}
// System.Void GameModeController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameModeController_Awake_m8030814AA4976059861F09C94C834B2185C5F32A (GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m5A66E49CFB8F2476BF23BAB1F3E5AC33CD950A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// modePersist = FindObjectOfType<ModePersist>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* L_0;
		L_0 = Object_FindObjectOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m5A66E49CFB8F2476BF23BAB1F3E5AC33CD950A35(Object_FindObjectOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m5A66E49CFB8F2476BF23BAB1F3E5AC33CD950A35_RuntimeMethod_var);
		__this->___modePersist_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modePersist_5), (void*)L_0);
		// chosenMode = modePersist.ChosenGameMode;
		ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* L_1 = __this->___modePersist_5;
		String_t* L_2;
		L_2 = ModePersist_get_ChosenGameMode_m18E4868F4E8E9C989826DC29D60C24F615545DCB_inline(L_1, NULL);
		__this->___chosenMode_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chosenMode_4), (void*)L_2);
		// FindGameMode();
		GameModeController_FindGameMode_mE0CCB899F95C37656CDAC2C3EAB85CFCCA8D0ACF(__this, NULL);
		// }
		return;
	}
}
// System.Void GameModeController::FindGameMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameModeController_FindGameMode_mE0CCB899F95C37656CDAC2C3EAB85CFCCA8D0ACF (GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m2A505362A7EA975565D34CF2BFEFEBAF54A2AE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m66E77B1857FCD72E1561F5A21795B80950DFB77E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D2F031ABC5740B34509DE79CF4B90F814BF8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7A57E525CFD9267FB80BF60EBC8042718A04BE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE55D03E15CFD849C6369DD407E889D80EAEB401A);
		s_Il2CppMethodInitialized = true;
	}
	GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* V_0 = NULL;
	int32_t V_1 = 0;
	GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* V_2 = NULL;
	{
		// GameModeSO[] gameModes = Resources.LoadAll<GameModeSO>("GameModes");
		GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* L_0;
		L_0 = Resources_LoadAll_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m2A505362A7EA975565D34CF2BFEFEBAF54A2AE0B(_stringLiteralE55D03E15CFD849C6369DD407E889D80EAEB401A, Resources_LoadAll_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m2A505362A7EA975565D34CF2BFEFEBAF54A2AE0B_RuntimeMethod_var);
		// foreach (GameModeSO mode in gameModes)
		V_0 = L_0;
		V_1 = 0;
		goto IL_005a;
	}

IL_000f:
	{
		// foreach (GameModeSO mode in gameModes)
		GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (mode.GetName() == chosenMode)
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_5 = V_2;
		String_t* L_6;
		L_6 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_5, NULL);
		String_t* L_7 = __this->___chosenMode_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		// currentGameMode = mode;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_9 = V_2;
		__this->___currentGameMode_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentGameMode_6), (void*)L_9);
		// return;
		return;
	}

IL_002e:
	{
		// currentGameMode = Resources.Load<GameModeSO>("GameModes/Default");
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_10;
		L_10 = Resources_Load_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m66E77B1857FCD72E1561F5A21795B80950DFB77E(_stringLiteralB7A57E525CFD9267FB80BF60EBC8042718A04BE0, Resources_Load_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m66E77B1857FCD72E1561F5A21795B80950DFB77E_RuntimeMethod_var);
		__this->___currentGameMode_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentGameMode_6), (void*)L_10);
		// if (currentGameMode == null)
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_11 = __this->___currentGameMode_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		// Debug.LogError("Default game mode not found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral83D2F031ABC5740B34509DE79CF4B90F814BF8C6, NULL);
	}

IL_0056:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		// foreach (GameModeSO mode in gameModes)
		int32_t L_14 = V_1;
		GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameModeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameModeController__ctor_m55833ECA6C6249D04CCB35636F14F0D2B05734E2 (GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String GameModeSO::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public string GetName() { return gamemodeName; }
		String_t* L_0 = __this->___gamemodeName_5;
		return L_0;
	}
}
// System.Int32 GameModeSO::GetRequiredPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameModeSO_GetRequiredPoints_m9900CEFC1325A0BA4B4E38367F50497C575DEFAD (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public int GetRequiredPoints() { return requiredPoints; }
		int32_t L_0 = __this->___requiredPoints_6;
		return L_0;
	}
}
// System.String GameModeSO::GetRequiredMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameModeSO_GetRequiredMode_mE64E9A1272F9635EE6FD524B391D8CE324771DD2 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public string GetRequiredMode() { return requiredMode; }
		String_t* L_0 = __this->___requiredMode_7;
		return L_0;
	}
}
// System.Boolean GameModeSO::get_IsGameModeUnlocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameModeSO_get_IsGameModeUnlocked_mCA1BA9FEB6D02B0599D0CA90035795EC1A03A536 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// get { return isGameModeUnlocked; }
		bool L_0 = __this->___isGameModeUnlocked_8;
		return L_0;
	}
}
// System.Void GameModeSO::set_IsGameModeUnlocked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameModeSO_set_IsGameModeUnlocked_mA9AA4A4BF6B83AFD1655331D687C282E54C4134D (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { isGameModeUnlocked = value; }
		bool L_0 = ___0_value;
		__this->___isGameModeUnlocked_8 = L_0;
		// set { isGameModeUnlocked = value; }
		return;
	}
}
// System.Boolean GameModeSO::GetHasMoreThanOneRequirement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameModeSO_GetHasMoreThanOneRequirement_m698742A74CAA914FAF9E89ACE1AE911905E7AFE3 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetHasMoreThanOneRequirement() { return hasMoreThanOneRequirement; }
		bool L_0 = __this->___hasMoreThanOneRequirement_9;
		return L_0;
	}
}
// System.Void GameModeSO::RequiredModesAndPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameModeSO_RequiredModesAndPoints_mF690D6D5D4A25D649D93371640BBE73CBC501133 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA568342354134F2C1750F573FBEEE8A799E523EB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (RequiredModes.Count == RequiredPoints.Count)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___RequiredModes_10;
		int32_t L_1;
		L_1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___RequiredPoints_11;
		int32_t L_3;
		L_3 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_2, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_005d;
		}
	}
	{
		// requiredModesAndPoints = new Dictionary<string, int>();
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_4, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		__this->___requiredModesAndPoints_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___requiredModesAndPoints_4), (void*)L_4);
		// for (int i = 0; i < RequiredModes.Count; i++)
		V_0 = 0;
		goto IL_004e;
	}

IL_0027:
	{
		// requiredModesAndPoints[RequiredModes[i]] = RequiredPoints[i];
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_5 = __this->___requiredModesAndPoints_4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->___RequiredModes_10;
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_6, L_7, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = __this->___RequiredPoints_11;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_9, L_10, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_5, L_8, L_11, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// for (int i = 0; i < RequiredModes.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004e:
	{
		// for (int i = 0; i < RequiredModes.Count; i++)
		int32_t L_13 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = __this->___RequiredModes_10;
		int32_t L_15;
		L_15 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_14, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}

IL_005d:
	{
		// Debug.LogError("The number of required modes and required points must match!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA568342354134F2C1750F573FBEEE8A799E523EB, NULL);
		// }
		return;
	}
}
// System.Single GameModeSO::GetHighwaySpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetHighwaySpeed_m7B302FFE645B5E6C9E1B4AB61B090A47046DC030 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetHighwaySpeed() { return highwaySpeed; }
		float L_0 = __this->___highwaySpeed_12;
		return L_0;
	}
}
// System.Single GameModeSO::GetObstacleSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetObstacleSpeed_m51160BF6980E6F48351038E81006706F0D1D3281 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetObstacleSpeed() { return obstacleSpeed; }
		float L_0 = __this->___obstacleSpeed_13;
		return L_0;
	}
}
// System.Single GameModeSO::GetObstacleSpawnDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetObstacleSpawnDelay_m23848BCB395F5EA26D33C971F7E681DDBED5F851 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetObstacleSpawnDelay() { return obstacleSpawnDelay; }
		float L_0 = __this->___obstacleSpawnDelay_14;
		return L_0;
	}
}
// System.Single GameModeSO::GetPlayerSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerSpeed_mF60EB7F1FAAF0A5D72C80B0FA6C838D1F501DA5E (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetPlayerSpeed() { return playerSpeed; }
		float L_0 = __this->___playerSpeed_15;
		return L_0;
	}
}
// System.Single GameModeSO::GetTurretSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetTurretSpeed_mACABF6FCD285D94D711F7134D744EDC29C738BDE (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetTurretSpeed() { return turretSpeed; }
		float L_0 = __this->___turretSpeed_16;
		return L_0;
	}
}
// System.Boolean GameModeSO::GetPlayerHasHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameModeSO_GetPlayerHasHealth_mF0547C99BBE44FAE35247BE0B5714151DE2C7B06 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetPlayerHasHealth() { return playerHasHealth; }
		bool L_0 = __this->___playerHasHealth_17;
		return L_0;
	}
}
// System.Boolean GameModeSO::GetPlayerHasNewScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameModeSO_GetPlayerHasNewScale_mE46946F1EE75B31FE43BA0FF08C4FDB52B484E22 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetPlayerHasNewScale() { return playerHasNewScale; }
		bool L_0 = __this->___playerHasNewScale_18;
		return L_0;
	}
}
// System.Boolean GameModeSO::GetPlayerHasBullets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameModeSO_GetPlayerHasBullets_mAD96D0D5E3595BFA78AC05FB1985D08FDA214715 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetPlayerHasBullets() { return playerHasBullets; }
		bool L_0 = __this->___playerHasBullets_19;
		return L_0;
	}
}
// System.Single GameModeSO::GetPlayerHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerHealth_m61F4A7D0CF41D750B4DF0DB1E4271A6C33FA929F (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetPlayerHealth() { return playerHealth; }
		float L_0 = __this->___playerHealth_20;
		return L_0;
	}
}
// System.Single GameModeSO::GetPlayerScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerScale_m46FCA63EC314CA5374C20A74882AF699FA4EEEDC (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetPlayerScale() { return playerScale; }
		float L_0 = __this->___playerScale_21;
		return L_0;
	}
}
// System.Single GameModeSO::GetBulletSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetBulletSpeed_mB3B73A6F2FF8C6DF63F85E5B831200F7004A7559 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetBulletSpeed() { return bulletSpeed; }
		float L_0 = __this->___bulletSpeed_22;
		return L_0;
	}
}
// System.Single GameModeSO::GetCooldownAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetCooldownAmount_m61B874A8F40EE10326BBFBE14CCAABD4134878B3 (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetCooldownAmount() { return cooldownAmount; }
		float L_0 = __this->___cooldownAmount_23;
		return L_0;
	}
}
// System.Single GameModeSO::GetCooldownDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetCooldownDelay_m6BD63480F18A60CECCEBBBE9D29006DC97E8BB7C (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetCooldownDelay() { return cooldownDelay; }
		float L_0 = __this->___cooldownDelay_24;
		return L_0;
	}
}
// System.Single GameModeSO::GetPlayerCanShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerCanShoot_m8F4A0E7C7AD835873111D3B0B1BC4853F8E990ED (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetPlayerCanShoot() { return playerCanShoot; }
		int32_t L_0 = __this->___playerCanShoot_25;
		return ((float)L_0);
	}
}
// System.Void GameModeSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameModeSO__ctor_m0B6A53AD1CA91EE8CE6800DEAC5F930E142EAB2C (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<string, int> requiredModesAndPoints = new Dictionary<string, int>();
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_0, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		__this->___requiredModesAndPoints_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___requiredModesAndPoints_4), (void*)L_0);
		// [SerializeField] List<string> RequiredModes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___RequiredModes_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RequiredModes_10), (void*)L_1);
		// [SerializeField] List<int> RequiredPoints = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_2, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___RequiredPoints_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RequiredPoints_11), (void*)L_2);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String ModePersist::get_ChosenGameMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModePersist_get_ChosenGameMode_m18E4868F4E8E9C989826DC29D60C24F615545DCB (ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* __this, const RuntimeMethod* method) 
{
	{
		// public string ChosenGameMode { get { return chosenGameMode; } }
		String_t* L_0 = __this->___chosenGameMode_4;
		return L_0;
	}
}
// System.Void ModePersist::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModePersist_Awake_m2C778F9669E612174B6310B1C4A004C81AA141C6 (ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* __this, const RuntimeMethod* method) 
{
	{
		// CheckScripts();
		ModePersist_CheckScripts_mCA7AD44EDE243AFCE7AB459B46F474260FC69032(__this, NULL);
		// }
		return;
	}
}
// System.Void ModePersist::CheckScripts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModePersist_CheckScripts_mCA7AD44EDE243AFCE7AB459B46F474260FC69032 (ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m9BE97E6A5F130428F623F9DEA10974EC0CEE11C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int numModePersist = FindObjectsOfType<ModePersist>().Length;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ModePersistU5BU5D_t3FEC1849B7D41B05055DE188339BC7A062179D90* L_0;
		L_0 = Object_FindObjectsOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m9BE97E6A5F130428F623F9DEA10974EC0CEE11C8(Object_FindObjectsOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m9BE97E6A5F130428F623F9DEA10974EC0CEE11C8_RuntimeMethod_var);
		// if (numModePersist > 1)
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		return;
	}

IL_0016:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// }
		return;
	}
}
// System.Void ModePersist::SetGameMode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModePersist_SetGameMode_m92ABD46EFCBE3D6A12B60A16E243B7EDDDBCF807 (ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* __this, String_t* ___0_mode, const RuntimeMethod* method) 
{
	{
		// chosenGameMode = mode;
		String_t* L_0 = ___0_mode;
		__this->___chosenGameMode_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chosenGameMode_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ModePersist::ResetScenePersist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModePersist_ResetScenePersist_mD9F966E2DFD24750695CB490C7FD23BD0DDFAC63 (ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void ModePersist::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModePersist__ctor_mC696CC4BA4575FD9E7D19969A1DD8FF9A42AD1B5 (ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SavedData::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedData_Awake_mF6C5EB177E01B0DAA0D8A6A7990D70D1E9401AB0 (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, const RuntimeMethod* method) 
{
	{
		// CheckScripts();
		SavedData_CheckScripts_m5ABB5BA97FDAD54A9299A0F023AD773D2006F504(__this, NULL);
		// AddGameModeToList();
		SavedData_AddGameModeToList_m4B45F99A7371BED060A5BF19FB2D82DFDE59E62A(__this, NULL);
		// }
		return;
	}
}
// System.Void SavedData::CheckScripts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedData_CheckScripts_m5ABB5BA97FDAD54A9299A0F023AD773D2006F504 (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisSavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C_m537C7E60B4B214649ED2555B75B1E42AA4BA30A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int numSavedData = FindObjectsOfType<SavedData>().Length;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SavedDataU5BU5D_tB0AD81204AA3E4D403F70B631949BA52BDA47098* L_0;
		L_0 = Object_FindObjectsOfType_TisSavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C_m537C7E60B4B214649ED2555B75B1E42AA4BA30A2(Object_FindObjectsOfType_TisSavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C_m537C7E60B4B214649ED2555B75B1E42AA4BA30A2_RuntimeMethod_var);
		// if (numSavedData > 1)
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		return;
	}

IL_0016:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// }
		return;
	}
}
// System.Void SavedData::AddGameModeToList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedData_AddGameModeToList_m4B45F99A7371BED060A5BF19FB2D82DFDE59E62A (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m2A505362A7EA975565D34CF2BFEFEBAF54A2AE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE55D03E15CFD849C6369DD407E889D80EAEB401A);
		s_Il2CppMethodInitialized = true;
	}
	GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* V_0 = NULL;
	int32_t V_1 = 0;
	GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* V_2 = NULL;
	{
		// GameModeSO[] gameModes = Resources.LoadAll<GameModeSO>("GameModes");
		GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* L_0;
		L_0 = Resources_LoadAll_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m2A505362A7EA975565D34CF2BFEFEBAF54A2AE0B(_stringLiteralE55D03E15CFD849C6369DD407E889D80EAEB401A, Resources_LoadAll_TisGameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A_m2A505362A7EA975565D34CF2BFEFEBAF54A2AE0B_RuntimeMethod_var);
		// foreach (GameModeSO mode in gameModes)
		V_0 = L_0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0012:
	{
		// foreach (GameModeSO mode in gameModes)
		GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (mode.GetName() == "Easy" || mode.GetName() == "Normal" || mode.GetName() == "Hard" || mode.GetName() == "Default")
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_5 = V_2;
		String_t* L_6;
		L_6 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F, NULL);
		if (L_7)
		{
			goto IL_005e;
		}
	}
	{
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_8 = V_2;
		String_t* L_9;
		L_9 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_8, NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A, NULL);
		if (L_10)
		{
			goto IL_005e;
		}
	}
	{
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_11 = V_2;
		String_t* L_12;
		L_12 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB, NULL);
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_14 = V_2;
		String_t* L_15;
		L_15 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, NULL);
		if (!L_16)
		{
			goto IL_0071;
		}
	}

IL_005e:
	{
		// mode.IsGameModeUnlocked = true;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_17 = V_2;
		GameModeSO_set_IsGameModeUnlocked_mA9AA4A4BF6B83AFD1655331D687C282E54C4134D_inline(L_17, (bool)1, NULL);
		// unlockedGameModes.Add(mode);
		List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* L_18 = __this->___unlockedGameModes_5;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_19 = V_2;
		List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_inline(L_18, L_19, List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_RuntimeMethod_var);
	}

IL_0071:
	{
		// if (mode.IsGameModeUnlocked)
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_20 = V_2;
		bool L_21;
		L_21 = GameModeSO_get_IsGameModeUnlocked_mCA1BA9FEB6D02B0599D0CA90035795EC1A03A536_inline(L_20, NULL);
		if (!L_21)
		{
			goto IL_0087;
		}
	}
	{
		// unlockedGameModes.Add(mode);
		List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* L_22 = __this->___unlockedGameModes_5;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_23 = V_2;
		List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_inline(L_22, L_23, List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_RuntimeMethod_var);
		goto IL_0093;
	}

IL_0087:
	{
		// lockedGameModes.Add(mode);
		List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* L_24 = __this->___lockedGameModes_4;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_25 = V_2;
		List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_inline(L_24, L_25, List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_RuntimeMethod_var);
	}

IL_0093:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0097:
	{
		// foreach (GameModeSO mode in gameModes)
		int32_t L_27 = V_1;
		GameModeSOU5BU5D_t07761BE9D6CFDC2B135AAB537590C5B869B7D524* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean SavedData::CheckAndSetHighscore(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedData_CheckAndSetHighscore_m8FE16E84F254AB2B1795EAB8C7DB0563EC1E2200 (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, String_t* ___0_gameMode, int32_t ___1_score, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E466F59AFF9FCCC2EDF21E09D88C797FB8067F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FD867EEBE1CC289A6470816910278798C5CF08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ADAA6EEE074D90049E75B8FBCAFF5599C5D1F29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951415F9BEA181204E0CF84D8A031B14030F60D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4057E3FE03751881EC1181AD006623717064F80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E1CF5DC0D4C4ECDF3BB121DE417485EF312F4B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (highScore.ContainsKey(gameMode))
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = __this->___highScore_6;
		String_t* L_1 = ___0_gameMode;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E(L_0, L_1, Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// if (score > highScore[gameMode])
		int32_t L_3 = ___1_score;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = __this->___highScore_6;
		String_t* L_5 = ___0_gameMode;
		int32_t L_6;
		L_6 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_4, L_5, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_6)))
		{
			goto IL_0071;
		}
	}
	{
		// highScore[gameMode] = score;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_7 = __this->___highScore_6;
		String_t* L_8 = ___0_gameMode;
		int32_t L_9 = ___1_score;
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_7, L_8, L_9, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// Debug.Log("Gamemode: " + gameMode + " Has a new Highscore of: " + score);
		String_t* L_10 = ___0_gameMode;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___1_score), NULL);
		String_t* L_12;
		L_12 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral46FD867EEBE1CC289A6470816910278798C5CF08, L_10, _stringLiteralE3E1CF5DC0D4C4ECDF3BB121DE417485EF312F4B, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// highScore[gameMode] = score;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_13 = __this->___highScore_6;
		String_t* L_14 = ___0_gameMode;
		int32_t L_15 = ___1_score;
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_13, L_14, L_15, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// Debug.Log("Initialized new highscore: " + score + " for game mode: " + gameMode);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___1_score), NULL);
		String_t* L_17 = ___0_gameMode;
		String_t* L_18;
		L_18 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral0E466F59AFF9FCCC2EDF21E09D88C797FB8067F9, L_16, _stringLiteral4ADAA6EEE074D90049E75B8FBCAFF5599C5D1F29, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
	}

IL_0071:
	{
		// Debug.Log("Highscore was not beat! Highscore for Game mode: " + gameMode + " is still: " + highScore[gameMode]);
		String_t* L_19 = ___0_gameMode;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_20 = __this->___highScore_6;
		String_t* L_21 = ___0_gameMode;
		int32_t L_22;
		L_22 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_20, L_21, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		V_0 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_24;
		L_24 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral951415F9BEA181204E0CF84D8A031B14030F60D4, L_19, _stringLiteralD4057E3FE03751881EC1181AD006623717064F80, L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_24, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean SavedData::CanUnlockGamemode(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedData_CanUnlockGamemode_m95204EB8741CBCC36012318FCA3ADDA49139B36B (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, String_t* ___0_currentGameMode, String_t* ___1_modeToUnlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mCBE7D7807A8E970F710981022178C0902B75346F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CCanUnlockGamemodeU3Eb__0_m7CC2126D93EE1C1FF460F83BC812B279A5DBCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB645EA85B80282F13438ABF6734989E6521741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63E28A159617CF311BC1D119F3DA19395EAD5EEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BAE935753D7F6819F83E94E9BA3A83FD7D108B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA51D1739B21CFC417EA41091B04A3B8CEC730C5);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3* L_0 = (U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m22F61CB35111D9EB32447F966E5DEACA4E8B495C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3* L_1 = V_0;
		String_t* L_2 = ___1_modeToUnlock;
		L_1->___modeToUnlock_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___modeToUnlock_0), (void*)L_2);
		// if (highScore.ContainsKey(currentGameMode))
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_3 = __this->___highScore_6;
		String_t* L_4 = ___0_currentGameMode;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E(L_3, L_4, Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_00a9;
		}
	}
	{
		// unlockMode = lockedGameModes.Find(mode => mode.GetName() == modeToUnlock);
		List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* L_6 = __this->___lockedGameModes_4;
		U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3* L_7 = V_0;
		Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172* L_8 = (Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172*)il2cpp_codegen_object_new(Predicate_1_tA13F111C6BD132F2CE90C834679C697E5E36B172_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mCCA093A57A430106381D84D55B9B224B96950ECA(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CCanUnlockGamemodeU3Eb__0_m7CC2126D93EE1C1FF460F83BC812B279A5DBCF95_RuntimeMethod_var), NULL);
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_9;
		L_9 = List_1_Find_mCBE7D7807A8E970F710981022178C0902B75346F(L_6, L_8, List_1_Find_mCBE7D7807A8E970F710981022178C0902B75346F_RuntimeMethod_var);
		__this->___unlockMode_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unlockMode_7), (void*)L_9);
		// MoreThanOneRequirement();
		bool L_10;
		L_10 = SavedData_MoreThanOneRequirement_mFBA623DAE5B041D1BC404233971F3E48BBF38969(__this, NULL);
		// if (unlockMode != null)
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_11 = __this->___unlockMode_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_00a9;
		}
	}
	{
		// int score = highScore[currentGameMode];
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_13 = __this->___highScore_6;
		String_t* L_14 = ___0_currentGameMode;
		int32_t L_15;
		L_15 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_13, L_14, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		// int requiredPoints = unlockMode.GetRequiredPoints();
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_16 = __this->___unlockMode_7;
		int32_t L_17;
		L_17 = GameModeSO_GetRequiredPoints_m9900CEFC1325A0BA4B4E38367F50497C575DEFAD_inline(L_16, NULL);
		V_1 = L_17;
		// if (score >= requiredPoints)
		int32_t L_18 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_18)))
		{
			goto IL_00a9;
		}
	}
	{
		// Debug.Log("Game Mode: " + unlockMode.GetName() + " has been unlocked");
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_19 = __this->___unlockMode_7;
		String_t* L_20;
		L_20 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral63E28A159617CF311BC1D119F3DA19395EAD5EEC, L_20, _stringLiteral0CB645EA85B80282F13438ABF6734989E6521741, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_21, NULL);
		// unlockedGameModes.Add(unlockMode);
		List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* L_22 = __this->___unlockedGameModes_5;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_23 = __this->___unlockMode_7;
		List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_inline(L_22, L_23, List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_RuntimeMethod_var);
		// unlockMode.IsGameModeUnlocked = true;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_24 = __this->___unlockMode_7;
		GameModeSO_set_IsGameModeUnlocked_mA9AA4A4BF6B83AFD1655331D687C282E54C4134D_inline(L_24, (bool)1, NULL);
		// return true;
		return (bool)1;
	}

IL_00a9:
	{
		// Debug.Log("GameMode: " + modeToUnlock + " is not found/ cannot be unlocked");
		U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3* L_25 = V_0;
		String_t* L_26 = L_25->___modeToUnlock_0;
		String_t* L_27;
		L_27 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral98BAE935753D7F6819F83E94E9BA3A83FD7D108B, L_26, _stringLiteralBA51D1739B21CFC417EA41091B04A3B8CEC730C5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_27, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean SavedData::MoreThanOneRequirement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedData_MoreThanOneRequirement_mFBA623DAE5B041D1BC404233971F3E48BBF38969 (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4DCF23FA32BC5B8AD285EB6595CBDF2A680BF533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m154143BDC6445669EC31BBB060C8C650CF25BBF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDA4ED016AC045E16739ED8BA685617ADEC39DBEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m742B95F9AD4B4B471B3D8C08FF3997B6BD91D686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B935DE8D8A22A4E05EDA9A126002FFC4084F3EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral503CFF5146805BD5E5845E74F4630ED095A8F005);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F0FF7C92408FD68085CBC2A6394CD2B5705F703);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BAE935753D7F6819F83E94E9BA3A83FD7D108B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B0787F0EEE8A3166CB4A40A69EEC1662E62F8F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3052E910402145F6BE0EE5080DA81D71E93129C);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// if (unlockMode.GetHasMoreThanOneRequirement())
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_0 = __this->___unlockMode_7;
		bool L_1;
		L_1 = GameModeSO_GetHasMoreThanOneRequirement_m698742A74CAA914FAF9E89ACE1AE911905E7AFE3_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_00e8;
		}
	}
	{
		// foreach (var requiredMode in unlockMode.requiredModesAndPoints.Keys)
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_2 = __this->___unlockMode_7;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_3 = L_2->___requiredModesAndPoints_4;
		KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* L_4;
		L_4 = Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E(L_3, Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E_RuntimeMethod_var);
		Enumerator_t90883FE992822004E09B9D0D079A8D6B2C58D0B5 L_5;
		L_5 = KeyCollection_GetEnumerator_m742B95F9AD4B4B471B3D8C08FF3997B6BD91D686(L_4, KeyCollection_GetEnumerator_m742B95F9AD4B4B471B3D8C08FF3997B6BD91D686_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4DCF23FA32BC5B8AD285EB6595CBDF2A680BF533((&V_0), Enumerator_Dispose_m4DCF23FA32BC5B8AD285EB6595CBDF2A680BF533_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0091_1;
			}

IL_0028_1:
			{
				// foreach (var requiredMode in unlockMode.requiredModesAndPoints.Keys)
				String_t* L_6;
				L_6 = Enumerator_get_Current_mDA4ED016AC045E16739ED8BA685617ADEC39DBEF_inline((&V_0), Enumerator_get_Current_mDA4ED016AC045E16739ED8BA685617ADEC39DBEF_RuntimeMethod_var);
				V_1 = L_6;
				// int requiredPoints = unlockMode.requiredModesAndPoints[requiredMode];
				GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_7 = __this->___unlockMode_7;
				Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_8 = L_7->___requiredModesAndPoints_4;
				String_t* L_9 = V_1;
				int32_t L_10;
				L_10 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_8, L_9, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
				V_2 = L_10;
				// if (highScore.ContainsKey(requiredMode))
				Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_11 = __this->___highScore_6;
				String_t* L_12 = V_1;
				bool L_13;
				L_13 = Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E(L_11, L_12, Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
				if (!L_13)
				{
					goto IL_0078_1;
				}
			}
			{
				// int score = highScore[requiredMode];
				Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_14 = __this->___highScore_6;
				String_t* L_15 = V_1;
				int32_t L_16;
				L_16 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_14, L_15, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
				// if (score < requiredPoints)
				int32_t L_17 = V_2;
				if ((((int32_t)L_16) >= ((int32_t)L_17)))
				{
					goto IL_0091_1;
				}
			}
			{
				// Debug.Log("This required mode: " + requiredMode + " doesn't meet the required score.");
				String_t* L_18 = V_1;
				String_t* L_19;
				L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral9B0787F0EEE8A3166CB4A40A69EEC1662E62F8F7, L_18, _stringLiteral1B935DE8D8A22A4E05EDA9A126002FFC4084F3EF, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
				// return false;
				V_3 = (bool)0;
				goto IL_00ea;
			}

IL_0078_1:
			{
				// Debug.Log("The gamemode: " + requiredMode + "Does not have a highScore! Play the gamemode before trying to unlock this mode!");
				String_t* L_20 = V_1;
				String_t* L_21;
				L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral6F0FF7C92408FD68085CBC2A6394CD2B5705F703, L_20, _stringLiteral503CFF5146805BD5E5845E74F4630ED095A8F005, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_21, NULL);
				// return false;
				V_3 = (bool)0;
				goto IL_00ea;
			}

IL_0091_1:
			{
				// foreach (var requiredMode in unlockMode.requiredModesAndPoints.Keys)
				bool L_22;
				L_22 = Enumerator_MoveNext_m154143BDC6445669EC31BBB060C8C650CF25BBF7((&V_0), Enumerator_MoveNext_m154143BDC6445669EC31BBB060C8C650CF25BBF7_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// Debug.Log("GameMode: " + unlockMode.GetName() + "Has been unlocked");
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_23 = __this->___unlockMode_7;
		String_t* L_24;
		L_24 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_23, NULL);
		String_t* L_25;
		L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral98BAE935753D7F6819F83E94E9BA3A83FD7D108B, L_24, _stringLiteralC3052E910402145F6BE0EE5080DA81D71E93129C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_25, NULL);
		// unlockedGameModes.Add(unlockMode);
		List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* L_26 = __this->___unlockedGameModes_5;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_27 = __this->___unlockMode_7;
		List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_inline(L_26, L_27, List_1_Add_mAF7D671477FDCC7090A85F638FEAC163FE045B91_RuntimeMethod_var);
		// unlockMode.IsGameModeUnlocked = true;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_28 = __this->___unlockMode_7;
		GameModeSO_set_IsGameModeUnlocked_mA9AA4A4BF6B83AFD1655331D687C282E54C4134D_inline(L_28, (bool)1, NULL);
		// return true;
		return (bool)1;
	}

IL_00e8:
	{
		// return false;
		return (bool)0;
	}

IL_00ea:
	{
		// }
		bool L_29 = V_3;
		return L_29;
	}
}
// System.Void SavedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedData__ctor_m3EB49D070F007B8687B2BE432229CCF94E597668 (SavedData_t9374750BC51C1BBEDA5163E030A608206E83BB7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD587A3E317B3D9B63D16DA6B2C63C4DBD43256E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<GameModeSO> lockedGameModes = new List<GameModeSO>();
		List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* L_0 = (List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB*)il2cpp_codegen_object_new(List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB_il2cpp_TypeInfo_var);
		List_1__ctor_mD587A3E317B3D9B63D16DA6B2C63C4DBD43256E6(L_0, List_1__ctor_mD587A3E317B3D9B63D16DA6B2C63C4DBD43256E6_RuntimeMethod_var);
		__this->___lockedGameModes_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lockedGameModes_4), (void*)L_0);
		// List<GameModeSO> unlockedGameModes = new List<GameModeSO>();
		List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB* L_1 = (List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB*)il2cpp_codegen_object_new(List_1_t3FD5668998AC3B01BB1D04EA371B2CD5587FC7AB_il2cpp_TypeInfo_var);
		List_1__ctor_mD587A3E317B3D9B63D16DA6B2C63C4DBD43256E6(L_1, List_1__ctor_mD587A3E317B3D9B63D16DA6B2C63C4DBD43256E6_RuntimeMethod_var);
		__this->___unlockedGameModes_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unlockedGameModes_5), (void*)L_1);
		// Dictionary<string, int> highScore = new Dictionary<string, int>();
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_2, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		__this->___highScore_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___highScore_6), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SavedData/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m22F61CB35111D9EB32447F966E5DEACA4E8B495C (U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SavedData/<>c__DisplayClass8_0::<CanUnlockGamemode>b__0(GameModeSO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CCanUnlockGamemodeU3Eb__0_m7CC2126D93EE1C1FF460F83BC812B279A5DBCF95 (U3CU3Ec__DisplayClass8_0_tF2E68B176E9196099BA77AADB620C4F8202B6EA3* __this, GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* ___0_mode, const RuntimeMethod* method) 
{
	{
		// unlockMode = lockedGameModes.Find(mode => mode.GetName() == modeToUnlock);
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_0 = ___0_mode;
		String_t* L_1;
		L_1 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_0, NULL);
		String_t* L_2 = __this->___modeToUnlock_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DeleteParticle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteParticle_OnEnable_m901F124A294E342658CEC7B68F5ED91C1875C74F (DeleteParticle_tBFCE9D277AD4D66B6F5FA43BCCA5242C079BB7EC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Delete());
		RuntimeObject* L_0;
		L_0 = DeleteParticle_Delete_m7CE46B6511F042E3EA5E7537D44D5C2504584E57(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DeleteParticle::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeleteParticle_Delete_m7CE46B6511F042E3EA5E7537D44D5C2504584E57 (DeleteParticle_tBFCE9D277AD4D66B6F5FA43BCCA5242C079BB7EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0* L_0 = (U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0*)il2cpp_codegen_object_new(U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0_il2cpp_TypeInfo_var);
		U3CDeleteU3Ed__1__ctor_mC9BAC158907508012552A83176979F949A18F9AC(L_0, 0, NULL);
		U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DeleteParticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteParticle__ctor_m40F75E7EFAC7F290BE2B57931BACE366A9855E42 (DeleteParticle_tBFCE9D277AD4D66B6F5FA43BCCA5242C079BB7EC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DeleteParticle/<Delete>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteU3Ed__1__ctor_mC9BAC158907508012552A83176979F949A18F9AC (U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DeleteParticle/<Delete>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteU3Ed__1_System_IDisposable_Dispose_m3FCD85838A5B7CC71A2272ED346C425A8947121C (U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DeleteParticle/<Delete>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeleteU3Ed__1_MoveNext_m1ED77EC50526EB44A1E2107F9FEC35FA97B9D7AE (U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DeleteParticle_tBFCE9D277AD4D66B6F5FA43BCCA5242C079BB7EC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DeleteParticle_tBFCE9D277AD4D66B6F5FA43BCCA5242C079BB7EC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(gameObject);
		DeleteParticle_tBFCE9D277AD4D66B6F5FA43BCCA5242C079BB7EC* L_5 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DeleteParticle/<Delete>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeleteU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8C3E7A9FB06A761DBADDBF02E58C36203C7C1AE6 (U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DeleteParticle/<Delete>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteU3Ed__1_System_Collections_IEnumerator_Reset_mA305C15DA79264F46183CDD8BADD2FA7C7256632 (U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeleteU3Ed__1_System_Collections_IEnumerator_Reset_mA305C15DA79264F46183CDD8BADD2FA7C7256632_RuntimeMethod_var)));
	}
}
// System.Object DeleteParticle/<Delete>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeleteU3Ed__1_System_Collections_IEnumerator_get_Current_mBB6D2868646B79B81F1CBE0A0795CB8EFDB9C266 (U3CDeleteU3Ed__1_t032809D31C31476BB72B87528F26337BF1E7A1A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DespawnObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DespawnObject_Update_m9D428589739EFAE8E3AC0708EEF2D3E5E2C03ABE (DespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// for (int i = transform.childCount - 1; i >= 0; i--)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_003f;
	}

IL_0010:
	{
		// Transform child = transform.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, L_3, NULL);
		V_1 = L_4;
		// if (child.position.z < killVector)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___z_4;
		float L_8 = __this->___killVector_4;
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		// Destroy(child.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
	}

IL_003b:
	{
		// for (int i = transform.childCount - 1; i >= 0; i--)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_003f:
	{
		// for (int i = transform.childCount - 1; i >= 0; i--)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DespawnObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DespawnObject__ctor_m46E225B9332A3D42B4A6C07BC3FA16F869E72132 (DespawnObject_t98E42C1293A190F08B2904312F644225A2117BC0* __this, const RuntimeMethod* method) 
{
	{
		// float killVector = -40f;
		__this->___killVector_4 = (-40.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveOnHighway::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveOnHighway_Start_m6F9424D5302633F5FDC13EFA5E9FAA4C6EADFDB5 (MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameMode = FindObjectOfType<GameModeController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_0;
		L_0 = Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF(Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		__this->___gameMode_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameMode_5), (void*)L_0);
		// speed = gameMode.CurrentGameMode.GetObstacleSpeed();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_1 = __this->___gameMode_5;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_2;
		L_2 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_1, NULL);
		float L_3;
		L_3 = GameModeSO_GetObstacleSpeed_m51160BF6980E6F48351038E81006706F0D1D3281_inline(L_2, NULL);
		__this->___speed_4 = L_3;
		// }
		return;
	}
}
// System.Void MoveOnHighway::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveOnHighway_Update_mC7ECF41ACC3F9CAEE9339E1AF10405762A8BC4B6 (MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.forward * Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void MoveOnHighway::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveOnHighway__ctor_m23B9A6139EB5F2ADE458871218A1CDBA566F03E2 (MoveOnHighway_t70F96C2E3C0D2D804AFC1B4340FBB45FDC4C4712* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjectSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_Start_mE19667397EFFE281AF098051957A34B21C97B6C3 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathHandler = FindObjectOfType<DeathHandler>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_0;
		L_0 = Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD(Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		__this->___deathHandler_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deathHandler_16), (void*)L_0);
		// gameMode = FindObjectOfType<GameModeController>();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_1;
		L_1 = Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF(Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		__this->___gameMode_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameMode_19), (void*)L_1);
		// spawnDelay = gameMode.CurrentGameMode.GetObstacleSpawnDelay();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_2 = __this->___gameMode_19;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_3;
		L_3 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_2, NULL);
		float L_4;
		L_4 = GameModeSO_GetObstacleSpawnDelay_m23848BCB395F5EA26D33C971F7E681DDBED5F851_inline(L_3, NULL);
		__this->___spawnDelay_18 = L_4;
		// StartCoroutine(RangeRandomizer());
		RuntimeObject* L_5;
		L_5 = ObjectSpawner_RangeRandomizer_mC350EFAF2678C1E91C6A81C90F42B32F07FAC33A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void ObjectSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_Update_m9F373E88B27396D6EC93ACFF2EAFFDC63833BDE8 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	{
		// playerAlive = deathHandler.IsPlayerAlive;
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_0 = __this->___deathHandler_16;
		bool L_1;
		L_1 = DeathHandler_get_IsPlayerAlive_mA31D83D152977F207A8CE87BEB203ECFBFDB2C33_inline(L_0, NULL);
		__this->___playerAlive_17 = L_1;
		// }
		return;
	}
}
// System.Collections.IEnumerator ObjectSpawner::RangeRandomizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectSpawner_RangeRandomizer_mC350EFAF2678C1E91C6A81C90F42B32F07FAC33A (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB* L_0 = (U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB*)il2cpp_codegen_object_new(U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB_il2cpp_TypeInfo_var);
		U3CRangeRandomizerU3Ed__18__ctor_mCDE2A576E30E11907928C164F3DE1C91F8353377(L_0, 0, NULL);
		U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ObjectSpawner::SpawnObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_SpawnObject_m1C166D17C9EA8A54A9BBAD9E893035BAE8CE4C47 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	{
		// CheckLaneChoice();
		ObjectSpawner_CheckLaneChoice_mC28A5DBA3D764D810164837AA56E4D4D7B5AC99F(__this, NULL);
		// if (spawnPoint != null)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___spawnPoint_6;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// CheckObjectChoice();
		ObjectSpawner_CheckObjectChoice_m8E9A8DF95E2F81863FEAF60B9580E7A8CFA15AE5(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void ObjectSpawner::CheckLaneChoice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_CheckLaneChoice_mC28A5DBA3D764D810164837AA56E4D4D7B5AC99F (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int maxAttempts = 4;
		V_0 = 4;
		// int currentAttempt = 0;
		V_1 = 0;
	}

IL_0004:
	{
		// laneRange = Random.Range(0, 4);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 4, NULL);
		__this->___laneRange_8 = L_0;
		// if (laneRange != previousLane)
		int32_t L_1 = __this->___laneRange_8;
		int32_t L_2 = __this->___previousLane_14;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0070;
		}
	}
	{
		// if (!laneHistory.Contains(laneRange))
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_3 = __this->___laneHistory_12;
		int32_t L_4 = __this->___laneRange_8;
		bool L_5;
		L_5 = Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64(L_3, L_4, Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0070;
		}
	}
	{
		// laneHistory.Enqueue(laneRange);
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_6 = __this->___laneHistory_12;
		int32_t L_7 = __this->___laneRange_8;
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_6, L_7, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		// if (laneHistory.Count > maxHistoryLength)
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_8 = __this->___laneHistory_12;
		int32_t L_9;
		L_9 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_8, Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		int32_t L_10 = __this->___maxHistoryLength_13;
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0062;
		}
	}
	{
		// laneHistory.Dequeue();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_11 = __this->___laneHistory_12;
		int32_t L_12;
		L_12 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_11, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
	}

IL_0062:
	{
		// previousLane = laneRange;
		int32_t L_13 = __this->___laneRange_8;
		__this->___previousLane_14 = L_13;
		// break;
		goto IL_0078;
	}

IL_0070:
	{
		// currentAttempt++;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// while (currentAttempt < maxAttempts);
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}

IL_0078:
	{
		// if (currentAttempt >= maxAttempts)
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_008e;
		}
	}
	{
		// laneHistory.Clear();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_19 = __this->___laneHistory_12;
		Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1(L_19, Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_RuntimeMethod_var);
		// previousLane = -1;
		__this->___previousLane_14 = (-1);
	}

IL_008e:
	{
		// spawnTransform = spawnPoint[laneRange].GetComponent<Transform>();
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_20 = __this->___spawnPoint_6;
		int32_t L_21 = __this->___laneRange_8;
		int32_t L_22 = L_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(L_23, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		__this->___spawnTransform_15 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnTransform_15), (void*)L_24);
		// }
		return;
	}
}
// System.Void ObjectSpawner::CheckObjectChoice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_CheckObjectChoice_m8E9A8DF95E2F81863FEAF60B9580E7A8CFA15AE5 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	{
		// if (objectRange == 1)
		int32_t L_0 = __this->___objectRange_9;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		// SpawnObstacle();
		ObjectSpawner_SpawnObstacle_mDA4DE5F7525EF725671AE547D77BFA763AF82AFA(__this, NULL);
		return;
	}

IL_0010:
	{
		// else if (objectRange == 2)
		int32_t L_1 = __this->___objectRange_9;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		// SpawnCar();
		ObjectSpawner_SpawnCar_m980617AD75C9E76190D24503C6DA9370E3E12E69(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void ObjectSpawner::SpawnObstacle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_SpawnObstacle_mDA4DE5F7525EF725671AE547D77BFA763AF82AFA (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject prefabToSpawn = obstaclePrefabs[obstacleRange];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___obstaclePrefabs_4;
		int32_t L_1 = __this->___obstacleRange_10;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		// GameObject newObstacle = Instantiate(prefabToSpawn, spawnTransform.position, spawnTransform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___spawnTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___spawnTransform_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_5, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// newObstacle.transform.SetParent(despawnObject.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___despawnObject_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_11, NULL);
		// }
		return;
	}
}
// System.Void ObjectSpawner::SpawnCar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_SpawnCar_m980617AD75C9E76190D24503C6DA9370E3E12E69 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject prefabToSpawn = carPrefabs[carRange];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___carPrefabs_5;
		int32_t L_1 = __this->___carRange_11;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		// GameObject newCar = Instantiate(prefabToSpawn, spawnTransform.position, spawnTransform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___spawnTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___spawnTransform_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_5, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// newCar.transform.SetParent(despawnObject.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___despawnObject_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_11, NULL);
		// }
		return;
	}
}
// System.Void ObjectSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner__ctor_mF75EFE9AB26EAEF6D1995A34FB35C2BDE08A083C (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Queue<int> laneHistory = new Queue<int>();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_0 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_0, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		__this->___laneHistory_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___laneHistory_12), (void*)L_0);
		// private int maxHistoryLength = 5;
		__this->___maxHistoryLength_13 = 5;
		// private int previousLane = -1;
		__this->___previousLane_14 = (-1);
		// bool playerAlive = true;
		__this->___playerAlive_17 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjectSpawner/<RangeRandomizer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRangeRandomizerU3Ed__18__ctor_mCDE2A576E30E11907928C164F3DE1C91F8353377 (U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ObjectSpawner/<RangeRandomizer>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRangeRandomizerU3Ed__18_System_IDisposable_Dispose_m5BAF6434872F212E64800BC999B7C5C6FD058B25 (U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ObjectSpawner/<RangeRandomizer>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRangeRandomizerU3Ed__18_MoveNext_m3AF318CB7C0269D99F03EBE78FB7F17620DB9DB3 (U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_007d;
	}

IL_0020:
	{
		// objectRange = Random.Range(1, 3);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_4 = V_1;
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 3, NULL);
		L_4->___objectRange_9 = L_5;
		// laneRange = Random.Range(0, 4);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_6 = V_1;
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 4, NULL);
		L_6->___laneRange_8 = L_7;
		// obstacleRange = Random.Range(0, 9);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_8 = V_1;
		int32_t L_9;
		L_9 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)9), NULL);
		L_8->___obstacleRange_10 = L_9;
		// carRange = Random.Range(0, 12);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_10 = V_1;
		int32_t L_11;
		L_11 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)12), NULL);
		L_10->___carRange_11 = L_11;
		// SpawnObject();
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_12 = V_1;
		ObjectSpawner_SpawnObject_m1C166D17C9EA8A54A9BBAD9E893035BAE8CE4C47(L_12, NULL);
		// yield return new WaitForSeconds(spawnDelay);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_13 = V_1;
		float L_14 = L_13->___spawnDelay_18;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, L_14, NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0076:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007d:
	{
		// while (playerAlive)
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_16 = V_1;
		bool L_17 = L_16->___playerAlive_17;
		if (L_17)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ObjectSpawner/<RangeRandomizer>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRangeRandomizerU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD7DBAC6D1A8F804CBDAD5EDF43A8E22943937CE2 (U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ObjectSpawner/<RangeRandomizer>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRangeRandomizerU3Ed__18_System_Collections_IEnumerator_Reset_mDDCDCF2B04BD029AC67F6FFEB1AB741398864A43 (U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRangeRandomizerU3Ed__18_System_Collections_IEnumerator_Reset_mDDCDCF2B04BD029AC67F6FFEB1AB741398864A43_RuntimeMethod_var)));
	}
}
// System.Object ObjectSpawner/<RangeRandomizer>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRangeRandomizerU3Ed__18_System_Collections_IEnumerator_get_Current_m991EBA78BE303F2B8A6BFAE81BAD0A7B48C6BC4F (U3CRangeRandomizerU3Ed__18_t6F3B0DABA60DA035DAB7E592360967EABCDB40AB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DetectBullets::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectBullets_Start_mDBE2CEC89AD3A92BDCAF088A526832238E477ED6 (DetectBullets_tCCB923CEB91BFE50AF6D5BB3F8A56BC61F5DB331* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameMode = FindObjectOfType<GameModeController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_0;
		L_0 = Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF(Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		__this->___gameMode_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameMode_5), (void*)L_0);
		// scorekeeper = FindObjectOfType<ScoreKeeper>();
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_1;
		L_1 = Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7(Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		__this->___scorekeeper_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scorekeeper_8), (void*)L_1);
		// hasBullets = gameMode.CurrentGameMode.GetPlayerHasBullets();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_2 = __this->___gameMode_5;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_3;
		L_3 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_2, NULL);
		bool L_4;
		L_4 = GameModeSO_GetPlayerHasBullets_mAD96D0D5E3595BFA78AC05FB1985D08FDA214715_inline(L_3, NULL);
		__this->___hasBullets_7 = L_4;
		// pointvalue = 0;
		__this->___pointvalue_9 = 0;
		// if (hasBullets)
		bool L_5 = __this->___hasBullets_7;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		// WhatCanPlayerShoot();
		DetectBullets_WhatCanPlayerShoot_m2E5A0572B31E6AED7B39C03CB20E5B8EE49C6E8B(__this, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void DetectBullets::WhatCanPlayerShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectBullets_WhatCanPlayerShoot_m2E5A0572B31E6AED7B39C03CB20E5B8EE49C6E8B (DetectBullets_tCCB923CEB91BFE50AF6D5BB3F8A56BC61F5DB331* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93DE711C27E711CBBB8545BB77856B62320F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCDF22F0BA1FC534FC6656104D7D41A8D396BCE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// switch (gameMode.CurrentGameMode.GetPlayerCanShoot())
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_0 = __this->___gameMode_5;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_1;
		L_1 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_0, NULL);
		float L_2;
		L_2 = GameModeSO_GetPlayerCanShoot_m8F4A0E7C7AD835873111D3B0B1BC4853F8E990ED(L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		if ((((float)L_3) == ((float)(1.0f))))
		{
			goto IL_002b;
		}
	}
	{
		float L_4 = V_0;
		if ((((float)L_4) == ((float)(2.0f))))
		{
			goto IL_0042;
		}
	}
	{
		float L_5 = V_0;
		if ((((float)L_5) == ((float)(3.0f))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0070;
	}

IL_002b:
	{
		// canShoot = "Obstacle";
		__this->___canShoot_6 = _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canShoot_6), (void*)_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		// pointvalue = 200;
		__this->___pointvalue_9 = ((int32_t)200);
		// break;
		return;
	}

IL_0042:
	{
		// canShoot = "Car";
		__this->___canShoot_6 = _stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canShoot_6), (void*)_stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E);
		// pointvalue = 400;
		__this->___pointvalue_9 = ((int32_t)400);
		// break;
		return;
	}

IL_0059:
	{
		// canShoot = "All";
		__this->___canShoot_6 = _stringLiteralCCDF22F0BA1FC534FC6656104D7D41A8D396BCE5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canShoot_6), (void*)_stringLiteralCCDF22F0BA1FC534FC6656104D7D41A8D396BCE5);
		// pointvalue = 300;
		__this->___pointvalue_9 = ((int32_t)300);
		// break;
		return;
	}

IL_0070:
	{
		// canShoot = null;
		__this->___canShoot_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canShoot_6), (void*)(String_t*)NULL);
		// Debug.Log("Player cannot shoot anything");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC93DE711C27E711CBBB8545BB77856B62320F8C0, NULL);
		// }
		return;
	}
}
// System.Void DetectBullets::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectBullets_OnParticleCollision_m8C5347FE32D23130C4133AA1478992CFD8849E5A (DetectBullets_tCCB923CEB91BFE50AF6D5BB3F8A56BC61F5DB331* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCDF22F0BA1FC534FC6656104D7D41A8D396BCE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hasBullets)
		bool L_0 = __this->___hasBullets_7;
		if (!L_0)
		{
			goto IL_00b1;
		}
	}
	{
		// if (canShoot == "All")
		String_t* L_1 = __this->___canShoot_6;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCCDF22F0BA1FC534FC6656104D7D41A8D396BCE5, NULL);
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		// if (other.CompareTag("Obstacle") || other.CompareTag("Car"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_other;
		bool L_4;
		L_4 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_3, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900, NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___0_other;
		bool L_6;
		L_6 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_5, _stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E, NULL);
		if (!L_6)
		{
			goto IL_00b1;
		}
	}

IL_0037:
	{
		// Instantiate(explosion, other.transform.position, Quaternion.identity);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = __this->___explosion_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___0_other;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12;
		L_12 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2(L_7, L_10, L_11, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		// scorekeeper.UpdateScore(pointvalue);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_13 = __this->___scorekeeper_8;
		int32_t L_14 = __this->___pointvalue_9;
		ScoreKeeper_UpdateScore_mE0D2587DFB5B3EACD90D8B4C44D63FBC69EC2F04(L_13, L_14, NULL);
		// Destroy(other);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___0_other;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_15, NULL);
		return;
	}

IL_006b:
	{
		// else if (other.CompareTag(canShoot))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ___0_other;
		String_t* L_17 = __this->___canShoot_6;
		bool L_18;
		L_18 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_00b1;
		}
	}
	{
		// Instantiate(explosion, other.transform.position, Quaternion.identity);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_19 = __this->___explosion_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = ___0_other;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_24;
		L_24 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2(L_19, L_22, L_23, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		// Destroy(other.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_25, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_26, NULL);
		// scorekeeper.UpdateScore(pointvalue);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_27 = __this->___scorekeeper_8;
		int32_t L_28 = __this->___pointvalue_9;
		ScoreKeeper_UpdateScore_mE0D2587DFB5B3EACD90D8B4C44D63FBC69EC2F04(L_27, L_28, NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void DetectBullets::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectBullets__ctor_m283627EA0ACF8076419D47B40389D27ABF8C2C42 (DetectBullets_tCCB923CEB91BFE50AF6D5BB3F8A56BC61F5DB331* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DetectCollisions::get_PlayerHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetectCollisions_get_PlayerHealth_m6AC2E74D7937283BB4D09B90F7E8062537478F29 (DetectCollisions_tBBA78C3D5C2754339AC0A4568335E825A2ECBE8E* __this, const RuntimeMethod* method) 
{
	{
		// public float PlayerHealth { get { return playerHealth; } }
		float L_0 = __this->___playerHealth_9;
		return L_0;
	}
}
// System.Void DetectCollisions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectCollisions_Start_m5431E781B8EC45CFF68236926BE4C8D2ACC10314 (DetectCollisions_tBBA78C3D5C2754339AC0A4568335E825A2ECBE8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathHandler = FindObjectOfType<DeathHandler>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_0;
		L_0 = Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD(Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		__this->___deathHandler_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deathHandler_5), (void*)L_0);
		// uiScript = FindObjectOfType<UIController>();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_1;
		L_1 = Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D(Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D_RuntimeMethod_var);
		__this->___uiScript_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uiScript_6), (void*)L_1);
		// gameMode = FindObjectOfType<GameModeController>();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_2;
		L_2 = Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF(Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		__this->___gameMode_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameMode_7), (void*)L_2);
		// hasHealth = gameMode.CurrentGameMode.GetPlayerHasHealth();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_3 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_4;
		L_4 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_3, NULL);
		bool L_5;
		L_5 = GameModeSO_GetPlayerHasHealth_mF0547C99BBE44FAE35247BE0B5714151DE2C7B06_inline(L_4, NULL);
		__this->___hasHealth_8 = L_5;
		// if (hasHealth)
		bool L_6 = __this->___hasHealth_8;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// playerHealth = gameMode.CurrentGameMode.GetPlayerHealth();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_7 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_8;
		L_8 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_7, NULL);
		float L_9;
		L_9 = GameModeSO_GetPlayerHealth_m61F4A7D0CF41D750B4DF0DB1E4271A6C33FA929F_inline(L_8, NULL);
		__this->___playerHealth_9 = L_9;
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void DetectCollisions::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectCollisions_OnCollisionEnter_m4101658AE81928C997C91E8AA72CE686E47105E7 (DetectCollisions_tBBA78C3D5C2754339AC0A4568335E825A2ECBE8E* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Obstacle")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		// explosion.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = __this->___explosion_4;
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_4, NULL);
		// Destroy(other.gameObject);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_5 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// if (hasHealth)
		bool L_7 = __this->___hasHealth_8;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// ProcessHealth("Obstacle");
		DetectCollisions_ProcessHealth_m7D14E2BAFC2954BF778C1FB7EF11098ACC96748A(__this, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900, NULL);
		return;
	}

IL_0041:
	{
		// deathHandler.ActivateGameOver();
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_8 = __this->___deathHandler_5;
		DeathHandler_ActivateGameOver_mC31C91646E063AA768EB4347BD6A7F8113F213CA(L_8, NULL);
		return;
	}

IL_004d:
	{
		// else if (other.gameObject.CompareTag("Car"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_9 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_9, NULL);
		bool L_11;
		L_11 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_10, _stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E, NULL);
		if (!L_11)
		{
			goto IL_0094;
		}
	}
	{
		// explosion.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = __this->___explosion_4;
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_12, NULL);
		// Destroy(other.gameObject);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_13 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_14, NULL);
		// if (hasHealth)
		bool L_15 = __this->___hasHealth_8;
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		// ProcessHealth("Car");
		DetectCollisions_ProcessHealth_m7D14E2BAFC2954BF778C1FB7EF11098ACC96748A(__this, _stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E, NULL);
		return;
	}

IL_0089:
	{
		// deathHandler.ActivateGameOver();
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_16 = __this->___deathHandler_5;
		DeathHandler_ActivateGameOver_mC31C91646E063AA768EB4347BD6A7F8113F213CA(L_16, NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void DetectCollisions::ProcessHealth(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectCollisions_ProcessHealth_m7D14E2BAFC2954BF778C1FB7EF11098ACC96748A (DetectCollisions_tBBA78C3D5C2754339AC0A4568335E825A2ECBE8E* __this, String_t* ___0_enemy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (enemy == "Obstacle")
		String_t* L_0 = ___0_enemy;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900, NULL);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// playerHealth--;
		float L_2 = __this->___playerHealth_9;
		__this->___playerHealth_9 = ((float)il2cpp_codegen_subtract(L_2, (1.0f)));
		// uiScript.DisplayHealthBar(playerHealth);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_3 = __this->___uiScript_6;
		float L_4 = __this->___playerHealth_9;
		UIController_DisplayHealthBar_mA0912819A86DADE29954F140E6F77044B3CE35B1(L_3, L_4, NULL);
		// if (playerHealth <= 0)
		float L_5 = __this->___playerHealth_9;
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// deathHandler.ActivateGameOver();
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_6 = __this->___deathHandler_5;
		DeathHandler_ActivateGameOver_mC31C91646E063AA768EB4347BD6A7F8113F213CA(L_6, NULL);
		return;
	}

IL_0049:
	{
		// else if (enemy == "Car")
		String_t* L_7 = ___0_enemy;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralD37CFB18BD95466D507B21CEEE8EA1B8ACF1A60E, NULL);
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		// playerHealth -= 2;
		float L_9 = __this->___playerHealth_9;
		__this->___playerHealth_9 = ((float)il2cpp_codegen_subtract(L_9, (2.0f)));
		// uiScript.DisplayHealthBar(playerHealth);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_10 = __this->___uiScript_6;
		float L_11 = __this->___playerHealth_9;
		UIController_DisplayHealthBar_mA0912819A86DADE29954F140E6F77044B3CE35B1(L_10, L_11, NULL);
		// if (playerHealth <= 0)
		float L_12 = __this->___playerHealth_9;
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// deathHandler.ActivateGameOver();
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_13 = __this->___deathHandler_5;
		DeathHandler_ActivateGameOver_mC31C91646E063AA768EB4347BD6A7F8113F213CA(L_13, NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void DetectCollisions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectCollisions__ctor_mDBC72F36F5FBD96B3C5B42B9347007130B679CFD (DetectCollisions_tBBA78C3D5C2754339AC0A4568335E825A2ECBE8E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FollowPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_Start_m138697E0740DB2570074B2DB69AE32AF46A994F9 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameMode = FindObjectOfType<GameModeController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_0;
		L_0 = Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF(Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		__this->___gameMode_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameMode_5), (void*)L_0);
		// player = FindObjectOfType<PlayerController>();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1;
		L_1 = Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9(Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9_RuntimeMethod_var);
		__this->___player_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void FollowPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_Update_m6CCD681461C8062489A435B45285AEE84F3B3DB6 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	{
		// CheckGameMode();
		FollowPlayer_CheckGameMode_m904D483B809EA9749C9DFF4B6E6B23005E40143F(__this, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayer::CheckGameMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_CheckGameMode_m904D483B809EA9749C9DFF4B6E6B23005E40143F (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral099B0CB25DE39FDBECC7EC35C102D4BD3305EA11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B9D5E3B209C878FED546DB16F1C1004DFF8DD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D1AB0E992E660615D993190955E1843B07FA77C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA117248972D97717D001B12BB39193CC877DE611);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE8B7D8B1118CC392A73D29BBEA293B6D5FF2976);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch (gameMode.CurrentGameMode.GetName())
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_0 = __this->___gameMode_5;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_1;
		L_1 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_0, NULL);
		String_t* L_2;
		L_2 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral12B9D5E3B209C878FED546DB16F1C1004DFF8DD3, NULL);
		if (L_4)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral099B0CB25DE39FDBECC7EC35C102D4BD3305EA11, NULL);
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralBE8B7D8B1118CC392A73D29BBEA293B6D5FF2976, NULL);
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralA117248972D97717D001B12BB39193CC877DE611, NULL);
		if (L_10)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral5D1AB0E992E660615D993190955E1843B07FA77C, NULL);
		if (L_12)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0077;
	}

IL_0054:
	{
		// TinyOffset();
		FollowPlayer_TinyOffset_mF88ECBBD9E35F0EFA4DE79B1C951BF854CFC6D66(__this, NULL);
		// break;
		return;
	}

IL_005b:
	{
		// FirstOffset();
		FollowPlayer_FirstOffset_m38DA1358CDCAB4ABE3561862FF1E3B70D43424DE(__this, NULL);
		// break;
		return;
	}

IL_0062:
	{
		// TopOffset();
		FollowPlayer_TopOffset_mBF394EC844FEE6CA22D9CAF7FD5E5CA4AE78621E(__this, NULL);
		// break;
		return;
	}

IL_0069:
	{
		// MightyOffset();
		FollowPlayer_MightyOffset_m5A06A6184D4858A4DB29BD2A973397F0B6EEA682(__this, NULL);
		// break;
		return;
	}

IL_0070:
	{
		// TrippyOffset();
		FollowPlayer_TrippyOffset_m9B5FE34C035219FCF5E62D9482900393AFB559BC(__this, NULL);
		// break;
		return;
	}

IL_0077:
	{
		// DefaultOffset();
		FollowPlayer_DefaultOffset_mB8C16CAD98504232B81777807C9C2E8D5C4C7CBB(__this, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayer::TinyOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_TinyOffset_mF88ECBBD9E35F0EFA4DE79B1C951BF854CFC6D66 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	{
		// rotation = new Vector3(20, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (20.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotation_7 = L_0;
		// offset = new Vector3(0, 4, -5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (4.0f), (-5.0f), /*hidden argument*/NULL);
		__this->___offset_6 = L_1;
		// transform.SetPositionAndRotation(player.transform.position + offset, Quaternion.Euler(rotation));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___offset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___rotation_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_2, L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayer::FirstOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_FirstOffset_m38DA1358CDCAB4ABE3561862FF1E3B70D43424DE (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	{
		// rotation = new Vector3(20, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (20.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotation_7 = L_0;
		// offset = new Vector3(0, 5, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_6 = L_1;
		// transform.SetPositionAndRotation(player.transform.position + offset, Quaternion.Euler(rotation));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___offset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___rotation_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_2, L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayer::TopOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_TopOffset_mBF394EC844FEE6CA22D9CAF7FD5E5CA4AE78621E (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Camera mainCamera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		// mainCamera.orthographic = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0;
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_1, (bool)1, NULL);
		// mainCamera.orthographicSize = 20;
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_1, (20.0f), NULL);
		// rotation = new Vector3(90, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotation_7 = L_2;
		// offset = new Vector3(7.5f, 35, 15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (7.5f), (35.0f), (15.0f), /*hidden argument*/NULL);
		__this->___offset_6 = L_3;
		// transform.SetPositionAndRotation(offset, Quaternion.Euler(rotation));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___offset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___rotation_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_6, NULL);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_4, L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayer::MightyOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_MightyOffset_m5A06A6184D4858A4DB29BD2A973397F0B6EEA682 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	{
		// rotation = new Vector3(33, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (33.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotation_7 = L_0;
		// offset = new Vector3(7.5f, 24, -10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (7.5f), (24.0f), (-10.0f), /*hidden argument*/NULL);
		__this->___offset_6 = L_1;
		// transform.SetPositionAndRotation(offset, Quaternion.Euler(rotation));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___offset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___rotation_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_4, NULL);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_2, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayer::TrippyOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_TrippyOffset_m9B5FE34C035219FCF5E62D9482900393AFB559BC (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Camera mainCamera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		// mainCamera.orthographic = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0;
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_1, (bool)1, NULL);
		// mainCamera.orthographicSize = 13;
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_1, (13.0f), NULL);
		// Vector3 rotation = new Vector3(10, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (10.0f), (0.0f), (0.0f), NULL);
		// Vector3 offset = new Vector3(7.5f, 15, -7);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), (7.5f), (15.0f), (-7.0f), NULL);
		// transform.SetPositionAndRotation(offset, Quaternion.Euler(rotation));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_4, NULL);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_2, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayer::DefaultOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_DefaultOffset_mB8C16CAD98504232B81777807C9C2E8D5C4C7CBB (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 rotation = new Vector3(25, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (25.0f), (0.0f), (0.0f), NULL);
		// Vector3 offset = new Vector3(0, 8, -10);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), (0.0f), (8.0f), (-10.0f), NULL);
		// Vector3 scaledOffset = new Vector3(offset.x * player.transform.localScale.x, offset.y * player.transform.localScale.y, offset.z * player.transform.localScale.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_1;
		float L_1 = L_0.___x_2;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		float L_7 = L_6.___y_3;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = L_10.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___z_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_14 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((float)il2cpp_codegen_multiply(L_1, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_17)), NULL);
		// transform.SetPositionAndRotation(player.transform.position + scaledOffset, Quaternion.Euler(rotation));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_19 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_24, NULL);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_18, L_23, L_25, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer__ctor_mFEF642F6D296A2FBA30A01B637B6BD8DD2446114 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hasCooldown = false;
		__this->___hasCooldown_19 = (bool)0;
		// deathHandler = FindObjectOfType<DeathHandler>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_0;
		L_0 = Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD(Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		__this->___deathHandler_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deathHandler_16), (void*)L_0);
		// gameMode = FindObjectOfType<GameModeController>();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_1;
		L_1 = Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF(Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		__this->___gameMode_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameMode_7), (void*)L_1);
		// uiScript = FindObjectOfType<UIController>();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_2;
		L_2 = Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D(Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D_RuntimeMethod_var);
		__this->___uiScript_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uiScript_18), (void*)L_2);
		// ConfigureGameModeVariables();
		PlayerController_ConfigureGameModeVariables_mA02950E0184D9223548F461C2D2F97C4BADF4620(__this, NULL);
		// CheckIfNewScale();
		PlayerController_CheckIfNewScale_m98D1332AC75758EFA1A0C0E9670F74F0DD29BB0E(__this, NULL);
		// uiScript.DisplayBulletCooldown(cooldownTime);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_3 = __this->___uiScript_18;
		float L_4 = __this->___cooldownTime_20;
		UIController_DisplayBulletCooldown_m7394C122CCD9887BEE4808283E8D32885E34E340(L_3, L_4, NULL);
		// startTime = Time.time;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_14 = L_5;
		// hasStartedScaling = false;
		__this->___hasStartedScaling_15 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerController::ConfigureGameModeVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ConfigureGameModeVariables_mA02950E0184D9223548F461C2D2F97C4BADF4620 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// playerSpeed = gameMode.CurrentGameMode.GetPlayerSpeed();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_0 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_1;
		L_1 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_0, NULL);
		float L_2;
		L_2 = GameModeSO_GetPlayerSpeed_mF60EB7F1FAAF0A5D72C80B0FA6C838D1F501DA5E_inline(L_1, NULL);
		__this->___playerSpeed_8 = L_2;
		// lookSpeed = gameMode.CurrentGameMode.GetTurretSpeed();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_3 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_4;
		L_4 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_3, NULL);
		float L_5;
		L_5 = GameModeSO_GetTurretSpeed_mACABF6FCD285D94D711F7134D744EDC29C738BDE_inline(L_4, NULL);
		__this->___lookSpeed_9 = L_5;
		// hasBullets = gameMode.CurrentGameMode.GetPlayerHasBullets();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_6 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_7;
		L_7 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_6, NULL);
		bool L_8;
		L_8 = GameModeSO_GetPlayerHasBullets_mAD96D0D5E3595BFA78AC05FB1985D08FDA214715_inline(L_7, NULL);
		__this->___hasBullets_10 = L_8;
		// bulletSpeed = gameMode.CurrentGameMode.GetBulletSpeed();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_9 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_10;
		L_10 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_9, NULL);
		float L_11;
		L_11 = GameModeSO_GetBulletSpeed_mB3B73A6F2FF8C6DF63F85E5B831200F7004A7559_inline(L_10, NULL);
		__this->___bulletSpeed_11 = L_11;
		// cooldownTime = gameMode.CurrentGameMode.GetCooldownAmount();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_12 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_13;
		L_13 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_12, NULL);
		float L_14;
		L_14 = GameModeSO_GetCooldownAmount_m61B874A8F40EE10326BBFBE14CCAABD4134878B3_inline(L_13, NULL);
		__this->___cooldownTime_20 = L_14;
		// cooldownDelay = gameMode.CurrentGameMode.GetCooldownDelay();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_15 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_16;
		L_16 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_15, NULL);
		float L_17;
		L_17 = GameModeSO_GetCooldownDelay_m6BD63480F18A60CECCEBBBE9D29006DC97E8BB7C_inline(L_16, NULL);
		__this->___cooldownDelay_21 = L_17;
		// hasNewScale = gameMode.CurrentGameMode.GetPlayerHasNewScale();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_18 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_19;
		L_19 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_18, NULL);
		bool L_20;
		L_20 = GameModeSO_GetPlayerHasNewScale_mE46946F1EE75B31FE43BA0FF08C4FDB52B484E22_inline(L_19, NULL);
		__this->___hasNewScale_12 = L_20;
		// newScale = gameMode.CurrentGameMode.GetPlayerScale();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_21 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_22;
		L_22 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_21, NULL);
		float L_23;
		L_23 = GameModeSO_GetPlayerScale_m46FCA63EC314CA5374C20A74882AF699FA4EEEDC_inline(L_22, NULL);
		__this->___newScale_13 = L_23;
		// }
		return;
	}
}
// System.Void PlayerController::CheckIfNewScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CheckIfNewScale_m98D1332AC75758EFA1A0C0E9670F74F0DD29BB0E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A5B1255B26233FE1FC974B833C854CEE786440);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hasNewScale && gameMode.CurrentGameMode.GetName() == "TinyToMighty")
		bool L_0 = __this->___hasNewScale_12;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_1 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_2;
		L_2 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_1, NULL);
		String_t* L_3;
		L_3 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral65A5B1255B26233FE1FC974B833C854CEE786440, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// transform.localScale = new Vector3(0.4f, 0.4f, 0.4f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.400000006f), (0.400000006f), (0.400000006f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
		// hasStartedScaling = true;
		__this->___hasStartedScaling_15 = (bool)1;
		return;
	}

IL_004b:
	{
		// else if (hasNewScale)
		bool L_7 = __this->___hasNewScale_12;
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		// transform.localScale = new Vector3(newScale, newScale, newScale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_9 = __this->___newScale_13;
		float L_10 = __this->___newScale_13;
		float L_11 = __this->___newScale_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_12, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void PlayerController::TinyToMightyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_TinyToMightyScale_m9ED8E9ADA5529DDD28DC1288AC4EEEC085450A49 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Vector3 startScale = new Vector3(0.4f, 0.4f, 0.4f);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.400000006f), (0.400000006f), (0.400000006f), NULL);
		// Vector3 finishScale = new Vector3(3.5f, 3.5f, 3.5f);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), (3.5f), (3.5f), (3.5f), NULL);
		// float scaleDuration = 240;
		V_2 = (240.0f);
		// float elapsedTime = Time.time - startTime;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___startTime_14;
		V_3 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (elapsedTime < scaleDuration)
		float L_2 = V_3;
		float L_3 = V_2;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0061;
		}
	}
	{
		// float t = elapsedTime / scaleDuration;
		float L_4 = V_3;
		float L_5 = V_2;
		V_4 = ((float)(L_4/L_5));
		// Vector3 growScale = Vector3.Lerp(startScale, finishScale, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		float L_8 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_6, L_7, L_8, NULL);
		V_5 = L_9;
		// transform.localScale = growScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_5;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_11, NULL);
		return;
	}

IL_0061:
	{
		// transform.localScale = finishScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A5B1255B26233FE1FC974B833C854CEE786440);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerAlive = deathHandler.IsPlayerAlive;
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_0 = __this->___deathHandler_16;
		bool L_1;
		L_1 = DeathHandler_get_IsPlayerAlive_mA31D83D152977F207A8CE87BEB203ECFBFDB2C33_inline(L_0, NULL);
		__this->___playerAlive_17 = L_1;
		// if (playerAlive)
		bool L_2 = __this->___playerAlive_17;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// MoveTank();
		PlayerController_MoveTank_m2DA8F5548F93E818702F99BEA38AE547EC479B70(__this, NULL);
		// if (gameMode.CurrentGameMode.GetName() == "TinyToMighty")
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_3 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_4;
		L_4 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_3, NULL);
		String_t* L_5;
		L_5 = GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral65A5B1255B26233FE1FC974B833C854CEE786440, NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// TinyToMightyScale();
		PlayerController_TinyToMightyScale_m9ED8E9ADA5529DDD28DC1288AC4EEEC085450A49(__this, NULL);
	}

IL_0041:
	{
		// if (hasBullets)
		bool L_7 = __this->___hasBullets_10;
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		// ProcessShootingAndCooldown();
		PlayerController_ProcessShootingAndCooldown_m663D802367CCC958AA69FB37B0B705E9EF3A1AD9(__this, NULL);
		// if (cooldownTime <= 0)
		float L_8 = __this->___cooldownTime_20;
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_0069;
		}
	}
	{
		// StartCoroutine(BulletCooldown());
		RuntimeObject* L_9;
		L_9 = PlayerController_BulletCooldown_m3D37F3D70B10D0C6FA650F423F9FA1B072202170(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void PlayerController::ProcessShootingAndCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ProcessShootingAndCooldown_m663D802367CCC958AA69FB37B0B705E9EF3A1AD9 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// MoveTurret();
		PlayerController_MoveTurret_m9F46D65368A9E851061C39BD9413F34866A0FB77(__this, NULL);
		// ShootTurret();
		PlayerController_ShootTurret_m2010D284983B7A280EE6832F0D9FF904F3258675(__this, NULL);
		// if (isFiring && !hasCooldown)
		bool L_0 = __this->___isFiring_30;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		bool L_1 = __this->___hasCooldown_19;
		if (L_1)
		{
			goto IL_0046;
		}
	}
	{
		// PlayTurretFlash();
		PlayerController_PlayTurretFlash_m7E3113CFC3185A7390E83633EB205C99381CA620(__this, NULL);
		// cooldownTime -= Time.deltaTime;
		float L_2 = __this->___cooldownTime_20;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___cooldownTime_20 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// uiScript.DisplayBulletCooldown(cooldownTime);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_4 = __this->___uiScript_18;
		float L_5 = __this->___cooldownTime_20;
		UIController_DisplayBulletCooldown_m7394C122CCD9887BEE4808283E8D32885E34E340(L_4, L_5, NULL);
		return;
	}

IL_0046:
	{
		// if (cooldownTime != gameMode.CurrentGameMode.GetCooldownAmount())
		float L_6 = __this->___cooldownTime_20;
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_7 = __this->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_8;
		L_8 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_7, NULL);
		float L_9;
		L_9 = GameModeSO_GetCooldownAmount_m61B874A8F40EE10326BBFBE14CCAABD4134878B3_inline(L_8, NULL);
		if ((((float)L_6) == ((float)L_9)))
		{
			goto IL_0081;
		}
	}
	{
		// cooldownTime += Time.deltaTime;
		float L_10 = __this->___cooldownTime_20;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___cooldownTime_20 = ((float)il2cpp_codegen_add(L_10, L_11));
		// uiScript.DisplayBulletCooldown(cooldownTime);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_12 = __this->___uiScript_18;
		float L_13 = __this->___cooldownTime_20;
		UIController_DisplayBulletCooldown_m7394C122CCD9887BEE4808283E8D32885E34E340(L_12, L_13, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void PlayerController::MoveTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveTurret_m9F46D65368A9E851061C39BD9413F34866A0FB77 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float newRotation = currentRotation + lookInput.x * lookSpeed * Time.deltaTime;
		float L_0 = __this->___currentRotation_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___lookInput_29);
		float L_2 = L_1->___x_0;
		float L_3 = __this->___lookSpeed_9;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4))));
		// SetCurrentRotation(newRotation);
		float L_5 = V_0;
		PlayerController_SetCurrentRotation_m712D47F1567219272D1CB6CFD80CE73F4C56B55D(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::SetCurrentRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetCurrentRotation_m712D47F1567219272D1CB6CFD80CE73F4C56B55D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___0_rot, const RuntimeMethod* method) 
{
	{
		// currentRotation = Mathf.Clamp(rot, minRot, maxRot);
		float L_0 = ___0_rot;
		float L_1 = __this->___minRot_23;
		float L_2 = __this->___maxRot_24;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_1, L_2, NULL);
		__this->___currentRotation_22 = L_3;
		// tankTurret.transform.rotation = Quaternion.Euler(0, rot, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___tankTurret_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		float L_6 = ___0_rot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_6, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::ShootTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ShootTurret_m2010D284983B7A280EE6832F0D9FF904F3258675 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var bulletEmission = bulletParticles.GetComponent<ParticleSystem>().emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___bulletParticles_5;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1;
		L_1 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_0, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_2;
		L_2 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_1, NULL);
		V_0 = L_2;
		// bulletEmission.rateOverTime = bulletSpeed;
		float L_3 = __this->___bulletSpeed_11;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_4;
		L_4 = MinMaxCurve_op_Implicit_m133028E91CF2F823F5E20F6B19A3332A02404086(L_3, NULL);
		EmissionModule_set_rateOverTime_m71BF3C0A80EA572CD87EFF5944E8FA680F51DC20((&V_0), L_4, NULL);
		// if (isFiring && !hasCooldown)
		bool L_5 = __this->___isFiring_30;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		bool L_6 = __this->___hasCooldown_19;
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		// bulletEmission.enabled = true;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_0), (bool)1, NULL);
		return;
	}

IL_003c:
	{
		// else if (!isFiring)
		bool L_7 = __this->___isFiring_30;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		// bulletEmission.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_0), (bool)0, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void PlayerController::PlayTurretFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_PlayTurretFlash_m7E3113CFC3185A7390E83633EB205C99381CA620 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// turretFlash.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___turretFlash_6;
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::BulletCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_BulletCooldown_m3D37F3D70B10D0C6FA650F423F9FA1B072202170 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35* L_0 = (U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35*)il2cpp_codegen_object_new(U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35_il2cpp_TypeInfo_var);
		U3CBulletCooldownU3Ed__38__ctor_m6EC645B8595A565EC7C1F76FB4AD08FBA8EB7883(L_0, 0, NULL);
		U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerController::StopAllBullets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StopAllBullets_mA97785344CC31B37E5EFE6BFA92D8373ADF52436 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// fireInput = 0;
		__this->___fireInput_31 = (0.0f);
		// isFiring = false;
		__this->___isFiring_30 = (bool)0;
		// bulletSpeed = 0;
		__this->___bulletSpeed_11 = (0.0f);
		// bulletParticles.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___bulletParticles_5;
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::MoveTank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveTank_m2DA8F5548F93E818702F99BEA38AE547EC479B70 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 movement = ProcessMovement();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = PlayerController_ProcessMovement_m224D9A8D7F134CBB388F273033E648CA67CA98D0(__this, NULL);
		V_0 = L_0;
		// if (movement.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		float L_2 = L_1.___x_0;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// ProcessRotation(-10);
		PlayerController_ProcessRotation_mA778231AFD4B3AEB616393EBAC94198498A7139E(__this, (-10.0f), NULL);
		return;
	}

IL_0020:
	{
		// else if (movement.x > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		float L_4 = L_3.___x_0;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		// ProcessRotation(10);
		PlayerController_ProcessRotation_mA778231AFD4B3AEB616393EBAC94198498A7139E(__this, (10.0f), NULL);
		return;
	}

IL_0039:
	{
		// else if (movement.x == 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___x_0;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// ProcessRotation(0);
		PlayerController_ProcessRotation_mA778231AFD4B3AEB616393EBAC94198498A7139E(__this, (0.0f), NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 PlayerController::ProcessMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlayerController_ProcessMovement_m224D9A8D7F134CBB388F273033E648CA67CA98D0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float movementX = moveInput.x * playerSpeed * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___moveInput_28);
		float L_1 = L_0->___x_0;
		float L_2 = __this->___playerSpeed_8;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_2)), L_3));
		// float currentX = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		V_1 = L_6;
		// float newX = currentX + movementX;
		float L_7 = V_1;
		float L_8 = V_0;
		V_2 = ((float)il2cpp_codegen_add(L_7, L_8));
		// if (newX >= minX && newX <= maxX)
		float L_9 = V_2;
		float L_10 = __this->___minX_25;
		if ((!(((float)L_9) >= ((float)L_10))))
		{
			goto IL_0074;
		}
	}
	{
		float L_11 = V_2;
		float L_12 = __this->___maxX_26;
		if ((!(((float)L_11) <= ((float)L_12))))
		{
			goto IL_0074;
		}
	}
	{
		// Vector3 newPosition = new Vector3(newX, transform.position.y, transform.position.z);
		float L_13 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_13, L_16, L_19, NULL);
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_21, NULL);
	}

IL_0074:
	{
		// return new Vector2(newX - currentX, 0);
		float L_22 = V_2;
		float L_23 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), ((float)il2cpp_codegen_subtract(L_22, L_23)), (0.0f), /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Void PlayerController::ProcessRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ProcessRotation_mA778231AFD4B3AEB616393EBAC94198498A7139E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___0_rotation, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion targetRotation = Quaternion.Euler(0, rotation, 0);
		float L_0 = ___0_rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_0, (0.0f), NULL);
		V_0 = L_1;
		// transform.localRotation = Quaternion.RotateTowards(transform.localRotation, targetRotation, rotationFactor);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		float L_6 = __this->___rotationFactor_27;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline(L_4, L_5, L_6, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_7, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnMove(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnMove_m26350714C4683F0DAE28FDBBB49112254AF9E2B1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveInput = value.Get<Vector2>();
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		__this->___moveInput_28 = L_1;
		// }
		return;
	}
}
// System.Void PlayerController::OnLook(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnLook_mCB4ABFE7FAF9B8E1CF951C300194057FF90C035D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lookInput = value.Get<Vector2>();
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		__this->___lookInput_29 = L_1;
		// }
		return;
	}
}
// System.Void PlayerController::OnFire(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnFire_mB192438AE08822EB7F4B212B0FF06964642ADBAC (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fireInput = value.Get<float>();
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___0_value;
		float L_1;
		L_1 = InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124(L_0, InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124_RuntimeMethod_var);
		__this->___fireInput_31 = L_1;
		// if (!hasCooldown)
		bool L_2 = __this->___hasCooldown_19;
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		// if (fireInput == 1)
		float L_3 = __this->___fireInput_31;
		if ((!(((float)L_3) == ((float)(1.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// isFiring = true;
		__this->___isFiring_30 = (bool)1;
		return;
	}

IL_0029:
	{
		// else if (fireInput == 0)
		float L_4 = __this->___fireInput_31;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// isFiring = false;
		__this->___isFiring_30 = (bool)0;
		return;
	}

IL_003e:
	{
		// fireInput = 0;
		__this->___fireInput_31 = (0.0f);
		// isFiring = false;
		__this->___isFiring_30 = (bool)0;
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// float cooldownDelay = 5f;
		__this->___cooldownDelay_21 = (5.0f);
		// float minRot = -40;
		__this->___minRot_23 = (-40.0f);
		// float maxRot = 40;
		__this->___maxRot_24 = (40.0f);
		// float minX = -8.0f;
		__this->___minX_25 = (-8.0f);
		// float maxX = 23.0f;
		__this->___maxX_26 = (23.0f);
		// float rotationFactor = 2.5f;
		__this->___rotationFactor_27 = (2.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController/<BulletCooldown>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCooldownU3Ed__38__ctor_m6EC645B8595A565EC7C1F76FB4AD08FBA8EB7883 (U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<BulletCooldown>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCooldownU3Ed__38_System_IDisposable_Dispose_mEC201C8212AF7163FF261173342396BE10EEC03F (U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<BulletCooldown>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBulletCooldownU3Ed__38_MoveNext_m179747380CDBFA49CFBACD22516E65B583C230C6 (U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// hasCooldown = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		L_4->___hasCooldown_19 = (bool)1;
		// fireInput = 0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = V_1;
		L_5->___fireInput_31 = (0.0f);
		// isFiring = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = V_1;
		L_6->___isFiring_30 = (bool)0;
		// yield return new WaitForSeconds(cooldownDelay);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		float L_8 = L_7->___cooldownDelay_21;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// hasCooldown = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_10 = V_1;
		L_10->___hasCooldown_19 = (bool)0;
		// cooldownTime = gameMode.CurrentGameMode.GetCooldownAmount();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = V_1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_12 = V_1;
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_13 = L_12->___gameMode_7;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_14;
		L_14 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_13, NULL);
		float L_15;
		L_15 = GameModeSO_GetCooldownAmount_m61B874A8F40EE10326BBFBE14CCAABD4134878B3_inline(L_14, NULL);
		L_11->___cooldownTime_20 = L_15;
		// uiScript.DisplayBulletCooldown(cooldownTime);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_16 = V_1;
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_17 = L_16->___uiScript_18;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_18 = V_1;
		float L_19 = L_18->___cooldownTime_20;
		UIController_DisplayBulletCooldown_m7394C122CCD9887BEE4808283E8D32885E34E340(L_17, L_19, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<BulletCooldown>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBulletCooldownU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7978598FE38BBEFB0D6649279A2F594E5FAC1D97 (U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<BulletCooldown>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCooldownU3Ed__38_System_Collections_IEnumerator_Reset_m47F842C9A57B4A592132CD39BCE677433536308F (U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBulletCooldownU3Ed__38_System_Collections_IEnumerator_Reset_m47F842C9A57B4A592132CD39BCE677433536308F_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<BulletCooldown>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBulletCooldownU3Ed__38_System_Collections_IEnumerator_get_Current_m86F9DC0BCAB6D9A1B729B07E073401E9F49547B0 (U3CBulletCooldownU3Ed__38_tD2518626B4E2F79A0662C0E4D543D996AF582C35* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RotateWheels::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateWheels_Update_m1B69E7771DA0A2597BA3A75597CF0C281BD69FFB (RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.right * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void RotateWheels::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateWheels__ctor_mF1CBE7BDB65FAE1D9F8260382DC2CC44ADA915EB (RotateWheels_t62B5E475B0AAC787BACF7FA1F779102B7ABE34DA* __this, const RuntimeMethod* method) 
{
	{
		// float speed = 10f;
		__this->___speed_4 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RepeatHighway::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatHighway_Start_m4D958850721E6782F5A8AE9C045533A41543DF38 (RepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameMode = FindObjectOfType<GameModeController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_0;
		L_0 = Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF(Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		__this->___gameMode_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameMode_6), (void*)L_0);
		// speed = gameMode.CurrentGameMode.GetHighwaySpeed();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_1 = __this->___gameMode_6;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_2;
		L_2 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_1, NULL);
		float L_3;
		L_3 = GameModeSO_GetHighwaySpeed_m7B302FFE645B5E6C9E1B4AB61B090A47046DC030_inline(L_2, NULL);
		__this->___speed_7 = L_3;
		// startPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___startPos_5 = L_5;
		// repeatWidth = GetComponent<BoxCollider>().size.z / 2;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6;
		L_6 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_6, NULL);
		float L_8 = L_7.___z_4;
		__this->___repeatWidth_4 = ((float)(L_8/(2.0f)));
		// }
		return;
	}
}
// System.Void RepeatHighway::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatHighway_Update_m166EDE9C0350BC4EDF24B536067B8462A068B1C7 (RepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.back * Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4 = __this->___speed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// if (transform.position.z < startPos.z - repeatWidth)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___startPos_5);
		float L_10 = L_9->___z_4;
		float L_11 = __this->___repeatWidth_4;
		if ((!(((float)L_8) < ((float)((float)il2cpp_codegen_subtract(L_10, L_11))))))
		{
			goto IL_005a;
		}
	}
	{
		// transform.position = startPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___startPos_5;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void RepeatHighway::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatHighway__ctor_m10188EE18B561DBE195C43A6E7CA3CE33AB156B5 (RepeatHighway_t467E0854AF50C527AC65AB99556B9053C876FD79* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ScoreKeeper::Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScoreKeeper_Points_m101DF02916B497F7A0D33AA45117C41C338067E0 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	{
		// public int Points() { return points; }
		int32_t L_0 = __this->___points_8;
		return L_0;
	}
}
// System.Void ScoreKeeper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_Start_m111876C645A6D668BC752821007BE6877002C6A3 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34C62C0EA9964074E2383B62B1E943BBA2405B92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathHandler = FindObjectOfType<DeathHandler>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_0;
		L_0 = Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD(Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		__this->___deathHandler_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deathHandler_5), (void*)L_0);
		// elapsedTime = 0.0f;
		__this->___elapsedTime_6 = (0.0f);
		// points = 0;
		__this->___points_8 = 0;
		// scoreText.text = "Score: 0";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___scoreText_4;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, _stringLiteral34C62C0EA9964074E2383B62B1E943BBA2405B92);
		// }
		return;
	}
}
// System.Void ScoreKeeper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_Update_m31E4B2F16670B50AD481128A788BF2ED3B607179 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (deathHandler.IsPlayerAlive)
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_0 = __this->___deathHandler_5;
		bool L_1;
		L_1 = DeathHandler_get_IsPlayerAlive_mA31D83D152977F207A8CE87BEB203ECFBFDB2C33_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// UpdateTimePoints();
		ScoreKeeper_UpdateTimePoints_m13CA52E4917C29B38B2134502DA9F8519809FD20(__this, NULL);
	}

IL_0013:
	{
		// scoreText.text = "Score: " + points;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___scoreText_4;
		int32_t* L_3 = (&__this->___points_8);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void ScoreKeeper::UpdateTimePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_UpdateTimePoints_m13CA52E4917C29B38B2134502DA9F8519809FD20 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	{
		// elapsedTime += Time.deltaTime;
		float L_0 = __this->___elapsedTime_6;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___elapsedTime_6 = ((float)il2cpp_codegen_add(L_0, L_1));
		// points = Mathf.FloorToInt(elapsedTime * pointsPerSecond);
		float L_2 = __this->___elapsedTime_6;
		int32_t L_3 = __this->___pointsPerSecond_7;
		int32_t L_4;
		L_4 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_2, ((float)L_3))), NULL);
		__this->___points_8 = L_4;
		// }
		return;
	}
}
// System.Void ScoreKeeper::UpdateScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_UpdateScore_mE0D2587DFB5B3EACD90D8B4C44D63FBC69EC2F04 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// points += value;
		int32_t L_0 = __this->___points_8;
		int32_t L_1 = ___0_value;
		__this->___points_8 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// scoreText.text = "Score: " + points;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___scoreText_4;
		int32_t* L_3 = (&__this->___points_8);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void ScoreKeeper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper__ctor_m2ACACD5BEC5B2FB90A3D014C60E3726F789EE357 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	{
		// int pointsPerSecond = 100;
		__this->___pointsPerSecond_7 = ((int32_t)100);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Start_mDB390A5128712606F938A56F294FBDE7DFE649D4 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m5A66E49CFB8F2476BF23BAB1F3E5AC33CD950A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isGamePaused = false;
		__this->___isGamePaused_9 = (bool)0;
		// healthSlider = healthSliderObject.GetComponent<Slider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___healthSliderObject_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1;
		L_1 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_0, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		__this->___healthSlider_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___healthSlider_7), (void*)L_1);
		// cooldownSlider = cooldownSliderObject.GetComponent<Slider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___cooldownSliderObject_6;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3;
		L_3 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_2, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		__this->___cooldownSlider_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cooldownSlider_8), (void*)L_3);
		// deathHandler = FindObjectOfType<DeathHandler>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_4;
		L_4 = Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD(Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		__this->___deathHandler_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deathHandler_11), (void*)L_4);
		// modePersist = FindObjectOfType<ModePersist>();
		ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* L_5;
		L_5 = Object_FindObjectOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m5A66E49CFB8F2476BF23BAB1F3E5AC33CD950A35(Object_FindObjectOfType_TisModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083_m5A66E49CFB8F2476BF23BAB1F3E5AC33CD950A35_RuntimeMethod_var);
		__this->___modePersist_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modePersist_12), (void*)L_5);
		// gameMode = FindObjectOfType<GameModeController>();
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_6;
		L_6 = Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF(Object_FindObjectOfType_TisGameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A_m54AFBF1A6DF2B248947A1EF1CD05EC4DF0BA31EF_RuntimeMethod_var);
		__this->___gameMode_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameMode_13), (void*)L_6);
		// ConfigureHealthSlider();
		UIController_ConfigureHealthSlider_m419909AE738E9DA00085CC752851AF2FF7F6DFA0(__this, NULL);
		// ConfigureCooldownSlider();
		UIController_ConfigureCooldownSlider_mCEA6D7B20699BB036EB0B5B1459B12E47A12C6B9(__this, NULL);
		// }
		return;
	}
}
// System.Void UIController::ConfigureHealthSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ConfigureHealthSlider_m419909AE738E9DA00085CC752851AF2FF7F6DFA0 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// if (gameMode.CurrentGameMode.GetPlayerHasHealth())
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_0 = __this->___gameMode_13;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_1;
		L_1 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_0, NULL);
		bool L_2;
		L_2 = GameModeSO_GetPlayerHasHealth_mF0547C99BBE44FAE35247BE0B5714151DE2C7B06_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// healthSliderObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___healthSliderObject_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// healthSlider.maxValue = gameMode.CurrentGameMode.GetPlayerHealth();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___healthSlider_7;
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_5 = __this->___gameMode_13;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_6;
		L_6 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_5, NULL);
		float L_7;
		L_7 = GameModeSO_GetPlayerHealth_m61F4A7D0CF41D750B4DF0DB1E4271A6C33FA929F_inline(L_6, NULL);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_4, L_7, NULL);
		// healthSlider.value = gameMode.CurrentGameMode.GetPlayerHealth();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___healthSlider_7;
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_9 = __this->___gameMode_13;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_10;
		L_10 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_9, NULL);
		float L_11;
		L_11 = GameModeSO_GetPlayerHealth_m61F4A7D0CF41D750B4DF0DB1E4271A6C33FA929F_inline(L_10, NULL);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_8, L_11);
		return;
	}

IL_0055:
	{
		// healthSliderObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___healthSliderObject_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIController::ConfigureCooldownSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ConfigureCooldownSlider_mCEA6D7B20699BB036EB0B5B1459B12E47A12C6B9 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// if (gameMode.CurrentGameMode.GetPlayerHasBullets())
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_0 = __this->___gameMode_13;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_1;
		L_1 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_0, NULL);
		bool L_2;
		L_2 = GameModeSO_GetPlayerHasBullets_mAD96D0D5E3595BFA78AC05FB1985D08FDA214715_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// cooldownSliderObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___cooldownSliderObject_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// cooldownSlider.maxValue = gameMode.CurrentGameMode.GetCooldownAmount();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___cooldownSlider_8;
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_5 = __this->___gameMode_13;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_6;
		L_6 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_5, NULL);
		float L_7;
		L_7 = GameModeSO_GetCooldownAmount_m61B874A8F40EE10326BBFBE14CCAABD4134878B3_inline(L_6, NULL);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_4, L_7, NULL);
		// cooldownSlider.value = gameMode.CurrentGameMode.GetCooldownAmount();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___cooldownSlider_8;
		GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* L_9 = __this->___gameMode_13;
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_10;
		L_10 = GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline(L_9, NULL);
		float L_11;
		L_11 = GameModeSO_GetCooldownAmount_m61B874A8F40EE10326BBFBE14CCAABD4134878B3_inline(L_10, NULL);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_8, L_11);
		return;
	}

IL_0055:
	{
		// cooldownSliderObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___cooldownSliderObject_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Update_m8F538932F53B831D5B82191902ADADACD32B108B (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// if (!isGamePaused && Input.GetKeyDown(KeyCode.Escape))
		bool L_0 = __this->___isGamePaused_9;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// PauseGame();
		UIController_PauseGame_mF7C0B01D5C997ECA3E9EC2E21EC182E05BECCB02(__this, NULL);
		goto IL_0030;
	}

IL_0019:
	{
		// else if (isGamePaused && Input.GetKeyDown(KeyCode.Escape))
		bool L_2 = __this->___isGamePaused_9;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// UnpauseGame();
		UIController_UnpauseGame_m0F991BC445B0B523DBC1E1D06CE9D6214AA8AF4B(__this, NULL);
	}

IL_0030:
	{
		// if (Input.GetKeyDown(KeyCode.Q))
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)113), NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// modePersist.ResetScenePersist();
		ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* L_5 = __this->___modePersist_12;
		ModePersist_ResetScenePersist_mD9F966E2DFD24750695CB490C7FD23BD0DDFAC63(L_5, NULL);
		// LoadCorrectScene(0);
		UIController_LoadCorrectScene_m1C4ABDA00BBBEAC46E6E62095490A963F54DD795(__this, 0, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UIController::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_PauseGame_mF7C0B01D5C997ECA3E9EC2E21EC182E05BECCB02 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB90DFED03453BE200AD750C6467CE2C13F1DCE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isGamePaused = true;
		__this->___isGamePaused_9 = (bool)1;
		// FindAndEnableCorrectCanvas("PauseMenuCanvas");
		UIController_FindAndEnableCorrectCanvas_m7F1DFCBFC3ABE29AE3E04E315BE5F270EC76C1FB(__this, _stringLiteralAB90DFED03453BE200AD750C6467CE2C13F1DCE8, NULL);
		// deathHandler.PlayerWheels(false);
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_0 = __this->___deathHandler_11;
		DeathHandler_PlayerWheels_mAB25CAD99F11FF32CA0118A386044D018C816AE3(L_0, (bool)0, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void UIController::UnpauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UnpauseGame_m0F991BC445B0B523DBC1E1D06CE9D6214AA8AF4B (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// desiredCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___desiredCanvas_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// deathHandler.PlayerWheels(true);
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_1 = __this->___deathHandler_11;
		DeathHandler_PlayerWheels_mAB25CAD99F11FF32CA0118A386044D018C816AE3(L_1, (bool)1, NULL);
		// isGamePaused = false;
		__this->___isGamePaused_9 = (bool)0;
		// }
		return;
	}
}
// System.Void UIController::DisplayHealthBar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_DisplayHealthBar_mA0912819A86DADE29954F140E6F77044B3CE35B1 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// healthSlider.value = value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___healthSlider_7;
		float L_1 = ___0_value;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UIController::DisplayBulletCooldown(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_DisplayBulletCooldown_m7394C122CCD9887BEE4808283E8D32885E34E340 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// cooldownSlider.value = value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___cooldownSlider_8;
		float L_1 = ___0_value;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UIController::EnableGameOverCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_EnableGameOverCanvas_m877AF5314AC82A35CAA3FB864B47A03B3FCF19B7 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA341B98A9A8954ED89D12EA12F99F43D3A7081A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindAndEnableCorrectCanvas("GameOverCanvas");
		UIController_FindAndEnableCorrectCanvas_m7F1DFCBFC3ABE29AE3E04E315BE5F270EC76C1FB(__this, _stringLiteralA341B98A9A8954ED89D12EA12F99F43D3A7081A1, NULL);
		// }
		return;
	}
}
// System.Void UIController::FindAndEnableCorrectCanvas(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_FindAndEnableCorrectCanvas_m7F1DFCBFC3ABE29AE3E04E315BE5F270EC76C1FB (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, String_t* ___0_desiredTag, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// foreach (GameObject canvas in canvases)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___canvases_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		// foreach (GameObject canvas in canvases)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (canvas.CompareTag(desiredTag))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
		String_t* L_6 = ___0_desiredTag;
		bool L_7;
		L_7 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		// desiredCanvas = canvas;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		__this->___desiredCanvas_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___desiredCanvas_10), (void*)L_8);
		// desiredCanvas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___desiredCanvas_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_002b:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002f:
	{
		// foreach (GameObject canvas in canvases)
		int32_t L_11 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIController::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Reload_mF9778FA1F245176C4A4B6B9F8DB75075178695FB (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int currentScene = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		// SceneManager.LoadScene(currentScene);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void UIController::ReturnToPauseCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ReturnToPauseCanvas_mD3D310D6296F66A266189EDA9959EE9E3EB206E3 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB90DFED03453BE200AD750C6467CE2C13F1DCE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// desiredCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___desiredCanvas_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// FindAndEnableCorrectCanvas("PauseMenuCanvas");
		UIController_FindAndEnableCorrectCanvas_m7F1DFCBFC3ABE29AE3E04E315BE5F270EC76C1FB(__this, _stringLiteralAB90DFED03453BE200AD750C6467CE2C13F1DCE8, NULL);
		// }
		return;
	}
}
// System.Void UIController::OpenControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OpenControls_m94DE9E974CC4FE70E82A97C453FE226FF455E9F1 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68968B7B61D59491D6425029DFC0BEE286926FF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// desiredCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___desiredCanvas_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// FindAndEnableCorrectCanvas("ControlsCanvas");
		UIController_FindAndEnableCorrectCanvas_m7F1DFCBFC3ABE29AE3E04E315BE5F270EC76C1FB(__this, _stringLiteral68968B7B61D59491D6425029DFC0BEE286926FF7, NULL);
		// }
		return;
	}
}
// System.Void UIController::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OpenSettings_m785F1A3AC35B0F458975E3ABFC755562E49095C5 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D42C556B0927D392360FD542152835D87F7D1A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// desiredCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___desiredCanvas_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// FindAndEnableCorrectCanvas("SettingsCanvas");
		UIController_FindAndEnableCorrectCanvas_m7F1DFCBFC3ABE29AE3E04E315BE5F270EC76C1FB(__this, _stringLiteral8D42C556B0927D392360FD542152835D87F7D1A0, NULL);
		// }
		return;
	}
}
// System.Void UIController::LoadCorrectScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_LoadCorrectScene_m1C4ABDA00BBBEAC46E6E62095490A963F54DD795 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(index);
		int32_t L_0 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIController::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ExitGame_m6BDED63CED2218050AB7B65D7BF054CD5031312B (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FDF0CDA340CA6418DEC56D0EAAE6DAA44BC7B6C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// Debug.Log("Closing Application");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7FDF0CDA340CA6418DEC56D0EAAE6DAA44BC7B6C, NULL);
		// }
		return;
	}
}
// System.Void UIController::ResetScenePersist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ResetScenePersist_m1AB528D0691D2DAC40CEAA60A982011E60E84726 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// modePersist.ResetScenePersist();
		ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* L_0 = __this->___modePersist_12;
		ModePersist_ResetScenePersist_mD9F966E2DFD24750695CB490C7FD23BD0DDFAC63(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_mFF218DBC8CCEFE36AAC295D2376501658CD8B7A2 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* GameModeController_get_CurrentGameMode_m74906ADD10B2601748BF43DA37E304B3460251B0_inline (GameModeController_t4DA02CE8474D94B106A409DF4307DE12A85C586A* __this, const RuntimeMethod* method) 
{
	{
		// public GameModeSO CurrentGameMode { get { return currentGameMode; } }
		GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* L_0 = __this->___currentGameMode_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameModeSO_GetName_m692E9DCE874A8AD352C8D100A4217CCDEB1EA4EF_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public string GetName() { return gamemodeName; }
		String_t* L_0 = __this->___gamemodeName_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreKeeper_Points_m101DF02916B497F7A0D33AA45117C41C338067E0_inline (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	{
		// public int Points() { return points; }
		int32_t L_0 = __this->___points_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ModePersist_get_ChosenGameMode_m18E4868F4E8E9C989826DC29D60C24F615545DCB_inline (ModePersist_t4FD0D99887F65E90E74C3F5C13A778F7987C1083* __this, const RuntimeMethod* method) 
{
	{
		// public string ChosenGameMode { get { return chosenGameMode; } }
		String_t* L_0 = __this->___chosenGameMode_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameModeSO_set_IsGameModeUnlocked_mA9AA4A4BF6B83AFD1655331D687C282E54C4134D_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { isGameModeUnlocked = value; }
		bool L_0 = ___0_value;
		__this->___isGameModeUnlocked_8 = L_0;
		// set { isGameModeUnlocked = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameModeSO_get_IsGameModeUnlocked_mCA1BA9FEB6D02B0599D0CA90035795EC1A03A536_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// get { return isGameModeUnlocked; }
		bool L_0 = __this->___isGameModeUnlocked_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameModeSO_GetRequiredPoints_m9900CEFC1325A0BA4B4E38367F50497C575DEFAD_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public int GetRequiredPoints() { return requiredPoints; }
		int32_t L_0 = __this->___requiredPoints_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameModeSO_GetHasMoreThanOneRequirement_m698742A74CAA914FAF9E89ACE1AE911905E7AFE3_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetHasMoreThanOneRequirement() { return hasMoreThanOneRequirement; }
		bool L_0 = __this->___hasMoreThanOneRequirement_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetObstacleSpeed_m51160BF6980E6F48351038E81006706F0D1D3281_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetObstacleSpeed() { return obstacleSpeed; }
		float L_0 = __this->___obstacleSpeed_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetObstacleSpawnDelay_m23848BCB395F5EA26D33C971F7E681DDBED5F851_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetObstacleSpawnDelay() { return obstacleSpawnDelay; }
		float L_0 = __this->___obstacleSpawnDelay_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeathHandler_get_IsPlayerAlive_mA31D83D152977F207A8CE87BEB203ECFBFDB2C33_inline (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPlayerAlive { get { return isPlayerAlive; } }
		bool L_0 = __this->___isPlayerAlive_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameModeSO_GetPlayerHasBullets_mAD96D0D5E3595BFA78AC05FB1985D08FDA214715_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetPlayerHasBullets() { return playerHasBullets; }
		bool L_0 = __this->___playerHasBullets_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameModeSO_GetPlayerHasHealth_mF0547C99BBE44FAE35247BE0B5714151DE2C7B06_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetPlayerHasHealth() { return playerHasHealth; }
		bool L_0 = __this->___playerHasHealth_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerHealth_m61F4A7D0CF41D750B4DF0DB1E4271A6C33FA929F_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetPlayerHealth() { return playerHealth; }
		float L_0 = __this->___playerHealth_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerSpeed_mF60EB7F1FAAF0A5D72C80B0FA6C838D1F501DA5E_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetPlayerSpeed() { return playerSpeed; }
		float L_0 = __this->___playerSpeed_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetTurretSpeed_mACABF6FCD285D94D711F7134D744EDC29C738BDE_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetTurretSpeed() { return turretSpeed; }
		float L_0 = __this->___turretSpeed_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetBulletSpeed_mB3B73A6F2FF8C6DF63F85E5B831200F7004A7559_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetBulletSpeed() { return bulletSpeed; }
		float L_0 = __this->___bulletSpeed_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetCooldownAmount_m61B874A8F40EE10326BBFBE14CCAABD4134878B3_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetCooldownAmount() { return cooldownAmount; }
		float L_0 = __this->___cooldownAmount_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetCooldownDelay_m6BD63480F18A60CECCEBBBE9D29006DC97E8BB7C_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetCooldownDelay() { return cooldownDelay; }
		float L_0 = __this->___cooldownDelay_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameModeSO_GetPlayerHasNewScale_mE46946F1EE75B31FE43BA0FF08C4FDB52B484E22_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public bool GetPlayerHasNewScale() { return playerHasNewScale; }
		bool L_0 = __this->___playerHasNewScale_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetPlayerScale_m46FCA63EC314CA5374C20A74882AF699FA4EEEDC_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetPlayerScale() { return playerScale; }
		float L_0 = __this->___playerScale_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_from, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_to, float ___2_maxDegreesDelta, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_from;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_to;
		float L_2;
		L_2 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___1_to;
		V_2 = L_5;
		goto IL_0030;
	}

IL_0019:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___0_from;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___1_to;
		float L_8 = ___2_maxDegreesDelta;
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((1.0f), ((float)(L_8/L_9)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_SlerpUnclamped_mAE7F4DF2F239831CCAA1DFB52F313E5AED52D32D(L_6, L_7, L_10, NULL);
		V_2 = L_11;
		goto IL_0030;
	}

IL_0030:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameModeSO_GetHighwaySpeed_m7B302FFE645B5E6C9E1B4AB61B090A47046DC030_inline (GameModeSO_tBCE4D3DFF279EC135984F663C8AAA37A1896A16A* __this, const RuntimeMethod* method) 
{
	{
		// public float GetHighwaySpeed() { return highwaySpeed; }
		float L_0 = __this->___highwaySpeed_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m3D1077E7359AFFD5D8B1E52C5E47BA67581D2413_gshared_inline (Enumerator_t0EF9FB8013961DF612AC6D349B739450CA287820* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_b;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
