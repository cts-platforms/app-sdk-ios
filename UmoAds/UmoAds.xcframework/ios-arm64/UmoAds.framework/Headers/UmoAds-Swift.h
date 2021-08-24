// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef UMOADS_SWIFT_H
#define UMOADS_SWIFT_H
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
#include <Foundation/Foundation.h>
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import WebKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="UmoAds",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;

SWIFT_CLASS("_TtC6UmoAds13AKBrowserView")
@interface AKBrowserView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIGestureRecognizer;
@class WKWebViewConfiguration;
@class WKNavigationAction;
@class WKWindowFeatures;
@class WKNavigationResponse;
@class WKNavigation;
@class WKUserContentController;
@class WKScriptMessage;

SWIFT_CLASS("_TtC6UmoAds9AKWebView")
@interface AKWebView : WKWebView <UIGestureRecognizerDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate>
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (WKWebView * _Nullable)webView:(WKWebView * _Nonnull)webView createWebViewWithConfiguration:(WKWebViewConfiguration * _Nonnull)configuration forNavigationAction:(WKNavigationAction * _Nonnull)navigationAction windowFeatures:(WKWindowFeatures * _Nonnull)windowFeatures SWIFT_WARN_UNUSED_RESULT;
- (void)webViewDidClose:(WKWebView * _Nonnull)webView;
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationResponse:(WKNavigationResponse * _Nonnull)navigationResponse decisionHandler:(void (^ _Nonnull)(WKNavigationResponsePolicy))decisionHandler;
- (void)webViewWebContentProcessDidTerminate:(WKWebView * _Nonnull)webView;
- (void)webView:(WKWebView * _Nonnull)webView didCommitNavigation:(WKNavigation * _Nonnull)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didReceiveServerRedirectForProvisionalNavigation:(WKNavigation * _Nonnull)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didStartProvisionalNavigation:(WKNavigation * _Nonnull)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Nonnull)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFailNavigation:(WKNavigation * _Nonnull)navigation withError:(NSError * _Nonnull)error;
- (void)webView:(WKWebView * _Nonnull)webView didFailProvisionalNavigation:(WKNavigation * _Nonnull)navigation withError:(NSError * _Nonnull)error;
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
- (nonnull instancetype)initWithFrame:(CGRect)frame configuration:(WKWebViewConfiguration * _Nonnull)configuration SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC6UmoAds12AKHtmlAdView")
@interface AKHtmlAdView : AKWebView
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
@end


SWIFT_CLASS("_TtC6UmoAds18AKInterstitialView")
@interface AKInterstitialView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC6UmoAds13AKProgressHUD")
@interface AKProgressHUD : UIView
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end




/// Class which implements the various <code>URLSessionDelegate</code> methods to connect various Alamofire features.
SWIFT_CLASS("_TtC6UmoAds17AKSessionDelegate")
@interface AKSessionDelegate : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSURLSession;

@interface AKSessionDelegate (SWIFT_EXTENSION(UmoAds)) <NSURLSessionDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session didBecomeInvalidWithError:(NSError * _Nullable)error;
@end

@class NSURLSessionDataTask;
@class NSCachedURLResponse;

@interface AKSessionDelegate (SWIFT_EXTENSION(UmoAds)) <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask willCacheResponse:(NSCachedURLResponse * _Nonnull)proposedResponse completionHandler:(void (^ _Nonnull)(NSCachedURLResponse * _Nullable))completionHandler;
@end

@class NSURLSessionDownloadTask;

@interface AKSessionDelegate (SWIFT_EXTENSION(UmoAds)) <NSURLSessionDownloadDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didResumeAtOffset:(int64_t)fileOffset expectedTotalBytes:(int64_t)expectedTotalBytes;
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didWriteData:(int64_t)bytesWritten totalBytesWritten:(int64_t)totalBytesWritten totalBytesExpectedToWrite:(int64_t)totalBytesExpectedToWrite;
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didFinishDownloadingToURL:(NSURL * _Nonnull)location;
@end

@class NSURLSessionTask;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;
@class NSInputStream;
@class NSHTTPURLResponse;
@class NSURLSessionTaskMetrics;

@interface AKSessionDelegate (SWIFT_EXTENSION(UmoAds)) <NSURLSessionTaskDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task needNewBodyStream:(void (^ _Nonnull)(NSInputStream * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didFinishCollectingMetrics:(NSURLSessionTaskMetrics * _Nonnull)metrics;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session taskIsWaitingForConnectivity:(NSURLSessionTask * _Nonnull)task SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13);
@end


SWIFT_CLASS("_TtC6UmoAds13AKVPaidBridge")
@interface AKVPaidBridge : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6UmoAds16AKVPaidConstants")
@interface AKVPaidConstants : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6UmoAds14AKVPaidWebView")
@interface AKVPaidWebView : AKWebView
- (void)webView:(WKWebView * _Nonnull)webView didCommitNavigation:(WKNavigation * _Nonnull)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Nonnull)navigation;
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
@end



SWIFT_CLASS_NAMED("AdInsertionInfo")
@interface AdInsertionInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class BaseAdView;

/// Listener for all ad instances.
SWIFT_PROTOCOL("_TtP6UmoAds10AdListener_")
@protocol AdListener
/// Callback for when an ad is loaded successfully.
/// \param adSlotId The ad slot identifier that was loaded successfully.
///
/// \param adInsertionId The ad slot insertion identifier that was returned.
///
/// \param rendered Indicates whether the ad was rendered successfully or not.
///
/// \param adView The <code>AdView</code> instance that loaded successfully.
///
- (void)onAdLoadSuccessWithAdSlotId:(NSString * _Nonnull)adSlotId adInsertionId:(NSString * _Nonnull)adInsertionId rendered:(BOOL)rendered adView:(BaseAdView * _Nonnull)adView;
/// Callback for when an Ad fails to load.
/// \param adSlotId The ad slot identifier that failed to load.
///
/// \param error The reason for the failure of the ad to load.
///
/// \param adView The <code>AdView</code> instance that failed to load.
///
- (void)onAdLoadErrorWithAdSlotId:(NSString * _Nonnull)adSlotId error:(NSError * _Nonnull)error adView:(BaseAdView * _Nonnull)adView;
/// Callback for when an ad is clicked.
/// If an <code>AdViewListener</code> is implemented, that callback’s return value will be prioritized over this callback’s return value.
/// \param adSlotId The ad slot identifier that was clicked.
///
/// \param url The <code>URL</code> that the ad links to. Will only be nil if the URL string could not be composed into a <code>URL</code> instance.
///
/// \param urlString The URL string to be opened upon ad click.
///
/// \param adView The <code>AdView</code> instance that was clicked.
///
///
/// returns:
///
/// <ul>
///   <li>
///     True if the SDK should handle opening the <code>URL</code> in the default web browser via <code>UIApplication.shared</code>, false if the application will handle the opening of the <code>URL</code>.
///   </li>
/// </ul>
- (BOOL)onAdClickShouldOpenLinkWithAdSlotId:(NSString * _Nonnull)adSlotId url:(NSURL * _Nullable)url urlString:(NSString * _Nonnull)urlString adView:(BaseAdView * _Nonnull)adView SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS_NAMED("AdPostInteractionInfo")
@interface AdPostInteractionInfo : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("AdPostInteractionResponseInfo")
@interface AdPostInteractionResponseInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("AdResponseInfo")
@interface AdResponseinfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


typedef SWIFT_ENUM(NSInteger, AdSize, open) {
  AdSizeMobileBanner = 0,
  AdSizeLargeMobileBanner = 1,
  AdSizeMediumRectangle = 2,
  AdSizeHtml = 3,
  AdSizeNone = 4,
};

@class UMOAdKit;
@class UMOAdKitParams;

SWIFT_CLASS("_TtC6UmoAds3Ads")
@interface Ads : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Ads * _Nonnull shared;)
+ (Ads * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) void (^ _Nullable jwtTokenProviderObjC)(SWIFT_NOESCAPE void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable));
@property (nonatomic, readonly, strong) id <AdListener> _Nullable adListener;
@property (nonatomic, strong) UMOAdKit * _Nullable umoAdKit;
@property (nonatomic, strong) UMOAdKitParams * _Nonnull umoAdKitParams;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum LoggingLevel : NSInteger;

@interface Ads (SWIFT_EXTENSION(UmoAds))
/// Assign a level of logging to be displayed in the debugger.
/// \param level The <code>LoggingLevel</code> to set. Any log statement at or below the set level will be displayed. Default is <code>.none</code>.
///
- (void)setLoggerLevel:(enum LoggingLevel)level;
@end

@class CLLocation;

@interface Ads (SWIFT_EXTENSION(UmoAds))
/// Update the last known location of the device.
/// Better-targeted ads can be served with a known location.
/// \param location The last known location of the device.
///
- (void)updateLastKnownLocation:(CLLocation * _Nonnull)location;
@end





enum Environment : NSInteger;

@interface Ads (SWIFT_EXTENSION(UmoAds))
/// Set identifiers provided by Cubic in order to use the SDK. Please contact Cubic support if you do not have these values.
- (void)setClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret;
/// Set a JWT token provider that will be called whenever the JWT will expire soon or already has expired. If not already authenticated, will be called upon immediately to asynchronously provide a JWT token.
/// \param jwtTokenProvider The token provider closure that will be called upon to asynchronously request a JWT token for authentication. Pass <code>nil</code> to return to anonymous authentication.
///
- (void)setJWTTokenProviderObjCWithJwtTokenProvider:(void (^ _Nullable)(SWIFT_NOESCAPE void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable)))jwtTokenProvider;
/// Sign out of the current session.
/// If an ad is loaded after logout occurs but before a new JWT token is set manually, an anonymous session will be started to load the ad.
- (void)logout;
/// Check if the session is currently authenticated.
- (void)isAuthenticatedWithCompletion:(void (^ _Nonnull)(BOOL))completion;
/// Set environment
- (void)setEnvironment:(enum Environment)environment;
/// Return the anonymous ID of the most recent anonymous session.
/// If the user has been logged in anonymously, there will be an anonymousId assigned by server. An anonymous login occurs when an ad was request to load, the client ID and client secret were set, and the JWT token was not set manually.
- (NSString * _Nullable)getAnonymousId SWIFT_WARN_UNUSED_RESULT;
@end

@class UMOAdKitBannerParams;
enum UMOAdKitBannerType : NSInteger;
@class UMOAdKitBannerView;
@class UIImage;

@interface Ads (SWIFT_EXTENSION(UmoAds))
- (void)fetchInitializationParametersObjCWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Assign a name of the hosted configuration file if it is unique to your environment. If needed, must be assigned before taking other actions.
- (void)configureConfigName:(NSString * _Nonnull)configName;
- (void)prefetchAdObjCWithSpotId:(NSString * _Nonnull)spotId hostedParamsOverride:(UMOAdKitBannerParams * _Nullable)hostedParamsOverride bannerType:(enum UMOAdKitBannerType)bannerType completion:(void (^ _Nonnull)(NSError * _Nullable))completion;
/// Convenience method to generate default banner parameters for a smart banner. These can be used as-is for a smart banner, but any values can be overwritten as needed.
/// \param spotId The identifier of the ad for the particular spot this ad is being inserted. Should be unique for each location an ad is displayed in your app.
///
/// \param bannerType The type of banner to be generated.
///
- (UMOAdKitBannerParams * _Nonnull)generateHostedBannerParamsWithSpotId:(NSString * _Nonnull)spotId bannerType:(enum UMOAdKitBannerType)bannerType SWIFT_WARN_UNUSED_RESULT;
/// Get an already cached or generate a new banner view.
/// \param spotId The identifier of the ad for the particular spot this ad is being inserted. Should be unique for each location an ad is displayed in your app.
///
- (UMOAdKitBannerView * _Nonnull)getOrGenerateBannerAdWithSpotId:(NSString * _Nonnull)spotId SWIFT_WARN_UNUSED_RESULT;
- (void)parentViewControllerDeinitializingForObjCWithAdView:(UMOAdKitBannerView * _Nonnull)adView completion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)parentViewControllerAppearingForObjCWithAdView:(UMOAdKitBannerView * _Nonnull)adView completion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)loadAdWithAdView:(BaseAdView * _Nonnull)adView completion:(void (^ _Nullable)(NSString * _Nullable, NSError * _Nullable))completion;
/// Assign a placeholder <code>UIImage</code> to a particular advertisement size.
/// The placeholder will be displayed until the intended advertisement loads or if the intended advertisement fails to load.
/// \param adSize The <code>AdSize</code> that the placeholder will be used for.
///
/// \param placeholder The <code>UIImage</code> to be used as a placeholder.
///
- (void)setPlaceholderImageWithAdSize:(enum AdSize)adSize placeholder:(UIImage * _Nonnull)placeholder;
/// Retrieve the <code>UIImage</code> assigned to a particular advertisement size, if any placeholder was assigned.
/// \param adSize The <code>AdSize</code> to retrieve the placeholder image for.
///
- (UIImage * _Nullable)placeholderImageWithAdSize:(enum AdSize)adSize SWIFT_WARN_UNUSED_RESULT;
/// Set a universal <code>AdListener</code> that will receive success or failure callbacks when any ad is loaded.
/// Creates a weak reference to the <code>AdListener</code>, and it will receive success or failure calls on both manual loads and automatic refreshes.
/// \param adListener The <code>AdListener</code> to receive success and failure callbacks.
///
- (void)setUniversalAdListener:(id <AdListener> _Nonnull)adListener;
/// Updates the region identifier that ads should be retrieved from.
/// If the region identifier is different from the previously set identifier, all ads still in memory will be reloaded with the new region identifier.
/// \param regionId The region identifier to update to.
///
/// \param shouldRefreshAllAds If <code>true</code>, will reload every ad currently in memory. Default value is <code>true</code>.
///
- (void)updateRegionId:(uint64_t)regionId shouldRefreshAllAds:(BOOL)shouldRefreshAllAds;
/// Remove all cached HTML ad files.
- (void)clearCache;
@end

@class NSLayoutConstraint;

SWIFT_CLASS("_TtC6UmoAds10BaseAdView")
@interface BaseAdView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
/// Add a width constraint with multiplier against height anchor in the ratio defined by the <code>AdSize</code> specified upon initialization.
/// Creation code: <code>widthAnchor.constraint(equalTo: heightAnchor, multiplier: adSize.size.width / adSize.size.height)</code>
///
/// returns:
///
/// <ul>
///   <li>
///     The constraint created and activated.
///   </li>
/// </ul>
- (NSLayoutConstraint * _Nonnull)addAspectRatioConstraints;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end





typedef SWIFT_ENUM(NSInteger, Environment, open) {
  EnvironmentProd = 0,
  EnvironmentSandbox = 1,
  EnvironmentDev = 2,
  EnvironmentMoovit = 3,
};



SWIFT_CLASS_NAMED("GPSCoordinates")
@interface GPSCoordinates : NSObject
@property (nonatomic) double lat;
@property (nonatomic) double lon;
@property (nonatomic) double ele;
@property (nonatomic) double acc;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6UmoAds13GenericAdView")
@interface GenericAdView : BaseAdView
- (nonnull instancetype)initWithAdSlotId:(NSString * _Nonnull)adSlotId adSize:(enum AdSize)adSize OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


typedef SWIFT_ENUM(NSInteger, LoggingLevel, open) {
  LoggingLevelNone = 0,
  LoggingLevelError = 1,
  LoggingLevelInfo = 2,
};


















/// Singleton class that implements the APIs that can be called by the application.
/// These are the set of functions (APIs) that are exposed by the UMO Ad Kit
/// for use by the Mobile Application that integrates the Ad Kit.
SWIFT_CLASS_NAMED("UMOAdKit")
@interface UMOAdKit : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6UmoAds21UMOAdKitAdQueryParams")
@interface UMOAdKitAdQueryParams : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6UmoAds20UMOAdKitBannerParams")
@interface UMOAdKitBannerParams : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// Enumerations specifying various banner types supported by the UMO Ad Kit.
/// Naming convention: BANNERNAME_WxH_IABNewAdPortfolioAdUnitName
typedef SWIFT_ENUM(NSInteger, UMOAdKitBannerType, open) {
  UMOAdKitBannerTypeNONE = 0,
  UMOAdKitBannerTypeMEDRECT_300x250_1x1 = 1,
  UMOAdKitBannerTypeLEADERBOARD_300x50_6x1 = 2,
  UMOAdKitBannerTypeLEADERBOARD_320x50_6x1 = 3,
  UMOAdKitBannerTypeLARGE_320x100 = 4,
  UMOAdKitBannerTypeSQUARE_250x250 = 5,
  UMOAdKitBannerTypeSMALLSQUARE_200x200 = 6,
  UMOAdKitBannerTypeFULLSIZE_468x60 = 7,
  UMOAdKitBannerTypeLEADERBOARD_728x90_8x1 = 8,
  UMOAdKitBannerTypeBILLBOARD_970x250 = 9,
  UMOAdKitBannerTypeSUPERLEADERBOARD_970x90 = 10,
  UMOAdKitBannerTypePORTRAIT_300x1050 = 11,
  UMOAdKitBannerTypeSKYSCRAPER_160x600 = 12,
  UMOAdKitBannerTypeTWENTYxSIXTY_120x60 = 13,
  UMOAdKitBannerTypeSMART_SWxH = 14,
  UMOAdKitBannerTypeADAPTIVE_GWxAH = 15,
  UMOAdKitBannerTypeCUSTOM_GWxGH = 16,
  UMOAdKitBannerTypeINTERSTITIAL_640x1136 = 17,
  UMOAdKitBannerTypeINTERSTITIAL_750x1334 = 18,
  UMOAdKitBannerTypeINTERSTITIAL_1080x1920 = 19,
};


/// UI View that displays a single Banner ad.
/// The application need to perform the following for displaying a banner:
/// 1. Create an instance of UMOAdKitBannerView
/// 2. Add it appropriately to the view hierarchy, where it expects the banner to be displayed
/// 3. Set the banner parameters, as required.
/// 4. Call appropriate APIs exposed by UMOAdKitBannerView, as required.
/// The UMO Ad Kit would perform the following:
/// 1. Fetches a banner ad, when the application calls umoAdKitFetchBanner (doesn’t display it after fetching)
/// 2. Display a banner ad, if prefetched banner is available. Else, fetches and displays a banner ad
/// when the application calls umoAdKitShowBanner()
/// 3. Refreshes a banner ad when the application calls umoAdKitRefreshBanner()
/// 4. Removes a banner ad when the application calls umoAdKitRemoveBanner()
/// NOTE: The Application should make a note of the following:
/// 1. When bannerCreativeType is UMOAdKitInlineBannerCreativeType is IMAGE & bannerType is not CUSTOM_GWxGH:
/// - The BannerView’s layout params would be set by the Ad Kit based on the bannerType
/// opted by the application, whenever umoAdKitFetchBanner (or) umoAdKitShowBanner gets called.
/// 2. When bannerCreativeType is UMOAdKitInlineBannerCreativeType is IMAGE & bannerType is CUSTOM_GWxGH:
/// - The BannerView’s layout params should be set by the application prior to calling
/// umoAdKitFetchBanner (or) umoAdKitShowBanner.
/// - Valid values for WIDTH & HEIGHT: Any non-negative Width & Height, as required
/// by the application (or) WRAP_CONTENT
/// 3. (YET TO BE SUPPORTED IN AD KIT) When bannerCreativeType is UMOAdKitInlineBannerCreativeType is IMAGE &
/// bannerType is not ADAPTIVE_GWxAH:
/// - The application is expected to obtain the bannerview height from the Ad Kit
/// by providing the required width as input to the corresponding Ad Kit API.
/// - The BannerView’s layout params should be set by the application prior to calling
/// umoAdKitFetchBanner (or) umoAdKitShowBanner.
/// 4. When bannerCreativeType is UMOAdKitInlineBannerCreativeType is VIDEO:
/// - The BannerView’s layout params should be set by the application prior to calling
/// umoAdKitFetchBanner (or) umoAdKitShowBanner.
/// - Valid values for WIDTH & HEIGHT: Any non-negative Width & Height, as required
/// by the application (or) WRAP_CONTENT
/// - The Ad Kit would ignore the banner type in this case, even if set by the application.
SWIFT_CLASS("_TtC6UmoAds18UMOAdKitBannerView")
@interface UMOAdKitBannerView : UIView <UIGestureRecognizerDelegate>
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) CGRect frame;
@property (nonatomic) CGRect bounds;
- (void)didMoveToWindow;
@end


SWIFT_CLASS("_TtC6UmoAds14UMOAdKitParams")
@interface UMOAdKitParams : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6UmoAds20UMOAdKitRollAdParams")
@interface UMOAdKitRollAdParams : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
