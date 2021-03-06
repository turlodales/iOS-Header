//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>
#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHStrokeClassificationResult, CHStrokeClutterFilter, CHStrokeGroupingResult, NSArray, NSData, NSDictionary, NSString;
@protocol CHStrokeProviderVersion;

@interface CHRecognitionSessionResult : NSObject <NSCopying, NSSecureCoding>
{
    long long __transcriptionCapability;
    NSData *_encodedStrokeProviderVersion;
    _Bool __shouldUseCachedHasCompleteRecognitionResults;
    _Bool __hasCompleteRecognitionResults;
    id <CHStrokeProviderVersion> _strokeProviderVersion;
    NSArray *_orderedStrokeIdentifiers;
    long long _sessionMode;
    NSArray *_locales;
    NSArray *_preferredLocales;
    CHStrokeClutterFilter *_clutterFilter;
    long long _recognitionEnvironment;
    CHStrokeClassificationResult *_strokeClassificationResult;
    CHStrokeGroupingResult *_strokeGroupingResult;
    NSDictionary *__recognitionResultsByGroupID;
    NSDictionary *__textCorrectionResultsByGroupID;
    CDStruct_76929b14 _generationDuration;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *_textCorrectionResultsByGroupID; // @synthesize _textCorrectionResultsByGroupID=__textCorrectionResultsByGroupID;
@property(readonly, copy, nonatomic) NSDictionary *_recognitionResultsByGroupID; // @synthesize _recognitionResultsByGroupID=__recognitionResultsByGroupID;
@property(readonly, nonatomic) CDStruct_76929b14 generationDuration; // @synthesize generationDuration=_generationDuration;
@property(readonly, retain, nonatomic) CHStrokeGroupingResult *strokeGroupingResult; // @synthesize strokeGroupingResult=_strokeGroupingResult;
@property(readonly, retain, nonatomic) CHStrokeClassificationResult *strokeClassificationResult; // @synthesize strokeClassificationResult=_strokeClassificationResult;
@property(readonly, nonatomic) long long recognitionEnvironment; // @synthesize recognitionEnvironment=_recognitionEnvironment;
@property(readonly, retain, nonatomic) CHStrokeClutterFilter *clutterFilter; // @synthesize clutterFilter=_clutterFilter;
@property(readonly, copy, nonatomic) NSArray *preferredLocales; // @synthesize preferredLocales=_preferredLocales;
@property(readonly, copy, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(readonly, nonatomic) long long sessionMode; // @synthesize sessionMode=_sessionMode;
@property(readonly, retain, nonatomic) NSArray *orderedStrokeIdentifiers; // @synthesize orderedStrokeIdentifiers=_orderedStrokeIdentifiers;
@property(readonly, retain, nonatomic) id <CHStrokeProviderVersion> strokeProviderVersion; // @synthesize strokeProviderVersion=_strokeProviderVersion;
- (_Bool)hasCompleteRecognitionResults;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToRecognitionSessionResult:(id)arg1;
- (_Bool)isEqualToSerializableRecognitionSessionResult:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedStrokeProviderVersion;
- (id)contextualResultsWithFullyCoveredStrokeGroups:(id)arg1 partiallyCoveredStrokeGroups:(id)arg2 drawingCanvasSize:(struct CGSize)arg3;
- (id)fullyCoveredStrokeGroupsForContextStrokes:(id)arg1 partiallyCoveredStrokeGroups:(id *)arg2;
- (id)textCorrectionResultForStrokeGroupIdentifier:(long long)arg1;
- (id)recognitionResultForStrokeGroupIdentifier:(long long)arg1;
- (id)_resultsDebugDescriptionIntoGroupsArray:(id)arg1 groupHeaderBlock:(CDUnknownBlockType)arg2;
- (id)allResultsDebugDescriptionWithGroupHeaderBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *allResultsDebugDescriptionByGroup;
@property(readonly, nonatomic) NSString *allResultsDebugDescription;
@property(readonly, nonatomic) NSString *highConfidenceDebugDescription;
@property(readonly, nonatomic) long long _transcriptionCapability;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithResult:(id)arg1 validStrokes:(id)arg2;
- (id)initWithStrokeProviderVersion:(id)arg1 encodedStrokeProviderVersion:(id)arg2 orderedStrokeIdentifiers:(id)arg3 sessionMode:(long long)arg4 locales:(id)arg5 preferredLocales:(id)arg6 clutterFilter:(id)arg7 strokeClassificationResult:(id)arg8 strokeGroupingResult:(id)arg9 recognitionResults:(id)arg10 inlineContinuousModeResults:(id)arg11 generationDuration:(CDStruct_76929b14)arg12 recognitionEnvironment:(long long)arg13;
- (id)init;

@end

