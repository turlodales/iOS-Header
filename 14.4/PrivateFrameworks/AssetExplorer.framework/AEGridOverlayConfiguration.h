//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AEGridOverlayConfiguration : NSObject
{
    _Bool _showVideoDecoration;
    _Bool _showCloudDecoration;
    _Bool _showLoopDecoration;
}

@property(readonly, nonatomic) _Bool showLoopDecoration; // @synthesize showLoopDecoration=_showLoopDecoration;
@property(readonly, nonatomic) _Bool showCloudDecoration; // @synthesize showCloudDecoration=_showCloudDecoration;
@property(readonly, nonatomic) _Bool showVideoDecoration; // @synthesize showVideoDecoration=_showVideoDecoration;
- (_Bool)isEqual:(id)arg1;
- (id)initWithShowCloudDecoration:(_Bool)arg1 showVideoDecoration:(_Bool)arg2 showLoopDecoration:(_Bool)arg3;

@end

