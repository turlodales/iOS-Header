//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NUKeyframeSequenceMatrixFloat33;

@interface PIReframeKeyframeSequence : NSObject
{
    NUKeyframeSequenceMatrixFloat33 *_homographySequence;
}

- (void).cxx_destruct;
- (id)sparseSequence;
- (CDStruct_8e0628e6)homographyAtTime:(CDStruct_1b6d18a9)arg1;
- (long long)interpolation;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithKeyframeArray:(id)arg1;

@end

