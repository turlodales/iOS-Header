//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroup.h>

@class NSArray;

@interface CHTextLineStrokeGroup : CHStrokeGroup
{
    NSArray *_writingDirectionSortedSubstrokes;
    struct CGVector _averageWritingOrientation;
    struct CGVector _averageStrokeDeviation;
    vector_5071ab7f _localStrokeWritingOrientations;
    long long _lastSubstrokeIndexBeforeMerge;
    NSArray *_coalescedLastSubstrokes;
    NSArray *_writingDirectionSortedStrokeIdentifiers;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSArray *writingDirectionSortedStrokeIdentifiers; // @synthesize writingDirectionSortedStrokeIdentifiers=_writingDirectionSortedStrokeIdentifiers;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGPath *)newEstimatedBaselineForSubStrokes:(id)arg1 estimatedDescenderLocations:(id)arg2;
- (const struct CGPath *)newEstimatedBaselineForStrokesWithIdentifiers:(id)arg1 estimatedDescenderLocations:(id)arg2;
- (id)coalescedLastSubstrokes;
- (long long)lastSubstrokeIndexBeforeMerge;
- (struct CGVector)averageStrokeDeviation;
- (struct CGVector)averageWritingOrientation;
- (struct CGVector)localWritingOrientationAtStrokeIndex:(long long)arg1;
- (vector_5071ab7f *)localStrokeWritingOrientations;
- (id)writingDirectionSortedSubstrokes;
- (void)dealloc;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(struct CGVector)arg7 averageStrokeDeviation:(struct CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const vector_5071ab7f *)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 lastSubstrokeIndexBeforeMerge:(long long)arg13 firstStrokeOrigin:(struct CGPoint)arg14;
- (id)initWithUniqueIdentifier:(long long)arg1 ancestorIdentifier:(long long)arg2 strokeIdentifiers:(id)arg3 firstStrokeIdentifier:(id)arg4 lastStrokeIdentifier:(id)arg5 bounds:(struct CGRect)arg6 strategyIdentifier:(id)arg7 writingDirectionSortedSubstrokes:(id)arg8 averageWritingOrientation:(struct CGVector)arg9 averageStrokeDeviation:(struct CGVector)arg10 writingDirectionSortedStrokeIdentifiers:(id)arg11 localStrokeWritingOrientations:(const vector_5071ab7f *)arg12 coalescedLastSubstrokes:(id)arg13 groupingConfidence:(double)arg14 firstStrokeOrigin:(struct CGPoint)arg15;
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 strategyIdentifier:(id)arg6 writingDirectionSortedSubstrokes:(id)arg7 averageWritingOrientation:(struct CGVector)arg8 averageStrokeDeviation:(struct CGVector)arg9 writingDirectionSortedStrokeIdentifiers:(id)arg10 localStrokeWritingOrientations:(const vector_5071ab7f *)arg11 coalescedLastSubstrokes:(id)arg12 groupingConfidence:(double)arg13 firstStrokeOrigin:(struct CGPoint)arg14;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect)arg4 strategyIdentifier:(id)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(struct CGVector)arg7 averageStrokeDeviation:(struct CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const vector_5071ab7f *)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 firstStrokeOrigin:(struct CGPoint)arg13;

@end

