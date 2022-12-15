#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef CUBICAUTH_SWIFT_H
#define CUBICAUTH_SWIFT_H
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

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

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
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="CubicAuth",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class Logger;
@class NSString;
enum Environment : NSInteger;
@class ASWebAuthenticationSession;
enum LoggingLevel : NSInteger;
@class JWTInfo;
@class NSHTTPURLResponse;
@protocol ASWebAuthenticationPresentationContextProviding;
@class AuthInfo;
@class NSURLRequest;
@class NSError;
@class WKWebView;

SWIFT_CLASS("_TtC9CubicAuth4Auth")
@interface Auth : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Auth * _Nonnull shared;)
+ (Auth * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) Logger * _Nonnull logger;
@property (nonatomic, readonly, copy) void (^ _Nullable jwtProviderClosureObjC)(SWIFT_NOESCAPE void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable));
@property (nonatomic, readonly) enum Environment currentEnvironment;
@property (nonatomic, readonly, copy) NSString * _Nonnull clientId;
@property (nonatomic, readonly, copy) NSString * _Nonnull clientSecret;
@property (nonatomic, strong) ASWebAuthenticationSession * _Nullable authSession;
@property (nonatomic, copy) NSString * _Nonnull realmName;
@property (nonatomic, copy) NSString * _Nonnull callbackURLScheme;
@property (nonatomic, copy) NSString * _Nonnull scopes;
@property (nonatomic, readonly, copy) NSString * _Nullable currentCountryCode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Set the current logging level.
- (void)setLoggingLevel:(enum LoggingLevel)logLevel;
/// Set the current environment. Will default to <code>dev</code> if not called.
- (void)setEnvironment:(enum Environment)environment;
/// Configure the <code>clientId</code> and <code>clientSecret</code> to be used with the Cubic environment. Please contact Cubic Support if you do not have these.
- (void)setClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret;
/// Add a closure to receive updates for when the <code>JWTInfo</code> is updated. Will immediately trigger a request to update all listeners.
- (void)addJWTInfoUpdateListener:(void (^ _Nonnull)(JWTInfo * _Nullable))jwtInfoUpdateClosure;
/// Please see documentation for <code>updateJWTProviderClosure</code>
- (void)updateJWTProviderClosureObjC:(void (^ _Nullable)(SWIFT_NOESCAPE void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable)))jwtProviderClosureObjC;
/// Returns if there is currently a valid access token or valid refresh token.
- (void)isAuthenticatedWithCompletion:(void (^ _Nonnull)(BOOL))completion;
/// Fetch the <code>JWTInfo</code> that is currently stored locally. This is a manual fetch as opposed to configuring a listener with <code>addJWTInfoUpdateListener</code>.
- (void)fetchLocalJWTInfoWithCompletion:(void (^ _Nonnull)(JWTInfo * _Nullable))completion;
/// Fetch the <code>JWTInfo</code> that is currently stored locally. This is a manual fetch as opposed to configuring a listener with <code>addJWTInfoUpdateListener</code>.
- (void)fetchLocalNamedJWTInfoWithCompletion:(void (^ _Nonnull)(JWTInfo * _Nullable))completion;
/// Remove local authentication info stored for current authentication session. Does not affect browser cookies, so an ephemeral login/registration session might be required for fresh session to begin.
- (void)logout;
/// See documentation for <code>retrieveAndRefreshTokenIfNeeded</code>
- (void)retrieveAndRefreshTokenIfNeededObjCWithCanUseAnonymous:(BOOL)canUseAnonymous completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
/// Update all JWTInfo update closures added by the <code>addJWTInfoUpdateListener()</code> function.
- (void)requestJWTInfoUpdate;
/// Retrieve anonymous ID if one is stored locally.
- (NSString * _Nullable)getAnonymousId SWIFT_WARN_UNUSED_RESULT;
- (void)handleNetworkResponse:(NSHTTPURLResponse * _Nullable)response;
- (void)handleRefreshReseponse:(NSHTTPURLResponse * _Nonnull)response;
/// See documentation for <code>createLogin</code>.
- (void)createLoginObjCWithPresentationContextProvider:(id <ASWebAuthenticationPresentationContextProviding> _Nullable)presentationContextProvider prefersEphemeralWebBrowserSession:(BOOL)prefersEphemeralWebBrowserSession authSessionGeneration:(void (^ _Nonnull)(ASWebAuthenticationSession * _Nonnull))authSessionGeneration authCompletion:(void (^ _Nonnull)(AuthInfo * _Nullable, NSError * _Nullable))authCompletion SWIFT_AVAILABILITY(ios,introduced=13.0);
/// See documentation for <code>createLogin</code>.
- (void)createLoginObjCWithPrefersEphemeralWebBrowserSession:(BOOL)prefersEphemeralWebBrowserSession authSessionGeneration:(void (^ _Nonnull)(ASWebAuthenticationSession * _Nonnull))authSessionGeneration authCompletion:(void (^ _Nonnull)(AuthInfo * _Nullable, NSError * _Nullable))authCompletion;
/// See documentation for <code>createRegistration</code>.
- (void)createRegistrationObjCWithPresentationContextProvider:(id <ASWebAuthenticationPresentationContextProviding> _Nullable)presentationContextProvider prefersEphemeralWebBrowserSession:(BOOL)prefersEphemeralWebBrowserSession authSessionGeneration:(void (^ _Nonnull)(ASWebAuthenticationSession * _Nonnull))authSessionGeneration authCompletion:(void (^ _Nonnull)(AuthInfo * _Nullable, NSError * _Nullable))authCompletion SWIFT_AVAILABILITY(ios,introduced=13.0);
/// See documentation for <code>createRegistration</code>.
- (void)createRegistrationObjCWithPrefersEphemeralWebBrowserSession:(BOOL)prefersEphemeralWebBrowserSession authSessionGeneration:(void (^ _Nonnull)(ASWebAuthenticationSession * _Nonnull))authSessionGeneration authCompletion:(void (^ _Nonnull)(AuthInfo * _Nullable, NSError * _Nullable))authCompletion;
/// Create a <code>URLRequest</code> pointed to the currently logged in user’s profile page. Refreshes token if refresh token is available. Returns error if anonymous or no user is authenticated.
- (void)accountPageURLRequestWithCompletion:(void (^ _Nonnull)(NSURLRequest * _Nullable, NSError * _Nullable))completion;
/// Create a <code>WKWebView</code> loaded to the currently logged in user’s profile page. Refreshes token if refresh token is available. Returns error if anonymous or no user is authenticated.
- (void)accountPageWithCompletion:(void (^ _Nonnull)(WKWebView * _Nullable, NSError * _Nullable))completion;
/// Performs a username+password login.
/// \param username Username for the account.
///
/// \param password Password for the account.
///
/// \param completion Returns the <code>AuthInfo</code> on success, or an <code>Error</code>  on failure.
///
- (void)loginWithUsername:(NSString * _Nonnull)username password:(NSString * _Nonnull)password completion:(void (^ _Nonnull)(AuthInfo * _Nullable, NSError * _Nullable))completion;
/// Performs a logout on the backend, and if successful, removes local credentials.
- (void)logoutFromSessionWithCompletion:(void (^ _Nonnull)(NSError * _Nullable))completion;
/// Get the device identifier used by TouchPass, and check for a saved device identifier from the legacy app to use first.
- (void)deviceIdWithCompletion:(void (^ _Nonnull)(NSInteger, NSArray<NSError *> * _Nonnull))completion;
/// Select country to route network calls against.
/// <ul>
///   <li>
///     Parameters:
///     - countryCode: Two-letter code representing the country e.g. “us” for United States.
///     - cacheSelection: Stores countryCode to UserDefaults so it persists on next launch. Default value is <code>true</code>.
///   </li>
/// </ul>
- (void)selectCountryCode:(NSString * _Nullable)countryCode cacheSelection:(BOOL)cacheSelection;
/// Check if country code is on different instance than the currently selected country, assuming GUD has already been fetched.
/// <ul>
///   <li>
///     Parameters:
///     - countryCode: Two-letter code representing the country e.g. “us” for United States.
///   </li>
/// </ul>
- (BOOL)countryCodeIsOnDifferentInstanceFromCurrentWithCountryCode:(NSString * _Nonnull)countryCode SWIFT_WARN_UNUSED_RESULT;
/// Check if country code is on different instance than the second country, assuming GUD has already been fetched.
/// <ul>
///   <li>
///     Parameters:
///     - firstCountryCode: Two-letter code representing the country e.g. “us” for United States.
///     - secondCountryCode: Two-letter code representing the other country e.g. “ca” for Canada.
///   </li>
/// </ul>
- (BOOL)countryCodesAreOnDifferentInstancesWithFirstCountryCode:(NSString * _Nonnull)firstCountryCode secondCountryCode:(NSString * _Nonnull)secondCountryCode SWIFT_WARN_UNUSED_RESULT;
/// Get the two-letter country codes for all countries fetched from the hosted GUD file, assuming it has already been fetched.
/// <ul>
///   <li>
///     Parameters:
///     - countryCode: Two-letter code representing the country e.g. “us” for United States.
///   </li>
/// </ul>
- (NSArray<NSString *> * _Nonnull)countryCodesFetched SWIFT_WARN_UNUSED_RESULT;
@end

enum URLType : NSInteger;

@interface Auth (SWIFT_EXTENSION(CubicAuth))
- (NSString * _Nonnull)idPrefixWithEnvironment:(enum Environment)environment SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)apiPrefixWithEnvironment:(enum Environment)environment SWIFT_WARN_UNUSED_RESULT;
/// See documentation for <code>url(countryCode: String? = nil, type: GUD.URLType, completion: @escaping URLStringCompletion)</code>
- (void)urlObjCWithType:(enum URLType)type completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
@end

@class NSNumber;

SWIFT_CLASS("_TtC9CubicAuth8AuthInfo")
@interface AuthInfo : NSObject
@property (nonatomic, copy) NSString * _Nullable accessToken;
@property (nonatomic, copy) NSString * _Nullable refreshToken;
@property (nonatomic, readonly, copy) NSString * _Nullable tokenType;
@property (nonatomic, readonly, copy) NSString * _Nullable idToken;
@property (nonatomic, readonly, strong) NSNumber * _Nullable notBeforePolicyObjC;
@property (nonatomic, readonly, copy) NSString * _Nullable sessionState;
@property (nonatomic, readonly, copy) NSString * _Nullable scope;
@property (nonatomic, readonly) BOOL isAnonymous;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


typedef SWIFT_ENUM(NSInteger, Environment, open) {
  EnvironmentProd = 0,
  EnvironmentSandbox = 1,
  EnvironmentDev = 2,
  EnvironmentMoovit = 3,
};


SWIFT_CLASS("_TtC9CubicAuth7JWTInfo")
@interface JWTInfo : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable cubicId;
@property (nonatomic, readonly, copy) NSString * _Nullable preferredUsername;
@property (nonatomic, readonly, copy) NSString * _Nullable email;
@property (nonatomic, readonly, copy) NSString * _Nullable firstName;
@property (nonatomic, readonly, copy) NSString * _Nullable lastName;
@property (nonatomic, readonly) BOOL isAnonymous;
@property (nonatomic, readonly) BOOL isTokenValid;
@property (nonatomic, readonly) BOOL isRefreshTokenValid;
@property (nonatomic, readonly, copy) NSString * _Nullable orgAPIToken;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC9CubicAuth6Logger")
@interface Logger : NSObject
@property (nonatomic) enum LoggingLevel currentLevel;
- (void)log:(NSString * _Nonnull)message level:(enum LoggingLevel)level;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, LoggingLevel, open) {
  LoggingLevelNone = 0,
  LoggingLevelError = 1,
  LoggingLevelInfo = 2,
};

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
