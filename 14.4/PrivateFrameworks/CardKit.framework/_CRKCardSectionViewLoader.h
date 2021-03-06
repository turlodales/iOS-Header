//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardKit/CRKCardSectionViewSourcing-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol CRCard, _CRKCardSectionViewLoaderDelegate;

@interface _CRKCardSectionViewLoader : NSObject <CRKCardSectionViewSourcing>
{
    NSMutableDictionary *_cardSectionViewConfigurationsByCardSectionIdentifiersByProviderIdentifiers;
    NSMutableDictionary *_vetoingProviderIdentifiersByVetoedCardSectionIdentifiers;
    NSMutableSet *_identifiedCardSectionViewProviders;
    id <_CRKCardSectionViewLoaderDelegate> _delegate;
    id <CRCard> _loadedCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CRCard> loadedCard; // @synthesize loadedCard=_loadedCard;
@property(nonatomic) __weak id <_CRKCardSectionViewLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableSet *identifiedCardSectionViewProviders; // @synthesize identifiedCardSectionViewProviders=_identifiedCardSectionViewProviders;
- (id)_viewConfigurationForCardSection:(id)arg1 providerIdentifier:(id)arg2;
- (id)_allViewConfigurations;
- (_Bool)cardSectionShouldBeDisplayed:(id)arg1;
- (id)viewConfigurationForCardSection:(id)arg1;
- (void)_loadIdentifiedCardSectionViewProvidersFromCard:(id)arg1 identifiedProviders:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

