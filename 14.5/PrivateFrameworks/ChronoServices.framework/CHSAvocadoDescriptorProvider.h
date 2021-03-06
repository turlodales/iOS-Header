//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChronoServices/BSDescriptionProviding-Protocol.h>
#import <ChronoServices/CHSChronoWidgetServiceClient-Protocol.h>

@class NSDictionary, NSMutableSet, NSSet, NSString;
@protocol CHSChronoWidgetServiceServer;

@interface CHSAvocadoDescriptorProvider : NSObject <CHSChronoWidgetServiceClient, BSDescriptionProviding>
{
    NSDictionary *_descriptorsByExtensionIdentifier;
    NSMutableSet *_observers;
    id <CHSChronoWidgetServiceServer> _server;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CHSChronoWidgetServiceServer> server; // @synthesize server=_server;
@property(readonly, copy, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier; // @synthesize descriptorsByExtensionIdentifier=_descriptorsByExtensionIdentifier;
- (id)_descriptionForArray:(id)arg1 name:(id)arg2;
- (void)_mainQueue_handleNewDescriptors:(id)arg1;
- (void)_sendApplicationWithBundleIdentifierEnteredForeground:(id)arg1;
- (void)avocadoDescriptorsDidChange:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)descriptorForPersonality:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *descriptors;
- (id)initWithServer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

