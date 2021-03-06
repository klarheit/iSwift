// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import QuartzCore;
@import AppKit;
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface CALayer (SWIFT_EXTENSION(Bond))
@end


@interface NSButton (SWIFT_EXTENSION(Bond))
@end


@interface NSColorWell (SWIFT_EXTENSION(Bond))
@end


@interface NSControl (SWIFT_EXTENSION(Bond))
@end


SWIFT_CLASS("_TtC4Bond19NSControlBondHelper")
@interface NSControlBondHelper : NSObject
@property (nonatomic, weak) NSControl * __nullable control;
@property (nonatomic, readonly, copy) void (^ __nonnull sink)(id __nullable);
- (nonnull instancetype)initWithControl:(NSControl * __nonnull)control sink:(void (^ __nonnull)(id __nullable))sink OBJC_DESIGNATED_INITIALIZER;
- (void)eventHandler:(NSControl * __nullable)sender;
@end


@interface NSImageView (SWIFT_EXTENSION(Bond))
@end


@interface NSIndexSet (SWIFT_EXTENSION(Bond))
- (nonnull instancetype)initWithSet:(NSSet<NSNumber *> * __nonnull)set;
@end


@interface NSLayoutConstraint (SWIFT_EXTENSION(Bond))
@end


@interface NSLock (SWIFT_EXTENSION(Bond))
- (nonnull instancetype)initWithName:(NSString * __nonnull)name;
@end


@interface NSMenuItem (SWIFT_EXTENSION(Bond))
@end


@interface NSNotificationCenter (SWIFT_EXTENSION(Bond))
@end


@interface NSObject (SWIFT_EXTENSION(Bond))
@end


@interface NSObject (SWIFT_EXTENSION(Bond))
@property (nonatomic, copy) NSDictionary<NSString *, id> * __nonnull bnd_associatedObservables;
@end


@interface NSRecursiveLock (SWIFT_EXTENSION(Bond))
- (nonnull instancetype)initWithName:(NSString * __nonnull)name;
@end


@interface NSStatusBarButton (SWIFT_EXTENSION(Bond))
@end


@interface NSTableView (SWIFT_EXTENSION(Bond))
@end


@interface NSTextField (SWIFT_EXTENSION(Bond))
@end


@interface NSTextView (SWIFT_EXTENSION(Bond))
@end

#pragma clang diagnostic pop
