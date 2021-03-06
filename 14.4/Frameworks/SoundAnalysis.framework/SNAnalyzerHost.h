//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNProcessing-Protocol.h>

@class NSString;
@protocol SNAnalyzing, SNTimeConverting;

__attribute__((visibility("hidden")))
@interface SNAnalyzerHost : NSObject <SNProcessing>
{
    id <SNAnalyzing> _analyzer;
    id <SNTimeConverting> _timeConverter;
    CDUnknownBlockType _resultsHandler;
    CDUnknownBlockType _completionHandler;
    long long _requestState;
}

+ (CDStruct_e83c9415)convertTimeRange:(CDStruct_e83c9415)arg1 fromBox:(struct Box *)arg2 usingConverter:(id)arg3;
+ (CDStruct_1b6d18a9)convertTime:(CDStruct_1b6d18a9)arg1 fromBox:(struct Box *)arg2 usingConverter:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long requestState; // @synthesize requestState=_requestState;
- (void)primeAnalyzerGraph;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
@property(readonly, nonatomic) id sharedProcessorConfiguration;
- (void)requestDidReturnError:(id)arg1;
- (id)clientResultsFromProcessorResults:(id)arg1;
- (void)handleAnalyzerError:(id)arg1;
- (void)handleAnalyzerCompletion;
- (void)handleDSPGraphPostRenderCallbackFromBox:(struct Box *)arg1 numFrames:(int)arg2;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithAnalyzer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 timeConverter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

