//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/NSObject-Protocol.h>

@class AXMSourceNode, AXMVisionEngine, AXMVisionPipelineContext;

@protocol AXMServiceInterface <NSObject>
- (void)visionEngine:(AXMVisionEngine *)arg1 evaluateSource:(AXMSourceNode *)arg2 context:(AXMVisionPipelineContext *)arg3 options:(long long)arg4 result:(void (^)(AXMVisionResult *, NSError *))arg5;
- (void)prewarmVisionEngineService;
@end

