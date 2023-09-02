#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Sound>
struct Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// Sound[]
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
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
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BlockCollector
struct BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB;
// BlockFollowWayPoints
struct BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116;
// BlockSpawnerNew
struct BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517;
// BlockTurning
struct BlockTurning_t993A7AB960273DC6AB859D845D6EEC8734B349A3;
// BlueBlockActivation
struct BlueBlockActivation_t6B7FBCF21B5199ECB3C36C93FF89967C9CE0E98E;
// BlueCubesBPM
struct BlueCubesBPM_tFBBC830BD8403C63D97C67D9D29BC23AD0CD95DB;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DestroyBlueOnWthie
struct DestroyBlueOnWthie_t88FD077FED3E89C82499F66295CF5F57F640A95E;
// DestroyOnWhiteEnemy
struct DestroyOnWhiteEnemy_tDB03CA985382699C8BF26C26848D6C182E5C4189;
// DestroyOrbs
struct DestroyOrbs_t0D5A8519BB2CD98ED4FE31AD4A78560EB11FF324;
// DestroyRedOnWhite
struct DestroyRedOnWhite_t5BDC0229112EB9054BADF76F5EFC926E6EE12B93;
// EasyBlueSpawner
struct EasyBlueSpawner_tD6D633978B0447C538D8740706C44672E7436E83;
// EasyRedSpawner
struct EasyRedSpawner_t2F5CB14005D116EFA97084F3FBE448266441EC4A;
// EnemyFollowWaypoints
struct EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17;
// EnemyMove
struct EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A;
// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LetsGo
struct LetsGo_tEC540EF6864F7B93E0990CA50481030A48F897A0;
// LightsOnAndOff
struct LightsOnAndOff_t142B944080D6E3BD60D3C6CE2978BDD311239611;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveAndRotateNew
struct MoveAndRotateNew_t6097D40DD7E3746CCC6E6C3452282C7A7A9D09FD;
// MoveBlocks
struct MoveBlocks_t03AC7BF9597B58E6BED63F666454109D9F91E392;
// MoveOrbs
struct MoveOrbs_tB6C43FB68520827955A694ACBA5DE2D3C8C27A45;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OrbSpawner
struct OrbSpawner_tE1C12D98DBD06B2139B6F7F385BBE9141188CB1A;
// PIllars
struct PIllars_tB953CE786F9C6794146EDEEA711CF89FB13CBEC3;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PhonkBlueSpawner
struct PhonkBlueSpawner_t1739DCEC9BDB29E7E513C044994A3F18106464CD;
// PhonkRedSpawner
struct PhonkRedSpawner_tD6FC641AB5F178F25AB0132F3AE540C3C96128EA;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RedBlockActivation
struct RedBlockActivation_t066081D04B6485279B90294816454E8BE858CD18;
// RedCubesAreaCollector
struct RedCubesAreaCollector_t21961EA0B4D8371CB2BD4DBE47965590044A0BF9;
// RedCubesBPM
struct RedCubesBPM_t0E5DA926DD3149861B962B7E89849A36FB7D452E;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39;
// ShootBlue
struct ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382;
// ShootRed
struct ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431;
// Silo
struct Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE;
// Silo1
struct Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19;
// Silo2
struct Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848;
// Silo3
struct Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251;
// Silo4
struct Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410;
// Silo5
struct Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D;
// Sound
struct Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0;
// SpawnAndMoveObjects
struct SpawnAndMoveObjects_t45D17D405AA82F16337B522740386348B8333A41;
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
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Testinh
struct Testinh_tD1A703C9358F5138210CF5509CF98DF141B69DFC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WayPointMovement
struct WayPointMovement_tBB1785044B1D9DA6863362D229020B7ABBB28ABF;
// WhiteZone
struct WhiteZone_tC7372F932E417E58F100DFC1E0F89D86FFFED12E;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// AudioManager/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89;
// BlockCollector/<CheckObjectsInArea>d__9
struct U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7;
IL2CPP_EXTERN_C String_t* _stringLiteral121D06AE6E82A4F2CC29981C9A609CA62BC7206E;
IL2CPP_EXTERN_C String_t* _stringLiteral12AA381C86AE5A50AF819F94F9FEA985816C7048;
IL2CPP_EXTERN_C String_t* _stringLiteral2D5D2EE1A137A16170AB937A3762902DFC59B2BC;
IL2CPP_EXTERN_C String_t* _stringLiteral468B08502DECA250CB6A0822728D21A51B5DF576;
IL2CPP_EXTERN_C String_t* _stringLiteral55D8C119406052363579189431FC38DBFCC0C4A9;
IL2CPP_EXTERN_C String_t* _stringLiteral5EAEEB70FF63C40A3A2D8419E7136A8DF11942B6;
IL2CPP_EXTERN_C String_t* _stringLiteral5FFDB5FA43CC982B77B24121A4A5A8FF89BFF9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral6583D28EB6CFF83FDBB3DA222265AC25EC7D65D6;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB07423964DA9E0431C9996EDB906B538813C67;
IL2CPP_EXTERN_C String_t* _stringLiteral6CEBB6CC6174CCE83E2D22FCEDE33A526A08041D;
IL2CPP_EXTERN_C String_t* _stringLiteral78F26F54889659D1A063B5EDBB68BD8719AD6E2C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A55C7E363C81A7F0135BB2DBD3A2B7226D754CB;
IL2CPP_EXTERN_C String_t* _stringLiteral82FAF741CCDB0065341B2D5ABCF7AF4E1EDD231B;
IL2CPP_EXTERN_C String_t* _stringLiteral9155289CD9B0F3D82A34DB1F665501D9E2AA0DC3;
IL2CPP_EXTERN_C String_t* _stringLiteral918EDACB6E31C7EBBCF380F608C3442C2DEA1A2D;
IL2CPP_EXTERN_C String_t* _stringLiteralB24EA968C23E2604FBC086A243395FF5E55C3778;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralBB6215B7729F95E236F9348D4A2201CB1E721832;
IL2CPP_EXTERN_C String_t* _stringLiteralC0F7EE81C79E1799D203DDEF4714D5DBAB2A02E3;
IL2CPP_EXTERN_C String_t* _stringLiteralCB29A9C9DB03FD11942FEE28C07F89A7A2D1FC68;
IL2CPP_EXTERN_C String_t* _stringLiteralCDFA64E51DBBA76B945506C8DF306BE4035C1C60;
IL2CPP_EXTERN_C String_t* _stringLiteralD11132E60E3DE615395079C0CFDE1025ADB5CC8B;
IL2CPP_EXTERN_C String_t* _stringLiteralF5D220F68C441A349826DCD2ED755C80A708604B;
IL2CPP_EXTERN_C String_t* _stringLiteralF8C5C17A751BC3FBD6E376782A1CF23636D0555C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSilo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19_mA0C5A624C6499A2810489FC67C0ACC23C1E1E8CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSilo2_t72E418BDFE758B2ECFA08192974B7D1396C80848_m196D141968BAE586C888B58D183F67137FF6A665_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSilo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251_m7456FCB5C3D25E66945FEA39CC105D888154134D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSilo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410_mEBD4DB880D3838B1A426C9540278568A4BC08ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSilo5_t37649576A5B38ABCC27E88FE1E5A39807496833D_m8B1F1292CDA0BA5A4665E109796F198A63752B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSilo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE_mAA19F031351A587FC7F200B915499A15FA8C1572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckObjectsInAreaU3Ed__9_System_Collections_IEnumerator_Reset_m493144277C5917557B594E3B883D395ED960B820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CPlayMyAudioU3Eb__0_mF5D0A86F1195AA1E13CE7A49D712E6F806ADBC62_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5;
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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Sound
struct Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0  : public RuntimeObject
{
	// System.String Sound::name
	String_t* ___name_0;
	// UnityEngine.AudioClip Sound::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_1;
	// System.Single Sound::volume
	float ___volume_2;
	// System.Single Sound::pitch
	float ___pitch_3;
	// System.Boolean Sound::loop
	bool ___loop_4;
	// UnityEngine.AudioSource Sound::source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// AudioManager/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89  : public RuntimeObject
{
	// System.String AudioManager/<>c__DisplayClass4_0::name
	String_t* ___name_0;
};

// BlockCollector/<CheckObjectsInArea>d__9
struct U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54  : public RuntimeObject
{
	// System.Int32 BlockCollector/<CheckObjectsInArea>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BlockCollector/<CheckObjectsInArea>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BlockCollector BlockCollector/<CheckObjectsInArea>d__9::<>4__this
	BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

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

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>
struct Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ____current_3;
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

// UnityEngine.XR.CommonUsages
struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1  : public RuntimeObject
{
};

struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields
{
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___thumbTouch_58;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
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

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Predicate`1<Sound>
struct Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Sound[] AudioManager::sounds
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___sounds_4;
	// System.Boolean AudioManager::StartPlaying
	bool ___StartPlaying_5;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BlockCollector
struct BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String BlockCollector::redBlocks
	String_t* ___redBlocks_4;
	// System.String BlockCollector::blueBlocks
	String_t* ___blueBlocks_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> BlockCollector::redBlocksList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___redBlocksList_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> BlockCollector::blueBlocksList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___blueBlocksList_7;
	// System.Single BlockCollector::checkInterval
	float ___checkInterval_8;
	// UnityEngine.Vector3 BlockCollector::areaCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___areaCenter_9;
	// System.Single BlockCollector::areaRadius
	float ___areaRadius_10;
};

// BlockFollowWayPoints
struct BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_StaticFields
{
	// UnityEngine.Transform[] BlockFollowWayPoints::waypoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___waypoints_4;
};

// BlockSpawnerNew
struct BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BlockSpawnerNew::redBlock
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___redBlock_4;
	// UnityEngine.GameObject BlockSpawnerNew::blueBlock
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___blueBlock_5;
	// UnityEngine.Vector3 BlockSpawnerNew::areaSpawnSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___areaSpawnSize_6;
	// System.Single BlockSpawnerNew::delayBlockRed
	float ___delayBlockRed_7;
	// System.Single BlockSpawnerNew::delayBlockBlue
	float ___delayBlockBlue_8;
	// System.Single BlockSpawnerNew::spawnFreqRed
	float ___spawnFreqRed_9;
	// System.Single BlockSpawnerNew::spawnFreqBlue
	float ___spawnFreqBlue_10;
	// System.Single BlockSpawnerNew::spawnTimerRed
	float ___spawnTimerRed_11;
	// System.Single BlockSpawnerNew::spawnTimerBlue
	float ___spawnTimerBlue_12;
	// System.Single BlockSpawnerNew::StartSpawn1
	float ___StartSpawn1_13;
	// System.Single BlockSpawnerNew::StopSpawn1
	float ___StopSpawn1_14;
	// System.Single BlockSpawnerNew::StartSpawn2
	float ___StartSpawn2_15;
	// System.Single BlockSpawnerNew::StopSpawn2
	float ___StopSpawn2_16;
	// System.Single BlockSpawnerNew::StartSpawn3
	float ___StartSpawn3_17;
	// System.Single BlockSpawnerNew::StopSpawn3
	float ___StopSpawn3_18;
	// System.Single BlockSpawnerNew::StartSpawn4
	float ___StartSpawn4_19;
	// System.Single BlockSpawnerNew::StopSpawn4
	float ___StopSpawn4_20;
	// System.Single BlockSpawnerNew::StartSpawn5
	float ___StartSpawn5_21;
	// System.Single BlockSpawnerNew::StopSpawn5
	float ___StopSpawn5_22;
	// System.Boolean BlockSpawnerNew::EnableSpawn
	bool ___EnableSpawn_23;
	// UnityEngine.GameObject BlockSpawnerNew::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_24;
};

// BlockTurning
struct BlockTurning_t993A7AB960273DC6AB859D845D6EEC8734B349A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// BlueBlockActivation
struct BlueBlockActivation_t6B7FBCF21B5199ECB3C36C93FF89967C9CE0E98E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BlueBlockActivation::BlueZoneFar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BlueZoneFar_4;
	// UnityEngine.Vector3 BlueBlockActivation::blockSmallSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___blockSmallSize_5;
	// UnityEngine.Vector3 BlueBlockActivation::blockLargeSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___blockLargeSize_6;
};

// BlueCubesBPM
struct BlueCubesBPM_tFBBC830BD8403C63D97C67D9D29BC23AD0CD95DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BlueCubesBPM::bpm
	float ___bpm_4;
	// BlockCollector BlueCubesBPM::objectCollector
	BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* ___objectCollector_5;
	// UnityEngine.LayerMask BlueCubesBPM::normalLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___normalLayer_6;
	// UnityEngine.LayerMask BlueCubesBPM::activeLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___activeLayer_7;
	// System.Single BlueCubesBPM::timer
	float ___timer_8;
	// System.Single BlueCubesBPM::timeBetweenHalfBeats
	float ___timeBetweenHalfBeats_9;
	// System.Boolean BlueCubesBPM::isActiveLayer
	bool ___isActiveLayer_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> BlueCubesBPM::collectedObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___collectedObjects_11;
	// UnityEngine.Vector3 BlueCubesBPM::normalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normalScale_12;
	// UnityEngine.Vector3 BlueCubesBPM::activeScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___activeScale_13;
};

// DestroyBlueOnWthie
struct DestroyBlueOnWthie_t88FD077FED3E89C82499F66295CF5F57F640A95E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DestroyBlueOnWthie::whiteZoneLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___whiteZoneLeft_4;
};

// DestroyOnWhiteEnemy
struct DestroyOnWhiteEnemy_tDB03CA985382699C8BF26C26848D6C182E5C4189  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DestroyOnWhiteEnemy::whiteZoneLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___whiteZoneLeft_4;
};

// DestroyOrbs
struct DestroyOrbs_t0D5A8519BB2CD98ED4FE31AD4A78560EB11FF324  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DestroyOrbs::OrbDeleter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___OrbDeleter_4;
};

// DestroyRedOnWhite
struct DestroyRedOnWhite_t5BDC0229112EB9054BADF76F5EFC926E6EE12B93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DestroyRedOnWhite::whiteZoneLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___whiteZoneLeft_4;
};

// EasyBlueSpawner
struct EasyBlueSpawner_tD6D633978B0447C538D8740706C44672E7436E83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EasyBlueSpawner::BlueCubeToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BlueCubeToSpawn_4;
	// UnityEngine.Vector3 EasyBlueSpawner::spawnAreaSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnAreaSize_5;
	// System.Single EasyBlueSpawner::spawnInterval
	float ___spawnInterval_6;
	// System.Single EasyBlueSpawner::spawnTimer
	float ___spawnTimer_7;
	// System.Single EasyBlueSpawner::spawnOneBlue
	float ___spawnOneBlue_8;
	// System.Single EasyBlueSpawner::setDelayTimer
	float ___setDelayTimer_9;
	// System.Single EasyBlueSpawner::setStop1Timer
	float ___setStop1Timer_10;
	// System.Single EasyBlueSpawner::setStop2Timer
	float ___setStop2Timer_11;
	// System.Single EasyBlueSpawner::setStop3Timer
	float ___setStop3Timer_12;
	// System.Single EasyBlueSpawner::setStart1Timer
	float ___setStart1Timer_13;
	// System.Single EasyBlueSpawner::setStart2Timer
	float ___setStart2Timer_14;
	// System.Single EasyBlueSpawner::setStart3Timer
	float ___setStart3Timer_15;
	// System.Single EasyBlueSpawner::stopSpawningAt1
	float ___stopSpawningAt1_16;
	// System.Single EasyBlueSpawner::startSpawningAt1
	float ___startSpawningAt1_17;
	// System.Single EasyBlueSpawner::stopSpawningAt2
	float ___stopSpawningAt2_18;
	// System.Single EasyBlueSpawner::startSpawningAt2
	float ___startSpawningAt2_19;
	// System.Single EasyBlueSpawner::stopSpawningAt3
	float ___stopSpawningAt3_20;
	// System.Single EasyBlueSpawner::startSpawningAt3
	float ___startSpawningAt3_21;
	// System.Boolean EasyBlueSpawner::readyToSpawn
	bool ___readyToSpawn_22;
	// UnityEngine.GameObject EasyBlueSpawner::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_23;
};

// EasyRedSpawner
struct EasyRedSpawner_t2F5CB14005D116EFA97084F3FBE448266441EC4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EasyRedSpawner::RedCubeToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RedCubeToSpawn_4;
	// UnityEngine.Vector3 EasyRedSpawner::spawnAreaSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnAreaSize_5;
	// System.Single EasyRedSpawner::spawnInterval
	float ___spawnInterval_6;
	// System.Single EasyRedSpawner::spawnTimer
	float ___spawnTimer_7;
	// System.Single EasyRedSpawner::spawnOneRed
	float ___spawnOneRed_8;
	// System.Single EasyRedSpawner::setDelayTimer
	float ___setDelayTimer_9;
	// System.Single EasyRedSpawner::setStop1Timer
	float ___setStop1Timer_10;
	// System.Single EasyRedSpawner::setStop2Timer
	float ___setStop2Timer_11;
	// System.Single EasyRedSpawner::setStop3Timer
	float ___setStop3Timer_12;
	// System.Single EasyRedSpawner::setStart1Timer
	float ___setStart1Timer_13;
	// System.Single EasyRedSpawner::setStart2Timer
	float ___setStart2Timer_14;
	// System.Single EasyRedSpawner::setStart3Timer
	float ___setStart3Timer_15;
	// System.Single EasyRedSpawner::stopSpawningAt1
	float ___stopSpawningAt1_16;
	// System.Single EasyRedSpawner::startSpawningAt1
	float ___startSpawningAt1_17;
	// System.Single EasyRedSpawner::stopSpawningAt2
	float ___stopSpawningAt2_18;
	// System.Single EasyRedSpawner::startSpawningAt2
	float ___startSpawningAt2_19;
	// System.Single EasyRedSpawner::stopSpawningAt3
	float ___stopSpawningAt3_20;
	// System.Single EasyRedSpawner::startSpawningAt3
	float ___startSpawningAt3_21;
	// System.Boolean EasyRedSpawner::readyToSpawn
	bool ___readyToSpawn_22;
	// UnityEngine.GameObject EasyRedSpawner::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_23;
};

// EnemyFollowWaypoints
struct EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_StaticFields
{
	// UnityEngine.Transform[] EnemyFollowWaypoints::enemyWaypoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___enemyWaypoints_4;
};

// EnemyMove
struct EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyMove::enemyMoveSpeed
	float ___enemyMoveSpeed_4;
	// UnityEngine.Transform EnemyMove::enemyTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___enemyTarget_5;
	// System.Int32 EnemyMove::enemyWPIndex
	int32_t ___enemyWPIndex_6;
};

// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EnemySpawner::enemySpehere
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemySpehere_4;
	// UnityEngine.Vector3 EnemySpawner::areaSpawnSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___areaSpawnSize_5;
	// System.Single EnemySpawner::delayEnemySphere
	float ___delayEnemySphere_6;
	// System.Single EnemySpawner::spawnFreqEnemy
	float ___spawnFreqEnemy_7;
	// System.Single EnemySpawner::spawnTimerEnemy
	float ___spawnTimerEnemy_8;
	// System.Single EnemySpawner::StartSpawn1
	float ___StartSpawn1_9;
	// System.Single EnemySpawner::StopSpawn1
	float ___StopSpawn1_10;
	// System.Boolean EnemySpawner::EnableSpawn
	bool ___EnableSpawn_11;
	// UnityEngine.GameObject EnemySpawner::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_12;
};

// LetsGo
struct LetsGo_tEC540EF6864F7B93E0990CA50481030A48F897A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LightsOnAndOff
struct LightsOnAndOff_t142B944080D6E3BD60D3C6CE2978BDD311239611  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material[] LightsOnAndOff::newMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___newMaterials_4;
	// UnityEngine.GameObject[] LightsOnAndOff::objectsToChange
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objectsToChange_5;
	// System.Single LightsOnAndOff::beatsPerMinute
	float ___beatsPerMinute_6;
	// System.Single LightsOnAndOff::timeBetweenBeats
	float ___timeBetweenBeats_7;
	// System.Int32 LightsOnAndOff::currentMaterialIndex
	int32_t ___currentMaterialIndex_8;
	// System.Int32 LightsOnAndOff::changeDirection
	int32_t ___changeDirection_9;
};

// MoveAndRotateNew
struct MoveAndRotateNew_t6097D40DD7E3746CCC6E6C3452282C7A7A9D09FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MoveAndRotateNew::movementSpeed
	float ___movementSpeed_4;
	// UnityEngine.Vector3 MoveAndRotateNew::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_6;
	// UnityEngine.Vector3 MoveAndRotateNew::turn1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___turn1_7;
};

struct MoveAndRotateNew_t6097D40DD7E3746CCC6E6C3452282C7A7A9D09FD_StaticFields
{
	// MoveAndRotateNew MoveAndRotateNew::instance
	MoveAndRotateNew_t6097D40DD7E3746CCC6E6C3452282C7A7A9D09FD* ___instance_5;
};

// MoveBlocks
struct MoveBlocks_t03AC7BF9597B58E6BED63F666454109D9F91E392  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MoveBlocks::targetLocation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetLocation_4;
	// System.Single MoveBlocks::movementSpeedBlocks
	float ___movementSpeedBlocks_5;
	// System.Single MoveBlocks::rotationSpeed
	float ___rotationSpeed_6;
};

// MoveOrbs
struct MoveOrbs_tB6C43FB68520827955A694ACBA5DE2D3C8C27A45  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MoveOrbs::orbMovementSpeed
	float ___orbMovementSpeed_4;
};

// OrbSpawner
struct OrbSpawner_tE1C12D98DBD06B2139B6F7F385BBE9141188CB1A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject OrbSpawner::Orb
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Orb_4;
	// UnityEngine.Vector3 OrbSpawner::orbSpawnAreaSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___orbSpawnAreaSize_5;
	// System.Single OrbSpawner::orbSpawnInterval
	float ___orbSpawnInterval_6;
	// System.Single OrbSpawner::orbSpawnTimer
	float ___orbSpawnTimer_7;
	// UnityEngine.GameObject OrbSpawner::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_8;
};

// PIllars
struct PIllars_tB953CE786F9C6794146EDEEA711CF89FB13CBEC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PIllars::moveSpeed
	float ___moveSpeed_4;
	// System.Boolean PIllars::canMove
	bool ___canMove_5;
	// UnityEngine.Vector3 PIllars::moveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_6;
	// UnityEngine.GameObject PIllars::roof
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___roof_7;
};

// PhonkBlueSpawner
struct PhonkBlueSpawner_t1739DCEC9BDB29E7E513C044994A3F18106464CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PhonkBlueSpawner::BlueCubeToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BlueCubeToSpawn_4;
	// UnityEngine.Vector3 PhonkBlueSpawner::spawnAreaSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnAreaSize_5;
	// System.Single PhonkBlueSpawner::spawnInterval
	float ___spawnInterval_6;
	// System.Single PhonkBlueSpawner::spawnTimer
	float ___spawnTimer_7;
	// System.Single PhonkBlueSpawner::spawnDelayRed
	float ___spawnDelayRed_8;
	// System.Single PhonkBlueSpawner::setTimer
	float ___setTimer_9;
	// System.Single PhonkBlueSpawner::breakDelay
	float ___breakDelay_10;
	// System.Boolean PhonkBlueSpawner::readyToSpawn
	bool ___readyToSpawn_11;
	// UnityEngine.GameObject PhonkBlueSpawner::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_12;
};

// PhonkRedSpawner
struct PhonkRedSpawner_tD6FC641AB5F178F25AB0132F3AE540C3C96128EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PhonkRedSpawner::RedCubeToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RedCubeToSpawn_4;
	// UnityEngine.Vector3 PhonkRedSpawner::spawnAreaSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnAreaSize_5;
	// System.Single PhonkRedSpawner::spawnInterval
	float ___spawnInterval_6;
	// System.Single PhonkRedSpawner::spawnTimer
	float ___spawnTimer_7;
	// System.Single PhonkRedSpawner::spawnDelayRed
	float ___spawnDelayRed_8;
	// System.Single PhonkRedSpawner::setTimer
	float ___setTimer_9;
	// System.Single PhonkRedSpawner::breakDelay
	float ___breakDelay_10;
	// System.Boolean PhonkRedSpawner::readyToSpawn
	bool ___readyToSpawn_11;
	// UnityEngine.GameObject PhonkRedSpawner::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_12;
};

// RedBlockActivation
struct RedBlockActivation_t066081D04B6485279B90294816454E8BE858CD18  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject RedBlockActivation::redZoneFar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___redZoneFar_4;
	// UnityEngine.Vector3 RedBlockActivation::blockSmallSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___blockSmallSize_5;
	// UnityEngine.Vector3 RedBlockActivation::blockLargeSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___blockLargeSize_6;
};

// RedCubesAreaCollector
struct RedCubesAreaCollector_t21961EA0B4D8371CB2BD4DBE47965590044A0BF9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RedCubesAreaCollector::objectsInArea
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___objectsInArea_4;
};

// RedCubesBPM
struct RedCubesBPM_t0E5DA926DD3149861B962B7E89849A36FB7D452E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RedCubesBPM::bpm
	float ___bpm_4;
	// BlockCollector RedCubesBPM::objectCollector
	BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* ___objectCollector_5;
	// UnityEngine.LayerMask RedCubesBPM::normalLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___normalLayer_6;
	// UnityEngine.LayerMask RedCubesBPM::activeLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___activeLayer_7;
	// System.Single RedCubesBPM::timer
	float ___timer_8;
	// System.Single RedCubesBPM::timeBetweenHalfBeats
	float ___timeBetweenHalfBeats_9;
	// System.Boolean RedCubesBPM::isActiveLayer
	bool ___isActiveLayer_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RedCubesBPM::collectedObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___collectedObjects_11;
	// UnityEngine.Vector3 RedCubesBPM::normalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normalScale_12;
	// UnityEngine.Vector3 RedCubesBPM::activeScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___activeScale_13;
};

// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text ScoreManager::scoreTMP
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___scoreTMP_5;
	// TMPro.TMP_Text ScoreManager::highscoreTMP
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___highscoreTMP_6;
	// System.Int32 ScoreManager::score
	int32_t ___score_7;
	// System.Int32 ScoreManager::highscore
	int32_t ___highscore_8;
};

struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields
{
	// ScoreManager ScoreManager::instance
	ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* ___instance_4;
};

// ShootBlue
struct ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.InputDevice ShootBlue::targetDevice
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___targetDevice_4;
	// UnityEngine.Transform ShootBlue::shootFrom
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shootFrom_5;
	// System.Single ShootBlue::shotPower
	float ___shotPower_6;
	// System.Single ShootBlue::rangeBlue
	float ___rangeBlue_7;
	// System.Single ShootBlue::fireRate
	float ___fireRate_8;
	// System.Single ShootBlue::canFireTimer
	float ___canFireTimer_9;
	// UnityEngine.RaycastHit ShootBlue::rayCastHitBlue
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___rayCastHitBlue_10;
	// UnityEngine.LayerMask ShootBlue::targetBlueBlockSmall
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___targetBlueBlockSmall_11;
	// UnityEngine.LayerMask ShootBlue::targetBlueBlockBig
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___targetBlueBlockBig_12;
	// UnityEngine.LayerMask ShootBlue::targetEnemy
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___targetEnemy_13;
	// UnityEngine.GameObject ShootBlue::particleImpact
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___particleImpact_14;
	// UnityEngine.GameObject ShootBlue::gunFx
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gunFx_15;
};

// ShootRed
struct ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.InputDevice ShootRed::targetDevice
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___targetDevice_4;
	// UnityEngine.Transform ShootRed::shootFrom
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shootFrom_5;
	// System.Single ShootRed::shotPower
	float ___shotPower_6;
	// System.Single ShootRed::rangeRed
	float ___rangeRed_7;
	// System.Single ShootRed::fireRate
	float ___fireRate_8;
	// System.Single ShootRed::canFireTimer
	float ___canFireTimer_9;
	// UnityEngine.RaycastHit ShootRed::rayCastHitRed
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___rayCastHitRed_10;
	// UnityEngine.LayerMask ShootRed::targetRedBlockSmall
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___targetRedBlockSmall_11;
	// UnityEngine.LayerMask ShootRed::targetRedBlockBig
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___targetRedBlockBig_12;
	// UnityEngine.LayerMask ShootRed::TargetEnemy
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___TargetEnemy_13;
	// UnityEngine.GameObject ShootRed::particleImpact
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___particleImpact_14;
};

// Silo
struct Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Silo::canLaunch
	bool ___canLaunch_4;
	// UnityEngine.Vector3 Silo::launchArea
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___launchArea_5;
	// System.Single Silo::launchFreq
	float ___launchFreq_6;
	// System.Single Silo::launchTimer
	float ___launchTimer_7;
	// UnityEngine.GameObject Silo::missle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missle_8;
	// UnityEngine.GameObject Silo::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_9;
};

// Silo1
struct Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Silo1::canLaunch1
	bool ___canLaunch1_4;
	// UnityEngine.Vector3 Silo1::launchArea
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___launchArea_5;
	// System.Single Silo1::launchFreq
	float ___launchFreq_6;
	// System.Single Silo1::launchTimer
	float ___launchTimer_7;
	// UnityEngine.GameObject Silo1::missle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missle_8;
	// UnityEngine.GameObject Silo1::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_9;
};

// Silo2
struct Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Silo2::canLaunch2
	bool ___canLaunch2_4;
	// UnityEngine.Vector3 Silo2::launchArea
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___launchArea_5;
	// System.Single Silo2::launchFreq
	float ___launchFreq_6;
	// System.Single Silo2::launchTimer
	float ___launchTimer_7;
	// UnityEngine.GameObject Silo2::missle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missle_8;
	// UnityEngine.GameObject Silo2::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_9;
};

// Silo3
struct Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Silo3::canLaunch3
	bool ___canLaunch3_4;
	// UnityEngine.Vector3 Silo3::launchArea
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___launchArea_5;
	// System.Single Silo3::launchFreq
	float ___launchFreq_6;
	// System.Single Silo3::launchTimer
	float ___launchTimer_7;
	// UnityEngine.GameObject Silo3::missle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missle_8;
	// UnityEngine.GameObject Silo3::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_9;
};

// Silo4
struct Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Silo4::canLaunch4
	bool ___canLaunch4_4;
	// UnityEngine.Vector3 Silo4::launchArea
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___launchArea_5;
	// System.Single Silo4::launchFreq
	float ___launchFreq_6;
	// System.Single Silo4::launchTimer
	float ___launchTimer_7;
	// UnityEngine.GameObject Silo4::missle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missle_8;
	// UnityEngine.GameObject Silo4::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_9;
};

// Silo5
struct Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Silo5::canLaunch5
	bool ___canLaunch5_4;
	// UnityEngine.Vector3 Silo5::launchArea
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___launchArea_5;
	// System.Single Silo5::launchFreq
	float ___launchFreq_6;
	// System.Single Silo5::launchTimer
	float ___launchTimer_7;
	// UnityEngine.GameObject Silo5::missle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missle_8;
	// UnityEngine.GameObject Silo5::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_9;
};

// SpawnAndMoveObjects
struct SpawnAndMoveObjects_t45D17D405AA82F16337B522740386348B8333A41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SpawnAndMoveObjects::RedCubeToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RedCubeToSpawn_4;
	// UnityEngine.GameObject SpawnAndMoveObjects::BlueCubeToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BlueCubeToSpawn_5;
	// UnityEngine.Vector3 SpawnAndMoveObjects::spawnAreaSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnAreaSize_6;
	// System.Single SpawnAndMoveObjects::spawnInterval
	float ___spawnInterval_7;
	// System.Single SpawnAndMoveObjects::spawnTimer
	float ___spawnTimer_8;
	// UnityEngine.GameObject SpawnAndMoveObjects::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_9;
};

// Testinh
struct Testinh_tD1A703C9358F5138210CF5509CF98DF141B69DFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WayPointMovement
struct WayPointMovement_tBB1785044B1D9DA6863362D229020B7ABBB28ABF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WayPointMovement::speed
	float ___speed_4;
	// UnityEngine.Transform WayPointMovement::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_5;
	// System.Int32 WayPointMovement::wavepointIndex
	int32_t ___wavepointIndex_6;
	// System.Single WayPointMovement::waypointEntryEstimater
	float ___waypointEntryEstimater_7;
};

// WhiteZone
struct WhiteZone_tC7372F932E417E58F100DFC1E0F89D86FFFED12E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WhiteZone::redCube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___redCube_4;
	// UnityEngine.GameObject WhiteZone::blueCube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___blueCube_5;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Sound[]
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5  : public RuntimeArray
{
	ALIGN_FIELD (8) Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* m_Items[1];

	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* value)
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
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


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_gshared (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_gshared (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void ScoreManager::MinusScoreOnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_MinusScoreOnEnemy_m540CAEB8C71DC5F9D53928CC748E41B9D9B3BB8D (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void EnemyMove::GetNextEnemyWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_GetNextEnemyWaypoint_m78E351B583DF2CA252CE51B00FCC41DCC6DD9C4C (EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* __this, const RuntimeMethod* method) ;
// System.Void EnemySpawner::Timers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Timers_mAAACE7963DB12C5DEBE7F55FC8CF1DEF675519DF (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// System.Void EnemySpawner::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnEnemy_m3ECE5A636D85AD547F695DFCCA87F3C021BB6599 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void AudioManager/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3DD23E7EFFDED69B9EAC81FE50CDC950F4B7EC9D (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Sound>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<Sound>(T[],System.Predicate`1<T>)
inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7 (SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___array0, Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* ___match1, const RuntimeMethod* method)
{
	return ((  Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* (*) (SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5*, Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___array0, ___match1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<AudioManager>()
inline AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473 (const RuntimeMethod* method)
{
	return ((  AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void AudioManager::PlayMyAudio(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::PlayLetsGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayLetsGO_m8B28263CE691D281D779BF849ED425F1FB4E3156 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::StartAmbience()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StartAmbience_m8A71470D44CB6F9526F1229E1115AC1AFDE18632 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// System.Void BlockSpawnerNew::Timers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_Timers_m3037335FBF4EAFA238A5AA60B864B05BEC5DEEA0 (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) ;
// System.Void BlockSpawnerNew::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_SpawnBlockRed_m342D3A9CBB480C43CF3D865F04F6F1337204063E (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) ;
// System.Void BlockSpawnerNew::SpawnBlockBlue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_SpawnBlockBlue_mF01067183972B7770763C3CF38FE8A05D86C5FE4 (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<BlockCollector>()
inline BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03 (const RuntimeMethod* method)
{
	return ((  BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void BlockCollector::DestroyAllBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockCollector_DestroyAllBlocks_m6256222B2EABB5A57F1175B2E7343D7D3D0F9291 (BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* __this, const RuntimeMethod* method) ;
// System.Void BlockSpawnerNew::turnOnOffMisslies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_turnOnOffMisslies_m647DF33D40E81B3ADBB1C35527B2D4977A1CD096 (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) ;
// System.Void BlockSpawnerNew::SetDelayTimers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_SetDelayTimers_m398F47D52A0DEF1916CE82478D334BA37028FBCE (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) ;
// System.Void BlockSpawnerNew::IncreaseLevel1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_IncreaseLevel1_m5D6EC23B2DF041F62264E363C817F9002A36FD3D (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) ;
// System.Void BlockSpawnerNew::IncreaseLevel2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_IncreaseLevel2_m4AB886AD524B6AE648EDE14D4F9C26F671D4A5EF (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) ;
// System.Void BlockSpawnerNew::IncreaseLevel3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_IncreaseLevel3_m7C16064935158A423F424254324143D121E3BB0F (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) ;
// System.Void BlockSpawnerNew::IncreaseLevel4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_IncreaseLevel4_m1C5DCEAA1A845BA4EBC0DF11702AC3A6A3446CCF (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Silo>()
inline Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE* Object_FindObjectOfType_TisSilo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE_mAA19F031351A587FC7F200B915499A15FA8C1572 (const RuntimeMethod* method)
{
	return ((  Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Silo::TurnOnMissleLaunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo_TurnOnMissleLaunch_mF680CFE8C14E292029285FDADA2364F17D168AD7 (Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Silo1>()
inline Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19* Object_FindObjectOfType_TisSilo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19_mA0C5A624C6499A2810489FC67C0ACC23C1E1E8CF (const RuntimeMethod* method)
{
	return ((  Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Silo1::TurnOnMissleLaunch1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo1_TurnOnMissleLaunch1_m4A753BA9AEDD0D20C64E59768E09867757E8D494 (Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Silo2>()
inline Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848* Object_FindObjectOfType_TisSilo2_t72E418BDFE758B2ECFA08192974B7D1396C80848_m196D141968BAE586C888B58D183F67137FF6A665 (const RuntimeMethod* method)
{
	return ((  Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Silo2::TurnOnMissleLaunch2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo2_TurnOnMissleLaunch2_m5FFD316F0B8594DB1BBA5DB5EFF60224D7894920 (Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Silo3>()
inline Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251* Object_FindObjectOfType_TisSilo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251_m7456FCB5C3D25E66945FEA39CC105D888154134D (const RuntimeMethod* method)
{
	return ((  Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Silo3::TurnOnMissleLaunch3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo3_TurnOnMissleLaunch3_m23AED06A152864EFC7DC2CDE9111D9234F985041 (Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Silo4>()
inline Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410* Object_FindObjectOfType_TisSilo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410_mEBD4DB880D3838B1A426C9540278568A4BC08ED5 (const RuntimeMethod* method)
{
	return ((  Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Silo4::TurnOnMissleLaunch4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo4_TurnOnMissleLaunch4_m8D455482AE87C5553A63C5358E1B56D6AB94BA79 (Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Silo5>()
inline Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D* Object_FindObjectOfType_TisSilo5_t37649576A5B38ABCC27E88FE1E5A39807496833D_m8B1F1292CDA0BA5A4665E109796F198A63752B8D (const RuntimeMethod* method)
{
	return ((  Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Silo5::TurnOnMissleLaunch5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo5_TurnOnMissleLaunch5_m7B1D54CAFFBF5D820F98617810AB6D4C60683694 (Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D* __this, const RuntimeMethod* method) ;
// System.Void ScoreManager::MinusScoreOnWhite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_MinusScoreOnWhite_m98A775259B44E37AA25849A06172043DAF071E3D (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) ;
// System.Void EasyBlueSpawner::StartTimers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyBlueSpawner_StartTimers_mE09266F11A51D804BB736346A7CE4CC5884EF20A (EasyBlueSpawner_tD6D633978B0447C538D8740706C44672E7436E83* __this, const RuntimeMethod* method) ;
// System.Void EasyBlueSpawner::SpawnBlockBlue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyBlueSpawner_SpawnBlockBlue_mA1293E6395EA8747A097A765C893ED12C7AA1CEF (EasyBlueSpawner_tD6D633978B0447C538D8740706C44672E7436E83* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void EasyRedSpawner::StartTimers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyRedSpawner_StartTimers_m2360D92D87333C5F8918422532562997AD63FA5A (EasyRedSpawner_t2F5CB14005D116EFA97084F3FBE448266441EC4A* __this, const RuntimeMethod* method) ;
// System.Void EasyRedSpawner::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyRedSpawner_SpawnBlockRed_m8DEE16AAFB460169256C1334D7A088A328AB9E40 (EasyRedSpawner_t2F5CB14005D116EFA97084F3FBE448266441EC4A* __this, const RuntimeMethod* method) ;
// System.Void ShootBlue::GetTheControllersLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_GetTheControllersLeft_mCC93D2D8893A3F09D7117E5E923E93F889C9B3D0 (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, const RuntimeMethod* method) ;
// System.Void ShootBlue::CheckControllerInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_CheckControllerInput_mAE2FDE96F340D2B3FC5A49388F4385B92BFCEF84 (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevices(System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevices_mDB6E1E057DC81A1833AEB55B62FA22228D6EFA26 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m82F54DE2802FCE4EB730FCFBF8731CA91A27DEB0 (uint32_t ___desiredCharacteristics0, List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
inline Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
inline void Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, int32_t, const RuntimeMethod*))List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___usage0, bool* ___value1, const RuntimeMethod* method) ;
// System.Void ShootBlue::shootGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_shootGun_mF4F700537D7FD52914823F114B6DD0F244476745 (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void ShootBlue::PlayImpactEffect(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_PlayImpactEffect_m44EAE4B07E926C7953091D379FDA53D47BFC888F (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal1, const RuntimeMethod* method) ;
// System.Void ScoreManager::AddPointsBigBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_AddPointsBigBlock_mCDCA4AA4157148AEA9A58A346FBACC6BA2F66E74 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) ;
// System.Void ScoreManager::AddPointsSmallBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_AddPointsSmallBlock_mDDDF52B730FBD21AB0318191F0EB2F0AB416DEF8 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void ShootRed::GetTheControllersRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_GetTheControllersRight_m1FC2E976868942945FC7EF2B65B6EBA74936FB9D (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, const RuntimeMethod* method) ;
// System.Void ShootRed::CheckControllerInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_CheckControllerInput_mDF108518E01E0A093C8D3FF3757C42681E75E1C1 (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, const RuntimeMethod* method) ;
// System.Void ShootRed::shootGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_shootGun_mED303DCC8FE8E3385475B5FA2900FAD6EE999D70 (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, const RuntimeMethod* method) ;
// System.Void ShootRed::PlayImpactEffect(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_PlayImpactEffect_mEE695CC2DB71E0F355724AF4DA4B0CAF07645CD0 (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Silo::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo_LaunchMissle_m793606FF46A71E2DA4E9E26C31F86F7887E04787 (Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE* __this, const RuntimeMethod* method) ;
// System.Void Silo1::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo1_LaunchMissle_m7301A94AF73C25F599023F7AF9CFEB4DC59C898E (Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19* __this, const RuntimeMethod* method) ;
// System.Void Silo2::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo2_LaunchMissle_m2DEC601F0545CBD2AB22AAABBC48887136F2E9D3 (Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848* __this, const RuntimeMethod* method) ;
// System.Void Silo3::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo3_LaunchMissle_m765ACDD0E5622127992C001C6AF16917A20501F4 (Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251* __this, const RuntimeMethod* method) ;
// System.Void Silo4::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo4_LaunchMissle_m2E74FEBB2154D0A2D0B66A9EB9C34BAB9CE7F34D (Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410* __this, const RuntimeMethod* method) ;
// System.Void Silo5::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo5_LaunchMissle_m2CA9AF807A3A26FA76BE0CE51C092BC7BE9D4839 (Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D* __this, const RuntimeMethod* method) ;
// System.Void MoveBlocks::MoveAndRotateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBlocks_MoveAndRotateObject_mCE921B6B0FCEF1AF31E824FA5F4CC9F9A8CA588A (MoveBlocks_t03AC7BF9597B58E6BED63F666454109D9F91E392* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BlockCollector::CheckObjectsInArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlockCollector_CheckObjectsInArea_m4E8D12DA5709D31D79CD479A6BBFEDDBF93381F4 (BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void BlockCollector/<CheckObjectsInArea>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckObjectsInAreaU3Ed__9__ctor_m9B74B952F260A1630C4AA084CD7E742ABE363F70 (U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void BlueCubesBPM::ToggleLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueCubesBPM_ToggleLayer_m63B9E8DB037B43C8A92C5DF5273619A76470AAA3 (BlueCubesBPM_tFBBC830BD8403C63D97C67D9D29BC23AD0CD95DB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline (float ___f0, float ___p1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void MoveAndRotateNew::MoveAndRotateBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAndRotateNew_MoveAndRotateBlock_m1DA8F2C77683599C6D7621F1EA709B8230442BD2 (MoveAndRotateNew_t6097D40DD7E3746CCC6E6C3452282C7A7A9D09FD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// System.Void RedCubesBPM::ToggleLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedCubesBPM_ToggleLayer_m4DEA9E1CAF5AB8115E475A9C0BD1444AECE40A5A (RedCubesBPM_t0E5DA926DD3149861B962B7E89849A36FB7D452E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void SpawnAndMoveObjects::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnAndMoveObjects_SpawnBlockRed_m2AC45AA07BFC2950CF492664A6FD6533915F0D7A (SpawnAndMoveObjects_t45D17D405AA82F16337B522740386348B8333A41* __this, const RuntimeMethod* method) ;
// System.Void SpawnAndMoveObjects::SpawnBlockBlue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnAndMoveObjects_SpawnBlockBlue_m9FFDB31EFA4990643C8B25B6BDA788ACE5E70D66 (SpawnAndMoveObjects_t45D17D405AA82F16337B522740386348B8333A41* __this, const RuntimeMethod* method) ;
// System.Void OrbSpawner::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbSpawner_SpawnBlockRed_mFBAEB28247E499434287FEF7000F9910C3B5E185 (OrbSpawner_tE1C12D98DBD06B2139B6F7F385BBE9141188CB1A* __this, const RuntimeMethod* method) ;
// System.Void PhonkBlueSpawner::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkBlueSpawner_SpawnBlockRed_m041EAA6C19F81C6C34FCAD8D7D947E42DDEEEFDE (PhonkBlueSpawner_t1739DCEC9BDB29E7E513C044994A3F18106464CD* __this, const RuntimeMethod* method) ;
// System.Void PhonkBlueSpawner::ReadyToSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkBlueSpawner_ReadyToSpawn_m1EB1824CBEF6FF5F79C3363502DBE865C4E64CEC (PhonkBlueSpawner_t1739DCEC9BDB29E7E513C044994A3F18106464CD* __this, const RuntimeMethod* method) ;
// System.Void PhonkRedSpawner::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkRedSpawner_SpawnBlockRed_m1CB646E8F4697970C45B0FA4ECB3C2F38800B123 (PhonkRedSpawner_tD6FC641AB5F178F25AB0132F3AE540C3C96128EA* __this, const RuntimeMethod* method) ;
// System.Void PhonkRedSpawner::ReadyToSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkRedSpawner_ReadyToSpawn_mD0D634D6573A816E95FBD07FA1C3D727C1C09AFF (PhonkRedSpawner_tD6FC641AB5F178F25AB0132F3AE540C3C96128EA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void WayPointMovement::GetNextWayPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WayPointMovement_GetNextWayPoint_m029F6A7DB9A77FC652E8F934ACB7A76CB74880ED (WayPointMovement_tBB1785044B1D9DA6863362D229020B7ABBB28ABF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054 (double ___a0, double ___newBase1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.Void DestroyOnWhiteEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOnWhiteEnemy_Start_m9B506634658D37599F4094BDE628693C051B7E23 (DestroyOnWhiteEnemy_tDB03CA985382699C8BF26C26848D6C182E5C4189* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyOnWhiteEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOnWhiteEnemy_Update_m23836114F71AA67BD4D9B65864E6E3D16FBD65F0 (DestroyOnWhiteEnemy_tDB03CA985382699C8BF26C26848D6C182E5C4189* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyOnWhiteEnemy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOnWhiteEnemy_OnTriggerEnter_mA1BE5B4FC81852B73B75E960C8415EBF46E6CE7A (DestroyOnWhiteEnemy_tDB03CA985382699C8BF26C26848D6C182E5C4189* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CEBB6CC6174CCE83E2D22FCEDE33A526A08041D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "WhiteZone")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6CEBB6CC6174CCE83E2D22FCEDE33A526A08041D, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// ScoreManager.instance.MinusScoreOnEnemy();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_5 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		ScoreManager_MinusScoreOnEnemy_m540CAEB8C71DC5F9D53928CC748E41B9D9B3BB8D(L_5, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void DestroyOnWhiteEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOnWhiteEnemy__ctor_m49A61ACBAA5FE8551A7C5B2C9D2BF05A3E79539C (DestroyOnWhiteEnemy_tDB03CA985382699C8BF26C26848D6C182E5C4189* __this, const RuntimeMethod* method) 
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
// System.Void EnemyFollowWaypoints::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollowWaypoints_Awake_mEE358343873D6B0762913F874E10B841BFF6EA91 (EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// enemyWaypoints = new Transform[transform.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_1);
		((EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_StaticFields*)il2cpp_codegen_static_fields_for(EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_il2cpp_TypeInfo_var))->___enemyWaypoints_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_StaticFields*)il2cpp_codegen_static_fields_for(EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_il2cpp_TypeInfo_var))->___enemyWaypoints_4), (void*)L_2);
		// for (int i = 0; i < enemyWaypoints.Length; i++)
		V_0 = 0;
		goto IL_0030;
	}

IL_0019:
	{
		// enemyWaypoints[i] = transform.GetChild(i);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = ((EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_StaticFields*)il2cpp_codegen_static_fields_for(EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_il2cpp_TypeInfo_var))->___enemyWaypoints_4;
		int32_t L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, L_6, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_7);
		// for (int i = 0; i < enemyWaypoints.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0030:
	{
		// for (int i = 0; i < enemyWaypoints.Length; i++)
		int32_t L_9 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = ((EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_StaticFields*)il2cpp_codegen_static_fields_for(EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_il2cpp_TypeInfo_var))->___enemyWaypoints_4;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EnemyFollowWaypoints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollowWaypoints__ctor_m1551563FC907A5641868B9621348B87EBD098D7C (EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17* __this, const RuntimeMethod* method) 
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
// System.Void EnemyMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_Start_m8A504CEA874C7FB6FE7DD232335D8F9F8B17C844 (EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyTarget = EnemyFollowWaypoints.enemyWaypoints[0];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = ((EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_StaticFields*)il2cpp_codegen_static_fields_for(EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_il2cpp_TypeInfo_var))->___enemyWaypoints_4;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		__this->___enemyTarget_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyTarget_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void EnemyMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_Update_mC242520A487F088834B3F3B66922E5534B1BC954 (EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 moveDir = enemyTarget.position - transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___enemyTarget_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// transform.Translate(moveDir.normalized * enemyMoveSpeed * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_7 = __this->___enemyMoveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		NullCheck(L_5);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_5, L_10, 0, NULL);
		// if (Vector3.Distance(transform.position, enemyTarget.position) <= 0.2)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___enemyTarget_5;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15;
		L_15 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_12, L_14, NULL);
		if ((!(((double)((double)L_15)) <= ((double)(0.20000000000000001)))))
		{
			goto IL_0071;
		}
	}
	{
		// GetNextEnemyWaypoint();
		EnemyMove_GetNextEnemyWaypoint_m78E351B583DF2CA252CE51B00FCC41DCC6DD9C4C(__this, NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void EnemyMove::GetNextEnemyWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_GetNextEnemyWaypoint_m78E351B583DF2CA252CE51B00FCC41DCC6DD9C4C (EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyWPIndex++;
		int32_t L_0 = __this->___enemyWPIndex_6;
		__this->___enemyWPIndex_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// enemyTarget = EnemyFollowWaypoints.enemyWaypoints[enemyWPIndex];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = ((EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_StaticFields*)il2cpp_codegen_static_fields_for(EnemyFollowWaypoints_t3F9F811B83EF72B1BED6A785E7E07284AA789A17_il2cpp_TypeInfo_var))->___enemyWaypoints_4;
		int32_t L_2 = __this->___enemyWPIndex_6;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->___enemyTarget_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyTarget_5), (void*)L_4);
		// }
		return;
	}
}
// System.Void EnemyMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove__ctor_m90A165C81D823624EDD5C54491B8A800B5E467BB (EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* __this, const RuntimeMethod* method) 
{
	{
		// private float enemyMoveSpeed = 5f;
		__this->___enemyMoveSpeed_4 = (5.0f);
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
// System.Void EnemySpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Start_m5302D69E915FF1027CFB0C1198CBCAA9430819A4 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemySpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Update_m85D72B9CF6D0D9D7BE8A6816CE556BF5E9D7FFC5 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// Timers();
		EnemySpawner_Timers_mAAACE7963DB12C5DEBE7F55FC8CF1DEF675519DF(__this, NULL);
		// if (EnableSpawn == true)
		bool L_0 = __this->___EnableSpawn_11;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		// if (spawnTimerEnemy >= spawnFreqEnemy)
		float L_1 = __this->___spawnTimerEnemy_8;
		float L_2 = __this->___spawnFreqEnemy_7;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0034;
		}
	}
	{
		// SpawnEnemy();
		EnemySpawner_SpawnEnemy_m3ECE5A636D85AD547F695DFCCA87F3C021BB6599(__this, NULL);
		// spawnTimerEnemy = 0f - delayEnemySphere;
		float L_3 = __this->___delayEnemySphere_6;
		__this->___spawnTimerEnemy_8 = ((float)il2cpp_codegen_subtract((0.0f), L_3));
	}

IL_0034:
	{
		// if (StartSpawn1 <= 0)
		float L_4 = __this->___StartSpawn1_9;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0053;
		}
	}
	{
		// EnableSpawn = true;
		__this->___EnableSpawn_11 = (bool)1;
		// StartSpawn1 = 999f;
		__this->___StartSpawn1_9 = (999.0f);
	}

IL_0053:
	{
		// if (StopSpawn1 <= 0)
		float L_5 = __this->___StopSpawn1_10;
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		// EnableSpawn = false;
		__this->___EnableSpawn_11 = (bool)0;
		// StartSpawn1 = 999f;
		__this->___StartSpawn1_9 = (999.0f);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void EnemySpawner::Timers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Timers_mAAACE7963DB12C5DEBE7F55FC8CF1DEF675519DF (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// spawnTimerEnemy += Time.deltaTime;
		float L_0 = __this->___spawnTimerEnemy_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnTimerEnemy_8 = ((float)il2cpp_codegen_add(L_0, L_1));
		// StartSpawn1 -= Time.deltaTime;
		float L_2 = __this->___StartSpawn1_9;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StartSpawn1_9 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// StopSpawn1 -= Time.deltaTime;
		float L_4 = __this->___StopSpawn1_10;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StopSpawn1_10 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// }
		return;
	}
}
// System.Void EnemySpawner::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnEnemy_m3ECE5A636D85AD547F695DFCCA87F3C021BB6599 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-areaSpawnSize.x / 2f, areaSpawnSize.x / 2f), 0f, Random.Range(-areaSpawnSize.z / 2f, areaSpawnSize.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___areaSpawnSize_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___areaSpawnSize_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___areaSpawnSize_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___areaSpawnSize_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(enemySpehere, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___enemySpehere_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_12 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_12), (void*)L_17);
		// }
		return;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_m619CE38261A8A67AB91D66ED5BE44E56C1897E74 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
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
// System.Void AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_m8138BCED4D692C83C95626A1A09AB46EA5205569 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* V_0 = NULL;
	int32_t V_1 = 0;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_2 = NULL;
	{
		// foreach (Sound s in sounds)
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_0 = __this->___sounds_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0068;
	}

IL_000b:
	{
		// foreach (Sound s in sounds)
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// s.source = gameObject.AddComponent<AudioSource>();
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_5 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_6, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___source_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___source_5), (void*)L_7);
		// s.source.clip = s.clip;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_8 = V_2;
		NullCheck(L_8);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = L_8->___source_5;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_10 = V_2;
		NullCheck(L_10);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = L_10->___clip_1;
		NullCheck(L_9);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_9, L_11, NULL);
		// s.source.volume = s.volume;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_12 = V_2;
		NullCheck(L_12);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = L_12->___source_5;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_14 = V_2;
		NullCheck(L_14);
		float L_15 = L_14->___volume_2;
		NullCheck(L_13);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_13, L_15, NULL);
		// s.source.pitch = s.pitch;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_16 = V_2;
		NullCheck(L_16);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = L_16->___source_5;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_18 = V_2;
		NullCheck(L_18);
		float L_19 = L_18->___pitch_3;
		NullCheck(L_17);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_17, L_19, NULL);
		// s.source.loop = s.loop;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_20 = V_2;
		NullCheck(L_20);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = L_20->___source_5;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_22 = V_2;
		NullCheck(L_22);
		bool L_23 = L_22->___loop_4;
		NullCheck(L_21);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_21, L_23, NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0068:
	{
		// foreach (Sound s in sounds)
		int32_t L_25 = V_1;
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Start_m3C0FEAF19F58B6D28A9E6D815B3AAF94FEA21B69 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudioManager::PlayMyAudio(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CPlayMyAudioU3Eb__0_mF5D0A86F1195AA1E13CE7A49D712E6F806ADBC62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB29A9C9DB03FD11942FEE28C07F89A7A2D1FC68);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* V_0 = NULL;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_0 = (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m3DD23E7EFFDED69B9EAC81FE50CDC950F4B7EC9D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_1 = V_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		L_1->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_0), (void*)L_2);
		// Sound s = Array.Find(sounds, sound => sound.name == name);
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_3 = __this->___sounds_4;
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_4 = V_0;
		Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* L_5 = (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*)il2cpp_codegen_object_new(Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CPlayMyAudioU3Eb__0_mF5D0A86F1195AA1E13CE7A49D712E6F806ADBC62_RuntimeMethod_var), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_6;
		L_6 = Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7(L_3, L_5, Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var);
		V_1 = L_6;
		// if ( s== null)
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_7 = V_1;
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogWarning("Sound" + name + "not found");
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___name_0;
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, L_9, _stringLiteralCB29A9C9DB03FD11942FEE28C07F89A7A2D1FC68, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_10, NULL);
		// return;
		return;
	}

IL_0043:
	{
		// s.source.Play();
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_11 = V_1;
		NullCheck(L_11);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = L_11->___source_5;
		NullCheck(L_12);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlayLetsGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayLetsGO_m8B28263CE691D281D779BF849ED425F1FB4E3156 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral121D06AE6E82A4F2CC29981C9A609CA62BC7206E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (StartPlaying == true)
		bool L_0 = __this->___StartPlaying_5;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// FindObjectOfType<AudioManager>().PlayMyAudio("LetsGo");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_1;
		L_1 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_1);
		AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012(L_1, _stringLiteral121D06AE6E82A4F2CC29981C9A609CA62BC7206E, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void AudioManager::StartAmbience()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StartAmbience_m8A71470D44CB6F9526F1229E1115AC1AFDE18632 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral918EDACB6E31C7EBBCF380F608C3442C2DEA1A2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (StartPlaying == true)
		bool L_0 = __this->___StartPlaying_5;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// FindObjectOfType<AudioManager>().PlayMyAudio("Ambience");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_1;
		L_1 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_1);
		AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012(L_1, _stringLiteral918EDACB6E31C7EBBCF380F608C3442C2DEA1A2D, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_mA793A9DF6B975D03690B7C953972EFE41AE4D5E6 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// public bool StartPlaying = true;
		__this->___StartPlaying_5 = (bool)1;
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
// System.Void AudioManager/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3DD23E7EFFDED69B9EAC81FE50CDC950F4B7EC9D (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass4_0::<PlayMyAudio>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CPlayMyAudioU3Eb__0_mF5D0A86F1195AA1E13CE7A49D712E6F806ADBC62 (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* __this, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* ___sound0, const RuntimeMethod* method) 
{
	{
		// Sound s = Array.Find(sounds, sound => sound.name == name);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_0 = ___sound0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___name_0;
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
// System.Void Sound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sound__ctor_m5DD7C9F71B98D5670BBDD05F6D6FCDF43DC9EA8F (Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void BlockSpawnerNew::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_Start_m59DE784969D4692C5A73C350DC99BA186F2524DC (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioManager.FindObjectOfType<AudioManager>().PlayLetsGO();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0;
		L_0 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_0);
		AudioManager_PlayLetsGO_m8B28263CE691D281D779BF849ED425F1FB4E3156(L_0, NULL);
		// AudioManager.FindObjectOfType<AudioManager>().StartAmbience();
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_1;
		L_1 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_1);
		AudioManager_StartAmbience_m8A71470D44CB6F9526F1229E1115AC1AFDE18632(L_1, NULL);
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_Update_mBFCBE3B62CCDFC7D8EF53C64A5E458A8A9868333 (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Timers();
		BlockSpawnerNew_Timers_m3037335FBF4EAFA238A5AA60B864B05BEC5DEEA0(__this, NULL);
		// if (EnableSpawn == true)
		bool L_0 = __this->___EnableSpawn_23;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		// if (spawnTimerRed >= spawnFreqRed)
		float L_1 = __this->___spawnTimerRed_11;
		float L_2 = __this->___spawnFreqRed_9;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0034;
		}
	}
	{
		// SpawnBlockRed();
		BlockSpawnerNew_SpawnBlockRed_m342D3A9CBB480C43CF3D865F04F6F1337204063E(__this, NULL);
		// spawnTimerRed = 0f - delayBlockRed;
		float L_3 = __this->___delayBlockRed_7;
		__this->___spawnTimerRed_11 = ((float)il2cpp_codegen_subtract((0.0f), L_3));
	}

IL_0034:
	{
		// if (spawnTimerBlue >= spawnFreqBlue)
		float L_4 = __this->___spawnTimerBlue_12;
		float L_5 = __this->___spawnFreqBlue_10;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0053;
		}
	}
	{
		// SpawnBlockBlue();
		BlockSpawnerNew_SpawnBlockBlue_mF01067183972B7770763C3CF38FE8A05D86C5FE4(__this, NULL);
		// spawnTimerBlue = 0f;
		__this->___spawnTimerBlue_12 = (0.0f);
	}

IL_0053:
	{
		// if (StopSpawn1 <= 0)
		float L_6 = __this->___StopSpawn1_14;
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		// EnableSpawn = false;
		__this->___EnableSpawn_23 = (bool)0;
		// StopSpawn1 = 999f;
		__this->___StopSpawn1_14 = (999.0f);
		// BlockCollector.FindObjectOfType<BlockCollector>().DestroyAllBlocks();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_7;
		L_7 = Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03(Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03_RuntimeMethod_var);
		NullCheck(L_7);
		BlockCollector_DestroyAllBlocks_m6256222B2EABB5A57F1175B2E7343D7D3D0F9291(L_7, NULL);
	}

IL_007c:
	{
		// if (StopSpawn2 <= 0)
		float L_8 = __this->___StopSpawn2_16;
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_00a5;
		}
	}
	{
		// EnableSpawn = false;
		__this->___EnableSpawn_23 = (bool)0;
		// StopSpawn2 = 999f;
		__this->___StopSpawn2_16 = (999.0f);
		// BlockCollector.FindObjectOfType<BlockCollector>().DestroyAllBlocks();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_9;
		L_9 = Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03(Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03_RuntimeMethod_var);
		NullCheck(L_9);
		BlockCollector_DestroyAllBlocks_m6256222B2EABB5A57F1175B2E7343D7D3D0F9291(L_9, NULL);
	}

IL_00a5:
	{
		// if (StopSpawn3 <= 0)
		float L_10 = __this->___StopSpawn3_18;
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_00ce;
		}
	}
	{
		// EnableSpawn = false;
		__this->___EnableSpawn_23 = (bool)0;
		// StopSpawn3 = 999f;
		__this->___StopSpawn3_18 = (999.0f);
		// BlockCollector.FindObjectOfType<BlockCollector>().DestroyAllBlocks();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_11;
		L_11 = Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03(Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03_RuntimeMethod_var);
		NullCheck(L_11);
		BlockCollector_DestroyAllBlocks_m6256222B2EABB5A57F1175B2E7343D7D3D0F9291(L_11, NULL);
	}

IL_00ce:
	{
		// if (StopSpawn4 <= 0)
		float L_12 = __this->___StopSpawn4_20;
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_00f7;
		}
	}
	{
		// EnableSpawn = false;
		__this->___EnableSpawn_23 = (bool)0;
		// StopSpawn4 = 999f;
		__this->___StopSpawn4_20 = (999.0f);
		// BlockCollector.FindObjectOfType<BlockCollector>().DestroyAllBlocks();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_13;
		L_13 = Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03(Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03_RuntimeMethod_var);
		NullCheck(L_13);
		BlockCollector_DestroyAllBlocks_m6256222B2EABB5A57F1175B2E7343D7D3D0F9291(L_13, NULL);
	}

IL_00f7:
	{
		// if (StopSpawn5 <= 0)
		float L_14 = __this->___StopSpawn5_22;
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_0126;
		}
	}
	{
		// EnableSpawn = false;
		__this->___EnableSpawn_23 = (bool)0;
		// StopSpawn5 = 999f;
		__this->___StopSpawn5_22 = (999.0f);
		// BlockCollector.FindObjectOfType<BlockCollector>().DestroyAllBlocks();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_15;
		L_15 = Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03(Object_FindObjectOfType_TisBlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB_mCBF17C02D8D1CDBA389ACE54DF99C6123C942F03_RuntimeMethod_var);
		NullCheck(L_15);
		BlockCollector_DestroyAllBlocks_m6256222B2EABB5A57F1175B2E7343D7D3D0F9291(L_15, NULL);
		// turnOnOffMisslies();
		BlockSpawnerNew_turnOnOffMisslies_m647DF33D40E81B3ADBB1C35527B2D4977A1CD096(__this, NULL);
	}

IL_0126:
	{
		// if (StartSpawn1 <= 0)
		float L_16 = __this->___StartSpawn1_13;
		if ((!(((float)L_16) <= ((float)(0.0f)))))
		{
			goto IL_014b;
		}
	}
	{
		// EnableSpawn = true;
		__this->___EnableSpawn_23 = (bool)1;
		// StartSpawn1 = 999f;
		__this->___StartSpawn1_13 = (999.0f);
		// SetDelayTimers();
		BlockSpawnerNew_SetDelayTimers_m398F47D52A0DEF1916CE82478D334BA37028FBCE(__this, NULL);
	}

IL_014b:
	{
		// if (StartSpawn2 <= 0)
		float L_17 = __this->___StartSpawn2_15;
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_0176;
		}
	}
	{
		// EnableSpawn = true;
		__this->___EnableSpawn_23 = (bool)1;
		// StartSpawn2 = 999f;
		__this->___StartSpawn2_15 = (999.0f);
		// IncreaseLevel1();
		BlockSpawnerNew_IncreaseLevel1_m5D6EC23B2DF041F62264E363C817F9002A36FD3D(__this, NULL);
		// SetDelayTimers();
		BlockSpawnerNew_SetDelayTimers_m398F47D52A0DEF1916CE82478D334BA37028FBCE(__this, NULL);
	}

IL_0176:
	{
		// if (StartSpawn3 <= 0)
		float L_18 = __this->___StartSpawn3_17;
		if ((!(((float)L_18) <= ((float)(0.0f)))))
		{
			goto IL_01a1;
		}
	}
	{
		// IncreaseLevel2();
		BlockSpawnerNew_IncreaseLevel2_m4AB886AD524B6AE648EDE14D4F9C26F671D4A5EF(__this, NULL);
		// EnableSpawn = true;
		__this->___EnableSpawn_23 = (bool)1;
		// StartSpawn3 = 999f;
		__this->___StartSpawn3_17 = (999.0f);
		// SetDelayTimers();
		BlockSpawnerNew_SetDelayTimers_m398F47D52A0DEF1916CE82478D334BA37028FBCE(__this, NULL);
	}

IL_01a1:
	{
		// if (StartSpawn4 <= 0)
		float L_19 = __this->___StartSpawn4_19;
		if ((!(((float)L_19) <= ((float)(0.0f)))))
		{
			goto IL_01d2;
		}
	}
	{
		// IncreaseLevel3();
		BlockSpawnerNew_IncreaseLevel3_m7C16064935158A423F424254324143D121E3BB0F(__this, NULL);
		// EnableSpawn = true;
		__this->___EnableSpawn_23 = (bool)1;
		// StartSpawn4 = 999f;
		__this->___StartSpawn4_19 = (999.0f);
		// turnOnOffMisslies();
		BlockSpawnerNew_turnOnOffMisslies_m647DF33D40E81B3ADBB1C35527B2D4977A1CD096(__this, NULL);
		// SetDelayTimers();
		BlockSpawnerNew_SetDelayTimers_m398F47D52A0DEF1916CE82478D334BA37028FBCE(__this, NULL);
	}

IL_01d2:
	{
		// if (StartSpawn5 <= 0)
		float L_20 = __this->___StartSpawn5_21;
		if ((!(((float)L_20) <= ((float)(0.0f)))))
		{
			goto IL_01fd;
		}
	}
	{
		// IncreaseLevel4();
		BlockSpawnerNew_IncreaseLevel4_m1C5DCEAA1A845BA4EBC0DF11702AC3A6A3446CCF(__this, NULL);
		// EnableSpawn = true;
		__this->___EnableSpawn_23 = (bool)1;
		// StartSpawn5 = 999f;
		__this->___StartSpawn5_21 = (999.0f);
		// SetDelayTimers();
		BlockSpawnerNew_SetDelayTimers_m398F47D52A0DEF1916CE82478D334BA37028FBCE(__this, NULL);
	}

IL_01fd:
	{
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::Timers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_Timers_m3037335FBF4EAFA238A5AA60B864B05BEC5DEEA0 (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	{
		// spawnTimerRed += Time.deltaTime;
		float L_0 = __this->___spawnTimerRed_11;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnTimerRed_11 = ((float)il2cpp_codegen_add(L_0, L_1));
		// spawnTimerBlue += Time.deltaTime;
		float L_2 = __this->___spawnTimerBlue_12;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnTimerBlue_12 = ((float)il2cpp_codegen_add(L_2, L_3));
		// StopSpawn1 -= Time.deltaTime;
		float L_4 = __this->___StopSpawn1_14;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StopSpawn1_14 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// StopSpawn2 -= Time.deltaTime;
		float L_6 = __this->___StopSpawn2_16;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StopSpawn2_16 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// StopSpawn3 -= Time.deltaTime;
		float L_8 = __this->___StopSpawn3_18;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StopSpawn3_18 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		// StopSpawn4 -= Time.deltaTime;
		float L_10 = __this->___StopSpawn4_20;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StopSpawn4_20 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		// StopSpawn5 -= Time.deltaTime;
		float L_12 = __this->___StopSpawn5_22;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StopSpawn5_22 = ((float)il2cpp_codegen_subtract(L_12, L_13));
		// StartSpawn1 -= Time.deltaTime;
		float L_14 = __this->___StartSpawn1_13;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StartSpawn1_13 = ((float)il2cpp_codegen_subtract(L_14, L_15));
		// StartSpawn2 -= Time.deltaTime;
		float L_16 = __this->___StartSpawn2_15;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StartSpawn2_15 = ((float)il2cpp_codegen_subtract(L_16, L_17));
		// StartSpawn3 -= Time.deltaTime;
		float L_18 = __this->___StartSpawn3_17;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StartSpawn3_17 = ((float)il2cpp_codegen_subtract(L_18, L_19));
		// StartSpawn4 -= Time.deltaTime;
		float L_20 = __this->___StartSpawn4_19;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StartSpawn4_19 = ((float)il2cpp_codegen_subtract(L_20, L_21));
		// StartSpawn5 -= Time.deltaTime;
		float L_22 = __this->___StartSpawn5_21;
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___StartSpawn5_21 = ((float)il2cpp_codegen_subtract(L_22, L_23));
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_SpawnBlockRed_m342D3A9CBB480C43CF3D865F04F6F1337204063E (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-areaSpawnSize.x / 2f, areaSpawnSize.x / 2f), 0f, Random.Range(-areaSpawnSize.z / 2f, areaSpawnSize.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___areaSpawnSize_6);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___areaSpawnSize_6);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___areaSpawnSize_6);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___areaSpawnSize_6);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(redBlock, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___redBlock_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_24 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_24), (void*)L_17);
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::SpawnBlockBlue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_SpawnBlockBlue_mF01067183972B7770763C3CF38FE8A05D86C5FE4 (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-areaSpawnSize.x / 2f, areaSpawnSize.x / 2f), 0f, Random.Range(-areaSpawnSize.z / 2f, areaSpawnSize.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___areaSpawnSize_6);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___areaSpawnSize_6);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___areaSpawnSize_6);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___areaSpawnSize_6);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(blueBlock, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___blueBlock_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_24 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_24), (void*)L_17);
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::SetDelayTimers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_SetDelayTimers_m398F47D52A0DEF1916CE82478D334BA37028FBCE (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	{
		// spawnTimerRed = 0f;
		__this->___spawnTimerRed_11 = (0.0f);
		// spawnTimerBlue = 1f;
		__this->___spawnTimerBlue_12 = (1.0f);
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::IncreaseLevel1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_IncreaseLevel1_m5D6EC23B2DF041F62264E363C817F9002A36FD3D (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	{
		// spawnFreqRed = 3f;
		__this->___spawnFreqRed_9 = (3.0f);
		// spawnFreqBlue = 3f;
		__this->___spawnFreqBlue_10 = (3.0f);
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::IncreaseLevel2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_IncreaseLevel2_m4AB886AD524B6AE648EDE14D4F9C26F671D4A5EF (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	{
		// spawnFreqRed = 2f;
		__this->___spawnFreqRed_9 = (2.0f);
		// spawnFreqBlue = 2f;
		__this->___spawnFreqBlue_10 = (2.0f);
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::IncreaseLevel3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_IncreaseLevel3_m7C16064935158A423F424254324143D121E3BB0F (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	{
		// spawnFreqRed = 1.5f;
		__this->___spawnFreqRed_9 = (1.5f);
		// spawnFreqBlue = 1.5f;
		__this->___spawnFreqBlue_10 = (1.5f);
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::IncreaseLevel4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_IncreaseLevel4_m1C5DCEAA1A845BA4EBC0DF11702AC3A6A3446CCF (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	{
		// spawnFreqRed = 1f;
		__this->___spawnFreqRed_9 = (1.0f);
		// spawnFreqBlue = 1f;
		__this->___spawnFreqBlue_10 = (1.0f);
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::turnOnOffMisslies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew_turnOnOffMisslies_m647DF33D40E81B3ADBB1C35527B2D4977A1CD096 (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSilo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19_mA0C5A624C6499A2810489FC67C0ACC23C1E1E8CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSilo2_t72E418BDFE758B2ECFA08192974B7D1396C80848_m196D141968BAE586C888B58D183F67137FF6A665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSilo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251_m7456FCB5C3D25E66945FEA39CC105D888154134D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSilo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410_mEBD4DB880D3838B1A426C9540278568A4BC08ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSilo5_t37649576A5B38ABCC27E88FE1E5A39807496833D_m8B1F1292CDA0BA5A4665E109796F198A63752B8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSilo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE_mAA19F031351A587FC7F200B915499A15FA8C1572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Silo.FindObjectOfType<Silo>().TurnOnMissleLaunch();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE* L_0;
		L_0 = Object_FindObjectOfType_TisSilo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE_mAA19F031351A587FC7F200B915499A15FA8C1572(Object_FindObjectOfType_TisSilo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE_mAA19F031351A587FC7F200B915499A15FA8C1572_RuntimeMethod_var);
		NullCheck(L_0);
		Silo_TurnOnMissleLaunch_mF680CFE8C14E292029285FDADA2364F17D168AD7(L_0, NULL);
		// Silo1.FindObjectOfType<Silo1>().TurnOnMissleLaunch1();
		Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19* L_1;
		L_1 = Object_FindObjectOfType_TisSilo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19_mA0C5A624C6499A2810489FC67C0ACC23C1E1E8CF(Object_FindObjectOfType_TisSilo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19_mA0C5A624C6499A2810489FC67C0ACC23C1E1E8CF_RuntimeMethod_var);
		NullCheck(L_1);
		Silo1_TurnOnMissleLaunch1_m4A753BA9AEDD0D20C64E59768E09867757E8D494(L_1, NULL);
		// Silo2.FindObjectOfType<Silo2>().TurnOnMissleLaunch2();
		Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848* L_2;
		L_2 = Object_FindObjectOfType_TisSilo2_t72E418BDFE758B2ECFA08192974B7D1396C80848_m196D141968BAE586C888B58D183F67137FF6A665(Object_FindObjectOfType_TisSilo2_t72E418BDFE758B2ECFA08192974B7D1396C80848_m196D141968BAE586C888B58D183F67137FF6A665_RuntimeMethod_var);
		NullCheck(L_2);
		Silo2_TurnOnMissleLaunch2_m5FFD316F0B8594DB1BBA5DB5EFF60224D7894920(L_2, NULL);
		// Silo3.FindObjectOfType<Silo3>().TurnOnMissleLaunch3();
		Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251* L_3;
		L_3 = Object_FindObjectOfType_TisSilo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251_m7456FCB5C3D25E66945FEA39CC105D888154134D(Object_FindObjectOfType_TisSilo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251_m7456FCB5C3D25E66945FEA39CC105D888154134D_RuntimeMethod_var);
		NullCheck(L_3);
		Silo3_TurnOnMissleLaunch3_m23AED06A152864EFC7DC2CDE9111D9234F985041(L_3, NULL);
		// Silo4.FindObjectOfType<Silo4>().TurnOnMissleLaunch4();
		Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410* L_4;
		L_4 = Object_FindObjectOfType_TisSilo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410_mEBD4DB880D3838B1A426C9540278568A4BC08ED5(Object_FindObjectOfType_TisSilo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410_mEBD4DB880D3838B1A426C9540278568A4BC08ED5_RuntimeMethod_var);
		NullCheck(L_4);
		Silo4_TurnOnMissleLaunch4_m8D455482AE87C5553A63C5358E1B56D6AB94BA79(L_4, NULL);
		// Silo5.FindObjectOfType<Silo5>().TurnOnMissleLaunch5();
		Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D* L_5;
		L_5 = Object_FindObjectOfType_TisSilo5_t37649576A5B38ABCC27E88FE1E5A39807496833D_m8B1F1292CDA0BA5A4665E109796F198A63752B8D(Object_FindObjectOfType_TisSilo5_t37649576A5B38ABCC27E88FE1E5A39807496833D_m8B1F1292CDA0BA5A4665E109796F198A63752B8D_RuntimeMethod_var);
		NullCheck(L_5);
		Silo5_TurnOnMissleLaunch5_m7B1D54CAFFBF5D820F98617810AB6D4C60683694(L_5, NULL);
		// }
		return;
	}
}
// System.Void BlockSpawnerNew::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawnerNew__ctor_m7B6017A30F353E24043115141A100BBC69A1EBA8 (BlockSpawnerNew_t77D699ECF276C40E7651AB9D35004B0197B1C517* __this, const RuntimeMethod* method) 
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
// System.Void DestroyBlueOnWthie::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyBlueOnWthie_Start_mE92CED7616607382C9163E9D084E10A642A6E512 (DestroyBlueOnWthie_t88FD077FED3E89C82499F66295CF5F57F640A95E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyBlueOnWthie::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyBlueOnWthie_Update_m3C3E801FBBF398687357684EFC84AB45A2217EAE (DestroyBlueOnWthie_t88FD077FED3E89C82499F66295CF5F57F640A95E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyBlueOnWthie::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyBlueOnWthie_OnTriggerEnter_m0825680AC8394261245572617C8DB850A564F17C (DestroyBlueOnWthie_t88FD077FED3E89C82499F66295CF5F57F640A95E* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CEBB6CC6174CCE83E2D22FCEDE33A526A08041D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "WhiteZone")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6CEBB6CC6174CCE83E2D22FCEDE33A526A08041D, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// ScoreManager.instance.MinusScoreOnWhite();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_5 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		ScoreManager_MinusScoreOnWhite_m98A775259B44E37AA25849A06172043DAF071E3D(L_5, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void DestroyBlueOnWthie::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyBlueOnWthie__ctor_m479D2B48580F861AA9070CAE60838269DCF81A99 (DestroyBlueOnWthie_t88FD077FED3E89C82499F66295CF5F57F640A95E* __this, const RuntimeMethod* method) 
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
// System.Void DestroyRedOnWhite::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyRedOnWhite_Start_mCB02C4D88F99139B19D9C8AE3DA4CA587E99724E (DestroyRedOnWhite_t5BDC0229112EB9054BADF76F5EFC926E6EE12B93* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyRedOnWhite::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyRedOnWhite_Update_m610545D4D3EA772D19D5193F7D2C91EC695CF708 (DestroyRedOnWhite_t5BDC0229112EB9054BADF76F5EFC926E6EE12B93* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyRedOnWhite::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyRedOnWhite_OnTriggerEnter_m366D32D47DBA33F94513D771F922488BAB1BBA5F (DestroyRedOnWhite_t5BDC0229112EB9054BADF76F5EFC926E6EE12B93* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CEBB6CC6174CCE83E2D22FCEDE33A526A08041D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "WhiteZone")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6CEBB6CC6174CCE83E2D22FCEDE33A526A08041D, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// ScoreManager.instance.MinusScoreOnWhite();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_5 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		ScoreManager_MinusScoreOnWhite_m98A775259B44E37AA25849A06172043DAF071E3D(L_5, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void DestroyRedOnWhite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyRedOnWhite__ctor_mA1501DE376CDE6BF3535D4C3A66C21E51D64E650 (DestroyRedOnWhite_t5BDC0229112EB9054BADF76F5EFC926E6EE12B93* __this, const RuntimeMethod* method) 
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
// System.Void EasyBlueSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyBlueSpawner_Start_m9BED4011798A068D1AA5BCC36D4CB2373DAD6726 (EasyBlueSpawner_tD6D633978B0447C538D8740706C44672E7436E83* __this, const RuntimeMethod* method) 
{
	{
		// StartTimers();
		EasyBlueSpawner_StartTimers_mE09266F11A51D804BB736346A7CE4CC5884EF20A(__this, NULL);
		// }
		return;
	}
}
// System.Void EasyBlueSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyBlueSpawner_Update_mA9E997E53B70F2FE5AEBC87DCF39708E0F97C495 (EasyBlueSpawner_tD6D633978B0447C538D8740706C44672E7436E83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnOneBlue -= Time.deltaTime;
		float L_0 = __this->___spawnOneBlue_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnOneBlue_8 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// stopSpawningAt1 -= Time.deltaTime;
		float L_2 = __this->___stopSpawningAt1_16;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___stopSpawningAt1_16 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// stopSpawningAt2 -= Time.deltaTime;
		float L_4 = __this->___stopSpawningAt2_18;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___stopSpawningAt2_18 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// stopSpawningAt3 -= Time.deltaTime;
		float L_6 = __this->___stopSpawningAt3_20;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___stopSpawningAt3_20 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// startSpawningAt1 -= Time.deltaTime;
		float L_8 = __this->___startSpawningAt1_17;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___startSpawningAt1_17 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		// startSpawningAt2 -= Time.deltaTime;
		float L_10 = __this->___startSpawningAt2_19;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___startSpawningAt2_19 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		// startSpawningAt3 -= Time.deltaTime;
		float L_12 = __this->___startSpawningAt3_21;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___startSpawningAt3_21 = ((float)il2cpp_codegen_subtract(L_12, L_13));
		// spawnTimer += Time.deltaTime;
		float L_14 = __this->___spawnTimer_7;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnTimer_7 = ((float)il2cpp_codegen_add(L_14, L_15));
		// if (readyToSpawn == true)
		bool L_16 = __this->___readyToSpawn_22;
		if (!L_16)
		{
			goto IL_00c4;
		}
	}
	{
		// if (spawnTimer >= spawnInterval)
		float L_17 = __this->___spawnTimer_7;
		float L_18 = __this->___spawnInterval_6;
		if ((!(((float)L_17) >= ((float)L_18))))
		{
			goto IL_00b7;
		}
	}
	{
		// SpawnBlockBlue();
		EasyBlueSpawner_SpawnBlockBlue_mA1293E6395EA8747A097A765C893ED12C7AA1CEF(__this, NULL);
		// spawnTimer = 0f;
		__this->___spawnTimer_7 = (0.0f);
	}

IL_00b7:
	{
		// if (spawnedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___spawnedObject_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
	}

IL_00c4:
	{
		// if (spawnOneBlue <= 0f)
		float L_21 = __this->___spawnOneBlue_8;
		if ((!(((float)L_21) <= ((float)(0.0f)))))
		{
			goto IL_00f2;
		}
	}
	{
		// SpawnBlockBlue();
		EasyBlueSpawner_SpawnBlockBlue_mA1293E6395EA8747A097A765C893ED12C7AA1CEF(__this, NULL);
		// spawnOneBlue = 999f;
		__this->___spawnOneBlue_8 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_22 = __this->___readyToSpawn_22;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_23);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_24, NULL);
	}

IL_00f2:
	{
		// if (stopSpawningAt1 <= 0f)
		float L_25 = __this->___stopSpawningAt1_16;
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		// readyToSpawn = false;
		__this->___readyToSpawn_22 = (bool)0;
		// stopSpawningAt1 = 999f;
		__this->___stopSpawningAt1_16 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_26 = __this->___readyToSpawn_22;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_27);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_28, NULL);
	}

IL_0121:
	{
		// if (startSpawningAt1 <= 0f)
		float L_29 = __this->___startSpawningAt1_17;
		if ((!(((float)L_29) <= ((float)(0.0f)))))
		{
			goto IL_0150;
		}
	}
	{
		// readyToSpawn = true;
		__this->___readyToSpawn_22 = (bool)1;
		// startSpawningAt1 = 999f;
		__this->___startSpawningAt1_17 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_30 = __this->___readyToSpawn_22;
		bool L_31 = L_30;
		RuntimeObject* L_32 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_31);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_32, NULL);
	}

IL_0150:
	{
		// if (stopSpawningAt2 <= 0f)
		float L_33 = __this->___stopSpawningAt2_18;
		if ((!(((float)L_33) <= ((float)(0.0f)))))
		{
			goto IL_017f;
		}
	}
	{
		// readyToSpawn = false;
		__this->___readyToSpawn_22 = (bool)0;
		// stopSpawningAt2 = 999f;
		__this->___stopSpawningAt2_18 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_34 = __this->___readyToSpawn_22;
		bool L_35 = L_34;
		RuntimeObject* L_36 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_35);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_36, NULL);
	}

IL_017f:
	{
		// if (startSpawningAt2 <= 0f)
		float L_37 = __this->___startSpawningAt2_19;
		if ((!(((float)L_37) <= ((float)(0.0f)))))
		{
			goto IL_01ae;
		}
	}
	{
		// readyToSpawn = true;
		__this->___readyToSpawn_22 = (bool)1;
		// startSpawningAt2 = 999f;
		__this->___startSpawningAt2_19 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_38 = __this->___readyToSpawn_22;
		bool L_39 = L_38;
		RuntimeObject* L_40 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_39);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_40, NULL);
	}

IL_01ae:
	{
		// if (stopSpawningAt3 <= 0f)
		float L_41 = __this->___stopSpawningAt3_20;
		if ((!(((float)L_41) <= ((float)(0.0f)))))
		{
			goto IL_01dd;
		}
	}
	{
		// readyToSpawn = false;
		__this->___readyToSpawn_22 = (bool)0;
		// stopSpawningAt3 = 999f;
		__this->___stopSpawningAt3_20 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_42 = __this->___readyToSpawn_22;
		bool L_43 = L_42;
		RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_44, NULL);
	}

IL_01dd:
	{
		// if (startSpawningAt1 <= 0f)
		float L_45 = __this->___startSpawningAt1_17;
		if ((!(((float)L_45) <= ((float)(0.0f)))))
		{
			goto IL_020c;
		}
	}
	{
		// readyToSpawn = true;
		__this->___readyToSpawn_22 = (bool)1;
		// startSpawningAt3 = 999f;
		__this->___startSpawningAt3_21 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_46 = __this->___readyToSpawn_22;
		bool L_47 = L_46;
		RuntimeObject* L_48 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_47);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_48, NULL);
	}

IL_020c:
	{
		// }
		return;
	}
}
// System.Void EasyBlueSpawner::SpawnBlockBlue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyBlueSpawner_SpawnBlockBlue_mA1293E6395EA8747A097A765C893ED12C7AA1CEF (EasyBlueSpawner_tD6D633978B0447C538D8740706C44672E7436E83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f), 0f, Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___spawnAreaSize_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___spawnAreaSize_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___spawnAreaSize_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___spawnAreaSize_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(BlueCubeToSpawn, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___BlueCubeToSpawn_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_23 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_23), (void*)L_17);
		// }
		return;
	}
}
// System.Void EasyBlueSpawner::ReadyToSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyBlueSpawner_ReadyToSpawn_m90A5073C7CD2071348D2B7B4A7D4134DA741AE17 (EasyBlueSpawner_tD6D633978B0447C538D8740706C44672E7436E83* __this, const RuntimeMethod* method) 
{
	{
		// if (readyToSpawn != true)
		bool L_0 = __this->___readyToSpawn_22;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// readyToSpawn = true;
		__this->___readyToSpawn_22 = (bool)1;
		return;
	}

IL_0010:
	{
		// readyToSpawn = false;
		__this->___readyToSpawn_22 = (bool)0;
		// }
		return;
	}
}
// System.Void EasyBlueSpawner::StartTimers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyBlueSpawner_StartTimers_mE09266F11A51D804BB736346A7CE4CC5884EF20A (EasyBlueSpawner_tD6D633978B0447C538D8740706C44672E7436E83* __this, const RuntimeMethod* method) 
{
	{
		// setDelayTimer = spawnOneBlue;
		float L_0 = __this->___spawnOneBlue_8;
		__this->___setDelayTimer_9 = L_0;
		// setStop1Timer = stopSpawningAt1;
		float L_1 = __this->___stopSpawningAt1_16;
		__this->___setStop1Timer_10 = L_1;
		// setStop2Timer = stopSpawningAt2;
		float L_2 = __this->___stopSpawningAt2_18;
		__this->___setStop2Timer_11 = L_2;
		// setStop3Timer = stopSpawningAt3;
		float L_3 = __this->___stopSpawningAt3_20;
		__this->___setStop3Timer_12 = L_3;
		// setStart1Timer = startSpawningAt1;
		float L_4 = __this->___startSpawningAt1_17;
		__this->___setStart1Timer_13 = L_4;
		// setStart2Timer = startSpawningAt2;
		float L_5 = __this->___startSpawningAt2_19;
		__this->___setStart2Timer_14 = L_5;
		// setStart3Timer = startSpawningAt3;
		float L_6 = __this->___startSpawningAt3_21;
		__this->___setStart3Timer_15 = L_6;
		// }
		return;
	}
}
// System.Void EasyBlueSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyBlueSpawner__ctor_m6A2BA9004DBA96CB4A738A18684170C1335A6848 (EasyBlueSpawner_tD6D633978B0447C538D8740706C44672E7436E83* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 spawnAreaSize = new Vector3(0f, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___spawnAreaSize_5 = L_0;
		// public float spawnInterval = 3f;
		__this->___spawnInterval_6 = (3.0f);
		// private float spawnOneBlue = 3f;
		__this->___spawnOneBlue_8 = (3.0f);
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
// System.Void EasyRedSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyRedSpawner_Start_mF308B3B033A9743ED5D02088396FC117700604A1 (EasyRedSpawner_t2F5CB14005D116EFA97084F3FBE448266441EC4A* __this, const RuntimeMethod* method) 
{
	{
		// StartTimers();
		EasyRedSpawner_StartTimers_m2360D92D87333C5F8918422532562997AD63FA5A(__this, NULL);
		// }
		return;
	}
}
// System.Void EasyRedSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyRedSpawner_Update_mFE47B931695A46AA2AD72BC7A581306907AE1209 (EasyRedSpawner_t2F5CB14005D116EFA97084F3FBE448266441EC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnOneRed -= Time.deltaTime;
		float L_0 = __this->___spawnOneRed_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnOneRed_8 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// stopSpawningAt1 -= Time.deltaTime;
		float L_2 = __this->___stopSpawningAt1_16;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___stopSpawningAt1_16 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// stopSpawningAt2 -= Time.deltaTime;
		float L_4 = __this->___stopSpawningAt2_18;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___stopSpawningAt2_18 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// stopSpawningAt3 -= Time.deltaTime;
		float L_6 = __this->___stopSpawningAt3_20;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___stopSpawningAt3_20 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// startSpawningAt1 -= Time.deltaTime;
		float L_8 = __this->___startSpawningAt1_17;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___startSpawningAt1_17 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		// startSpawningAt2 -= Time.deltaTime;
		float L_10 = __this->___startSpawningAt2_19;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___startSpawningAt2_19 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		// startSpawningAt3 -= Time.deltaTime;
		float L_12 = __this->___startSpawningAt3_21;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___startSpawningAt3_21 = ((float)il2cpp_codegen_subtract(L_12, L_13));
		// spawnTimer += Time.deltaTime;
		float L_14 = __this->___spawnTimer_7;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnTimer_7 = ((float)il2cpp_codegen_add(L_14, L_15));
		// if (readyToSpawn == true)
		bool L_16 = __this->___readyToSpawn_22;
		if (!L_16)
		{
			goto IL_00c4;
		}
	}
	{
		// if (spawnTimer >= spawnInterval)
		float L_17 = __this->___spawnTimer_7;
		float L_18 = __this->___spawnInterval_6;
		if ((!(((float)L_17) >= ((float)L_18))))
		{
			goto IL_00b7;
		}
	}
	{
		// SpawnBlockRed();
		EasyRedSpawner_SpawnBlockRed_m8DEE16AAFB460169256C1334D7A088A328AB9E40(__this, NULL);
		// spawnTimer = 0f;
		__this->___spawnTimer_7 = (0.0f);
	}

IL_00b7:
	{
		// if (spawnedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___spawnedObject_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
	}

IL_00c4:
	{
		// if (spawnOneRed <= 0f)
		float L_21 = __this->___spawnOneRed_8;
		if ((!(((float)L_21) <= ((float)(0.0f)))))
		{
			goto IL_00f2;
		}
	}
	{
		// SpawnBlockRed();
		EasyRedSpawner_SpawnBlockRed_m8DEE16AAFB460169256C1334D7A088A328AB9E40(__this, NULL);
		// spawnOneRed = 999f;
		__this->___spawnOneRed_8 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_22 = __this->___readyToSpawn_22;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_23);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_24, NULL);
	}

IL_00f2:
	{
		// if (stopSpawningAt1 <= 0f)
		float L_25 = __this->___stopSpawningAt1_16;
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		// readyToSpawn = false;
		__this->___readyToSpawn_22 = (bool)0;
		// stopSpawningAt1 = 999f;
		__this->___stopSpawningAt1_16 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_26 = __this->___readyToSpawn_22;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_27);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_28, NULL);
	}

IL_0121:
	{
		// if (startSpawningAt1 <= 0f)
		float L_29 = __this->___startSpawningAt1_17;
		if ((!(((float)L_29) <= ((float)(0.0f)))))
		{
			goto IL_0150;
		}
	}
	{
		// readyToSpawn = true;
		__this->___readyToSpawn_22 = (bool)1;
		// startSpawningAt1 = 999f;
		__this->___startSpawningAt1_17 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_30 = __this->___readyToSpawn_22;
		bool L_31 = L_30;
		RuntimeObject* L_32 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_31);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_32, NULL);
	}

IL_0150:
	{
		// if (stopSpawningAt2 <= 0f)
		float L_33 = __this->___stopSpawningAt2_18;
		if ((!(((float)L_33) <= ((float)(0.0f)))))
		{
			goto IL_017f;
		}
	}
	{
		// readyToSpawn = false;
		__this->___readyToSpawn_22 = (bool)0;
		// stopSpawningAt2 = 999f;
		__this->___stopSpawningAt2_18 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_34 = __this->___readyToSpawn_22;
		bool L_35 = L_34;
		RuntimeObject* L_36 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_35);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_36, NULL);
	}

IL_017f:
	{
		// if (startSpawningAt2 <= 0f)
		float L_37 = __this->___startSpawningAt2_19;
		if ((!(((float)L_37) <= ((float)(0.0f)))))
		{
			goto IL_01ae;
		}
	}
	{
		// readyToSpawn = true;
		__this->___readyToSpawn_22 = (bool)1;
		// startSpawningAt2 = 999f;
		__this->___startSpawningAt2_19 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_38 = __this->___readyToSpawn_22;
		bool L_39 = L_38;
		RuntimeObject* L_40 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_39);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_40, NULL);
	}

IL_01ae:
	{
		// if (stopSpawningAt3 <= 0f)
		float L_41 = __this->___stopSpawningAt3_20;
		if ((!(((float)L_41) <= ((float)(0.0f)))))
		{
			goto IL_01dd;
		}
	}
	{
		// readyToSpawn = false;
		__this->___readyToSpawn_22 = (bool)0;
		// stopSpawningAt3 = 999f;
		__this->___stopSpawningAt3_20 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_42 = __this->___readyToSpawn_22;
		bool L_43 = L_42;
		RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_44, NULL);
	}

IL_01dd:
	{
		// if (startSpawningAt1 <= 0f)
		float L_45 = __this->___startSpawningAt1_17;
		if ((!(((float)L_45) <= ((float)(0.0f)))))
		{
			goto IL_020c;
		}
	}
	{
		// readyToSpawn = true;
		__this->___readyToSpawn_22 = (bool)1;
		// startSpawningAt3 = 999f;
		__this->___startSpawningAt3_21 = (999.0f);
		// Debug.Log(readyToSpawn);
		bool L_46 = __this->___readyToSpawn_22;
		bool L_47 = L_46;
		RuntimeObject* L_48 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_47);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_48, NULL);
	}

IL_020c:
	{
		// }
		return;
	}
}
// System.Void EasyRedSpawner::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyRedSpawner_SpawnBlockRed_m8DEE16AAFB460169256C1334D7A088A328AB9E40 (EasyRedSpawner_t2F5CB14005D116EFA97084F3FBE448266441EC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f), 0f, Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___spawnAreaSize_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___spawnAreaSize_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___spawnAreaSize_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___spawnAreaSize_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(RedCubeToSpawn, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___RedCubeToSpawn_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_23 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_23), (void*)L_17);
		// }
		return;
	}
}
// System.Void EasyRedSpawner::ReadyToSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyRedSpawner_ReadyToSpawn_m0A9CA74AE53ABA65AA1D481F7D5EEBEBAF8BEFB3 (EasyRedSpawner_t2F5CB14005D116EFA97084F3FBE448266441EC4A* __this, const RuntimeMethod* method) 
{
	{
		// if (readyToSpawn != true)
		bool L_0 = __this->___readyToSpawn_22;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// readyToSpawn = true;
		__this->___readyToSpawn_22 = (bool)1;
		return;
	}

IL_0010:
	{
		// readyToSpawn = false;
		__this->___readyToSpawn_22 = (bool)0;
		// }
		return;
	}
}
// System.Void EasyRedSpawner::StartTimers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyRedSpawner_StartTimers_m2360D92D87333C5F8918422532562997AD63FA5A (EasyRedSpawner_t2F5CB14005D116EFA97084F3FBE448266441EC4A* __this, const RuntimeMethod* method) 
{
	{
		// setDelayTimer = spawnOneRed;
		float L_0 = __this->___spawnOneRed_8;
		__this->___setDelayTimer_9 = L_0;
		// setStop1Timer = stopSpawningAt1;
		float L_1 = __this->___stopSpawningAt1_16;
		__this->___setStop1Timer_10 = L_1;
		// setStop2Timer = stopSpawningAt2;
		float L_2 = __this->___stopSpawningAt2_18;
		__this->___setStop2Timer_11 = L_2;
		// setStop3Timer = stopSpawningAt3;
		float L_3 = __this->___stopSpawningAt3_20;
		__this->___setStop3Timer_12 = L_3;
		// setStart1Timer = startSpawningAt1;
		float L_4 = __this->___startSpawningAt1_17;
		__this->___setStart1Timer_13 = L_4;
		// setStart2Timer = startSpawningAt2;
		float L_5 = __this->___startSpawningAt2_19;
		__this->___setStart2Timer_14 = L_5;
		// setStart3Timer = startSpawningAt3;
		float L_6 = __this->___startSpawningAt3_21;
		__this->___setStart3Timer_15 = L_6;
		// }
		return;
	}
}
// System.Void EasyRedSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyRedSpawner__ctor_mBD173934D168B67B532B3886BBC9E41A1B55030F (EasyRedSpawner_t2F5CB14005D116EFA97084F3FBE448266441EC4A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 spawnAreaSize = new Vector3(0f, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___spawnAreaSize_5 = L_0;
		// public float spawnInterval = 3f;
		__this->___spawnInterval_6 = (3.0f);
		// private float spawnOneRed = 3f;
		__this->___spawnOneRed_8 = (3.0f);
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
// System.Void ShootBlue::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_Start_mB60CA1E0EEBB9F99E564607025FBF67ADBCE577D (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ShootBlue::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_Update_mF07FC653947DBBA404F1033BAF8BC1982230797D (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, const RuntimeMethod* method) 
{
	{
		// GetTheControllersLeft();
		ShootBlue_GetTheControllersLeft_mCC93D2D8893A3F09D7117E5E923E93F889C9B3D0(__this, NULL);
		// CheckControllerInput();
		ShootBlue_CheckControllerInput_mAE2FDE96F340D2B3FC5A49388F4385B92BFCEF84(__this, NULL);
		// canFireTimer -= Time.deltaTime;
		float L_0 = __this->___canFireTimer_9;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___canFireTimer_9 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// }
		return;
	}
}
// System.Void ShootBlue::GetTheControllersLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_GetTheControllersLeft_mCC93D2D8893A3F09D7117E5E923E93F889C9B3D0 (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* V_0 = NULL;
	Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// List<InputDevice> devices = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		V_0 = L_0;
		// InputDevices.GetDevices(devices);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_1 = V_0;
		InputDevices_GetDevices_mDB6E1E057DC81A1833AEB55B62FA22228D6EFA26(L_1, NULL);
		// InputDeviceCharacteristics leftControllerCharacteristics = InputDeviceCharacteristics.Left | InputDeviceCharacteristics.Controller;
		// InputDevices.GetDevicesWithCharacteristics(leftControllerCharacteristics, devices);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_2 = V_0;
		InputDevices_GetDevicesWithCharacteristics_m82F54DE2802FCE4EB730FCFBF8731CA91A27DEB0(((int32_t)320), L_2, NULL);
		// foreach (var item in devices)
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 L_4;
		L_4 = List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6(L_3, List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC((&V_1), Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0020_1:
			{
				// foreach (var item in devices)
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_5;
				L_5 = Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline((&V_1), Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
			}

IL_0028_1:
			{
				// foreach (var item in devices)
				bool L_6;
				L_6 = Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E((&V_1), Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// if (devices.Count > 0)
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline(L_7, List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		// targetDevice = devices[0];
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_9 = V_0;
		NullCheck(L_9);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_10;
		L_10 = List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2(L_9, 0, List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var);
		__this->___targetDevice_4 = L_10;
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void ShootBlue::CheckControllerInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_CheckControllerInput_mAE2FDE96F340D2B3FC5A49388F4385B92BFCEF84 (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral468B08502DECA250CB6A0822728D21A51B5DF576);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// targetDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool triggerButtonValue);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (&__this->___targetDevice_4);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_1 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___triggerButton_6;
		bool L_2;
		L_2 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_0, L_1, (&V_0), NULL);
		// if (triggerButtonValue)
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (canFireTimer <= fireRate)
		float L_4 = __this->___canFireTimer_9;
		float L_5 = __this->___fireRate_8;
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		// FindObjectOfType<AudioManager>().PlayMyAudio("GunShot");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_6;
		L_6 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_6);
		AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012(L_6, _stringLiteral468B08502DECA250CB6A0822728D21A51B5DF576, NULL);
		// shootGun();
		ShootBlue_shootGun_mF4F700537D7FD52914823F114B6DD0F244476745(__this, NULL);
	}

IL_0039:
	{
		// targetDevice.TryGetFeatureValue(CommonUsages.primaryButton, out bool primaryButtonValue);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_7 = (&__this->___targetDevice_4);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_8 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primaryButton_1;
		bool L_9;
		L_9 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_7, L_8, (&V_1), NULL);
		// if (primaryButtonValue)
		bool L_10 = V_1;
		// }
		return;
	}
}
// System.Void ShootBlue::shootGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_shootGun_mF4F700537D7FD52914823F114B6DD0F244476745 (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDFA64E51DBBA76B945506C8DF306BE4035C1C60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5D220F68C441A349826DCD2ED755C80A708604B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitBlue, rangeBlue, targetBlueBlockBig))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___shootFrom_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___shootFrom_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->___rayCastHitBlue_10);
		float L_5 = __this->___rangeBlue_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = __this->___targetBlueBlockBig_12;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_6, NULL);
		bool L_8;
		L_8 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_1, L_3, L_4, L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_009e;
		}
	}
	{
		// Debug.Log(rayCastHitBlue.collider.name);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_9 = (&__this->___rayCastHitBlue_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10;
		L_10 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactGood");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_12;
		L_12 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_12);
		AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012(L_12, _stringLiteralF5D220F68C441A349826DCD2ED755C80A708604B, NULL);
		// PlayImpactEffect(rayCastHitBlue.point, rayCastHitBlue.normal);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_13 = (&__this->___rayCastHitBlue_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_13, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_15 = (&__this->___rayCastHitBlue_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(L_15, NULL);
		ShootBlue_PlayImpactEffect_m44EAE4B07E926C7953091D379FDA53D47BFC888F(__this, L_14, L_16, NULL);
		// Destroy(rayCastHitBlue.collider.gameObject);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_17 = (&__this->___rayCastHitBlue_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18;
		L_18 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_17, NULL);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_19, NULL);
		// ScoreManager.instance.AddPointsBigBlock();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_20 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_20);
		ScoreManager_AddPointsBigBlock_mCDCA4AA4157148AEA9A58A346FBACC6BA2F66E74(L_20, NULL);
		// canFireTimer = 0.8f;
		__this->___canFireTimer_9 = (0.800000012f);
	}

IL_009e:
	{
		// if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitBlue, rangeBlue, targetBlueBlockSmall))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___shootFrom_5;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___shootFrom_5;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_23, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_25 = (&__this->___rayCastHitBlue_10);
		float L_26 = __this->___rangeBlue_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_27 = __this->___targetBlueBlockSmall_11;
		int32_t L_28;
		L_28 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_27, NULL);
		bool L_29;
		L_29 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_22, L_24, L_25, L_26, L_28, NULL);
		if (!L_29)
		{
			goto IL_013c;
		}
	}
	{
		// Debug.Log(rayCastHitBlue.collider.name);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_30 = (&__this->___rayCastHitBlue_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_31;
		L_31 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_30, NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_32, NULL);
		// FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactBad");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_33;
		L_33 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_33);
		AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012(L_33, _stringLiteralCDFA64E51DBBA76B945506C8DF306BE4035C1C60, NULL);
		// PlayImpactEffect(rayCastHitBlue.point, rayCastHitBlue.normal);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_34 = (&__this->___rayCastHitBlue_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_34, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_36 = (&__this->___rayCastHitBlue_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(L_36, NULL);
		ShootBlue_PlayImpactEffect_m44EAE4B07E926C7953091D379FDA53D47BFC888F(__this, L_35, L_37, NULL);
		// Destroy(rayCastHitBlue.collider.gameObject);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_38 = (&__this->___rayCastHitBlue_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_39;
		L_39 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_38, NULL);
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_40, NULL);
		// ScoreManager.instance.AddPointsSmallBlock();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_41 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_41);
		ScoreManager_AddPointsSmallBlock_mDDDF52B730FBD21AB0318191F0EB2F0AB416DEF8(L_41, NULL);
		// canFireTimer = 0.8f;
		__this->___canFireTimer_9 = (0.800000012f);
	}

IL_013c:
	{
		// if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitBlue, rangeBlue, targetEnemy))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___shootFrom_5;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = __this->___shootFrom_5;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_44, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_46 = (&__this->___rayCastHitBlue_10);
		float L_47 = __this->___rangeBlue_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_48 = __this->___targetEnemy_13;
		int32_t L_49;
		L_49 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_48, NULL);
		bool L_50;
		L_50 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_43, L_45, L_46, L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_01d0;
		}
	}
	{
		// Debug.Log(rayCastHitBlue.collider.name);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_51 = (&__this->___rayCastHitBlue_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_52;
		L_52 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_51, NULL);
		NullCheck(L_52);
		String_t* L_53;
		L_53 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_52, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_53, NULL);
		// FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactBad");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_54;
		L_54 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_54);
		AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012(L_54, _stringLiteralCDFA64E51DBBA76B945506C8DF306BE4035C1C60, NULL);
		// PlayImpactEffect(rayCastHitBlue.point, rayCastHitBlue.normal);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_55 = (&__this->___rayCastHitBlue_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_55, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_57 = (&__this->___rayCastHitBlue_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(L_57, NULL);
		ShootBlue_PlayImpactEffect_m44EAE4B07E926C7953091D379FDA53D47BFC888F(__this, L_56, L_58, NULL);
		// Destroy(rayCastHitBlue.collider.gameObject);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_59 = (&__this->___rayCastHitBlue_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_60;
		L_60 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_59, NULL);
		NullCheck(L_60);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_60, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_61, NULL);
		// canFireTimer = 0.8f;
		__this->___canFireTimer_9 = (0.800000012f);
	}

IL_01d0:
	{
		// }
		return;
	}
}
// System.Void ShootBlue::PlayImpactEffect(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_PlayImpactEffect_m44EAE4B07E926C7953091D379FDA53D47BFC888F (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_1 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (particleImpact != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___particleImpact_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// GameObject impactEffect = Instantiate(particleImpact, position, Quaternion.LookRotation(normal));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___particleImpact_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___normal1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_3, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_6;
		// ParticleSystem particleSystem = impactEffect.GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8;
		L_8 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_7, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		V_1 = L_8;
		// if (particleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = V_1;
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		// Destroy(impactEffect, particleSystem.main.duration);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = V_1;
		NullCheck(L_12);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_13;
		L_13 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_12, NULL);
		V_2 = L_13;
		float L_14;
		L_14 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_11, L_14, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void ShootBlue::PlayGunFX(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue_PlayGunFX_m695509DC4D75D9F8F04756EDE8C847FAA12DFA15 (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gunFx != null && shootFrom != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gunFx_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___shootFrom_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// Instantiate(gunFx, shootFrom.position, shootFrom.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___gunFx_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___shootFrom_5;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___shootFrom_5;
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_6, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void ShootBlue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootBlue__ctor_m43EDBF9CA8A276AA95B531DE09A9F1AB874613B0 (ShootBlue_t5304E3880BE12C3397AF5DACF4FDC57C43366382* __this, const RuntimeMethod* method) 
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
// System.Void ShootRed::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_Awake_mBE1ABA881A9EA733DB440F220455061768E46E04 (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ShootRed::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_Start_mF6A6482A71F844E483C1131618A89E704E664C47 (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ShootRed::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_Update_m2B1B4B6BC2D465060DF841A79A0B43B1753A8803 (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, const RuntimeMethod* method) 
{
	{
		// GetTheControllersRight();
		ShootRed_GetTheControllersRight_m1FC2E976868942945FC7EF2B65B6EBA74936FB9D(__this, NULL);
		// CheckControllerInput();
		ShootRed_CheckControllerInput_mDF108518E01E0A093C8D3FF3757C42681E75E1C1(__this, NULL);
		// canFireTimer -= Time.deltaTime;
		float L_0 = __this->___canFireTimer_9;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___canFireTimer_9 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// }
		return;
	}
}
// System.Void ShootRed::GetTheControllersRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_GetTheControllersRight_m1FC2E976868942945FC7EF2B65B6EBA74936FB9D (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* V_0 = NULL;
	Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// List<InputDevice> devices = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		V_0 = L_0;
		// InputDevices.GetDevices(devices);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_1 = V_0;
		InputDevices_GetDevices_mDB6E1E057DC81A1833AEB55B62FA22228D6EFA26(L_1, NULL);
		// InputDeviceCharacteristics rightControllerCharacteristics = InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller;
		// InputDevices.GetDevicesWithCharacteristics(rightControllerCharacteristics, devices);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_2 = V_0;
		InputDevices_GetDevicesWithCharacteristics_m82F54DE2802FCE4EB730FCFBF8731CA91A27DEB0(((int32_t)576), L_2, NULL);
		// foreach (var item in devices)
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 L_4;
		L_4 = List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6(L_3, List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC((&V_1), Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0020_1:
			{
				// foreach (var item in devices)
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_5;
				L_5 = Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline((&V_1), Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
			}

IL_0028_1:
			{
				// foreach (var item in devices)
				bool L_6;
				L_6 = Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E((&V_1), Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// if (devices.Count > 0)
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline(L_7, List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		// targetDevice = devices[0];
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_9 = V_0;
		NullCheck(L_9);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_10;
		L_10 = List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2(L_9, 0, List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var);
		__this->___targetDevice_4 = L_10;
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void ShootRed::CheckControllerInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_CheckControllerInput_mDF108518E01E0A093C8D3FF3757C42681E75E1C1 (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral468B08502DECA250CB6A0822728D21A51B5DF576);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// targetDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool triggerButtonValue);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (&__this->___targetDevice_4);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_1 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___triggerButton_6;
		bool L_2;
		L_2 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_0, L_1, (&V_0), NULL);
		// if (triggerButtonValue)
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if(canFireTimer <= fireRate)
		float L_4 = __this->___canFireTimer_9;
		float L_5 = __this->___fireRate_8;
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		// FindObjectOfType<AudioManager>().PlayMyAudio("GunShot");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_6;
		L_6 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_6);
		AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012(L_6, _stringLiteral468B08502DECA250CB6A0822728D21A51B5DF576, NULL);
		// shootGun();
		ShootRed_shootGun_mED303DCC8FE8E3385475B5FA2900FAD6EE999D70(__this, NULL);
	}

IL_0039:
	{
		// targetDevice.TryGetFeatureValue(CommonUsages.primaryButton, out bool primaryButtonValue);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_7 = (&__this->___targetDevice_4);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_8 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primaryButton_1;
		bool L_9;
		L_9 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_7, L_8, (&V_1), NULL);
		// if (primaryButtonValue)
		bool L_10 = V_1;
		// }
		return;
	}
}
// System.Void ShootRed::shootGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_shootGun_mED303DCC8FE8E3385475B5FA2900FAD6EE999D70 (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDFA64E51DBBA76B945506C8DF306BE4035C1C60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5D220F68C441A349826DCD2ED755C80A708604B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitRed, rangeRed, targetRedBlockBig))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___shootFrom_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___shootFrom_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->___rayCastHitRed_10);
		float L_5 = __this->___rangeRed_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = __this->___targetRedBlockBig_12;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_6, NULL);
		bool L_8;
		L_8 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_1, L_3, L_4, L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_009e;
		}
	}
	{
		// Debug.Log(rayCastHitRed.collider.name);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_9 = (&__this->___rayCastHitRed_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10;
		L_10 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactGood");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_12;
		L_12 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_12);
		AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012(L_12, _stringLiteralF5D220F68C441A349826DCD2ED755C80A708604B, NULL);
		// PlayImpactEffect(rayCastHitRed.point, rayCastHitRed.normal);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_13 = (&__this->___rayCastHitRed_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_13, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_15 = (&__this->___rayCastHitRed_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(L_15, NULL);
		ShootRed_PlayImpactEffect_mEE695CC2DB71E0F355724AF4DA4B0CAF07645CD0(__this, L_14, L_16, NULL);
		// Destroy(rayCastHitRed.collider.gameObject);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_17 = (&__this->___rayCastHitRed_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18;
		L_18 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_17, NULL);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_19, NULL);
		// ScoreManager.instance.AddPointsBigBlock();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_20 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_20);
		ScoreManager_AddPointsBigBlock_mCDCA4AA4157148AEA9A58A346FBACC6BA2F66E74(L_20, NULL);
		// canFireTimer = 0.8f;
		__this->___canFireTimer_9 = (0.800000012f);
	}

IL_009e:
	{
		// if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitRed, rangeRed, targetRedBlockSmall))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___shootFrom_5;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___shootFrom_5;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_23, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_25 = (&__this->___rayCastHitRed_10);
		float L_26 = __this->___rangeRed_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_27 = __this->___targetRedBlockSmall_11;
		int32_t L_28;
		L_28 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_27, NULL);
		bool L_29;
		L_29 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_22, L_24, L_25, L_26, L_28, NULL);
		if (!L_29)
		{
			goto IL_013c;
		}
	}
	{
		// Debug.Log(rayCastHitRed.collider.name);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_30 = (&__this->___rayCastHitRed_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_31;
		L_31 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_30, NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_32, NULL);
		// FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactBad");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_33;
		L_33 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_33);
		AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012(L_33, _stringLiteralCDFA64E51DBBA76B945506C8DF306BE4035C1C60, NULL);
		// PlayImpactEffect(rayCastHitRed.point, rayCastHitRed.normal);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_34 = (&__this->___rayCastHitRed_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_34, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_36 = (&__this->___rayCastHitRed_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(L_36, NULL);
		ShootRed_PlayImpactEffect_mEE695CC2DB71E0F355724AF4DA4B0CAF07645CD0(__this, L_35, L_37, NULL);
		// Destroy(rayCastHitRed.collider.gameObject);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_38 = (&__this->___rayCastHitRed_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_39;
		L_39 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_38, NULL);
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_40, NULL);
		// ScoreManager.instance.AddPointsSmallBlock();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_41 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_41);
		ScoreManager_AddPointsSmallBlock_mDDDF52B730FBD21AB0318191F0EB2F0AB416DEF8(L_41, NULL);
		// canFireTimer = 0.8f;
		__this->___canFireTimer_9 = (0.800000012f);
	}

IL_013c:
	{
		// if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitRed, rangeRed, TargetEnemy))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___shootFrom_5;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = __this->___shootFrom_5;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_44, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_46 = (&__this->___rayCastHitRed_10);
		float L_47 = __this->___rangeRed_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_48 = __this->___TargetEnemy_13;
		int32_t L_49;
		L_49 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_48, NULL);
		bool L_50;
		L_50 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_43, L_45, L_46, L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_01d0;
		}
	}
	{
		// Debug.Log(rayCastHitRed.collider.name);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_51 = (&__this->___rayCastHitRed_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_52;
		L_52 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_51, NULL);
		NullCheck(L_52);
		String_t* L_53;
		L_53 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_52, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_53, NULL);
		// FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactBad");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_54;
		L_54 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		NullCheck(L_54);
		AudioManager_PlayMyAudio_m8B692637C58AA4B20DF5B90CF5383012772DF012(L_54, _stringLiteralCDFA64E51DBBA76B945506C8DF306BE4035C1C60, NULL);
		// PlayImpactEffect(rayCastHitRed.point, rayCastHitRed.normal);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_55 = (&__this->___rayCastHitRed_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_55, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_57 = (&__this->___rayCastHitRed_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(L_57, NULL);
		ShootRed_PlayImpactEffect_mEE695CC2DB71E0F355724AF4DA4B0CAF07645CD0(__this, L_56, L_58, NULL);
		// Destroy(rayCastHitRed.collider.gameObject);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_59 = (&__this->___rayCastHitRed_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_60;
		L_60 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_59, NULL);
		NullCheck(L_60);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_60, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_61, NULL);
		// canFireTimer = 0.8f;
		__this->___canFireTimer_9 = (0.800000012f);
	}

IL_01d0:
	{
		// }
		return;
	}
}
// System.Void ShootRed::PlayImpactEffect(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed_PlayImpactEffect_mEE695CC2DB71E0F355724AF4DA4B0CAF07645CD0 (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_1 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (particleImpact != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___particleImpact_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// GameObject impactEffect = Instantiate(particleImpact, position, Quaternion.LookRotation(normal));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___particleImpact_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___normal1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_3, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_6;
		// ParticleSystem particleSystem = impactEffect.GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8;
		L_8 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_7, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		V_1 = L_8;
		// if (particleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = V_1;
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		// Destroy(impactEffect, particleSystem.main.duration);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = V_1;
		NullCheck(L_12);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_13;
		L_13 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_12, NULL);
		V_2 = L_13;
		float L_14;
		L_14 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_11, L_14, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void ShootRed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootRed__ctor_mFA9CFBE3C21EF32B7C3980EE8E263CA0F594ACD6 (ShootRed_tCBA60EDBE2DC1E271754167614566A661A7B6431* __this, const RuntimeMethod* method) 
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
// System.Void LetsGo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetsGo_Start_mBC38413D8FE8250156C1863AA07AECF46E82D56D (LetsGo_tEC540EF6864F7B93E0990CA50481030A48F897A0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LetsGo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetsGo_Update_m937F78B8349FF0C851F2F1567DAECD7B8DCCE64D (LetsGo_tEC540EF6864F7B93E0990CA50481030A48F897A0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LetsGo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetsGo__ctor_m4F582F9FF1D566BB29E6C3C234FB87DC52962A30 (LetsGo_tEC540EF6864F7B93E0990CA50481030A48F897A0* __this, const RuntimeMethod* method) 
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
// System.Void LightsOnAndOff::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsOnAndOff_Start_m7B2D94C11ECA00CD8D7FA240CE75376AB4C79686 (LightsOnAndOff_t142B944080D6E3BD60D3C6CE2978BDD311239611* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82FAF741CCDB0065341B2D5ABCF7AF4E1EDD231B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeBetweenBeats = 60f / beatsPerMinute;
		float L_0 = __this->___beatsPerMinute_6;
		__this->___timeBetweenBeats_7 = ((float)((60.0f)/L_0));
		// InvokeRepeating("ChangeMaterials", 0f, timeBetweenBeats);
		float L_1 = __this->___timeBetweenBeats_7;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral82FAF741CCDB0065341B2D5ABCF7AF4E1EDD231B, (0.0f), L_1, NULL);
		// }
		return;
	}
}
// System.Void LightsOnAndOff::ChangeMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsOnAndOff_ChangeMaterials_m13D16ED5D89B8A41340F830D8476E15410902168 (LightsOnAndOff_t142B944080D6E3BD60D3C6CE2978BDD311239611* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB07423964DA9E0431C9996EDB906B538813C67);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_2 = NULL;
	{
		// if (objectsToChange.Length == 0 || newMaterials.Length == 0)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objectsToChange_5;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0012;
		}
	}
	{
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = __this->___newMaterials_4;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		// Debug.LogError("Objects or materials arrays are empty!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6CB07423964DA9E0431C9996EDB906B538813C67, NULL);
		// return;
		return;
	}

IL_001d:
	{
		// foreach (GameObject obj in objectsToChange)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___objectsToChange_5;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0051;
	}

IL_0028:
	{
		// foreach (GameObject obj in objectsToChange)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// Renderer renderer = obj.GetComponent<Renderer>();
		NullCheck(L_6);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_6, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		V_2 = L_7;
		// if (renderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// renderer.material = newMaterials[currentMaterialIndex];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = V_2;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_11 = __this->___newMaterials_4;
		int32_t L_12 = __this->___currentMaterialIndex_8;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_10, L_14, NULL);
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0051:
	{
		// foreach (GameObject obj in objectsToChange)
		int32_t L_16 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		// currentMaterialIndex += changeDirection;
		int32_t L_18 = __this->___currentMaterialIndex_8;
		int32_t L_19 = __this->___changeDirection_9;
		__this->___currentMaterialIndex_8 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		// if (currentMaterialIndex >= newMaterials.Length)
		int32_t L_20 = __this->___currentMaterialIndex_8;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_21 = __this->___newMaterials_4;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0092;
		}
	}
	{
		// currentMaterialIndex = newMaterials.Length - 2;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_22 = __this->___newMaterials_4;
		NullCheck(L_22);
		__this->___currentMaterialIndex_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), 2));
		// changeDirection = -1;
		__this->___changeDirection_9 = (-1);
		return;
	}

IL_0092:
	{
		// else if (currentMaterialIndex < 0)
		int32_t L_23 = __this->___currentMaterialIndex_8;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		// currentMaterialIndex = 1;
		__this->___currentMaterialIndex_8 = 1;
		// changeDirection = 1;
		__this->___changeDirection_9 = 1;
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void LightsOnAndOff::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsOnAndOff__ctor_m1261BB1535AC9678B1041E93A9814E8E03E721EF (LightsOnAndOff_t142B944080D6E3BD60D3C6CE2978BDD311239611* __this, const RuntimeMethod* method) 
{
	{
		// public float beatsPerMinute = 55;
		__this->___beatsPerMinute_6 = (55.0f);
		// private int changeDirection = 1;
		__this->___changeDirection_9 = 1;
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
// System.Void PIllars::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PIllars_Update_mEB168F2AD86CA96BAB87569EBF5918F2F8574F07 (PIllars_tB953CE786F9C6794146EDEEA711CF89FB13CBEC3* __this, const RuntimeMethod* method) 
{
	{
		// if (canMove == true)
		bool L_0 = __this->___canMove_5;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// transform.position += moveDirection.normalized * moveSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___moveDirection_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_4, NULL);
		float L_6 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_9, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_10, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void PIllars::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PIllars_OnTriggerEnter_m7454BB40805C4DD9247BA2961CF71847ADD13055 (PIllars_tB953CE786F9C6794146EDEEA711CF89FB13CBEC3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8C5C17A751BC3FBD6E376782A1CF23636D0555C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "HitRoof")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralF8C5C17A751BC3FBD6E376782A1CF23636D0555C, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void PIllars::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PIllars__ctor_mED4B48A64D190E27F56FB1DAF74748B720788D4C (PIllars_tB953CE786F9C6794146EDEEA711CF89FB13CBEC3* __this, const RuntimeMethod* method) 
{
	{
		// private bool canMove = true;
		__this->___canMove_5 = (bool)1;
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
// System.Void Silo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo_Update_m56589EFEC1AE7034FBA07F1FAEEEA10259704E06 (Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE* __this, const RuntimeMethod* method) 
{
	{
		// launchTimer += Time.deltaTime;
		float L_0 = __this->___launchTimer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___launchTimer_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (canLaunch == true)
		bool L_2 = __this->___canLaunch_4;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// if(launchTimer >= launchFreq)
		float L_3 = __this->___launchTimer_7;
		float L_4 = __this->___launchFreq_6;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0039;
		}
	}
	{
		// LaunchMissle();
		Silo_LaunchMissle_m793606FF46A71E2DA4E9E26C31F86F7887E04787(__this, NULL);
		// launchTimer = 0f;
		__this->___launchTimer_7 = (0.0f);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Silo::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo_LaunchMissle_m793606FF46A71E2DA4E9E26C31F86F7887E04787 (Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-launchArea.x / 2f, launchArea.x / 2f), 0f, Random.Range(-launchArea.z / 2f, launchArea.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___launchArea_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___launchArea_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___launchArea_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___launchArea_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(missle, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___missle_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)L_17);
		// }
		return;
	}
}
// System.Void Silo::TurnOnMissleLaunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo_TurnOnMissleLaunch_mF680CFE8C14E292029285FDADA2364F17D168AD7 (Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE* __this, const RuntimeMethod* method) 
{
	{
		// if (canLaunch == false)
		bool L_0 = __this->___canLaunch_4;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// canLaunch = true;
		__this->___canLaunch_4 = (bool)1;
		return;
	}

IL_0010:
	{
		// canLaunch = false;
		__this->___canLaunch_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Silo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo__ctor_mDD962CA6A6EB8791C1B038A0482E1BA9682BF25F (Silo_t1B5C6B0E30F9366F54ED3F28136BFD55E9A1B7DE* __this, const RuntimeMethod* method) 
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
// System.Void Silo1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo1_Update_m0C8A12C4E5A2D5E1C85B5FDF5979A401876FBC1E (Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19* __this, const RuntimeMethod* method) 
{
	{
		// launchTimer += Time.deltaTime;
		float L_0 = __this->___launchTimer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___launchTimer_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (canLaunch1 == true)
		bool L_2 = __this->___canLaunch1_4;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// if(launchTimer >= launchFreq)
		float L_3 = __this->___launchTimer_7;
		float L_4 = __this->___launchFreq_6;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0039;
		}
	}
	{
		// LaunchMissle();
		Silo1_LaunchMissle_m7301A94AF73C25F599023F7AF9CFEB4DC59C898E(__this, NULL);
		// launchTimer = 0f;
		__this->___launchTimer_7 = (0.0f);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Silo1::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo1_LaunchMissle_m7301A94AF73C25F599023F7AF9CFEB4DC59C898E (Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-launchArea.x / 2f, launchArea.x / 2f), 0f, Random.Range(-launchArea.z / 2f, launchArea.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___launchArea_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___launchArea_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___launchArea_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___launchArea_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(missle, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___missle_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)L_17);
		// }
		return;
	}
}
// System.Void Silo1::TurnOnMissleLaunch1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo1_TurnOnMissleLaunch1_m4A753BA9AEDD0D20C64E59768E09867757E8D494 (Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19* __this, const RuntimeMethod* method) 
{
	{
		// if (canLaunch1 == false)
		bool L_0 = __this->___canLaunch1_4;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// canLaunch1 = true;
		__this->___canLaunch1_4 = (bool)1;
		return;
	}

IL_0010:
	{
		// canLaunch1 = false;
		__this->___canLaunch1_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Silo1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo1__ctor_m5D4E56CC72DC8678910DA425F2A75FE59B2C94D1 (Silo1_t3E5CD784DE6A590253AEE6FA5E8FE6BE116D1A19* __this, const RuntimeMethod* method) 
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
// System.Void Silo2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo2_Update_mAE37F3F5241F08337E0B2FBC547DDFBE37EC145D (Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848* __this, const RuntimeMethod* method) 
{
	{
		// launchTimer += Time.deltaTime;
		float L_0 = __this->___launchTimer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___launchTimer_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (canLaunch2 == true)
		bool L_2 = __this->___canLaunch2_4;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// if(launchTimer >= launchFreq)
		float L_3 = __this->___launchTimer_7;
		float L_4 = __this->___launchFreq_6;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0039;
		}
	}
	{
		// LaunchMissle();
		Silo2_LaunchMissle_m2DEC601F0545CBD2AB22AAABBC48887136F2E9D3(__this, NULL);
		// launchTimer = 0f;
		__this->___launchTimer_7 = (0.0f);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Silo2::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo2_LaunchMissle_m2DEC601F0545CBD2AB22AAABBC48887136F2E9D3 (Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-launchArea.x / 2f, launchArea.x / 2f), 0f, Random.Range(-launchArea.z / 2f, launchArea.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___launchArea_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___launchArea_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___launchArea_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___launchArea_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(missle, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___missle_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)L_17);
		// }
		return;
	}
}
// System.Void Silo2::TurnOnMissleLaunch2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo2_TurnOnMissleLaunch2_m5FFD316F0B8594DB1BBA5DB5EFF60224D7894920 (Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848* __this, const RuntimeMethod* method) 
{
	{
		// if (canLaunch2 == false)
		bool L_0 = __this->___canLaunch2_4;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// canLaunch2 = true;
		__this->___canLaunch2_4 = (bool)1;
		return;
	}

IL_0010:
	{
		// canLaunch2 = false;
		__this->___canLaunch2_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Silo2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo2__ctor_mBF5CFC83C187CB1019128969B884FA73E86B6212 (Silo2_t72E418BDFE758B2ECFA08192974B7D1396C80848* __this, const RuntimeMethod* method) 
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
// System.Void Silo3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo3_Update_mF3FF8797D0F6D5A8F9D287ED063F972D9FD558BF (Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251* __this, const RuntimeMethod* method) 
{
	{
		// launchTimer += Time.deltaTime;
		float L_0 = __this->___launchTimer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___launchTimer_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (canLaunch3 == true)
		bool L_2 = __this->___canLaunch3_4;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// if(launchTimer >= launchFreq)
		float L_3 = __this->___launchTimer_7;
		float L_4 = __this->___launchFreq_6;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0039;
		}
	}
	{
		// LaunchMissle();
		Silo3_LaunchMissle_m765ACDD0E5622127992C001C6AF16917A20501F4(__this, NULL);
		// launchTimer = 0f;
		__this->___launchTimer_7 = (0.0f);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Silo3::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo3_LaunchMissle_m765ACDD0E5622127992C001C6AF16917A20501F4 (Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-launchArea.x / 2f, launchArea.x / 2f), 0f, Random.Range(-launchArea.z / 2f, launchArea.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___launchArea_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___launchArea_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___launchArea_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___launchArea_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(missle, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___missle_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)L_17);
		// }
		return;
	}
}
// System.Void Silo3::TurnOnMissleLaunch3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo3_TurnOnMissleLaunch3_m23AED06A152864EFC7DC2CDE9111D9234F985041 (Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251* __this, const RuntimeMethod* method) 
{
	{
		// if (canLaunch3 == false)
		bool L_0 = __this->___canLaunch3_4;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// canLaunch3 = true;
		__this->___canLaunch3_4 = (bool)1;
		return;
	}

IL_0010:
	{
		// canLaunch3 = false;
		__this->___canLaunch3_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Silo3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo3__ctor_mB22E394F6474EF9185835FB412D8DAB37BC29FCE (Silo3_t2995059B66DE8092AFBE0CDC7998A30D5717D251* __this, const RuntimeMethod* method) 
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
// System.Void Silo4::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo4_Update_mEF3597D589DC706372D72AF7F1B8C00D6C05DF4A (Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410* __this, const RuntimeMethod* method) 
{
	{
		// launchTimer += Time.deltaTime;
		float L_0 = __this->___launchTimer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___launchTimer_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (canLaunch4 == true)
		bool L_2 = __this->___canLaunch4_4;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// if(launchTimer >= launchFreq)
		float L_3 = __this->___launchTimer_7;
		float L_4 = __this->___launchFreq_6;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0039;
		}
	}
	{
		// LaunchMissle();
		Silo4_LaunchMissle_m2E74FEBB2154D0A2D0B66A9EB9C34BAB9CE7F34D(__this, NULL);
		// launchTimer = 0f;
		__this->___launchTimer_7 = (0.0f);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Silo4::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo4_LaunchMissle_m2E74FEBB2154D0A2D0B66A9EB9C34BAB9CE7F34D (Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-launchArea.x / 2f, launchArea.x / 2f), 0f, Random.Range(-launchArea.z / 2f, launchArea.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___launchArea_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___launchArea_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___launchArea_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___launchArea_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(missle, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___missle_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)L_17);
		// }
		return;
	}
}
// System.Void Silo4::TurnOnMissleLaunch4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo4_TurnOnMissleLaunch4_m8D455482AE87C5553A63C5358E1B56D6AB94BA79 (Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410* __this, const RuntimeMethod* method) 
{
	{
		// if (canLaunch4 == false)
		bool L_0 = __this->___canLaunch4_4;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// canLaunch4 = true;
		__this->___canLaunch4_4 = (bool)1;
		return;
	}

IL_0010:
	{
		// canLaunch4 = false;
		__this->___canLaunch4_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Silo4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo4__ctor_mC55CC34194B1EB9832B787A47969C696EEB3A2C8 (Silo4_tFE6B256E7F1F5FED1647E99C1BD27AF1C5BEC410* __this, const RuntimeMethod* method) 
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
// System.Void Silo5::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo5_Update_mCC059969B736ECA8328B2AEA796C84A9DE26D51D (Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D* __this, const RuntimeMethod* method) 
{
	{
		// launchTimer += Time.deltaTime;
		float L_0 = __this->___launchTimer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___launchTimer_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (canLaunch5 == true)
		bool L_2 = __this->___canLaunch5_4;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// if(launchTimer >= launchFreq)
		float L_3 = __this->___launchTimer_7;
		float L_4 = __this->___launchFreq_6;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0039;
		}
	}
	{
		// LaunchMissle();
		Silo5_LaunchMissle_m2CA9AF807A3A26FA76BE0CE51C092BC7BE9D4839(__this, NULL);
		// launchTimer = 0f;
		__this->___launchTimer_7 = (0.0f);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Silo5::LaunchMissle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo5_LaunchMissle_m2CA9AF807A3A26FA76BE0CE51C092BC7BE9D4839 (Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-launchArea.x / 2f, launchArea.x / 2f), 0f, Random.Range(-launchArea.z / 2f, launchArea.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___launchArea_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___launchArea_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___launchArea_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___launchArea_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(missle, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___missle_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)L_17);
		// }
		return;
	}
}
// System.Void Silo5::TurnOnMissleLaunch5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo5_TurnOnMissleLaunch5_m7B1D54CAFFBF5D820F98617810AB6D4C60683694 (Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D* __this, const RuntimeMethod* method) 
{
	{
		// if (canLaunch5 == false)
		bool L_0 = __this->___canLaunch5_4;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// canLaunch5 = true;
		__this->___canLaunch5_4 = (bool)1;
		return;
	}

IL_0010:
	{
		// canLaunch5 = false;
		__this->___canLaunch5_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Silo5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Silo5__ctor_m9A19EF12A0D17119867E484479DE63FEEA6D86E7 (Silo5_t37649576A5B38ABCC27E88FE1E5A39807496833D* __this, const RuntimeMethod* method) 
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
// System.Void MoveBlocks::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBlocks_Start_m06CCBE491DC1E94DFE84A582562080E945FFB249 (MoveBlocks_t03AC7BF9597B58E6BED63F666454109D9F91E392* __this, const RuntimeMethod* method) 
{
	{
		// targetLocation = targetLocation.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___targetLocation_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___targetLocation_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetLocation_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void MoveBlocks::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBlocks_Update_mDC46FA0AE2F5FF7C539AE4188B18AB6B73CB20C1 (MoveBlocks_t03AC7BF9597B58E6BED63F666454109D9F91E392* __this, const RuntimeMethod* method) 
{
	{
		// MoveAndRotateObject();
		MoveBlocks_MoveAndRotateObject_mCE921B6B0FCEF1AF31E824FA5F4CC9F9A8CA588A(__this, NULL);
		// }
		return;
	}
}
// System.Void MoveBlocks::MoveAndRotateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBlocks_MoveAndRotateObject_mCE921B6B0FCEF1AF31E824FA5F4CC9F9A8CA588A (MoveBlocks_t03AC7BF9597B58E6BED63F666454109D9F91E392* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 targetDirection = targetLocation.position - transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___targetLocation_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// Quaternion targetRotation = Quaternion.LookRotation(targetDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_5, NULL);
		V_1 = L_6;
		// transform.position += targetDirection.normalized * movementSpeedBlocks * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_11 = __this->___movementSpeedBlocks_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_14, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_15, NULL);
		// transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_1;
		float L_20 = __this->___rotationSpeed_6;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		NullCheck(L_16);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_22, NULL);
		// }
		return;
	}
}
// System.Void MoveBlocks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBlocks__ctor_mA77BD9BF56D2741AE04F203F2461C8BE220716B8 (MoveBlocks_t03AC7BF9597B58E6BED63F666454109D9F91E392* __this, const RuntimeMethod* method) 
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
// System.Void BlockCollector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockCollector_Update_mE6F5A5DBAAA19A70F69C9658FCF49846EFC2847B (BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(CheckObjectsInArea());
		RuntimeObject* L_0;
		L_0 = BlockCollector_CheckObjectsInArea_m4E8D12DA5709D31D79CD479A6BBFEDDBF93381F4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void BlockCollector::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockCollector_OnTriggerEnter_mF153233CFD9F3C2AC54F2E585739F35E2AA3F773 (BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag(redBlocks))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		String_t* L_1 = __this->___redBlocks_4;
		NullCheck(L_0);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// redBlocksList.Add(other.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___redBlocksList_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___other0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_3);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_3, L_5, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_001f:
	{
		// if (other.CompareTag(blueBlocks))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___other0;
		String_t* L_7 = __this->___blueBlocks_5;
		NullCheck(L_6);
		bool L_8;
		L_8 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// blueBlocksList.Add(other.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___blueBlocksList_7;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = ___other0;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_9);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_9, L_11, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BlockCollector::CheckObjectsInArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlockCollector_CheckObjectsInArea_m4E8D12DA5709D31D79CD479A6BBFEDDBF93381F4 (BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54* L_0 = (U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54*)il2cpp_codegen_object_new(U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckObjectsInAreaU3Ed__9__ctor_m9B74B952F260A1630C4AA084CD7E742ABE363F70(L_0, 0, NULL);
		U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BlockCollector::DestroyAllBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockCollector_DestroyAllBlocks_m6256222B2EABB5A57F1175B2E7343D7D3D0F9291 (BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = redBlocksList.Count - 1; i >= 0; i--)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___redBlocksList_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0025;
	}

IL_0010:
	{
		// GameObject obj = redBlocksList[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___redBlocksList_6;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// Destroy(obj);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// for (int i = redBlocksList.Count - 1; i >= 0; i--)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0025:
	{
		// for (int i = redBlocksList.Count - 1; i >= 0; i--)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// for (int i = blueBlocksList.Count - 1; i >= 0; i--)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___blueBlocksList_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_7, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_004e;
	}

IL_0039:
	{
		// GameObject obj = blueBlocksList[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___blueBlocksList_7;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// Destroy(obj);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
		// for (int i = blueBlocksList.Count - 1; i >= 0; i--)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004e:
	{
		// for (int i = blueBlocksList.Count - 1; i >= 0; i--)
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BlockCollector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockCollector__ctor_m3AB1D791966506422B1E71A5A9EACDA02896C893 (BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FFDB5FA43CC982B77B24121A4A5A8FF89BFF9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6583D28EB6CFF83FDBB3DA222265AC25EC7D65D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string redBlocks = "Red_block";
		__this->___redBlocks_4 = _stringLiteral5FFDB5FA43CC982B77B24121A4A5A8FF89BFF9BE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___redBlocks_4), (void*)_stringLiteral5FFDB5FA43CC982B77B24121A4A5A8FF89BFF9BE);
		// public string blueBlocks = "Blue_block";
		__this->___blueBlocks_5 = _stringLiteral6583D28EB6CFF83FDBB3DA222265AC25EC7D65D6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blueBlocks_5), (void*)_stringLiteral6583D28EB6CFF83FDBB3DA222265AC25EC7D65D6);
		// public List<GameObject> redBlocksList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___redBlocksList_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___redBlocksList_6), (void*)L_0);
		// public List<GameObject> blueBlocksList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___blueBlocksList_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blueBlocksList_7), (void*)L_1);
		// public float checkInterval = 5f; // The interval in seconds to check the area
		__this->___checkInterval_8 = (5.0f);
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
// System.Void BlockCollector/<CheckObjectsInArea>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckObjectsInAreaU3Ed__9__ctor_m9B74B952F260A1630C4AA084CD7E742ABE363F70 (U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BlockCollector/<CheckObjectsInArea>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckObjectsInAreaU3Ed__9_System_IDisposable_Dispose_m79B796CAF660A3A2E5FDDE66603CBD0EA49C66A6 (U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BlockCollector/<CheckObjectsInArea>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckObjectsInAreaU3Ed__9_MoveNext_mC0BEEDB729B6A08B2808471272D16030FB81350D (U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(checkInterval);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___checkInterval_8;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = redBlocksList.Count - 1; i >= 0; i--)
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_7 = V_1;
		NullCheck(L_7);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = L_7->___redBlocksList_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_8, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0093;
	}

IL_004f:
	{
		// GameObject obj = redBlocksList[i];
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_10 = V_1;
		NullCheck(L_10);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = L_10->___redBlocksList_6;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_11, L_12, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_3 = L_13;
		// if (obj == null || Vector3.Distance(obj.transform.position, areaCenter) > areaRadius)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_15)
		{
			goto IL_0083;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_3;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_19 = V_1;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19->___areaCenter_9;
		float L_21;
		L_21 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_18, L_20, NULL);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->___areaRadius_10;
		if ((!(((float)L_21) > ((float)L_23))))
		{
			goto IL_008f;
		}
	}

IL_0083:
	{
		// redBlocksList.RemoveAt(i);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_24 = V_1;
		NullCheck(L_24);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = L_24->___redBlocksList_6;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_25, L_26, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
	}

IL_008f:
	{
		// for (int i = redBlocksList.Count - 1; i >= 0; i--)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_0093:
	{
		// for (int i = redBlocksList.Count - 1; i >= 0; i--)
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		// for (int i = blueBlocksList.Count - 1; i >= 0; i--)
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_29 = V_1;
		NullCheck(L_29);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = L_29->___blueBlocksList_7;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_30, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		goto IL_00f3;
	}

IL_00a8:
	{
		// GameObject obj = blueBlocksList[i];
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_32 = V_1;
		NullCheck(L_32);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_33 = L_32->___blueBlocksList_7;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_33, L_34, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_5 = L_35;
		// if (obj == null || Vector3.Distance(obj.transform.position, areaCenter) > areaRadius)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_37)
		{
			goto IL_00e0;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_5;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_41 = V_1;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = L_41->___areaCenter_9;
		float L_43;
		L_43 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_40, L_42, NULL);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_44 = V_1;
		NullCheck(L_44);
		float L_45 = L_44->___areaRadius_10;
		if ((!(((float)L_43) > ((float)L_45))))
		{
			goto IL_00ed;
		}
	}

IL_00e0:
	{
		// blueBlocksList.RemoveAt(i);
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_46 = V_1;
		NullCheck(L_46);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_47 = L_46->___blueBlocksList_7;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_47, L_48, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
	}

IL_00ed:
	{
		// for (int i = blueBlocksList.Count - 1; i >= 0; i--)
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
	}

IL_00f3:
	{
		// for (int i = blueBlocksList.Count - 1; i >= 0; i--)
		int32_t L_50 = V_4;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		// while (true)
		goto IL_001e;
	}
}
// System.Object BlockCollector/<CheckObjectsInArea>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckObjectsInAreaU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m66698454A62BC161BA1516D00E137C5C57BBF5C3 (U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BlockCollector/<CheckObjectsInArea>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckObjectsInAreaU3Ed__9_System_Collections_IEnumerator_Reset_m493144277C5917557B594E3B883D395ED960B820 (U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckObjectsInAreaU3Ed__9_System_Collections_IEnumerator_Reset_m493144277C5917557B594E3B883D395ED960B820_RuntimeMethod_var)));
	}
}
// System.Object BlockCollector/<CheckObjectsInArea>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckObjectsInAreaU3Ed__9_System_Collections_IEnumerator_get_Current_mF22A58812A6B2CE3CA0E91BC80A501DEFC83AFFB (U3CCheckObjectsInAreaU3Ed__9_t5CCC3B1FA77B3FC13010C602D638BF7FD9435A54* __this, const RuntimeMethod* method) 
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
// System.Void BlockFollowWayPoints::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockFollowWayPoints_Awake_m1A303D96F117CC85171C3A47DD5AD94B497A76DA (BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// waypoints = new Transform[transform.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_1);
		((BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_StaticFields*)il2cpp_codegen_static_fields_for(BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var))->___waypoints_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_StaticFields*)il2cpp_codegen_static_fields_for(BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var))->___waypoints_4), (void*)L_2);
		// for (int i = 0; i < waypoints.Length; i++)
		V_0 = 0;
		goto IL_0030;
	}

IL_0019:
	{
		// waypoints[i] = transform.GetChild(i);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = ((BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_StaticFields*)il2cpp_codegen_static_fields_for(BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var))->___waypoints_4;
		int32_t L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, L_6, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_7);
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0030:
	{
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_9 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = ((BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_StaticFields*)il2cpp_codegen_static_fields_for(BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var))->___waypoints_4;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BlockFollowWayPoints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockFollowWayPoints__ctor_m649E5BF21C9D48107A7A707B2B106B36A4C4DF87 (BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116* __this, const RuntimeMethod* method) 
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
// System.Void BlockTurning::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockTurning_Update_mDD9BD8C776429F8DD57143CA2D0B42D55D53D893 (BlockTurning_t993A7AB960273DC6AB859D845D6EEC8734B349A3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BlockTurning::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockTurning_OnTriggerEnter_mF9C7DBF6AAF1950AFF927DA091093134645F7CD3 (BlockTurning_t993A7AB960273DC6AB859D845D6EEC8734B349A3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FFDB5FA43CC982B77B24121A4A5A8FF89BFF9BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Red_block"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral5FFDB5FA43CC982B77B24121A4A5A8FF89BFF9BE, NULL);
		// }
		return;
	}
}
// System.Void BlockTurning::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockTurning__ctor_mDE47E2B4FE88C11175AFFCEE13DC822F9155D4AD (BlockTurning_t993A7AB960273DC6AB859D845D6EEC8734B349A3* __this, const RuntimeMethod* method) 
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
// System.Void BlueCubesBPM::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueCubesBPM_Start_mBCB6AE679A5C53C9149BBD750B7767A088CC1CD6 (BlueCubesBPM_tFBBC830BD8403C63D97C67D9D29BC23AD0CD95DB* __this, const RuntimeMethod* method) 
{
	{
		// collectedObjects = objectCollector.blueBlocksList;
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_0 = __this->___objectCollector_5;
		NullCheck(L_0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = L_0->___blueBlocksList_7;
		__this->___collectedObjects_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collectedObjects_11), (void*)L_1);
		// timeBetweenHalfBeats = 60f / bpm;
		float L_2 = __this->___bpm_4;
		__this->___timeBetweenHalfBeats_9 = ((float)((60.0f)/L_2));
		// }
		return;
	}
}
// System.Void BlueCubesBPM::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueCubesBPM_Update_m735AB27CD18623D0A5EC937069708C588DC05CE9 (BlueCubesBPM_tFBBC830BD8403C63D97C67D9D29BC23AD0CD95DB* __this, const RuntimeMethod* method) 
{
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_8 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (timer >= timeBetweenHalfBeats)
		float L_2 = __this->___timer_8;
		float L_3 = __this->___timeBetweenHalfBeats_9;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		// ToggleLayer();
		BlueCubesBPM_ToggleLayer_m63B9E8DB037B43C8A92C5DF5273619A76470AAA3(__this, NULL);
		// timer = 0f;
		__this->___timer_8 = (0.0f);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void BlueCubesBPM::ToggleLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueCubesBPM_ToggleLayer_m63B9E8DB037B43C8A92C5DF5273619A76470AAA3 (BlueCubesBPM_tFBBC830BD8403C63D97C67D9D29BC23AD0CD95DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9155289CD9B0F3D82A34DB1F665501D9E2AA0DC3);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach (GameObject obj in collectedObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___collectedObjects_11;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007c_1;
			}

IL_000e_1:
			{
				// foreach (GameObject obj in collectedObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// if (isActiveLayer)
				bool L_3 = __this->___isActiveLayer_10;
				if (!L_3)
				{
					goto IL_004e_1;
				}
			}
			{
				// obj.layer = (int)Mathf.Log(normalLayer.value, 2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
				LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_5 = (&__this->___normalLayer_6);
				int32_t L_6;
				L_6 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_5, NULL);
				float L_7;
				L_7 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)L_6), (2.0f), NULL);
				NullCheck(L_4);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_4, il2cpp_codegen_cast_double_to_int<int32_t>(L_7), NULL);
				// obj.transform.localScale = normalScale;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
				NullCheck(L_8);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
				L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___normalScale_12;
				NullCheck(L_9);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
				goto IL_007c_1;
			}

IL_004e_1:
			{
				// obj.layer = (int)Mathf.Log(activeLayer.value, 2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
				LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_12 = (&__this->___activeLayer_7);
				int32_t L_13;
				L_13 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_12, NULL);
				float L_14;
				L_14 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)L_13), (2.0f), NULL);
				NullCheck(L_11);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_11, il2cpp_codegen_cast_double_to_int<int32_t>(L_14), NULL);
				// obj.transform.localScale = activeScale;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
				NullCheck(L_15);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
				L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___activeScale_13;
				NullCheck(L_16);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_17, NULL);
			}

IL_007c_1:
			{
				// foreach (GameObject obj in collectedObjects)
				bool L_18;
				L_18 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0095;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		// isActiveLayer = !isActiveLayer;
		bool L_19 = __this->___isActiveLayer_10;
		__this->___isActiveLayer_10 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		// if (isActiveLayer)
		bool L_20 = __this->___isActiveLayer_10;
		if (!L_20)
		{
			goto IL_00bc;
		}
	}
	{
		// Invoke("RevertToNormalLayer", 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral9155289CD9B0F3D82A34DB1F665501D9E2AA0DC3, (1.0f), NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void BlueCubesBPM::RevertToNormalLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueCubesBPM_RevertToNormalLayer_mAE92393989D7C2DFB5D4DD2AC1F7838C83FC12EA (BlueCubesBPM_tFBBC830BD8403C63D97C67D9D29BC23AD0CD95DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (GameObject obj in collectedObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___collectedObjects_11;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_000e_1:
			{
				// foreach (GameObject obj in collectedObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// obj.layer = (int)Mathf.Log(normalLayer.value, 2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
				LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_4 = (&__this->___normalLayer_6);
				int32_t L_5;
				L_5 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_4, NULL);
				float L_6;
				L_6 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)L_5), (2.0f), NULL);
				NullCheck(L_3);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_3, il2cpp_codegen_cast_double_to_int<int32_t>(L_6), NULL);
				// obj.transform.localScale = normalScale;
				NullCheck(L_3);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___normalScale_12;
				NullCheck(L_7);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_8, NULL);
			}

IL_0042_1:
			{
				// foreach (GameObject obj in collectedObjects)
				bool L_9;
				L_9 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void BlueCubesBPM::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueCubesBPM__ctor_m8FF5E81018CE801D04674C6FECFE0D536C9CA547 (BlueCubesBPM_tFBBC830BD8403C63D97C67D9D29BC23AD0CD95DB* __this, const RuntimeMethod* method) 
{
	{
		// public float bpm = 100f;
		__this->___bpm_4 = (100.0f);
		// public Vector3 normalScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___normalScale_12 = L_0;
		// public Vector3 activeScale = new Vector3(2f, 2f, 2f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (2.0f), (2.0f), (2.0f), /*hidden argument*/NULL);
		__this->___activeScale_13 = L_1;
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
// System.Void MoveAndRotateNew::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAndRotateNew_Update_m8007CABD6086BF4A50C0F035063EE33B466FDFEC (MoveAndRotateNew_t6097D40DD7E3746CCC6E6C3452282C7A7A9D09FD* __this, const RuntimeMethod* method) 
{
	{
		// MoveAndRotateBlock();
		MoveAndRotateNew_MoveAndRotateBlock_m1DA8F2C77683599C6D7621F1EA709B8230442BD2(__this, NULL);
		// }
		return;
	}
}
// System.Void MoveAndRotateNew::MoveAndRotateBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAndRotateNew_MoveAndRotateBlock_m1DA8F2C77683599C6D7621F1EA709B8230442BD2 (MoveAndRotateNew_t6097D40DD7E3746CCC6E6C3452282C7A7A9D09FD* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(direction.normalized * movementSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___direction_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_1, NULL);
		float L_3 = __this->___movementSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void MoveAndRotateNew::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAndRotateNew__ctor_mC735F842F7E4D7DA73AE0D6B161C755980942ED5 (MoveAndRotateNew_t6097D40DD7E3746CCC6E6C3452282C7A7A9D09FD* __this, const RuntimeMethod* method) 
{
	{
		// private float movementSpeed = 3f;
		__this->___movementSpeed_4 = (3.0f);
		// private Vector3 direction = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___direction_6 = L_0;
		// private Vector3 turn1 = Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		__this->___turn1_7 = L_1;
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
// System.Void RedCubesBPM::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedCubesBPM_Start_mAE7096FF3A9B8F6CF72497B4AC928A645EA69F89 (RedCubesBPM_t0E5DA926DD3149861B962B7E89849A36FB7D452E* __this, const RuntimeMethod* method) 
{
	{
		// collectedObjects = objectCollector.redBlocksList;
		BlockCollector_tB3B8220ECB4FCFAA410DAB8ECE7BB26B7C2904FB* L_0 = __this->___objectCollector_5;
		NullCheck(L_0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = L_0->___redBlocksList_6;
		__this->___collectedObjects_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collectedObjects_11), (void*)L_1);
		// timeBetweenHalfBeats = 60f / bpm;
		float L_2 = __this->___bpm_4;
		__this->___timeBetweenHalfBeats_9 = ((float)((60.0f)/L_2));
		// }
		return;
	}
}
// System.Void RedCubesBPM::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedCubesBPM_Update_mC116C287E1604874C1E28FA5E86872FE70E5DF25 (RedCubesBPM_t0E5DA926DD3149861B962B7E89849A36FB7D452E* __this, const RuntimeMethod* method) 
{
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_8 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (timer >= timeBetweenHalfBeats)
		float L_2 = __this->___timer_8;
		float L_3 = __this->___timeBetweenHalfBeats_9;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		// ToggleLayer();
		RedCubesBPM_ToggleLayer_m4DEA9E1CAF5AB8115E475A9C0BD1444AECE40A5A(__this, NULL);
		// timer = 0f;
		__this->___timer_8 = (0.0f);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void RedCubesBPM::ToggleLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedCubesBPM_ToggleLayer_m4DEA9E1CAF5AB8115E475A9C0BD1444AECE40A5A (RedCubesBPM_t0E5DA926DD3149861B962B7E89849A36FB7D452E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9155289CD9B0F3D82A34DB1F665501D9E2AA0DC3);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach (GameObject obj in collectedObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___collectedObjects_11;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007c_1;
			}

IL_000e_1:
			{
				// foreach (GameObject obj in collectedObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// if (isActiveLayer)
				bool L_3 = __this->___isActiveLayer_10;
				if (!L_3)
				{
					goto IL_004e_1;
				}
			}
			{
				// obj.layer = (int)Mathf.Log(normalLayer.value, 2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
				LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_5 = (&__this->___normalLayer_6);
				int32_t L_6;
				L_6 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_5, NULL);
				float L_7;
				L_7 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)L_6), (2.0f), NULL);
				NullCheck(L_4);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_4, il2cpp_codegen_cast_double_to_int<int32_t>(L_7), NULL);
				// obj.transform.localScale = normalScale;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
				NullCheck(L_8);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
				L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___normalScale_12;
				NullCheck(L_9);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
				goto IL_007c_1;
			}

IL_004e_1:
			{
				// obj.layer = (int)Mathf.Log(activeLayer.value, 2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
				LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_12 = (&__this->___activeLayer_7);
				int32_t L_13;
				L_13 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_12, NULL);
				float L_14;
				L_14 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)L_13), (2.0f), NULL);
				NullCheck(L_11);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_11, il2cpp_codegen_cast_double_to_int<int32_t>(L_14), NULL);
				// obj.transform.localScale = activeScale;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
				NullCheck(L_15);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
				L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___activeScale_13;
				NullCheck(L_16);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_17, NULL);
			}

IL_007c_1:
			{
				// foreach (GameObject obj in collectedObjects)
				bool L_18;
				L_18 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0095;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		// isActiveLayer = !isActiveLayer;
		bool L_19 = __this->___isActiveLayer_10;
		__this->___isActiveLayer_10 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		// if (isActiveLayer)
		bool L_20 = __this->___isActiveLayer_10;
		if (!L_20)
		{
			goto IL_00bc;
		}
	}
	{
		// Invoke("RevertToNormalLayer", 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral9155289CD9B0F3D82A34DB1F665501D9E2AA0DC3, (1.0f), NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void RedCubesBPM::RevertToNormalLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedCubesBPM_RevertToNormalLayer_mC575CA9EC4E5A508643732B542DE7025EA5AD425 (RedCubesBPM_t0E5DA926DD3149861B962B7E89849A36FB7D452E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (GameObject obj in collectedObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___collectedObjects_11;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_000e_1:
			{
				// foreach (GameObject obj in collectedObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// obj.layer = (int)Mathf.Log(normalLayer.value, 2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
				LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_4 = (&__this->___normalLayer_6);
				int32_t L_5;
				L_5 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_4, NULL);
				float L_6;
				L_6 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)L_5), (2.0f), NULL);
				NullCheck(L_3);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_3, il2cpp_codegen_cast_double_to_int<int32_t>(L_6), NULL);
				// obj.transform.localScale = normalScale;
				NullCheck(L_3);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___normalScale_12;
				NullCheck(L_7);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_8, NULL);
			}

IL_0042_1:
			{
				// foreach (GameObject obj in collectedObjects)
				bool L_9;
				L_9 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void RedCubesBPM::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedCubesBPM__ctor_m00E9308C44448661ECCB071F8C7D95C6AEBD3703 (RedCubesBPM_t0E5DA926DD3149861B962B7E89849A36FB7D452E* __this, const RuntimeMethod* method) 
{
	{
		// public float bpm = 120f;
		__this->___bpm_4 = (120.0f);
		// public Vector3 normalScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___normalScale_12 = L_0;
		// public Vector3 activeScale = new Vector3(2f, 2f, 2f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (2.0f), (2.0f), (2.0f), /*hidden argument*/NULL);
		__this->___activeScale_13 = L_1;
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
// System.Void BlueBlockActivation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlockActivation_Start_m84566B45D817DFCB3896FD7CE2C1D9EC057F3BC9 (BlueBlockActivation_t6B7FBCF21B5199ECB3C36C93FF89967C9CE0E98E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BlueBlockActivation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlockActivation_Update_m359A2F520ED2F9E00EA7205461AC4FC4373FA56A (BlueBlockActivation_t6B7FBCF21B5199ECB3C36C93FF89967C9CE0E98E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BlueBlockActivation::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlockActivation_OnTriggerEnter_m6014B2A82B3FE89C6391C1E843656DC841B7688D (BlueBlockActivation_t6B7FBCF21B5199ECB3C36C93FF89967C9CE0E98E* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12AA381C86AE5A50AF819F94F9FEA985816C7048);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55D8C119406052363579189431FC38DBFCC0C4A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A55C7E363C81A7F0135BB2DBD3A2B7226D754CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB24EA968C23E2604FBC086A243395FF5E55C3778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0F7EE81C79E1799D203DDEF4714D5DBAB2A02E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD11132E60E3DE615395079C0CFDE1025ADB5CC8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "BlueZoneFar")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralD11132E60E3DE615395079C0CFDE1025ADB5CC8B, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		// if (gameObject.layer == LayerMask.NameToLayer("BlueBlockLayerSmall"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		int32_t L_6;
		L_6 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral12AA381C86AE5A50AF819F94F9FEA985816C7048, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0059;
		}
	}
	{
		// gameObject.layer = LayerMask.NameToLayer("BlueBlockLayerBig");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_8;
		L_8 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralB24EA968C23E2604FBC086A243395FF5E55C3778, NULL);
		NullCheck(L_7);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_7, L_8, NULL);
		// gameObject.transform.localScale = blockLargeSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___blockLargeSize_6;
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_11, NULL);
	}

IL_0059:
	{
		// if (other.gameObject.tag == "RedZoneFar")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = ___other0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral55D8C119406052363579189431FC38DBFCC0C4A9, NULL);
		if (!L_15)
		{
			goto IL_00b2;
		}
	}
	{
		// if (gameObject.layer == LayerMask.NameToLayer("BlueBlockLayerBig"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_16, NULL);
		int32_t L_18;
		L_18 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralB24EA968C23E2604FBC086A243395FF5E55C3778, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_00b2;
		}
	}
	{
		// gameObject.layer = LayerMask.NameToLayer("BlueBlockLayerSmall");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_20;
		L_20 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral12AA381C86AE5A50AF819F94F9FEA985816C7048, NULL);
		NullCheck(L_19);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_19, L_20, NULL);
		// gameObject.transform.localScale = blockSmallSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___blockSmallSize_5;
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_23, NULL);
	}

IL_00b2:
	{
		// if (other.gameObject.tag == "BlueZoneClose")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_24 = ___other0;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_25, NULL);
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralC0F7EE81C79E1799D203DDEF4714D5DBAB2A02E3, NULL);
		if (!L_27)
		{
			goto IL_010b;
		}
	}
	{
		// if (gameObject.layer == LayerMask.NameToLayer("BlueBlockLayerSmall"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_28, NULL);
		int32_t L_30;
		L_30 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral12AA381C86AE5A50AF819F94F9FEA985816C7048, NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_010b;
		}
	}
	{
		// gameObject.layer = LayerMask.NameToLayer("BlueBlockLayerBig");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_32;
		L_32 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralB24EA968C23E2604FBC086A243395FF5E55C3778, NULL);
		NullCheck(L_31);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_31, L_32, NULL);
		// gameObject.transform.localScale = blockLargeSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___blockLargeSize_6;
		NullCheck(L_34);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_34, L_35, NULL);
	}

IL_010b:
	{
		// if (other.gameObject.tag == "RedZoneClose")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_36 = ___other0;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_37, NULL);
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral7A55C7E363C81A7F0135BB2DBD3A2B7226D754CB, NULL);
		if (!L_39)
		{
			goto IL_0164;
		}
	}
	{
		// if (gameObject.layer == LayerMask.NameToLayer("BlueBlockLayerBig"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_40);
		int32_t L_41;
		L_41 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_40, NULL);
		int32_t L_42;
		L_42 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralB24EA968C23E2604FBC086A243395FF5E55C3778, NULL);
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_0164;
		}
	}
	{
		// gameObject.layer = LayerMask.NameToLayer("BlueBlockLayerSmall");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_44;
		L_44 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral12AA381C86AE5A50AF819F94F9FEA985816C7048, NULL);
		NullCheck(L_43);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_43, L_44, NULL);
		// gameObject.transform.localScale = blockSmallSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->___blockSmallSize_5;
		NullCheck(L_46);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_46, L_47, NULL);
	}

IL_0164:
	{
		// }
		return;
	}
}
// System.Void BlueBlockActivation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlockActivation__ctor_m9F05FFA64105B395C54F7003A98CD1C82A23D1DA (BlueBlockActivation_t6B7FBCF21B5199ECB3C36C93FF89967C9CE0E98E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 blockSmallSize = new Vector3(0.7f, 0.7f, 0.7f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		__this->___blockSmallSize_5 = L_0;
		// public Vector3 blockLargeSize = new Vector3(1.4f, 1.4f, 1.4f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (1.39999998f), (1.39999998f), (1.39999998f), /*hidden argument*/NULL);
		__this->___blockLargeSize_6 = L_1;
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
// System.Void RedBlockActivation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedBlockActivation_Start_m9F867E7069647B647823C81B5FCCBA7068064461 (RedBlockActivation_t066081D04B6485279B90294816454E8BE858CD18* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RedBlockActivation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedBlockActivation_Update_mEF74DF2B221C3B36F33989B2E44D9EDA33D79B0C (RedBlockActivation_t066081D04B6485279B90294816454E8BE858CD18* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RedBlockActivation::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedBlockActivation_OnTriggerEnter_m76D6EDFF13ECD43F20F2A72325154716BB77E173 (RedBlockActivation_t066081D04B6485279B90294816454E8BE858CD18* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D5D2EE1A137A16170AB937A3762902DFC59B2BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55D8C119406052363579189431FC38DBFCC0C4A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAEEB70FF63C40A3A2D8419E7136A8DF11942B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A55C7E363C81A7F0135BB2DBD3A2B7226D754CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "RedZoneFar")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral55D8C119406052363579189431FC38DBFCC0C4A9, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		// if (gameObject.layer == LayerMask.NameToLayer("RedBlockLayerSmall"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		int32_t L_6;
		L_6 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral5EAEEB70FF63C40A3A2D8419E7136A8DF11942B6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0059;
		}
	}
	{
		// gameObject.layer = LayerMask.NameToLayer("RedBlockLayerBig");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_8;
		L_8 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral2D5D2EE1A137A16170AB937A3762902DFC59B2BC, NULL);
		NullCheck(L_7);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_7, L_8, NULL);
		// gameObject.transform.localScale = blockLargeSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___blockLargeSize_6;
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_11, NULL);
	}

IL_0059:
	{
		// if (other.gameObject.tag == "RedZoneClose")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = ___other0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral7A55C7E363C81A7F0135BB2DBD3A2B7226D754CB, NULL);
		if (!L_15)
		{
			goto IL_00b2;
		}
	}
	{
		// if (gameObject.layer == LayerMask.NameToLayer("RedBlockLayerSmall"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_16, NULL);
		int32_t L_18;
		L_18 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral5EAEEB70FF63C40A3A2D8419E7136A8DF11942B6, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_00b2;
		}
	}
	{
		// gameObject.layer = LayerMask.NameToLayer("RedBlockLayerBig");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_20;
		L_20 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral2D5D2EE1A137A16170AB937A3762902DFC59B2BC, NULL);
		NullCheck(L_19);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_19, L_20, NULL);
		// gameObject.transform.localScale = blockLargeSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___blockLargeSize_6;
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_23, NULL);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void RedBlockActivation::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedBlockActivation_OnTriggerExit_m0E4356D9D2CAB8A49FCF7CB0A1E759316F74D839 (RedBlockActivation_t066081D04B6485279B90294816454E8BE858CD18* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D5D2EE1A137A16170AB937A3762902DFC59B2BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55D8C119406052363579189431FC38DBFCC0C4A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAEEB70FF63C40A3A2D8419E7136A8DF11942B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A55C7E363C81A7F0135BB2DBD3A2B7226D754CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "RedZoneFar")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral55D8C119406052363579189431FC38DBFCC0C4A9, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		// if (gameObject.layer == LayerMask.NameToLayer("RedBlockLayerBig"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		int32_t L_6;
		L_6 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral2D5D2EE1A137A16170AB937A3762902DFC59B2BC, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0059;
		}
	}
	{
		// gameObject.layer = LayerMask.NameToLayer("RedBlockLayerSmall");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_8;
		L_8 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral5EAEEB70FF63C40A3A2D8419E7136A8DF11942B6, NULL);
		NullCheck(L_7);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_7, L_8, NULL);
		// gameObject.transform.localScale = blockSmallSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___blockSmallSize_5;
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_11, NULL);
	}

IL_0059:
	{
		// if (other.gameObject.tag == "RedZoneClose")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = ___other0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral7A55C7E363C81A7F0135BB2DBD3A2B7226D754CB, NULL);
		if (!L_15)
		{
			goto IL_00b2;
		}
	}
	{
		// if (gameObject.layer == LayerMask.NameToLayer("RedBlockLayerBig"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_16, NULL);
		int32_t L_18;
		L_18 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral2D5D2EE1A137A16170AB937A3762902DFC59B2BC, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_00b2;
		}
	}
	{
		// gameObject.layer = LayerMask.NameToLayer("RedBlockLayerSmall");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_20;
		L_20 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral5EAEEB70FF63C40A3A2D8419E7136A8DF11942B6, NULL);
		NullCheck(L_19);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_19, L_20, NULL);
		// gameObject.transform.localScale = blockSmallSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___blockSmallSize_5;
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_23, NULL);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void RedBlockActivation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedBlockActivation__ctor_m74B65BAD53561A8D951CBC5EAC199BB94F0C3839 (RedBlockActivation_t066081D04B6485279B90294816454E8BE858CD18* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 blockSmallSize= new Vector3(0.7f, 0.7f, 0.7f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		__this->___blockSmallSize_5 = L_0;
		// public Vector3 blockLargeSize = new Vector3(1.4f, 1.4f, 1.4f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (1.39999998f), (1.39999998f), (1.39999998f), /*hidden argument*/NULL);
		__this->___blockLargeSize_6 = L_1;
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
// System.Void SpawnAndMoveObjects::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnAndMoveObjects_Update_m94B57CB525BA3AA5034AD473D0D28B231B79380F (SpawnAndMoveObjects_t45D17D405AA82F16337B522740386348B8333A41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnTimer += Time.deltaTime;
		float L_0 = __this->___spawnTimer_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnTimer_8 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (spawnTimer >= spawnInterval)
		float L_2 = __this->___spawnTimer_8;
		float L_3 = __this->___spawnInterval_7;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0037;
		}
	}
	{
		// SpawnBlockRed();
		SpawnAndMoveObjects_SpawnBlockRed_m2AC45AA07BFC2950CF492664A6FD6533915F0D7A(__this, NULL);
		// SpawnBlockBlue();
		SpawnAndMoveObjects_SpawnBlockBlue_m9FFDB31EFA4990643C8B25B6BDA788ACE5E70D66(__this, NULL);
		// spawnTimer = 0f;
		__this->___spawnTimer_8 = (0.0f);
	}

IL_0037:
	{
		// if (spawnedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___spawnedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// }
		return;
	}
}
// System.Void SpawnAndMoveObjects::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnAndMoveObjects_SpawnBlockRed_m2AC45AA07BFC2950CF492664A6FD6533915F0D7A (SpawnAndMoveObjects_t45D17D405AA82F16337B522740386348B8333A41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f),0f, Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___spawnAreaSize_6);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___spawnAreaSize_6);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___spawnAreaSize_6);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___spawnAreaSize_6);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(RedCubeToSpawn, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___RedCubeToSpawn_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)L_17);
		// }
		return;
	}
}
// System.Void SpawnAndMoveObjects::SpawnBlockBlue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnAndMoveObjects_SpawnBlockBlue_m9FFDB31EFA4990643C8B25B6BDA788ACE5E70D66 (SpawnAndMoveObjects_t45D17D405AA82F16337B522740386348B8333A41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f), 0f, Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___spawnAreaSize_6);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___spawnAreaSize_6);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___spawnAreaSize_6);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___spawnAreaSize_6);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(BlueCubeToSpawn, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___BlueCubeToSpawn_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)L_17);
		// }
		return;
	}
}
// System.Void SpawnAndMoveObjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnAndMoveObjects__ctor_mF9ACDA9D58115E34E1A4C170B441CAA8ACB49AEE (SpawnAndMoveObjects_t45D17D405AA82F16337B522740386348B8333A41* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 spawnAreaSize = new Vector3(10f, 0f, 10f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (10.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		__this->___spawnAreaSize_6 = L_0;
		// public float spawnInterval = 3f;
		__this->___spawnInterval_7 = (3.0f);
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
// System.Void DestroyOrbs::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOrbs_Start_mBAA9D39C5C9D73EA8A4EE5FAFA6F5D2F5007C007 (DestroyOrbs_t0D5A8519BB2CD98ED4FE31AD4A78560EB11FF324* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyOrbs::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOrbs_Update_m94312C2B50BFB61415292FBA0D52399618E9351E (DestroyOrbs_t0D5A8519BB2CD98ED4FE31AD4A78560EB11FF324* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyOrbs::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOrbs_OnTriggerEnter_m4C13BD2D7A26C30E5900BD6D77E3677171108F4F (DestroyOrbs_t0D5A8519BB2CD98ED4FE31AD4A78560EB11FF324* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F26F54889659D1A063B5EDBB68BD8719AD6E2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "OrbDeleter")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral78F26F54889659D1A063B5EDBB68BD8719AD6E2C, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void DestroyOrbs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOrbs__ctor_m3084A3ED4946AB7D84695585304894DA9368EBC0 (DestroyOrbs_t0D5A8519BB2CD98ED4FE31AD4A78560EB11FF324* __this, const RuntimeMethod* method) 
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
// System.Void MoveOrbs::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveOrbs_Start_m1C8D2A1608BFE4B51CF68887A23A97F4BC4B4C11 (MoveOrbs_tB6C43FB68520827955A694ACBA5DE2D3C8C27A45* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MoveOrbs::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveOrbs_Update_mE58955580179C2EBEA520088E9D36A5626888EEF (MoveOrbs_tB6C43FB68520827955A694ACBA5DE2D3C8C27A45* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = transform.position - new Vector3(orbMovementSpeed * Time.deltaTime, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___orbMovementSpeed_4;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), ((float)il2cpp_codegen_multiply(L_3, L_4)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void MoveOrbs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveOrbs__ctor_mCF21C9D66EAE4F5347AE05491499612DDA683F2C (MoveOrbs_tB6C43FB68520827955A694ACBA5DE2D3C8C27A45* __this, const RuntimeMethod* method) 
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
// System.Void OrbSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbSpawner_Update_m9273E0E4A9B18BBAFD252A73E2AE67603818DFC0 (OrbSpawner_tE1C12D98DBD06B2139B6F7F385BBE9141188CB1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// orbSpawnTimer += Time.deltaTime;
		float L_0 = __this->___orbSpawnTimer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___orbSpawnTimer_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (orbSpawnTimer >= orbSpawnInterval)
		float L_2 = __this->___orbSpawnTimer_7;
		float L_3 = __this->___orbSpawnInterval_6;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		// SpawnBlockRed();
		OrbSpawner_SpawnBlockRed_mFBAEB28247E499434287FEF7000F9910C3B5E185(__this, NULL);
		// orbSpawnTimer = 0f;
		__this->___orbSpawnTimer_7 = (0.0f);
	}

IL_0031:
	{
		// if (spawnedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___spawnedObject_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// }
		return;
	}
}
// System.Void OrbSpawner::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbSpawner_SpawnBlockRed_mFBAEB28247E499434287FEF7000F9910C3B5E185 (OrbSpawner_tE1C12D98DBD06B2139B6F7F385BBE9141188CB1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-orbSpawnAreaSize.x / 2f, orbSpawnAreaSize.x / 2f), 0f, Random.Range(-orbSpawnAreaSize.z / 2f, orbSpawnAreaSize.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___orbSpawnAreaSize_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___orbSpawnAreaSize_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___orbSpawnAreaSize_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___orbSpawnAreaSize_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(Orb, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___Orb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_8 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_8), (void*)L_17);
		// }
		return;
	}
}
// System.Void OrbSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbSpawner__ctor_mC13A8DD2B788FBA46A4A28EB0452337D722B698D (OrbSpawner_tE1C12D98DBD06B2139B6F7F385BBE9141188CB1A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 orbSpawnAreaSize = new Vector3(0f, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___orbSpawnAreaSize_5 = L_0;
		// public float orbSpawnInterval = 3f;
		__this->___orbSpawnInterval_6 = (3.0f);
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
// System.Void PhonkBlueSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkBlueSpawner_Start_mABB18F63B1F051BEEE474C77F8C72C27094DBB30 (PhonkBlueSpawner_t1739DCEC9BDB29E7E513C044994A3F18106464CD* __this, const RuntimeMethod* method) 
{
	{
		// setTimer = spawnDelayRed;
		float L_0 = __this->___spawnDelayRed_8;
		__this->___setTimer_9 = L_0;
		// }
		return;
	}
}
// System.Void PhonkBlueSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkBlueSpawner_Update_m8B7600B3ACE0A5516C7A36608B399A76B8E817A3 (PhonkBlueSpawner_t1739DCEC9BDB29E7E513C044994A3F18106464CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnDelayRed -= Time.deltaTime;
		float L_0 = __this->___spawnDelayRed_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnDelayRed_8 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// spawnTimer += Time.deltaTime;
		float L_2 = __this->___spawnTimer_7;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnTimer_7 = ((float)il2cpp_codegen_add(L_2, L_3));
		// breakDelay += Time.deltaTime;
		float L_4 = __this->___breakDelay_10;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___breakDelay_10 = ((float)il2cpp_codegen_add(L_4, L_5));
		// if (readyToSpawn == true)
		bool L_6 = __this->___readyToSpawn_11;
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		// if (spawnTimer >= spawnInterval)
		float L_7 = __this->___spawnTimer_7;
		float L_8 = __this->___spawnInterval_6;
		if ((!(((float)L_7) >= ((float)L_8))))
		{
			goto IL_005d;
		}
	}
	{
		// SpawnBlockRed();
		PhonkBlueSpawner_SpawnBlockRed_m041EAA6C19F81C6C34FCAD8D7D947E42DDEEEFDE(__this, NULL);
		// spawnTimer = 0f;
		__this->___spawnTimer_7 = (0.0f);
	}

IL_005d:
	{
		// if (spawnedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___spawnedObject_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
	}

IL_006a:
	{
		// if (spawnDelayRed < 0f)
		float L_11 = __this->___spawnDelayRed_8;
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		// ReadyToSpawn();
		PhonkBlueSpawner_ReadyToSpawn_m1EB1824CBEF6FF5F79C3363502DBE865C4E64CEC(__this, NULL);
		// spawnDelayRed = 30f;
		__this->___spawnDelayRed_8 = (30.0f);
		// Debug.Log(readyToSpawn);
		bool L_12 = __this->___readyToSpawn_11;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_13);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void PhonkBlueSpawner::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkBlueSpawner_SpawnBlockRed_m041EAA6C19F81C6C34FCAD8D7D947E42DDEEEFDE (PhonkBlueSpawner_t1739DCEC9BDB29E7E513C044994A3F18106464CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f), 0f, Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___spawnAreaSize_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___spawnAreaSize_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___spawnAreaSize_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___spawnAreaSize_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(BlueCubeToSpawn, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___BlueCubeToSpawn_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_12 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_12), (void*)L_17);
		// }
		return;
	}
}
// System.Void PhonkBlueSpawner::ReadyToSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkBlueSpawner_ReadyToSpawn_m1EB1824CBEF6FF5F79C3363502DBE865C4E64CEC (PhonkBlueSpawner_t1739DCEC9BDB29E7E513C044994A3F18106464CD* __this, const RuntimeMethod* method) 
{
	{
		// if (readyToSpawn != true)
		bool L_0 = __this->___readyToSpawn_11;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// readyToSpawn = true;
		__this->___readyToSpawn_11 = (bool)1;
		return;
	}

IL_0010:
	{
		// readyToSpawn = false;
		__this->___readyToSpawn_11 = (bool)0;
		// }
		return;
	}
}
// System.Void PhonkBlueSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkBlueSpawner__ctor_mF5CBD6600C46F40E80A4FE95D4A5AC396F4C0555 (PhonkBlueSpawner_t1739DCEC9BDB29E7E513C044994A3F18106464CD* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 spawnAreaSize = new Vector3(10f, 0f, 10f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (10.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		__this->___spawnAreaSize_5 = L_0;
		// public float spawnInterval = 3f;
		__this->___spawnInterval_6 = (3.0f);
		// private float spawnDelayRed = 3f;
		__this->___spawnDelayRed_8 = (3.0f);
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
// System.Void PhonkRedSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkRedSpawner_Start_m976C6FEC2C92F87B1AC934689CF337781058A13D (PhonkRedSpawner_tD6FC641AB5F178F25AB0132F3AE540C3C96128EA* __this, const RuntimeMethod* method) 
{
	{
		// setTimer = spawnDelayRed;
		float L_0 = __this->___spawnDelayRed_8;
		__this->___setTimer_9 = L_0;
		// }
		return;
	}
}
// System.Void PhonkRedSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkRedSpawner_Update_m55612B9678D52905325B3026C0AC571C773AAE08 (PhonkRedSpawner_tD6FC641AB5F178F25AB0132F3AE540C3C96128EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnDelayRed -= Time.deltaTime;
		float L_0 = __this->___spawnDelayRed_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnDelayRed_8 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// spawnTimer += Time.deltaTime;
		float L_2 = __this->___spawnTimer_7;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnTimer_7 = ((float)il2cpp_codegen_add(L_2, L_3));
		// breakDelay += Time.deltaTime;
		float L_4 = __this->___breakDelay_10;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___breakDelay_10 = ((float)il2cpp_codegen_add(L_4, L_5));
		// if (readyToSpawn == true)
		bool L_6 = __this->___readyToSpawn_11;
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		// if (spawnTimer >= spawnInterval)
		float L_7 = __this->___spawnTimer_7;
		float L_8 = __this->___spawnInterval_6;
		if ((!(((float)L_7) >= ((float)L_8))))
		{
			goto IL_005d;
		}
	}
	{
		// SpawnBlockRed();
		PhonkRedSpawner_SpawnBlockRed_m1CB646E8F4697970C45B0FA4ECB3C2F38800B123(__this, NULL);
		// spawnTimer = 0f;
		__this->___spawnTimer_7 = (0.0f);
	}

IL_005d:
	{
		// if (spawnedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___spawnedObject_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
	}

IL_006a:
	{
		// if (spawnDelayRed < 0f)
		float L_11 = __this->___spawnDelayRed_8;
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		// ReadyToSpawn();
		PhonkRedSpawner_ReadyToSpawn_mD0D634D6573A816E95FBD07FA1C3D727C1C09AFF(__this, NULL);
		// spawnDelayRed = 30f;
		__this->___spawnDelayRed_8 = (30.0f);
		// Debug.Log(readyToSpawn);
		bool L_12 = __this->___readyToSpawn_11;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_13);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void PhonkRedSpawner::SpawnBlockRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkRedSpawner_SpawnBlockRed_m1CB646E8F4697970C45B0FA4ECB3C2F38800B123 (PhonkRedSpawner_tD6FC641AB5F178F25AB0132F3AE540C3C96128EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f), 0f, Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___spawnAreaSize_5);
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___spawnAreaSize_5);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_3))/(2.0f))), ((float)(L_5/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___spawnAreaSize_5);
		float L_8 = L_7->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___spawnAreaSize_5);
		float L_10 = L_9->___z_4;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_8))/(2.0f))), ((float)(L_10/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_6, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_12, NULL);
		V_0 = L_13;
		// spawnedObject = Instantiate(RedCubeToSpawn, randomSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___RedCubeToSpawn_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_12 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_12), (void*)L_17);
		// }
		return;
	}
}
// System.Void PhonkRedSpawner::ReadyToSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkRedSpawner_ReadyToSpawn_mD0D634D6573A816E95FBD07FA1C3D727C1C09AFF (PhonkRedSpawner_tD6FC641AB5F178F25AB0132F3AE540C3C96128EA* __this, const RuntimeMethod* method) 
{
	{
		// if (readyToSpawn != true)
		bool L_0 = __this->___readyToSpawn_11;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// readyToSpawn = true;
		__this->___readyToSpawn_11 = (bool)1;
		return;
	}

IL_0010:
	{
		// readyToSpawn = false;
		__this->___readyToSpawn_11 = (bool)0;
		// }
		return;
	}
}
// System.Void PhonkRedSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhonkRedSpawner__ctor_mAA2E5C808494CC4AD71638405CD61A11F8DB0139 (PhonkRedSpawner_tD6FC641AB5F178F25AB0132F3AE540C3C96128EA* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 spawnAreaSize = new Vector3(10f, 0f, 10f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (10.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		__this->___spawnAreaSize_5 = L_0;
		// public float spawnInterval = 3f;
		__this->___spawnInterval_6 = (3.0f);
		// private float spawnDelayRed = 3f;
		__this->___spawnDelayRed_8 = (3.0f);
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
// System.Void RedCubesAreaCollector::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedCubesAreaCollector_OnTriggerEnter_m877080776C0D6D537F59957E78A4479352F75FC1 (RedCubesAreaCollector_t21961EA0B4D8371CB2BD4DBE47965590044A0BF9* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB6215B7729F95E236F9348D4A2201CB1E721832);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		// if (!objectsInArea.Contains(other.gameObject))
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___objectsInArea_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_0, L_2, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		// objectsInArea.Add(other.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___objectsInArea_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_4);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_4, L_6, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// Debug.Log("this is all ready in the array: " + other.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___other0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8;
		G_B2_0 = L_9;
		G_B2_1 = _stringLiteralBB6215B7729F95E236F9348D4A2201CB1E721832;
		if (L_9)
		{
			G_B3_0 = L_9;
			G_B3_1 = _stringLiteralBB6215B7729F95E236F9348D4A2201CB1E721832;
			goto IL_0036;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck(G_B3_0);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_003b:
	{
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_1, G_B4_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void RedCubesAreaCollector::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedCubesAreaCollector_OnTriggerExit_m3F1AE92BE91B5B6EA3B436A96EADA15ACA4AD186 (RedCubesAreaCollector_t21961EA0B4D8371CB2BD4DBE47965590044A0BF9* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (objectsInArea.Contains(other.gameObject))
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___objectsInArea_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_0, L_2, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// objectsInArea.Remove(other.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___objectsInArea_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_4, L_6, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// Debug.Log(other.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = ___other0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void RedCubesAreaCollector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedCubesAreaCollector__ctor_m47DE05BAD10477AC0D1B20D54E16E02DE78AA83E (RedCubesAreaCollector_t21961EA0B4D8371CB2BD4DBE47965590044A0BF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> objectsInArea = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___objectsInArea_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectsInArea_4), (void*)L_0);
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
// System.Void ScoreManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Awake_mB3BB0D0448D4C240C4572B7395AF328615E76D8A (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void ScoreManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Start_m7E00370AD0134DB3AEA647B9BA69055725AA83FE (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// highscore = PlayerPrefs.GetInt("highscore", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, 0, NULL);
		__this->___highscore_8 = L_0;
		// scoreTMP.text = score.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___scoreTMP_5;
		int32_t* L_2 = (&__this->___score_7);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// highscoreTMP.text = highscore.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___highscoreTMP_6;
		int32_t* L_5 = (&__this->___highscore_8);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void ScoreManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Update_m68EC29B04B4118B51E293C1C3077D87FF3FE7811 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScoreManager::AddPointsBigBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_AddPointsBigBlock_mCDCA4AA4157148AEA9A58A346FBACC6BA2F66E74 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += 110;
		int32_t L_0 = __this->___score_7;
		__this->___score_7 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)110)));
		// scoreTMP.text = score.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___scoreTMP_5;
		int32_t* L_2 = (&__this->___score_7);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// if (highscore < score)
		int32_t L_4 = __this->___highscore_8;
		int32_t L_5 = __this->___score_7;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		// PlayerPrefs.SetInt("highscore", score);
		int32_t L_6 = __this->___score_7;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, L_6, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void ScoreManager::AddPointsSmallBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_AddPointsSmallBlock_mDDDF52B730FBD21AB0318191F0EB2F0AB416DEF8 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		// score += 30;
		int32_t L_0 = __this->___score_7;
		__this->___score_7 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)30)));
		// scoreTMP.text = score.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___scoreTMP_5;
		int32_t* L_2 = (&__this->___score_7);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void ScoreManager::MinusScoreOnWhite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_MinusScoreOnWhite_m98A775259B44E37AA25849A06172043DAF071E3D (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		// score -= 70;
		int32_t L_0 = __this->___score_7;
		__this->___score_7 = ((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)70)));
		// scoreTMP.text = score.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___scoreTMP_5;
		int32_t* L_2 = (&__this->___score_7);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void ScoreManager::MinusScoreOnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_MinusScoreOnEnemy_m540CAEB8C71DC5F9D53928CC748E41B9D9B3BB8D (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		// score -= 150;
		int32_t L_0 = __this->___score_7;
		__this->___score_7 = ((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)150)));
		// scoreTMP.text = score.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___scoreTMP_5;
		int32_t* L_2 = (&__this->___score_7);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void ScoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__ctor_mE5C264C34A9CBBAB72DCF99CCCC9841AF8F9FEE6 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
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
// System.Void Testinh::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testinh_Start_m7A322DE1802A3272EC9105C9D6D966A252DB10B7 (Testinh_tD1A703C9358F5138210CF5509CF98DF141B69DFC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Testinh::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testinh_Update_m62FCAED664DCBB487AA4A8DE8A81B8A41E70F41B (Testinh_tD1A703C9358F5138210CF5509CF98DF141B69DFC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Testinh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testinh__ctor_mF4AA9F0DBCE22502D834252B0B6278401BC79644 (Testinh_tD1A703C9358F5138210CF5509CF98DF141B69DFC* __this, const RuntimeMethod* method) 
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
// System.Void WhiteZone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteZone_Start_m93FFE0FEF72052138EA96B839B7AD0FA96136C7B (WhiteZone_tC7372F932E417E58F100DFC1E0F89D86FFFED12E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WhiteZone::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteZone_Update_mAF7EFF9D46CFEB275657C0D44952E433E0B7347D (WhiteZone_tC7372F932E417E58F100DFC1E0F89D86FFFED12E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WhiteZone::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteZone_OnTriggerEnter_m7D52AC613607CFAA9F43CECE9A003AF1C512B3F7 (WhiteZone_tC7372F932E417E58F100DFC1E0F89D86FFFED12E* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CEBB6CC6174CCE83E2D22FCEDE33A526A08041D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "WhiteZone")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6CEBB6CC6174CCE83E2D22FCEDE33A526A08041D, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void WhiteZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteZone__ctor_m33751A2D5E42236B0ADD7809D1AF40890192ED72 (WhiteZone_tC7372F932E417E58F100DFC1E0F89D86FFFED12E* __this, const RuntimeMethod* method) 
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
// System.Void WayPointMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WayPointMovement_Start_m429FF36BF6BDAA8EF7A9CA2EF8247CC8E67329CA (WayPointMovement_tBB1785044B1D9DA6863362D229020B7ABBB28ABF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = BlockFollowWayPoints.waypoints[0];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = ((BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_StaticFields*)il2cpp_codegen_static_fields_for(BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var))->___waypoints_4;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		__this->___target_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void WayPointMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WayPointMovement_Update_m81228D3A37DCD1AB877F9692F32404308895532A (WayPointMovement_tBB1785044B1D9DA6863362D229020B7ABBB28ABF* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 dir= target.position - transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// transform.Translate(dir.normalized * speed * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_7 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		NullCheck(L_5);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_5, L_10, 0, NULL);
		// if(Vector3.Distance(transform.position, target.position) <= waypointEntryEstimater)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___target_5;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15;
		L_15 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_12, L_14, NULL);
		float L_16 = __this->___waypointEntryEstimater_7;
		if ((!(((float)L_15) <= ((float)L_16))))
		{
			goto IL_006d;
		}
	}
	{
		// GetNextWayPoint();
		WayPointMovement_GetNextWayPoint_m029F6A7DB9A77FC652E8F934ACB7A76CB74880ED(__this, NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void WayPointMovement::GetNextWayPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WayPointMovement_GetNextWayPoint_m029F6A7DB9A77FC652E8F934ACB7A76CB74880ED (WayPointMovement_tBB1785044B1D9DA6863362D229020B7ABBB28ABF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(wavepointIndex >= BlockFollowWayPoints.waypoints.Length -1)
		int32_t L_0 = __this->___wavepointIndex_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = ((BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_StaticFields*)il2cpp_codegen_static_fields_for(BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var))->___waypoints_4;
		NullCheck(L_1);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)))))
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// return;
		return;
	}

IL_001d:
	{
		// wavepointIndex++;
		int32_t L_3 = __this->___wavepointIndex_6;
		__this->___wavepointIndex_6 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// target = BlockFollowWayPoints.waypoints[wavepointIndex];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = ((BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_StaticFields*)il2cpp_codegen_static_fields_for(BlockFollowWayPoints_t0878E1004ABB6478951C96B85BC330C0BC89E116_il2cpp_TypeInfo_var))->___waypoints_4;
		int32_t L_5 = __this->___wavepointIndex_6;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___target_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_5), (void*)L_7);
		// }
		return;
	}
}
// System.Void WayPointMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WayPointMovement__ctor_mE63DA5D29FD7495FD742BC299357996F1E3D6CD4 (WayPointMovement_tBB1785044B1D9DA6863362D229020B7ABBB28ABF* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 10f;
		__this->___speed_4 = (10.0f);
		// public float waypointEntryEstimater = 0.2f;
		__this->___waypointEntryEstimater_7 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline (float ___f0, float ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___f0;
		float L_1 = ___p1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054(((double)L_0), ((double)L_1), NULL);
		V_0 = ((float)L_2);
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		NullCheck(L_4);
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
