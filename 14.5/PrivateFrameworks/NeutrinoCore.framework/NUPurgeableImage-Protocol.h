//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImage-Protocol.h>

@class NURegion;

@protocol NUPurgeableImage <NUImage>
- (void)endAccessRegion:(NURegion *)arg1;
- (void)endAccess;
- (_Bool)beginAccessRegion:(NURegion *)arg1;
- (_Bool)beginAccess;
@end

