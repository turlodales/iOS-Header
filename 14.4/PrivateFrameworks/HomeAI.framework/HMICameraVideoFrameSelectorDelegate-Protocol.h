//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeAI/NSObject-Protocol.h>

@class HMICameraVideoFrame, HMICameraVideoFrameSelector, NSArray;

@protocol HMICameraVideoFrameSelectorDelegate <NSObject>

@optional
- (void)selector:(HMICameraVideoFrameSelector *)arg1 didDetectMotion:(NSArray *)arg2 atSessionPTS:(CDStruct_1b6d18a9)arg3 frameDimensions:(struct CGSize)arg4;
- (void)selector:(HMICameraVideoFrameSelector *)arg1 maySelectFrame:(HMICameraVideoFrame *)arg2;
@end

