//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNAlignFaceRectangleRequest : VNRequest
{
    NSArray *_inputFaceObservations;
}

+ (Class)configurationClass;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *inputFaceObservations; // @synthesize inputFaceObservations=_inputFaceObservations;
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3;
- (id)newDefaultRequestInstance;
- (id)initWithFaceObservations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFaceObservations:(id)arg1;
- (long long)dependencyProcessingOrdinality;

@end

