//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InAppMessages/IAMTriggerContext-Protocol.h>

@class NSSet, NSString;

@interface IAMChangedContextPropertiesTriggerContext : NSObject <IAMTriggerContext>
{
    NSString *_bundleIdentifier;
    NSSet *_contextPropertyNames;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *contextPropertyNames; // @synthesize contextPropertyNames=_contextPropertyNames;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (_Bool)satisfiesPresentationTrigger:(id)arg1;
- (id)initWithContextPropertyNames:(id)arg1 bundleIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

