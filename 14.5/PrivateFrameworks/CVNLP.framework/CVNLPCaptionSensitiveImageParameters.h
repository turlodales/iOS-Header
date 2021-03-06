//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CVNLPCaptionSensitiveImageParameters : NSObject
{
    NSString *_visionIdentifier;
    double _minConfidence;
    NSArray *_blockingTokens;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *blockingTokens; // @synthesize blockingTokens=_blockingTokens;
@property(readonly, nonatomic) double minConfidence; // @synthesize minConfidence=_minConfidence;
@property(readonly, nonatomic) NSString *visionIdentifier; // @synthesize visionIdentifier=_visionIdentifier;
- (id)initWithVisionIdentifier:(id)arg1 minConfidence:(double)arg2 commonBlockingTokens:(id)arg3 categoryBlockingTokens:(id)arg4 categoryBlockingTokensAnnex:(id)arg5;

@end

