//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INAddMediaIntentExport-Protocol.h>

@class INMediaDestination, INMediaSearch, INPrivateAddMediaIntentData, NSArray, NSString;

@interface INAddMediaIntent : INIntent <INAddMediaIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
@property(copy, nonatomic) INPrivateAddMediaIntentData *privateAddMediaIntentData;
- (void)setMediaDestination:(id)arg1;
@property(readonly, copy, nonatomic) INMediaDestination *mediaDestination;
- (void)setMediaSearch:(id)arg1;
@property(readonly, copy, nonatomic) INMediaSearch *mediaSearch;
- (void)setMediaItems:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *mediaItems;
- (id)initWithMediaItems:(id)arg1 mediaSearch:(id)arg2 mediaDestination:(id)arg3;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (_Bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

