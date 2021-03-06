//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSDictionary, NSString;
@protocol PKPlugIn;

@interface NSExtension : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)globalStateQueueForExtension:(id)arg1;
+ (_Bool)_shouldLogExtensionDiscovery;
+ (void)extensionWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)extensionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(_Bool)arg2 error:(id *)arg3;
+ (id)extensionWithIdentifier:(id)arg1 error:(id *)arg2;
+ (void)endMatchingExtensions:(id)arg1;
+ (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)extensionsWithMatchingAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)extensionsWithMatchingAttributes:(id)arg1 error:(id *)arg2;
+ (_Bool)_evaluateActivationRuleWithoutWorkarounds:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (id)predicateForActivationRule:(id)arg1;
+ (_Bool)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (void)initializeFiltering;
- (void)_dropAssertion;
- (void)_hostDidBecomeActiveNote:(id)arg1;
- (void)_hostWillResignActiveNote:(id)arg1;
- (void)_hostDidEnterBackgroundNote:(id)arg1;
- (void)_hostWillEnterForegroundNote:(id)arg1;
- (void)_kill:(int)arg1;
- (_Bool)_isPhotoServiceAccessGranted;
- (void)_safelyEndUsing:(CDUnknownBlockType)arg1;
- (void)_safelyBeginUsing:(CDUnknownBlockType)arg1;
- (int)pidForRequestIdentifier:(id)arg1;
- (id)_extensionContextForUUID:(id)arg1;
- (void)_setAllowedErrorClasses:(id)arg1;
- (_Bool)attemptOptOut:(id *)arg1;
- (_Bool)attemptOptIn:(id *)arg1;
- (void)cancelExtensionRequestWithIdentifier:(id)arg1;
- (id)beginExtensionRequestWithInputItems:(id)arg1 error:(id *)arg2;
- (void)beginExtensionRequestWithInputItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 error:(id *)arg3;
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)_initWithPKPlugin:(id)arg1;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, retain, nonatomic) NSBundle *_extensionBundle; // @dynamic _extensionBundle;
@property(readonly, copy, nonatomic) NSString *_localizedName; // @dynamic _localizedName;
@property(readonly, copy, nonatomic) NSString *_localizedShortName; // @dynamic _localizedShortName;
@property(retain, nonatomic, setter=_setPlugIn:) id <PKPlugIn> _plugIn; // @dynamic _plugIn;
@property(copy, nonatomic) CDUnknownBlockType _requestPostCompletionBlock; // @dynamic _requestPostCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType _requestPostCompletionBlockWithItems; // @dynamic _requestPostCompletionBlockWithItems;
@property(readonly) _Bool _wantsProcessPerRequest; // @dynamic _wantsProcessPerRequest;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @dynamic attributes;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier; // @dynamic extensionPointIdentifier;
@property(readonly, copy, nonatomic) NSArray *icons; // @dynamic icons;
@property(readonly, copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, copy, nonatomic) NSDictionary *infoDictionary; // @dynamic infoDictionary;
@property(readonly, nonatomic) _Bool optedIn; // @dynamic optedIn;
@property(copy, nonatomic) CDUnknownBlockType requestCancellationBlock; // @dynamic requestCancellationBlock;
@property(copy, nonatomic) CDUnknownBlockType requestCompletionBlock; // @dynamic requestCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType requestInterruptionBlock; // @dynamic requestInterruptionBlock;
@property(readonly, copy, nonatomic) NSString *version; // @dynamic version;

@end

