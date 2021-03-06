//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPSpotlightUsagePropensity-Protocol.h>

@class NSData, NSString, _CPEngagementShareRatio, _CPEngagementTriggerRatio;

@interface _CPSpotlightUsagePropensity : PBCodable <_CPSpotlightUsagePropensity, NSSecureCoding>
{
    float _appLaunch;
    float _onDeviceAddressBookData;
    float _onDeviceOtherPersonalData;
    float _punchout;
    float _thirdPartyInAppContent;
    float _parsec;
    float _querySuggestion;
    float _other;
    int _totalEngagements;
    float _siriSuggestions;
    float _parsecWeb;
    float _parsecAppStore;
    float _parsecMaps;
    float _parsecWiki;
    float _parsecNews;
    float _parsecStocks;
    float _parsecWeather;
    float _parsecOther;
    float _webSuggestions;
    int _totalTopHitEngagements;
    _CPEngagementTriggerRatio *_topHitTriggerRatio;
    _CPEngagementTriggerRatio *_querySuggestionTriggerRatio;
    _CPEngagementShareRatio *_engagementShareRatio;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _CPEngagementShareRatio *engagementShareRatio; // @synthesize engagementShareRatio=_engagementShareRatio;
@property(nonatomic) int totalTopHitEngagements; // @synthesize totalTopHitEngagements=_totalTopHitEngagements;
@property(retain, nonatomic) _CPEngagementTriggerRatio *querySuggestionTriggerRatio; // @synthesize querySuggestionTriggerRatio=_querySuggestionTriggerRatio;
@property(retain, nonatomic) _CPEngagementTriggerRatio *topHitTriggerRatio; // @synthesize topHitTriggerRatio=_topHitTriggerRatio;
@property(nonatomic) float webSuggestions; // @synthesize webSuggestions=_webSuggestions;
@property(nonatomic) float parsecOther; // @synthesize parsecOther=_parsecOther;
@property(nonatomic) float parsecWeather; // @synthesize parsecWeather=_parsecWeather;
@property(nonatomic) float parsecStocks; // @synthesize parsecStocks=_parsecStocks;
@property(nonatomic) float parsecNews; // @synthesize parsecNews=_parsecNews;
@property(nonatomic) float parsecWiki; // @synthesize parsecWiki=_parsecWiki;
@property(nonatomic) float parsecMaps; // @synthesize parsecMaps=_parsecMaps;
@property(nonatomic) float parsecAppStore; // @synthesize parsecAppStore=_parsecAppStore;
@property(nonatomic) float parsecWeb; // @synthesize parsecWeb=_parsecWeb;
@property(nonatomic) float siriSuggestions; // @synthesize siriSuggestions=_siriSuggestions;
@property(nonatomic) int totalEngagements; // @synthesize totalEngagements=_totalEngagements;
@property(nonatomic) float other; // @synthesize other=_other;
@property(nonatomic) float querySuggestion; // @synthesize querySuggestion=_querySuggestion;
@property(nonatomic) float parsec; // @synthesize parsec=_parsec;
@property(nonatomic) float thirdPartyInAppContent; // @synthesize thirdPartyInAppContent=_thirdPartyInAppContent;
@property(nonatomic) float punchout; // @synthesize punchout=_punchout;
@property(nonatomic) float onDeviceOtherPersonalData; // @synthesize onDeviceOtherPersonalData=_onDeviceOtherPersonalData;
@property(nonatomic) float onDeviceAddressBookData; // @synthesize onDeviceAddressBookData=_onDeviceAddressBookData;
@property(nonatomic) float appLaunch; // @synthesize appLaunch=_appLaunch;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

