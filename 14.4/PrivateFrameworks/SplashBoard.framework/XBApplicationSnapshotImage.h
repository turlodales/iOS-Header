//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class XBApplicationSnapshot;

@interface XBApplicationSnapshotImage : UIImage
{
    XBApplicationSnapshot *_snapshot;
    long long _interfaceOrientation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (id)description;
- (void)dealloc;
- (id)initWithSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;

@end

