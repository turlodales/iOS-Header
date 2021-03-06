//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKSQLiteItem-Protocol.h>
#import <CloudKitDaemon/NSCopying-Protocol.h>
#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKDApplicationID : NSObject <NSSecureCoding, NSCopying, CKSQLiteItem>
{
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleIdentifierOverrideForContainerAccess;
    NSString *_applicationBundleIdentifierOverrideForNetworkAttribution;
    NSString *_applicationBundleIdentifierOverrideForPushTopicGeneration;
    NSString *_applicationBundleIdentifierOverrideForTCC;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *applicationBundleIdentifierOverrideForTCC; // @synthesize applicationBundleIdentifierOverrideForTCC=_applicationBundleIdentifierOverrideForTCC;
@property(copy, nonatomic) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration; // @synthesize applicationBundleIdentifierOverrideForPushTopicGeneration=_applicationBundleIdentifierOverrideForPushTopicGeneration;
@property(copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // @synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution;
@property(copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // @synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)sqliteRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationBundleIdentifier:(id)arg1 applicationBundleIdentifierOverrideForContainerAccess:(id)arg2 applicationBundleIdentifierOverrideForNetworkAttribution:(id)arg3 applicationBundleIdentifierOverrideForPushTopicGeneration:(id)arg4 applicationBundleIdentifierOverrideForTCC:(id)arg5;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)init;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

