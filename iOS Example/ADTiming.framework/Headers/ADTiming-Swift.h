// Generated by Apple Swift version 4.1.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import CoreData;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ADTiming",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

/// BannerView Size
typedef SWIFT_ENUM(NSInteger, ATBannerType) {
/// ad size: 320 x 50
  ATBannerTypeNormal = 0,
/// ad size: 320 x 100
  ATBannerTypeLarge = 1,
/// ad size: screen.width x 50
  ATBannerTypeSmall = 2,
};

@protocol ATBannerViewDelegate;
@class UIViewController;
@class NSCoder;

/// A customized UIView to represent a AdTiming ad (banner ad).
SWIFT_CLASS("_TtC8ADTiming12ATBannerView")
@interface ATBannerView : UIView
/// the delegate
@property (nonatomic, weak) id <ATBannerViewDelegate> _Nullable delegate;
/// Typed access to the id of the ad placement.
@property (nonatomic, copy) NSString * _Nullable placementId;
/// Typed access to the app’s root view controller.
@property (nonatomic, strong) UIViewController * _Nullable rootViewController;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
/// This is a method to initialize an ATBannerView.
/// \param frame banner position, only use origin. Default is ‘.zero’
///
/// \param adSize The size of the ad. Default is normal
///
- (nonnull instancetype)initWithFrame:(CGRect)frame adSize:(enum ATBannerType)adSize OBJC_DESIGNATED_INITIALIZER;
/// Begins loading the ATBannerView content. And to show when load success.
- (void)loadAndShow;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



@class NSError;

/// The methods declared by the ATBannerViewDelegate protocol allow the adopting delegate to respond
/// to messages from the ATBannerView class and thus respond to operations such as whether the ad has
/// been loaded, the person has clicked the ad.
SWIFT_PROTOCOL("_TtP8ADTiming20ATBannerViewDelegate_")
@protocol ATBannerViewDelegate <NSObject>
/// Sent when an ad has been successfully loaded.
/// \param banner An ATBannerView object sending the message.
///
- (void)atBannerDidLoad:(ATBannerView * _Nonnull)banner SWIFT_AVAILABILITY(ios,introduced=8.0);
@optional
/// Sent after an ATBannerView fails to load the ad.
/// \param banner An ATBannerView object sending the message.
///
/// \param error An error object containing details of the error.
///
- (void)atBanner:(ATBannerView * _Nonnull)banner failWithError:(NSError * _Nonnull)error SWIFT_AVAILABILITY(ios,introduced=8.0);
/// Sent immediately before the impression of an ATBannerView object will be logged.
/// \param banner An ATBannerView object sending the message.
///
- (void)atBannerWillExposure:(ATBannerView * _Nonnull)banner SWIFT_AVAILABILITY(ios,introduced=8.0);
@required
/// Sent after an ad has been clicked by the person.
/// \param banner An ATBannerView object sending the message.
///
- (void)atBannerDidClick:(ATBannerView * _Nonnull)banner SWIFT_AVAILABILITY(ios,introduced=8.0);
@end

/// Download video network environment.
typedef SWIFT_ENUM(NSInteger, ATDownloadEnvironment) {
/// Only WiFi.
  ATDownloadEnvironmentWifi = 0,
/// WiFi or mobile network.
  ATDownloadEnvironmentAll = 1,
};

@protocol ATInterstitialDelegate;

/// A modal view controller to represent a AdTiming interstitial ad. This
/// is a full-screen ad shown in your application.
SWIFT_CLASS("_TtC8ADTiming14ATInterstitial")
@interface ATInterstitial : NSObject
/// the delegate
@property (nonatomic, weak) id <ATInterstitialDelegate> _Nullable delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
/// This is a method to initialize an ATInterstitial matching the given placement id.
/// \param placementId The id of the ad placement.
///
- (nonnull instancetype)init:(NSString * _Nonnull)placementId OBJC_DESIGNATED_INITIALIZER;
/// Begins loading the ATInterstitial content.
/// You can implement <code>interstitialAdDidLoad:</code> and <code>interstitialAd:didFailWithError:</code> methods
/// of <code>ATInterstitialDelegate</code> if you would like to be notified as loading succeeds or fails.
- (void)load;
/// Presents the interstitial ad modally from the specified view controller.
/// You can implement <code>interstitialAdDidClick:</code> and <code>interstitialAdDidClose:</code>
/// methods of <code>ATInterstitialDelegate</code> if you would like to stay informed for thoses events
/// \param viewController The view controller that will be used to present the interstitial ad.
///
- (void)show:(UIViewController * _Nonnull)viewController;
@end


/// The methods declared by the ATInterstitialDelegate protocol allow the adopting delegate to respond
/// to messages from the ATInterstitial class and thus respond to operations such as whether the
/// interstitial ad has been loaded, user has clicked or closed the interstitial.
SWIFT_PROTOCOL("_TtP8ADTiming22ATInterstitialDelegate_")
@protocol ATInterstitialDelegate <NSObject>
/// Sent when an ATInterstitial successfully loads an ad.
/// \param interstitial An ATInterstitial object sending the message.
///
- (void)atInterstitialDidLoad:(ATInterstitial * _Nonnull)interstitial SWIFT_AVAILABILITY(ios,introduced=8.0);
/// Sent when an ATInterstitial failes to load an ad.
/// \param interstitial An ATInterstitial object sending the message.
///
/// \param error An error object containing details of the error.
///
- (void)atInterstitial:(ATInterstitial * _Nonnull)interstitial failWithError:(NSError * _Nonnull)error SWIFT_AVAILABILITY(ios,introduced=8.0);
/// Sent immediately before the impression of an ATInterstitial object will be logged.
/// \param interstitial An ATInterstitial object sending the message.
///
- (void)atInterstitialWillExposure:(ATInterstitial * _Nonnull)interstitial SWIFT_AVAILABILITY(ios,introduced=8.0);
/// Sent after an ad in the ATInterstitial object is clicked. The appropriate app store view or
/// app browser will be launched.
/// \param interstitial An ATInterstitial object sending the message.
///
- (void)atInterstitialDidClick:(ATInterstitial * _Nonnull)interstitial SWIFT_AVAILABILITY(ios,introduced=8.0);
/// Sent after an ATInterstitial object has been dismissed from the screen, returning control
/// to your application.
/// \param interstitial An ATInterstitial object sending the message.
///
- (void)atInterstitialDidClose:(ATInterstitial * _Nonnull)interstitial SWIFT_AVAILABILITY(ios,introduced=8.0);
@end


/// The ATNativeLoader represents ad metadata to allow you to construct custom ad views.
SWIFT_CLASS("_TtC8ADTiming12ATNativeItem")
@interface ATNativeItem : NSObject
/// Typed access to the ad title.
@property (nonatomic, copy) NSString * _Nonnull title;
/// Typed access to the body text, usually a longer description of the ad.
@property (nonatomic, copy) NSString * _Nonnull body;
/// Typed access to the ad icon.
@property (nonatomic, copy) NSString * _Nonnull iconUrl;
/// Typed access to the ad cover image creative.
@property (nonatomic, copy) NSString * _Nonnull imageUrl;
/// Typed access to the call to action phrase of the ad.
@property (nonatomic, copy) NSString * _Nonnull callToAction;
/// Typed access to the hKey.
@property (nonatomic, copy) NSString * _Nonnull hKey;
/// Typed access to the ad star rating.
@property (nonatomic, copy) NSString * _Nonnull adObjectName;
/// Typed access to the ad star rating.
@property (nonatomic) double rating;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

enum ATNativeType : NSInteger;
@protocol ATNativeLoaderDelegate;

/// The ATNativeLoader represents ad metadata to allow you to construct custom ad views.
SWIFT_CLASS("_TtC8ADTiming14ATNativeLoader")
@interface ATNativeLoader : NSObject
/// Typed access to the id of the ad placement.
@property (nonatomic, copy) NSString * _Nullable placementId;
/// The view controller that will be used to present the ad and the app store view.
@property (nonatomic, strong) UIViewController * _Nullable rootViewController;
/// Typed access to the native type.
@property (nonatomic) enum ATNativeType adType;
/// the delegate
@property (nonatomic, weak) id <ATNativeLoaderDelegate> _Nullable delegate;
/// Begins loading the ATNativeLoader content.
/// You can implement <code>nativeAdDidLoad:</code> and <code>nativeAd:didFailWithError:</code> methods
/// of <code>ATNativeLoaderDelegate</code> if you would like to be notified as loading succeeds or fails.
- (void)load;
/// This is a method to associate a FBNativeAd with the UIView you will use to display the native ads.
/// The whole area of the UIView will be clickable.
/// \param view The UIView you created to render all the native ads data elements.
///
- (void)attach:(UIView * _Nonnull)view;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// The methods declared by the ATNativeLoaderDelegate protocol allow the adopting delegate to respond to messages
/// from the ATNativeLoader class and thus respond to operations such as whether the native ad has been loaded.
SWIFT_PROTOCOL("_TtP8ADTiming22ATNativeLoaderDelegate_")
@protocol ATNativeLoaderDelegate <NSObject>
/// Sent when an ATNativeLoader has been successfully loaded.
/// \param native An ATNativeLoader object sending the message.
///
/// \param item update ATNativeView.
///
- (void)atNativeDidLoad:(ATNativeLoader * _Nonnull)native item:(ATNativeItem * _Nonnull)item SWIFT_AVAILABILITY(ios,introduced=8.0);
@optional
/// Sent when an ATNativeLoader is failed to load.
/// \param native An ATNativeLoader object sending the message.
///
/// \param error An error object containing details of the error.
///
- (void)atNative:(ATNativeLoader * _Nonnull)native failWithError:(NSError * _Nonnull)error SWIFT_AVAILABILITY(ios,introduced=8.0);
/// Sent immediately before the impression of an ATNativeLoader object will be logged.
/// \param native An ATNativeLoader object sending the message.
///
- (void)atNativeWillExposure:(ATNativeLoader * _Nonnull)native SWIFT_AVAILABILITY(ios,introduced=8.0);
@required
/// Sent after an ad has been clicked by the person.
/// \param native An ATNativeLoader object sending the message.
///
- (void)atNativeDidClick:(ATNativeLoader * _Nonnull)native SWIFT_AVAILABILITY(ios,introduced=8.0);
@end

/// NativeType
typedef SWIFT_ENUM(NSInteger, ATNativeType) {
/// ad size: 300 x 250
  ATNativeTypeNormal = 0,
/// ad size: 1200 x 627
  ATNativeTypeLarge = 1,
};


/// A customized UIView to represent a ad (native ad).
SWIFT_CLASS("_TtC8ADTiming12ATNativeView")
@interface ATNativeView : UIView
/// This is a method to initialize an ATNativeView.
/// \param frame the ATNativeView frame.
///
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
/// if NativeLoader load success.
/// try init ATNativeView and update with ATNativeItem.
/// \param item ATNative material.
///
- (void)updateWithItem:(ATNativeItem * _Nullable)item;
/// Must use addAd before show NativeAd.
/// If you don’t use this method, we won’t be able to count your income.
/// \param view your AdView.
///
- (void)addAd:(UIView * _Nonnull)view;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8ADTiming5ATSDK")
@interface ATSDK : NSObject
/// current SDK version
+ (NSString * _Nonnull)ATSDKVersion SWIFT_WARN_UNUSED_RESULT;
/// regist SDK with your APP_KEY
/// \param appId your APP_KEY.
///
/// \param success regist success block.
///
+ (void)registSDK:(NSString * _Nullable)appId success:(void (^ _Nullable)(void))success;
/// show debug message in Xcode only on develope mode.
/// \param open default is true.
///
+ (void)setDebugMode:(BOOL)open;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol ATVideoDelegate;

/// A modal view controller to represent a video ad. This
/// is a full-screen ad shown in your application.
SWIFT_CLASS("_TtC8ADTiming7ATVideo")
@interface ATVideo : NSObject
/// Returns the singleton instance.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ATVideo * _Nonnull shared;)
+ (ATVideo * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// the delegate.
@property (nonatomic, weak) id <ATVideoDelegate> _Nullable delegate;
/// Exciting video Id.
@property (nonatomic, copy) NSString * _Nonnull extId;
/// Download video network environment. Default is WiFi.
@property (nonatomic) enum ATDownloadEnvironment environment;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
/// Begins loading the ATVideo content.
/// You can implement <code>videoAdDidLoad:</code> and <code>videoAd:didFailWithError:</code> methods
/// of <code>ATVideoDelegate</code> if you would like to be notified as loading succeeds or fails.
- (void)load:(NSString * _Nonnull)placementId;
/// Presents the video ad modally from the specified view controller.
/// You can implement <code>videoAdDidClick:</code> and <code>videoAdDidClose:</code>
/// methods of <code>ATVideoDelegate</code> if you would like to stay informed for those events.
/// \param viewController The view controller that will be used to present the video ad.
///
/// \param placementId The id of the ad placement.
///
- (void)present:(UIViewController * _Nonnull)viewController placementId:(NSString * _Nonnull)placementId;
/// Returns <code>YES</code> when there is certainty that an ad will be able to play for a given placementId.
/// Returning <code>NO</code>, you can wait a moment or load again.
/// \param placementId The id of the ad placement.
///
- (BOOL)isReady:(NSString * _Nonnull)placementId SWIFT_WARN_UNUSED_RESULT;
@end

enum ATVideoFinishState : NSInteger;

SWIFT_PROTOCOL("_TtP8ADTiming15ATVideoDelegate_")
@protocol ATVideoDelegate <NSObject>
/// Sent when an ad has been successfully loaded.
/// \param video An ATVideo object sending the message.
///
/// \param placementId The id of the ad placement.
///
- (void)atVideoDidLoad:(ATVideo * _Nonnull)video placementId:(NSString * _Nonnull)placementId SWIFT_AVAILABILITY(ios,introduced=8.0);
@optional
/// Sent after an ATVideo fails to load the ad.
/// \param video An ATVideo object sending the message.
///
/// \param placementId The id of the ad placement.
///
/// \param error An error object containing details of the error.
///
- (void)atVideo:(ATVideo * _Nonnull)video placementId:(NSString * _Nonnull)placementId failWithShow:(NSError * _Nonnull)error SWIFT_AVAILABILITY(ios,introduced=8.0);
/// Sent immediately before the impression of an ATVideo object will be logged.
/// \param video An ATVideo object sending the message.
///
/// \param placementId The id of the ad placement.
///
- (void)atVideoStartPlay:(ATVideo * _Nonnull)video placementId:(NSString * _Nonnull)placementId SWIFT_AVAILABILITY(ios,introduced=8.0);
@required
/// Sent after an ATVideo did Finish play.
/// \param video An ATVideo object sending the message.
///
/// \param placementId The id of the ad placement.
///
/// \param finishState An enumeration for the completion state of an ad.
///
- (void)atVideoFinishPlay:(ATVideo * _Nonnull)video placementId:(NSString * _Nonnull)placementId finishState:(enum ATVideoFinishState)finishState SWIFT_AVAILABILITY(ios,introduced=8.0);
/// Sent after an ad has been clicked by the person.
/// \param video An ATVideo object sending the message.
///
/// \param placementId The id of the ad placement.
///
- (void)atVideoDidClick:(ATVideo * _Nonnull)video placementId:(NSString * _Nonnull)placementId SWIFT_AVAILABILITY(ios,introduced=8.0);
@optional
/// Sent after an ATVideo object has been dismissed from the screen, returning control
/// to your application.
/// \param video An ATVideo object sending the message.
///
/// \param placementId The id of the ad placement.
///
- (void)atVideoDidClose:(ATVideo * _Nonnull)video placementId:(NSString * _Nonnull)placementId SWIFT_AVAILABILITY(ios,introduced=8.0);
@end

/// An enumeration for the completion state of an ad.
typedef SWIFT_ENUM(NSInteger, ATVideoFinishState) {
/// A state that indicates that the user skipped the ad.
  ATVideoFinishStateSkipped = 0,
/// A state that indicates that the ad was played entirely.
  ATVideoFinishStateCompleted = 1,
};

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("Campaign")
@interface Campaign : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDate;

@interface Campaign (SWIFT_EXTENSION(ADTiming))
@property (nonatomic) int32_t cid;
@property (nonatomic) int16_t impr_count;
@property (nonatomic, strong) NSDate * _Nullable last_impr;
@end





#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
