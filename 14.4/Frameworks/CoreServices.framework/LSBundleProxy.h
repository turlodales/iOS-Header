//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSResourceProxy.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, NSUUID, _LSBundleIDValidationToken, _LSLazyPropertyList;

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding>
{
    NSString *_localizedShortName;
    _Bool _foundBackingBundle;
    _Bool _containerized;
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_bundleExecutable;
    NSURL *_bundleContainerURL;
    NSString *_bundleVersion;
    NSString *_sdkVersion;
    NSString *_signerIdentity;
    NSString *_signerOrganization;
    NSUUID *_cacheGUID;
    unsigned long long _sequenceNumber;
    NSArray *_machOUUIDs;
    unsigned long long _compatibilityState;
    _LSLazyPropertyList *__infoDictionary;
    _LSLazyPropertyList *__entitlements;
    _LSLazyPropertyList *__environmentVariables;
    _LSBundleIDValidationToken *__validationToken;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)canInstantiateFromDatabase;
+ (id)bundleProxyWithAuditToken:(CDStruct_4c969caf)arg1 error:(id *)arg2;
+ (id)bundleProxyForCurrentProcess;
+ (void)clearBundleProxyForCurrentProcess;
+ (id)bundleProxyForURL:(id)arg1 error:(id *)arg2;
+ (id)bundleProxyForURL:(id)arg1;
+ (id)bundleProxyForIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setValidationToken:) _LSBundleIDValidationToken *_validationToken; // @synthesize _validationToken=__validationToken;
@property(copy, nonatomic, setter=_setEnvironmentVariables:) _LSLazyPropertyList *_environmentVariables; // @synthesize _environmentVariables=__environmentVariables;
@property(copy, nonatomic, setter=_setEntitlements:) _LSLazyPropertyList *_entitlements; // @synthesize _entitlements=__entitlements;
@property(copy, nonatomic, setter=_setInfoDictionary:) _LSLazyPropertyList *_infoDictionary; // @synthesize _infoDictionary=__infoDictionary;
@property(nonatomic, setter=_setCompatibilityState:) unsigned long long compatibilityState; // @synthesize compatibilityState=_compatibilityState;
@property(copy, nonatomic) NSArray *machOUUIDs; // @synthesize machOUUIDs=_machOUUIDs;
@property(readonly, nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) NSUUID *cacheGUID; // @synthesize cacheGUID=_cacheGUID;
@property(readonly, nonatomic) NSString *signerOrganization; // @synthesize signerOrganization=_signerOrganization;
@property(readonly, nonatomic, getter=isContainerized) _Bool containerized; // @synthesize containerized=_containerized;
@property(readonly, nonatomic) _Bool foundBackingBundle; // @synthesize foundBackingBundle=_foundBackingBundle;
@property(readonly, nonatomic) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
@property(copy, nonatomic, setter=setSDKVersion:) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, nonatomic) NSURL *bundleContainerURL; // @synthesize bundleContainerURL=_bundleContainerURL;
@property(readonly, nonatomic) NSString *bundleExecutable; // @synthesize bundleExecutable=_bundleExecutable;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_valueForEqualityTesting;
- (id)localizedValuesForKeys:(id)arg1 fromTable:(id)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectsForInfoDictionaryKeys:(id)arg1;
@property(readonly, nonatomic) NSDictionary *groupContainerURLs; // @dynamic groupContainerURLs;
- (id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (id)entitlementValuesForKeys:(id)arg1;
@property(readonly, nonatomic) NSDictionary *entitlements;
@property(readonly, nonatomic) NSDictionary *environmentVariables; // @dynamic environmentVariables;
@property(readonly, nonatomic) NSURL *appStoreReceiptURL; // @dynamic appStoreReceiptURL;
- (id)appStoreReceiptName;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @dynamic dataContainerURL;
- (_Bool)_hasAssociatedPersonas;
- (_Bool)_usesSystemPersona;
- (id)_managedPersonas;
@property(readonly, nonatomic) NSURL *containerURL;
@property(readonly, nonatomic) NSString *canonicalExecutablePath;
@property(readonly, nonatomic) NSString *bundleType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithBundleUnit:(unsigned int)arg1 context:(struct LSContext *)arg2 bundleType:(unsigned long long)arg3 bundleID:(id)arg4 localizedName:(id)arg5 bundleContainerURL:(id)arg6 dataContainerURL:(id)arg7 resourcesDirectoryURL:(id)arg8 iconsDictionary:(id)arg9 iconFileNames:(id)arg10 version:(id)arg11;
- (id)localizedName;
- (id)localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(_Bool)arg2;
@property(readonly, nonatomic) NSString *localizedShortName;
- (id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(_Bool)arg2;

// Remaining properties
@property(readonly, nonatomic) _Bool UPPValidated; // @dynamic UPPValidated;
@property(readonly, nonatomic) _Bool freeProfileValidated; // @dynamic freeProfileValidated;
@property(readonly, nonatomic) _Bool profileValidated; // @dynamic profileValidated;

@end

