//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMPanoramaView;

@protocol CAMPanoramaViewDelegate <NSObject>
- (void)panoramaView:(CAMPanoramaView *)arg1 didUpdateInstruction:(long long)arg2;
- (void)panoramaViewDidRequestSynchronizedDirectionChange:(CAMPanoramaView *)arg1 toDirection:(long long)arg2;
@end

