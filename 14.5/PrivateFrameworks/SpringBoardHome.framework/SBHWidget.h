//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/CHSWidgetPersonality-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>
#import <SpringBoardHome/NSSecureCoding-Protocol.h>
#import <SpringBoardHome/SBLeafIconDataSource-Protocol.h>

@class NSString;

@interface SBHWidget : NSObject <CHSWidgetPersonality, SBLeafIconDataSource, NSCopying, NSSecureCoding, BSDescriptionProviding>
{
    NSString *_containerBundleIdentifier;
    NSString *_displayName;
    _Bool _suggestion;
    NSString *_uniqueIdentifier;
    NSString *_kind;
    NSString *_extensionBundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isSuggestion) _Bool suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // @synthesize extensionBundleIdentifier=_extensionBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
- (_Bool)iconSupportsConfiguration:(id)arg1;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (unsigned long long)priorityForIcon:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)matchesPersonality:(id)arg1;
@property(readonly, copy, nonatomic) NSString *containerBundleIdentifier;
- (void)resetDisplayName;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)initWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2;
- (id)initWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2 containerBundleIdentifier:(id)arg3;
- (id)initWithUniqueIdentifier:(id)arg1 kind:(id)arg2 extensionBundleIdentifier:(id)arg3 containerBundleIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

