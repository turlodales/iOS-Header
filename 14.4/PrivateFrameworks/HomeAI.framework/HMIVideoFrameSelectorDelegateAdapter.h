//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIVideoFrameSelectorDelegate-Protocol.h>

@interface HMIVideoFrameSelectorDelegateAdapter : HMFObject <HMIVideoFrameSelectorDelegate>
{
    CDUnknownBlockType _frameSelectorDidSelectFrame;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType frameSelectorDidSelectFrame; // @synthesize frameSelectorDidSelectFrame=_frameSelectorDidSelectFrame;
- (void)frameSelector:(id)arg1 didSelectFrame:(struct opaqueCMSampleBuffer *)arg2 detections:(id)arg3;

@end

