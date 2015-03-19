/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TApplicationException.h"
#import "TProtocolException.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TObjective-C.h"
#import "TBase.h"
#import "TAsyncTransport.h"
#import "TProtocolFactory.h"
#import "TBaseClient.h"


@interface asdfAuthenticationEnvelope : NSObject <TBase, NSCoding> {
  NSString * __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) NSString * token;
#endif

- (id) init;
- (id) initWithToken: (NSString *) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) token;
- (void) setToken: (NSString *) token;
#endif
- (BOOL) tokenIsSet;

@end

@protocol asdfAuthenticatedService <NSObject>
- (int32_t) ping: (asdfAuthenticationEnvelope *) envelope;  // throws TException
@end

@interface asdfAuthenticatedServiceClient : TBaseClient <asdfAuthenticatedService> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface asdfAuthenticatedServiceProcessor : NSObject <TProcessor> {
  id <asdfAuthenticatedService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithAuthenticatedService: (id <asdfAuthenticatedService>) service;
- (id<asdfAuthenticatedService>) service;
@end

@protocol asdfAuthenticatedServiceAsync <NSObject>
- (void) ping: (asdfAuthenticationEnvelope *) envelope response: (void (^)(int32_t)) responseBlock failure : (TAsyncFailureBlock) failureBlock;
@end

@interface asdfAuthenticatedServiceClientAsync : TBaseClient <asdfAuthenticatedServiceAsync> {
id <TAsyncTransport> asyncTransport;
}
- (id) initWithProtocolFactory: (id <TProtocolFactory>) factory transport: (id <TAsyncTransport>) transport;
@end

@protocol asdfAuthenticatedService1 <NSObject>
- (int32_t) ping11: (asdfAuthenticationEnvelope *) envelope;  // throws TException
- (int32_t) ping12: (asdfAuthenticationEnvelope *) envelope;  // throws TException
@end

@interface asdfAuthenticatedService1Client : TBaseClient <asdfAuthenticatedService1> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface asdfAuthenticatedService1Processor : NSObject <TProcessor> {
id <asdfAuthenticatedService1> mService;
NSDictionary * mMethodMap;
}
- (id) initWithAuthenticatedService1: (id <asdfAuthenticatedService1>) service;
- (id<asdfAuthenticatedService1>) service;
@end

@protocol asdfAuthenticatedService1Async <NSObject>
- (void) ping11: (asdfAuthenticationEnvelope *) envelope response: (void (^)(int32_t)) responseBlock failure : (TAsyncFailureBlock) failureBlock;
- (void) ping12: (asdfAuthenticationEnvelope *) envelope response: (void (^)(int32_t)) responseBlock failure : (TAsyncFailureBlock) failureBlock;
@end

@interface asdfAuthenticatedService1ClientAsync : TBaseClient <asdfAuthenticatedService1Async> {
id <TAsyncTransport> asyncTransport;
}
- (id) initWithProtocolFactory: (id <TProtocolFactory>) factory transport: (id <TAsyncTransport>) transport;
@end

@protocol asdfAuthenticatedService2 <NSObject>
- (int32_t) ping21: (asdfAuthenticationEnvelope *) envelope;  // throws TException
- (int32_t) ping22: (asdfAuthenticationEnvelope *) envelope;  // throws TException
@end

@interface asdfAuthenticatedService2Client : TBaseClient <asdfAuthenticatedService2> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface asdfAuthenticatedService2Processor : NSObject <TProcessor> {
id <asdfAuthenticatedService2> mService;
NSDictionary * mMethodMap;
}
- (id) initWithAuthenticatedService2: (id <asdfAuthenticatedService2>) service;
- (id<asdfAuthenticatedService2>) service;
@end

@protocol asdfAuthenticatedService2Async <NSObject>
- (void) ping21: (asdfAuthenticationEnvelope *) envelope response: (void (^)(int32_t)) responseBlock failure : (TAsyncFailureBlock) failureBlock;
- (void) ping22: (asdfAuthenticationEnvelope *) envelope response: (void (^)(int32_t)) responseBlock failure : (TAsyncFailureBlock) failureBlock;
@end

@interface asdfAuthenticatedService2ClientAsync : TBaseClient <asdfAuthenticatedService2Async> {
id <TAsyncTransport> asyncTransport;
}
- (id) initWithProtocolFactory: (id <TProtocolFactory>) factory transport: (id <TAsyncTransport>) transport;
@end

@protocol asdfAuthenticatedService3 <NSObject>
- (int32_t) ping31: (asdfAuthenticationEnvelope *) envelope;  // throws TException
- (int32_t) ping32: (asdfAuthenticationEnvelope *) envelope;  // throws TException
@end

@interface asdfAuthenticatedService3Client : TBaseClient <asdfAuthenticatedService3> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface asdfAuthenticatedService3Processor : NSObject <TProcessor> {
id <asdfAuthenticatedService3> mService;
NSDictionary * mMethodMap;
}
- (id) initWithAuthenticatedService3: (id <asdfAuthenticatedService3>) service;
- (id<asdfAuthenticatedService3>) service;
@end

@protocol asdfAuthenticatedService3Async <NSObject>
- (void) ping31: (asdfAuthenticationEnvelope *) envelope response: (void (^)(int32_t)) responseBlock failure : (TAsyncFailureBlock) failureBlock;
- (void) ping32: (asdfAuthenticationEnvelope *) envelope response: (void (^)(int32_t)) responseBlock failure : (TAsyncFailureBlock) failureBlock;
@end

@interface asdfAuthenticatedService3ClientAsync : TBaseClient <asdfAuthenticatedService3Async> {
id <TAsyncTransport> asyncTransport;
}
- (id) initWithProtocolFactory: (id <TProtocolFactory>) factory transport: (id <TAsyncTransport>) transport;
@end

@protocol asdfAuthenticatedService4 <NSObject>
- (int32_t) ping41: (asdfAuthenticationEnvelope *) envelope;  // throws TException
- (int32_t) ping42: (asdfAuthenticationEnvelope *) envelope;  // throws TException
@end

@interface asdfAuthenticatedService4Client : TBaseClient <asdfAuthenticatedService4> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface asdfAuthenticatedService4Processor : NSObject <TProcessor> {
id <asdfAuthenticatedService4> mService;
NSDictionary * mMethodMap;
}
- (id) initWithAuthenticatedService4: (id <asdfAuthenticatedService4>) service;
- (id<asdfAuthenticatedService4>) service;
@end

@protocol asdfAuthenticatedService4Async <NSObject>
- (void) ping41: (asdfAuthenticationEnvelope *) envelope response: (void (^)(int32_t)) responseBlock failure : (TAsyncFailureBlock) failureBlock;
- (void) ping42: (asdfAuthenticationEnvelope *) envelope response: (void (^)(int32_t)) responseBlock failure : (TAsyncFailureBlock) failureBlock;
@end

@interface asdfAuthenticatedService4ClientAsync : TBaseClient <asdfAuthenticatedService4Async> {
id <TAsyncTransport> asyncTransport;
}
- (id) initWithProtocolFactory: (id <TProtocolFactory>) factory transport: (id <TAsyncTransport>) transport;
@end

@interface asdfasdfConstants : NSObject {
}
@end
