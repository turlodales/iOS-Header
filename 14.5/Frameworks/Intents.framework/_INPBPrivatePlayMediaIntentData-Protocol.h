//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBMediaItemValue, _INPBPrivateMediaIntentData;

@protocol _INPBPrivatePlayMediaIntentData <NSObject>
+ (Class)audioSearchResultsType;
@property(nonatomic) _Bool hasShouldSuppressCommonWholeHouseAudioRoutes;
@property(nonatomic) _Bool shouldSuppressCommonWholeHouseAudioRoutes;
@property(readonly, nonatomic) _Bool hasPrivateMediaIntentData;
@property(retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData;
@property(nonatomic) _Bool hasIsPersonalizedRequest;
@property(nonatomic) _Bool isPersonalizedRequest;
@property(nonatomic) _Bool hasIsAmbiguousPlay;
@property(nonatomic) _Bool isAmbiguousPlay;
@property(readonly, nonatomic) unsigned long long internalSignalsCount;
@property(copy, nonatomic) NSArray *internalSignals;
@property(nonatomic) _Bool hasImmediatelyStartPlayback;
@property(nonatomic) _Bool immediatelyStartPlayback;
@property(nonatomic) _Bool hasEntityConfidenceSignalsMaxItemsToDisambiguate;
@property(nonatomic) int entityConfidenceSignalsMaxItemsToDisambiguate;
@property(nonatomic) _Bool hasEntityConfidenceSignalsFrequencyDenominatorProd;
@property(nonatomic) int entityConfidenceSignalsFrequencyDenominatorProd;
@property(nonatomic) _Bool hasEntityConfidenceSignalsFrequencyDenominatorInternal;
@property(nonatomic) int entityConfidenceSignalsFrequencyDenominatorInternal;
@property(nonatomic) _Bool hasEntityConfidenceSignalsEnabled;
@property(nonatomic) _Bool entityConfidenceSignalsEnabled;
@property(readonly, nonatomic) unsigned long long audioSearchResultsCount;
@property(copy, nonatomic) NSArray *audioSearchResults;
@property(nonatomic) _Bool hasAppSelectionSignalsFrequencyDenominator;
@property(nonatomic) int appSelectionSignalsFrequencyDenominator;
@property(nonatomic) _Bool hasAppSelectionSignalsEnabled;
@property(nonatomic) _Bool appSelectionSignalsEnabled;
@property(nonatomic) _Bool hasAppSelectionEnabled;
@property(nonatomic) _Bool appSelectionEnabled;
@property(nonatomic) _Bool hasAppInferred;
@property(nonatomic) _Bool appInferred;
- (NSString *)internalSignalAtIndex:(unsigned long long)arg1;
- (void)addInternalSignal:(NSString *)arg1;
- (void)clearInternalSignals;
- (_INPBMediaItemValue *)audioSearchResultsAtIndex:(unsigned long long)arg1;
- (void)addAudioSearchResults:(_INPBMediaItemValue *)arg1;
- (void)clearAudioSearchResults;
@end

